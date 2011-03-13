// File:        NCollection_BaseList.cxx
// Created:     Tue Apr 23 09:16:44 2002
// Author:      Alexander KARTOMIN (akm)
//              <a-kartomin@opencascade.com>
// Purpose:     Implementation of the BaseList class

#include <NCollection_BaseList.hxx>

//=======================================================================
//function : PClear
//purpose  : Deletes all nodes from the list
//=======================================================================

void NCollection_BaseList::PClear 
  (NCollection_DelListNode fDel,
   Handle(NCollection_BaseAllocator)& theAllocator)
{ 
  NCollection_ListNode* pCur  = myFirst;
  NCollection_ListNode* pNext = NULL;
  while(pCur) 
  {
    pNext = pCur->Next();
    fDel (pCur,theAllocator);
    pCur = pNext;
  }
  myLength = 0;
  myFirst = myLast = NULL;
}

//=======================================================================
//function : PAppend
//purpose  : Appends one item at the end
//=======================================================================

void NCollection_BaseList::PAppend (NCollection_ListNode* theNode)
{ 
  if (myLength) 
    myLast->Next() = theNode;
  else 
    myFirst = theNode;
  theNode->Next() = NULL;
  myLast = theNode;
  myLength++;
}

//=======================================================================
//function : PAppend
//purpose  : Appends another list at the end
//=======================================================================

void NCollection_BaseList::PAppend (NCollection_BaseList& theOther)
{ 
  if (this == &theOther || theOther.IsEmpty()) 
    return;
  
  if (IsEmpty())
    myFirst = theOther.myFirst;
  else
    myLast->Next() = theOther.myFirst;
  myLast = theOther.myLast;
  theOther.myFirst = theOther.myLast = NULL;

  myLength += theOther.myLength;
  theOther.myLength = 0;
}

//=======================================================================
//function : PPrepend
//purpose  : Prepends one item at the beginning
//=======================================================================

void NCollection_BaseList::PPrepend (NCollection_ListNode* theNode)
{ 
  theNode->Next() = myFirst;
  myFirst = theNode;
  if (myLast==NULL)
    myLast = myFirst;
  myLength++;
}

//=======================================================================
//function : PPrepend
//purpose  : 
//=======================================================================

void NCollection_BaseList::PPrepend (NCollection_BaseList& theOther)
{ 
  if (this == &theOther || theOther.IsEmpty()) 
    return;
  
  theOther.myLast->Next() = myFirst;
  myFirst = theOther.myFirst;
  theOther.myFirst = theOther.myLast = NULL;

  myLength += theOther.myLength;
  theOther.myLength = 0;
}

//=======================================================================
//function : PRemoveFirst
//purpose  : 
//=======================================================================

void NCollection_BaseList::PRemoveFirst 
  (NCollection_DelListNode fDel,
   Handle(NCollection_BaseAllocator)& theAllocator) 
{
  Standard_NoSuchObject_Raise_if(IsEmpty(),
                                 "NCollection_BaseList::PRemoveFirst");
  NCollection_ListNode* pItem = myFirst;
  myFirst = pItem->Next();
  fDel (pItem, theAllocator);
  myLength--;
  if (myLength == 0) 
    myLast = NULL;
}

//=======================================================================
//function : PRemove
//purpose  : 
//=======================================================================

void NCollection_BaseList::PRemove 
  (Iterator& theIter, 
   NCollection_DelListNode fDel,
   Handle(NCollection_BaseAllocator)& theAllocator) 
{
  Standard_NoSuchObject_Raise_if(!theIter.More(),
                                 "NCollection_BaseList::PRemove");
  if (theIter.myPrevious == NULL) 
  {
    PRemoveFirst (fDel,theAllocator);
    theIter.myCurrent = myFirst;
  }
  else 
  {
    NCollection_ListNode* pNode = (theIter.myCurrent)->Next();
    (theIter.myPrevious)->Next() = pNode;
    fDel (theIter.myCurrent,theAllocator);
    theIter.myCurrent = pNode;
    if (pNode == NULL) 
      myLast = theIter.myPrevious;
    myLength--;
  }
}

//=======================================================================
//function : PInsertBefore
//purpose  : 
//=======================================================================

void NCollection_BaseList::PInsertBefore (NCollection_ListNode* theNode,
                                          Iterator& theIter)
{
  Standard_NoSuchObject_Raise_if(!theIter.More(),
                                 "NCollection_BaseList::PInsertBefore");
  if (theIter.myPrevious == NULL) 
  {
    PPrepend(theNode);
    theIter.myPrevious = myFirst;
  }
  else 
  {
    (theIter.myPrevious)->Next() = theNode;
    theNode->Next() = theIter.myCurrent;
    theIter.myPrevious = theNode;
    myLength++;
  }
}

//=======================================================================
//function : PInsertBefore
//purpose  : 
//=======================================================================

void NCollection_BaseList::PInsertBefore (NCollection_BaseList& theOther,
                                          Iterator& theIter)
{
  Standard_NoSuchObject_Raise_if(!theIter.More(),
                                 "NCollection_BaseList::PInsertBefore");
  if (theIter.myPrevious == NULL) 
  {
    theIter.myPrevious = theOther.myLast;
    PPrepend(theOther);
  }
  else if (!theOther.IsEmpty())
  {
    myLength += theOther.myLength;
    (theIter.myPrevious)->Next() = theOther.myFirst;
    (theOther.myLast)->Next() = theIter.myCurrent;
    theIter.myPrevious = theOther.myLast;
    theOther.myLast = theOther.myFirst = NULL;
    theOther.myLength = 0;
  }
}

//=======================================================================
//function : PInsertAfter
//purpose  : 
//=======================================================================

void NCollection_BaseList::PInsertAfter (NCollection_ListNode* theNode,
                                         Iterator& theIter)
{
  Standard_NoSuchObject_Raise_if(!theIter.More(),
                                 "NCollection_BaseList::PInsertAfter");
  if (theIter.myCurrent == myLast)
  {
    PAppend(theNode);
  }
  else
  {
    theNode->Next() = (theIter.myCurrent)->Next();
    (theIter.myCurrent)->Next() = theNode;
    myLength++;
  }
}

//=======================================================================
//function : PInsertAfter
//purpose  : 
//=======================================================================

void NCollection_BaseList::PInsertAfter(NCollection_BaseList& theOther,
                                        Iterator& theIter)
{
  Standard_NoSuchObject_Raise_if(!theIter.More(),
                                 "NCollection_BaseList::PInsertAfter");
  if (theIter.myCurrent == myLast)
  {
    PAppend(theOther);
  }
  else if (!theOther.IsEmpty())
  {
    myLength += theOther.myLength;
    (theOther.myLast)->Next() = (theIter.myCurrent)->Next();
    (theIter.myCurrent)->Next() = theOther.myFirst;
    theOther.myLast = theOther.myFirst = NULL;
    theOther.myLength = 0;
  }
}

//=======================================================================
//function : PReverse
//purpose  : reverse the list
//=======================================================================

void NCollection_BaseList::PReverse ()
{
  if (myLength > 1) {
    NCollection_ListNode * aHead = myFirst->Next();
    NCollection_ListNode * aNeck = myFirst;
    aNeck->Next() = NULL;
    while (aHead) {
      NCollection_ListNode * aTmp = aHead->Next();
      aHead->Next() = aNeck;
      aNeck = aHead;
      aHead = aTmp;
    }
    myLast  = myFirst;
    myFirst = aNeck;
  }
}


#include <RWStepRepr_RWGlobalUnitAssignedContext.ixx>
#include <StepBasic_HArray1OfNamedUnit.hxx>
#include <StepBasic_NamedUnit.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepRepr_GlobalUnitAssignedContext.hxx>


RWStepRepr_RWGlobalUnitAssignedContext::RWStepRepr_RWGlobalUnitAssignedContext () {}

void RWStepRepr_RWGlobalUnitAssignedContext::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepRepr_GlobalUnitAssignedContext)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,3,ach,"global_unit_assigned_context")) return;

	// --- inherited field : contextIdentifier ---

	Handle(TCollection_HAsciiString) aContextIdentifier;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"context_identifier",ach,aContextIdentifier);

	// --- inherited field : contextType ---

	Handle(TCollection_HAsciiString) aContextType;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	data->ReadString (num,2,"context_type",ach,aContextType);

	// --- own field : units ---

	Handle(StepBasic_HArray1OfNamedUnit) aUnits;
	Handle(StepBasic_NamedUnit) anent3;
	Standard_Integer nsub3;
	if (data->ReadSubList (num,3,"units",ach,nsub3)) {
	  Standard_Integer nb3 = data->NbParams(nsub3);
	  aUnits = new StepBasic_HArray1OfNamedUnit (1, nb3);
	  for (Standard_Integer i3 = 1; i3 <= nb3; i3 ++) {
	    //szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	    if (data->ReadEntity (nsub3, i3,"unit", ach, STANDARD_TYPE(StepBasic_NamedUnit), anent3))
	      aUnits->SetValue(i3, anent3);
	  }
	}

	//--- Initialisation of the read entity ---


	ent->Init(aContextIdentifier, aContextType, aUnits);
}


void RWStepRepr_RWGlobalUnitAssignedContext::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepRepr_GlobalUnitAssignedContext)& ent) const
{

	// --- inherited field contextIdentifier ---

	SW.Send(ent->ContextIdentifier());

	// --- inherited field contextType ---

	SW.Send(ent->ContextType());

	// --- own field : units ---

	SW.OpenSub();
	for (Standard_Integer i3 = 1;  i3 <= ent->NbUnits();  i3 ++) {
	  SW.Send(ent->UnitsValue(i3));
	}
	SW.CloseSub();
}


void RWStepRepr_RWGlobalUnitAssignedContext::Share(const Handle(StepRepr_GlobalUnitAssignedContext)& ent, Interface_EntityIterator& iter) const
{

	Standard_Integer nbElem1 = ent->NbUnits();
	for (Standard_Integer is1=1; is1<=nbElem1; is1 ++) {
	  iter.GetOneItem(ent->UnitsValue(is1));
	}

}


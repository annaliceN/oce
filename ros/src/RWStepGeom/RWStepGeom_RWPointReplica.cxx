
#include <RWStepGeom_RWPointReplica.ixx>
#include <StepGeom_Point.hxx>
#include <StepGeom_CartesianTransformationOperator.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepGeom_PointReplica.hxx>


RWStepGeom_RWPointReplica::RWStepGeom_RWPointReplica () {}

void RWStepGeom_RWPointReplica::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepGeom_PointReplica)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,3,ach,"point_replica")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- own field : parentPt ---

	Handle(StepGeom_Point) aParentPt;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	data->ReadEntity(num, 2,"parent_pt", ach, STANDARD_TYPE(StepGeom_Point), aParentPt);

	// --- own field : transformation ---

	Handle(StepGeom_CartesianTransformationOperator) aTransformation;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	data->ReadEntity(num, 3,"transformation", ach, STANDARD_TYPE(StepGeom_CartesianTransformationOperator), aTransformation);

	//--- Initialisation of the read entity ---


	ent->Init(aName, aParentPt, aTransformation);
}


void RWStepGeom_RWPointReplica::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepGeom_PointReplica)& ent) const
{

	// --- inherited field name ---

	SW.Send(ent->Name());

	// --- own field : parentPt ---

	SW.Send(ent->ParentPt());

	// --- own field : transformation ---

	SW.Send(ent->Transformation());
}


void RWStepGeom_RWPointReplica::Share(const Handle(StepGeom_PointReplica)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->ParentPt());


	iter.GetOneItem(ent->Transformation());
}


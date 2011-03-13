// File:	IntCurve_IntConicConic_1.hxx
// Created:	Wed May  6 16:13:16 1992
// Author:	Laurent BUCHARD
//		<lbr@topsn3>


#ifndef IntCurve_IntConicConic_1_HeaderFile
#define IntCurve_IntConicConic_1_HeaderFile

#include <IntCurve_IntConicConic_Tool.hxx>


//======================================================================
//===   I n t e r s e c t i o n    C e r c l e    C e r c l e      =====
//======================================================================

//----------------------------------------------------------------------
void CircleCircleGeometricIntersection(const gp_Circ2d& C1
				       ,const gp_Circ2d& C2
				       ,const Standard_Real Tol
				       ,PeriodicInterval& C1_Res1
				       ,PeriodicInterval& C1_Res2
				       ,Standard_Integer& nbsol);
//----------------------------------------------------------------------
void CircleCircleDomainIntersection(const gp_Circ2d& C1
				    ,const gp_Circ2d& C2
				    ,const Standard_Real Tol
				    ,PeriodicInterval& Res1
				    ,PeriodicInterval& C1_Res2
				    ,Standard_Integer& nbsol);
//----------------------------------------------------------------------
void ProjectOnC2AndIntersectWithC2Domain(const gp_Circ2d& Circle1
					 ,const gp_Circ2d& Circle2
					 ,PeriodicInterval& C1DomainAndRes
					 ,PeriodicInterval& C2Domain
					 ,PeriodicInterval* SolutionC1
					 ,PeriodicInterval* SolutionC2
					 ,Standard_Integer &NbSolTotal
					 ,const Standard_Boolean IdentCircles);



//======================================================================
//===   I n t e r s e c t i o n    L i g n e      C e r c l e      =====
//======================================================================
void LineCircleGeometricIntersection(const gp_Lin2d& Line
				     ,const gp_Circ2d& Circle
				     ,const Standard_Real Tol
				     ,PeriodicInterval& C1Int
				     ,PeriodicInterval& C2Int
				     ,Standard_Integer& nbsol);


void ProjectOnLAndIntersectWithLDomain(const gp_Circ2d& Circle
				       ,const gp_Lin2d& Line
				       ,PeriodicInterval& CDomainAndRes
				       ,Interval& LDomain
				       ,PeriodicInterval* CircleSolution
				       ,Interval* LineSolution
				       ,Standard_Integer &NbSolTotal);


//======================================================================
//===   I n t e r s e c t i o n    L i g n e      L i g n e        =====
//======================================================================

void DomainIntersection(const IntRes2d_Domain& Domain
			,const Standard_Real U1inf
			,const Standard_Real U1sup
			,Standard_Real& Res1inf
			,Standard_Real& Res1sup);

void LineLineGeometricIntersection(const gp_Lin2d& L1
				   ,const gp_Lin2d& L2
				   ,const Standard_Real Tol
				   ,Standard_Real& U1
				   ,Standard_Real& U2
				   ,Standard_Real& SinDemiAngle
				   ,Standard_Integer& nbsol);


#endif

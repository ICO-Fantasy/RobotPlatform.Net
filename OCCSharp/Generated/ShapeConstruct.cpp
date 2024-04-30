// Generated wrapper code for package ShapeConstruct

#include "OcctPCH.h"
#include "ShapeConstruct.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "GeomAbs.h"
#include "Geom2d.h"
#include "TopTools.h"
#include "TopoDS.h"
#include "TopAbs.h"
#include "gp.h"
#include "TColStd.h"
#include "TColgp.h"
#include "Message.h"
#include "ShapeAnalysis.h"


//---------------------------------------------------------------------
//  Class  ShapeConstruct
//---------------------------------------------------------------------

RDC::OCC::ShapeConstruct::ShapeConstruct()
	: RDC::OCC::BaseClass<::ShapeConstruct>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeConstruct();
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::ShapeConstruct::ConvertCurveToBSpline(RDC::OCC::Geom_Curve^ C3D, double First, double Last, double Tol3d, RDC::OCC::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree)
{
	Handle(::Geom_BSplineCurve) _result = ::ShapeConstruct::ConvertCurveToBSpline(Handle(::Geom_Curve)(C3D->NativeInstance), First, Last, Tol3d, (::GeomAbs_Shape)Continuity, MaxSegments, MaxDegree);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::ShapeConstruct::ConvertCurveToBSpline(RDC::OCC::Geom2d_Curve^ C2D, double First, double Last, double Tol2d, RDC::OCC::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree)
{
	Handle(::Geom2d_BSplineCurve) _result = ::ShapeConstruct::ConvertCurveToBSpline(Handle(::Geom2d_Curve)(C2D->NativeInstance), First, Last, Tol2d, (::GeomAbs_Shape)Continuity, MaxSegments, MaxDegree);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::ShapeConstruct::ConvertSurfaceToBSpline(RDC::OCC::Geom_Surface^ surf, double UF, double UL, double VF, double VL, double Tol3d, RDC::OCC::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree)
{
	Handle(::Geom_BSplineSurface) _result = ::ShapeConstruct::ConvertSurfaceToBSpline(Handle(::Geom_Surface)(surf->NativeInstance), UF, UL, VF, VL, Tol3d, (::GeomAbs_Shape)Continuity, MaxSegments, MaxDegree);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

bool RDC::OCC::ShapeConstruct::JoinPCurves(RDC::OCC::TopTools_HSequenceOfShape^ theEdges, RDC::OCC::TopoDS_Face^ theFace, RDC::OCC::TopoDS_Edge^ theEdge)
{
	bool _result = ::ShapeConstruct::JoinPCurves(Handle(::TopTools_HSequenceOfShape)(theEdges->NativeInstance), *(::TopoDS_Face*)theFace->NativeInstance, *(::TopoDS_Edge*)theEdge->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeConstruct::JoinCurves(RDC::OCC::Geom_Curve^ c3d1, RDC::OCC::Geom_Curve^ ac3d2, RDC::OCC::TopAbs_Orientation Orient1, RDC::OCC::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, RDC::OCC::Geom_Curve^ c3dOut, bool% isRev1, bool% isRev2)
{
	pin_ptr<double> pp_first1 = &first1;
	pin_ptr<double> pp_last1 = &last1;
	pin_ptr<double> pp_first2 = &first2;
	pin_ptr<double> pp_last2 = &last2;
	Handle(::Geom_Curve) h_c3dOut = c3dOut->NativeInstance;
	pin_ptr<bool> pp_isRev1 = &isRev1;
	pin_ptr<bool> pp_isRev2 = &isRev2;
	bool _result = ::ShapeConstruct::JoinCurves(Handle(::Geom_Curve)(c3d1->NativeInstance), Handle(::Geom_Curve)(ac3d2->NativeInstance), (::TopAbs_Orientation)Orient1, (::TopAbs_Orientation)Orient2, *(double*)pp_first1, *(double*)pp_last1, *(double*)pp_first2, *(double*)pp_last2, h_c3dOut, *(bool*)pp_isRev1, *(bool*)pp_isRev2);
	c3dOut->NativeInstance = h_c3dOut.get();
	return _result;
}

bool RDC::OCC::ShapeConstruct::JoinCurves(RDC::OCC::Geom2d_Curve^ c2d1, RDC::OCC::Geom2d_Curve^ ac2d2, RDC::OCC::TopAbs_Orientation Orient1, RDC::OCC::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, RDC::OCC::Geom2d_Curve^ c2dOut, bool% isRev1, bool% isRev2, bool isError)
{
	pin_ptr<double> pp_first1 = &first1;
	pin_ptr<double> pp_last1 = &last1;
	pin_ptr<double> pp_first2 = &first2;
	pin_ptr<double> pp_last2 = &last2;
	Handle(::Geom2d_Curve) h_c2dOut = c2dOut->NativeInstance;
	pin_ptr<bool> pp_isRev1 = &isRev1;
	pin_ptr<bool> pp_isRev2 = &isRev2;
	bool _result = ::ShapeConstruct::JoinCurves(Handle(::Geom2d_Curve)(c2d1->NativeInstance), Handle(::Geom2d_Curve)(ac2d2->NativeInstance), (::TopAbs_Orientation)Orient1, (::TopAbs_Orientation)Orient2, *(double*)pp_first1, *(double*)pp_last1, *(double*)pp_first2, *(double*)pp_last2, h_c2dOut, *(bool*)pp_isRev1, *(bool*)pp_isRev2, isError);
	c2dOut->NativeInstance = h_c2dOut.get();
	return _result;
}

bool RDC::OCC::ShapeConstruct::JoinCurves(RDC::OCC::Geom2d_Curve^ c2d1, RDC::OCC::Geom2d_Curve^ ac2d2, RDC::OCC::TopAbs_Orientation Orient1, RDC::OCC::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, RDC::OCC::Geom2d_Curve^ c2dOut, bool% isRev1, bool% isRev2)
{
	pin_ptr<double> pp_first1 = &first1;
	pin_ptr<double> pp_last1 = &last1;
	pin_ptr<double> pp_first2 = &first2;
	pin_ptr<double> pp_last2 = &last2;
	Handle(::Geom2d_Curve) h_c2dOut = c2dOut->NativeInstance;
	pin_ptr<bool> pp_isRev1 = &isRev1;
	pin_ptr<bool> pp_isRev2 = &isRev2;
	bool _result = ::ShapeConstruct::JoinCurves(Handle(::Geom2d_Curve)(c2d1->NativeInstance), Handle(::Geom2d_Curve)(ac2d2->NativeInstance), (::TopAbs_Orientation)Orient1, (::TopAbs_Orientation)Orient2, *(double*)pp_first1, *(double*)pp_last1, *(double*)pp_first2, *(double*)pp_last2, h_c2dOut, *(bool*)pp_isRev1, *(bool*)pp_isRev2, false);
	c2dOut->NativeInstance = h_c2dOut.get();
	return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeConstruct_Curve
//---------------------------------------------------------------------

RDC::OCC::ShapeConstruct_Curve::ShapeConstruct_Curve()
	: RDC::OCC::BaseClass<::ShapeConstruct_Curve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeConstruct_Curve();
}

bool RDC::OCC::ShapeConstruct_Curve::AdjustCurve(RDC::OCC::Geom_Curve^ C3D, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, bool take1, bool take2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
	bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurve(Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, take1, take2);
	return _result;
}

bool RDC::OCC::ShapeConstruct_Curve::AdjustCurve(RDC::OCC::Geom_Curve^ C3D, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, bool take1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
	bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurve(Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, take1, true);
	return _result;
}

bool RDC::OCC::ShapeConstruct_Curve::AdjustCurve(RDC::OCC::Geom_Curve^ C3D, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
	bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurve(Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, true, true);
	return _result;
}

bool RDC::OCC::ShapeConstruct_Curve::AdjustCurveSegment(RDC::OCC::Geom_Curve^ C3D, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, double U1, double U2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
	bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurveSegment(Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, U1, U2);
	return _result;
}

bool RDC::OCC::ShapeConstruct_Curve::AdjustCurve2d(RDC::OCC::Geom2d_Curve^ C2D, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2, bool take1, bool take2)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
	bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurve2d(Handle(::Geom2d_Curve)(C2D->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, take1, take2);
	return _result;
}

bool RDC::OCC::ShapeConstruct_Curve::AdjustCurve2d(RDC::OCC::Geom2d_Curve^ C2D, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2, bool take1)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
	bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurve2d(Handle(::Geom2d_Curve)(C2D->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, take1, true);
	return _result;
}

bool RDC::OCC::ShapeConstruct_Curve::AdjustCurve2d(RDC::OCC::Geom2d_Curve^ C2D, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
	bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurve2d(Handle(::Geom2d_Curve)(C2D->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, true, true);
	return _result;
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::ShapeConstruct_Curve::ConvertToBSpline(RDC::OCC::Geom_Curve^ C, double first, double last, double prec)
{
	Handle(::Geom_BSplineCurve) _result = ((::ShapeConstruct_Curve*)_NativeInstance)->ConvertToBSpline(Handle(::Geom_Curve)(C->NativeInstance), first, last, prec);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::ShapeConstruct_Curve::ConvertToBSpline(RDC::OCC::Geom2d_Curve^ C, double first, double last, double prec)
{
	Handle(::Geom2d_BSplineCurve) _result = ((::ShapeConstruct_Curve*)_NativeInstance)->ConvertToBSpline(Handle(::Geom2d_Curve)(C->NativeInstance), first, last, prec);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

bool RDC::OCC::ShapeConstruct_Curve::FixKnots(RDC::OCC::TColStd_HArray1OfReal^ knots)
{
	Handle(::TColStd_HArray1OfReal) h_knots = knots->NativeInstance;
	bool _result = ::ShapeConstruct_Curve::FixKnots(h_knots);
	knots->NativeInstance = h_knots.get();
	return _result;
}

bool RDC::OCC::ShapeConstruct_Curve::FixKnots(RDC::OCC::TColStd_Array1OfReal^ knots)
{
	bool _result = ::ShapeConstruct_Curve::FixKnots(*(::TColStd_Array1OfReal*)knots->NativeInstance);
	return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeConstruct_MakeTriangulation
//---------------------------------------------------------------------

RDC::OCC::ShapeConstruct_MakeTriangulation::ShapeConstruct_MakeTriangulation(RDC::OCC::TColgp_Array1OfPnt^ pnts, double prec)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeConstruct_MakeTriangulation(*(::TColgp_Array1OfPnt*)pnts->NativeInstance, prec);
}

RDC::OCC::ShapeConstruct_MakeTriangulation::ShapeConstruct_MakeTriangulation(RDC::OCC::TColgp_Array1OfPnt^ pnts)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeConstruct_MakeTriangulation(*(::TColgp_Array1OfPnt*)pnts->NativeInstance, 0.);
}

RDC::OCC::ShapeConstruct_MakeTriangulation::ShapeConstruct_MakeTriangulation(RDC::OCC::TopoDS_Wire^ wire, double prec)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeConstruct_MakeTriangulation(*(::TopoDS_Wire*)wire->NativeInstance, prec);
}

RDC::OCC::ShapeConstruct_MakeTriangulation::ShapeConstruct_MakeTriangulation(RDC::OCC::TopoDS_Wire^ wire)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeConstruct_MakeTriangulation(*(::TopoDS_Wire*)wire->NativeInstance, 0.);
}

void RDC::OCC::ShapeConstruct_MakeTriangulation::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::ShapeConstruct_MakeTriangulation*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::ShapeConstruct_MakeTriangulation::Build()
{
	((::ShapeConstruct_MakeTriangulation*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool RDC::OCC::ShapeConstruct_MakeTriangulation::IsDone()
{
	bool _result = ((::ShapeConstruct_MakeTriangulation*)_NativeInstance)->IsDone();
	return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeConstruct_ProjectCurveOnSurface
//---------------------------------------------------------------------

RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::ShapeConstruct_ProjectCurveOnSurface()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeConstruct_ProjectCurveOnSurface();
}

void RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::Init(RDC::OCC::Geom_Surface^ surf, double preci)
{
	((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->Init(Handle(::Geom_Surface)(surf->NativeInstance), preci);
}

void RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::Init(RDC::OCC::ShapeAnalysis_Surface^ surf, double preci)
{
	((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->Init(Handle(::ShapeAnalysis_Surface)(surf->NativeInstance), preci);
}

void RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::SetSurface(RDC::OCC::Geom_Surface^ surf)
{
	((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->SetSurface(Handle(::Geom_Surface)(surf->NativeInstance));
}

void RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::SetSurface(RDC::OCC::ShapeAnalysis_Surface^ surf)
{
	((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->SetSurface(Handle(::ShapeAnalysis_Surface)(surf->NativeInstance));
}

void RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::SetPrecision(double preci)
{
	((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->SetPrecision(preci);
}

bool RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::Perform(RDC::OCC::Geom_Curve^ c3d, double First, double Last, RDC::OCC::Geom2d_Curve^ c2d, double TolFirst, double TolLast)
{
	Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
	Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
	bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->Perform(h_c3d, First, Last, h_c2d, TolFirst, TolLast);
	c3d->NativeInstance = h_c3d.get();
	c2d->NativeInstance = h_c2d.get();
	return _result;
}

bool RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::Perform(RDC::OCC::Geom_Curve^ c3d, double First, double Last, RDC::OCC::Geom2d_Curve^ c2d, double TolFirst)
{
	Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
	Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
	bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->Perform(h_c3d, First, Last, h_c2d, TolFirst, -1);
	c3d->NativeInstance = h_c3d.get();
	c2d->NativeInstance = h_c2d.get();
	return _result;
}

bool RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::Perform(RDC::OCC::Geom_Curve^ c3d, double First, double Last, RDC::OCC::Geom2d_Curve^ c2d)
{
	Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
	Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
	bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->Perform(h_c3d, First, Last, h_c2d, -1, -1);
	c3d->NativeInstance = h_c3d.get();
	c2d->NativeInstance = h_c2d.get();
	return _result;
}

bool RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::PerformByProjLib(RDC::OCC::Geom_Curve^ c3d, double First, double Last, RDC::OCC::Geom2d_Curve^ c2d, RDC::OCC::GeomAbs_Shape continuity, int maxdeg, int nbinterval)
{
	Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
	Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
	bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->PerformByProjLib(h_c3d, First, Last, h_c2d, (::GeomAbs_Shape)continuity, maxdeg, nbinterval);
	c3d->NativeInstance = h_c3d.get();
	c2d->NativeInstance = h_c2d.get();
	return _result;
}

bool RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::PerformByProjLib(RDC::OCC::Geom_Curve^ c3d, double First, double Last, RDC::OCC::Geom2d_Curve^ c2d, RDC::OCC::GeomAbs_Shape continuity, int maxdeg)
{
	Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
	Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
	bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->PerformByProjLib(h_c3d, First, Last, h_c2d, (::GeomAbs_Shape)continuity, maxdeg, -1);
	c3d->NativeInstance = h_c3d.get();
	c2d->NativeInstance = h_c2d.get();
	return _result;
}

bool RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::PerformByProjLib(RDC::OCC::Geom_Curve^ c3d, double First, double Last, RDC::OCC::Geom2d_Curve^ c2d, RDC::OCC::GeomAbs_Shape continuity)
{
	Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
	Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
	bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->PerformByProjLib(h_c3d, First, Last, h_c2d, (::GeomAbs_Shape)continuity, 12, -1);
	c3d->NativeInstance = h_c3d.get();
	c2d->NativeInstance = h_c2d.get();
	return _result;
}

bool RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::PerformByProjLib(RDC::OCC::Geom_Curve^ c3d, double First, double Last, RDC::OCC::Geom2d_Curve^ c2d)
{
	Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
	Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
	bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->PerformByProjLib(h_c3d, First, Last, h_c2d, GeomAbs_C1, 12, -1);
	c3d->NativeInstance = h_c3d.get();
	c2d->NativeInstance = h_c2d.get();
	return _result;
}

RDC::OCC::ShapeConstruct_ProjectCurveOnSurface^ RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::CreateDowncasted(::ShapeConstruct_ProjectCurveOnSurface* instance)
{
	return gcnew RDC::OCC::ShapeConstruct_ProjectCurveOnSurface(instance);
}



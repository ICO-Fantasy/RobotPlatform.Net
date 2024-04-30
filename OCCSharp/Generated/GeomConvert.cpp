// Generated wrapper code for package GeomConvert

#include "OcctPCH.h"
#include "GeomConvert.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "Convert.h"
#include "TColStd.h"
#include "GeomAbs.h"
#include "Adaptor3d.h"
#include "TColgp.h"
#include "gp.h"
#include "Geom2d.h"


//---------------------------------------------------------------------
//  Class  GeomConvert
//---------------------------------------------------------------------

RDC::OCC::GeomConvert::GeomConvert()
	: RDC::OCC::BaseClass<::GeomConvert>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert();
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::GeomConvert::SplitBSplineCurve(RDC::OCC::Geom_BSplineCurve^ C, int FromK1, int ToK2, bool SameOrientation)
{
	Handle(::Geom_BSplineCurve) _result = ::GeomConvert::SplitBSplineCurve(Handle(::Geom_BSplineCurve)(C->NativeInstance), FromK1, ToK2, SameOrientation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::GeomConvert::SplitBSplineCurve(RDC::OCC::Geom_BSplineCurve^ C, int FromK1, int ToK2)
{
	Handle(::Geom_BSplineCurve) _result = ::GeomConvert::SplitBSplineCurve(Handle(::Geom_BSplineCurve)(C->NativeInstance), FromK1, ToK2, true);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::GeomConvert::SplitBSplineCurve(RDC::OCC::Geom_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance, bool SameOrientation)
{
	Handle(::Geom_BSplineCurve) _result = ::GeomConvert::SplitBSplineCurve(Handle(::Geom_BSplineCurve)(C->NativeInstance), FromU1, ToU2, ParametricTolerance, SameOrientation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::GeomConvert::SplitBSplineCurve(RDC::OCC::Geom_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance)
{
	Handle(::Geom_BSplineCurve) _result = ::GeomConvert::SplitBSplineCurve(Handle(::Geom_BSplineCurve)(C->NativeInstance), FromU1, ToU2, ParametricTolerance, true);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomConvert::SplitBSplineSurface(RDC::OCC::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2, bool SameUOrientation, bool SameVOrientation)
{
	Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromUK1, ToUK2, FromVK1, ToVK2, SameUOrientation, SameVOrientation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomConvert::SplitBSplineSurface(RDC::OCC::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2, bool SameUOrientation)
{
	Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromUK1, ToUK2, FromVK1, ToVK2, SameUOrientation, true);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomConvert::SplitBSplineSurface(RDC::OCC::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2)
{
	Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromUK1, ToUK2, FromVK1, ToVK2, true, true);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomConvert::SplitBSplineSurface(RDC::OCC::Geom_BSplineSurface^ S, int FromK1, int ToK2, bool USplit, bool SameOrientation)
{
	Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromK1, ToK2, USplit, SameOrientation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomConvert::SplitBSplineSurface(RDC::OCC::Geom_BSplineSurface^ S, int FromK1, int ToK2, bool USplit)
{
	Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromK1, ToK2, USplit, true);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomConvert::SplitBSplineSurface(RDC::OCC::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance, bool SameUOrientation, bool SameVOrientation)
{
	Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromU1, ToU2, FromV1, ToV2, ParametricTolerance, SameUOrientation, SameVOrientation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomConvert::SplitBSplineSurface(RDC::OCC::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance, bool SameUOrientation)
{
	Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromU1, ToU2, FromV1, ToV2, ParametricTolerance, SameUOrientation, true);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomConvert::SplitBSplineSurface(RDC::OCC::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance)
{
	Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromU1, ToU2, FromV1, ToV2, ParametricTolerance, true, true);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomConvert::SplitBSplineSurface(RDC::OCC::Geom_BSplineSurface^ S, double FromParam1, double ToParam2, bool USplit, double ParametricTolerance, bool SameOrientation)
{
	Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromParam1, ToParam2, USplit, ParametricTolerance, SameOrientation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomConvert::SplitBSplineSurface(RDC::OCC::Geom_BSplineSurface^ S, double FromParam1, double ToParam2, bool USplit, double ParametricTolerance)
{
	Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromParam1, ToParam2, USplit, ParametricTolerance, true);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::GeomConvert::CurveToBSplineCurve(RDC::OCC::Geom_Curve^ C, RDC::OCC::Convert_ParameterisationType Parameterisation)
{
	Handle(::Geom_BSplineCurve) _result = ::GeomConvert::CurveToBSplineCurve(Handle(::Geom_Curve)(C->NativeInstance), (::Convert_ParameterisationType)Parameterisation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::GeomConvert::CurveToBSplineCurve(RDC::OCC::Geom_Curve^ C)
{
	Handle(::Geom_BSplineCurve) _result = ::GeomConvert::CurveToBSplineCurve(Handle(::Geom_Curve)(C->NativeInstance), Convert_TgtThetaOver2);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomConvert::SurfaceToBSplineSurface(RDC::OCC::Geom_Surface^ S)
{
	Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SurfaceToBSplineSurface(Handle(::Geom_Surface)(S->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

void RDC::OCC::GeomConvert::C0BSplineToC1BSplineCurve(RDC::OCC::Geom_BSplineCurve^ BS, double tolerance, double AngularTolerance)
{
	Handle(::Geom_BSplineCurve) h_BS = BS->NativeInstance;
	::GeomConvert::C0BSplineToC1BSplineCurve(h_BS, tolerance, AngularTolerance);
	BS->NativeInstance = h_BS.get();
}

void RDC::OCC::GeomConvert::C0BSplineToC1BSplineCurve(RDC::OCC::Geom_BSplineCurve^ BS, double tolerance)
{
	Handle(::Geom_BSplineCurve) h_BS = BS->NativeInstance;
	::GeomConvert::C0BSplineToC1BSplineCurve(h_BS, tolerance, 9.9999999999999995E-8);
	BS->NativeInstance = h_BS.get();
}



//---------------------------------------------------------------------
//  Class  GeomConvert_ApproxCurve
//---------------------------------------------------------------------

RDC::OCC::GeomConvert_ApproxCurve::GeomConvert_ApproxCurve(RDC::OCC::Geom_Curve^ Curve, double Tol3d, RDC::OCC::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
	: RDC::OCC::BaseClass<::GeomConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_ApproxCurve(Handle(::Geom_Curve)(Curve->NativeInstance), Tol3d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
}

RDC::OCC::GeomConvert_ApproxCurve::GeomConvert_ApproxCurve(RDC::OCC::Adaptor3d_Curve^ Curve, double Tol3d, RDC::OCC::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
	: RDC::OCC::BaseClass<::GeomConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_ApproxCurve(Handle(::Adaptor3d_Curve)(Curve->NativeInstance), Tol3d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::GeomConvert_ApproxCurve::Curve()
{
	Handle(::Geom_BSplineCurve) _result = ((::GeomConvert_ApproxCurve*)_NativeInstance)->Curve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomConvert_ApproxCurve::IsDone()
{
	bool _result = ((::GeomConvert_ApproxCurve*)_NativeInstance)->IsDone();
	return _result;
}

bool RDC::OCC::GeomConvert_ApproxCurve::HasResult()
{
	bool _result = ((::GeomConvert_ApproxCurve*)_NativeInstance)->HasResult();
	return _result;
}

double RDC::OCC::GeomConvert_ApproxCurve::MaxError()
{
	double _result = ((::GeomConvert_ApproxCurve*)_NativeInstance)->MaxError();
	return _result;
}

void RDC::OCC::GeomConvert_ApproxCurve::Dump(System::IO::TextWriter^ o)
{
	std::ostringstream oss_o;
	((::GeomConvert_ApproxCurve*)_NativeInstance)->Dump(oss_o);
	o->Write(gcnew System::String(oss_o.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  GeomConvert_ApproxSurface
//---------------------------------------------------------------------

RDC::OCC::GeomConvert_ApproxSurface::GeomConvert_ApproxSurface(RDC::OCC::Geom_Surface^ Surf, double Tol3d, RDC::OCC::GeomAbs_Shape UContinuity, RDC::OCC::GeomAbs_Shape VContinuity, int MaxDegU, int MaxDegV, int MaxSegments, int PrecisCode)
	: RDC::OCC::BaseClass<::GeomConvert_ApproxSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_ApproxSurface(Handle(::Geom_Surface)(Surf->NativeInstance), Tol3d, (::GeomAbs_Shape)UContinuity, (::GeomAbs_Shape)VContinuity, MaxDegU, MaxDegV, MaxSegments, PrecisCode);
}

RDC::OCC::GeomConvert_ApproxSurface::GeomConvert_ApproxSurface(RDC::OCC::Adaptor3d_Surface^ Surf, double Tol3d, RDC::OCC::GeomAbs_Shape UContinuity, RDC::OCC::GeomAbs_Shape VContinuity, int MaxDegU, int MaxDegV, int MaxSegments, int PrecisCode)
	: RDC::OCC::BaseClass<::GeomConvert_ApproxSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_ApproxSurface(Handle(::Adaptor3d_Surface)(Surf->NativeInstance), Tol3d, (::GeomAbs_Shape)UContinuity, (::GeomAbs_Shape)VContinuity, MaxDegU, MaxDegV, MaxSegments, PrecisCode);
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomConvert_ApproxSurface::Surface()
{
	Handle(::Geom_BSplineSurface) _result = ((::GeomConvert_ApproxSurface*)_NativeInstance)->Surface();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomConvert_ApproxSurface::IsDone()
{
	bool _result = ((::GeomConvert_ApproxSurface*)_NativeInstance)->IsDone();
	return _result;
}

bool RDC::OCC::GeomConvert_ApproxSurface::HasResult()
{
	bool _result = ((::GeomConvert_ApproxSurface*)_NativeInstance)->HasResult();
	return _result;
}

double RDC::OCC::GeomConvert_ApproxSurface::MaxError()
{
	double _result = ((::GeomConvert_ApproxSurface*)_NativeInstance)->MaxError();
	return _result;
}

void RDC::OCC::GeomConvert_ApproxSurface::Dump(System::IO::TextWriter^ o)
{
	std::ostringstream oss_o;
	((::GeomConvert_ApproxSurface*)_NativeInstance)->Dump(oss_o);
	o->Write(gcnew System::String(oss_o.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineCurveKnotSplitting
//---------------------------------------------------------------------

RDC::OCC::GeomConvert_BSplineCurveKnotSplitting::GeomConvert_BSplineCurveKnotSplitting(RDC::OCC::Geom_BSplineCurve^ BasisCurve, int ContinuityRange)
	: RDC::OCC::BaseClass<::GeomConvert_BSplineCurveKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_BSplineCurveKnotSplitting(Handle(::Geom_BSplineCurve)(BasisCurve->NativeInstance), ContinuityRange);
}

int RDC::OCC::GeomConvert_BSplineCurveKnotSplitting::NbSplits()
{
	int _result = ((::GeomConvert_BSplineCurveKnotSplitting*)_NativeInstance)->NbSplits();
	return _result;
}

void RDC::OCC::GeomConvert_BSplineCurveKnotSplitting::Splitting(RDC::OCC::TColStd_Array1OfInteger^ SplitValues)
{
	((::GeomConvert_BSplineCurveKnotSplitting*)_NativeInstance)->Splitting(*(::TColStd_Array1OfInteger*)SplitValues->NativeInstance);
}

int RDC::OCC::GeomConvert_BSplineCurveKnotSplitting::SplitValue(int Index)
{
	int _result = ((::GeomConvert_BSplineCurveKnotSplitting*)_NativeInstance)->SplitValue(Index);
	return _result;
}



//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineCurveToBezierCurve
//---------------------------------------------------------------------

RDC::OCC::GeomConvert_BSplineCurveToBezierCurve::GeomConvert_BSplineCurveToBezierCurve(RDC::OCC::Geom_BSplineCurve^ BasisCurve)
	: RDC::OCC::BaseClass<::GeomConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_BSplineCurveToBezierCurve(Handle(::Geom_BSplineCurve)(BasisCurve->NativeInstance));
}

RDC::OCC::GeomConvert_BSplineCurveToBezierCurve::GeomConvert_BSplineCurveToBezierCurve(RDC::OCC::Geom_BSplineCurve^ BasisCurve, double U1, double U2, double ParametricTolerance)
	: RDC::OCC::BaseClass<::GeomConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_BSplineCurveToBezierCurve(Handle(::Geom_BSplineCurve)(BasisCurve->NativeInstance), U1, U2, ParametricTolerance);
}

RDC::OCC::Geom_BezierCurve^ RDC::OCC::GeomConvert_BSplineCurveToBezierCurve::Arc(int Index)
{
	Handle(::Geom_BezierCurve) _result = ((::GeomConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Arc(Index);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BezierCurve::CreateDowncasted(_result.get());
}

void RDC::OCC::GeomConvert_BSplineCurveToBezierCurve::Knots(RDC::OCC::TColStd_Array1OfReal^ TKnots)
{
	((::GeomConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Knots(*(::TColStd_Array1OfReal*)TKnots->NativeInstance);
}

int RDC::OCC::GeomConvert_BSplineCurveToBezierCurve::NbArcs()
{
	int _result = ((::GeomConvert_BSplineCurveToBezierCurve*)_NativeInstance)->NbArcs();
	return _result;
}



//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineSurfaceKnotSplitting
//---------------------------------------------------------------------

RDC::OCC::GeomConvert_BSplineSurfaceKnotSplitting::GeomConvert_BSplineSurfaceKnotSplitting(RDC::OCC::Geom_BSplineSurface^ BasisSurface, int UContinuityRange, int VContinuityRange)
	: RDC::OCC::BaseClass<::GeomConvert_BSplineSurfaceKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_BSplineSurfaceKnotSplitting(Handle(::Geom_BSplineSurface)(BasisSurface->NativeInstance), UContinuityRange, VContinuityRange);
}

int RDC::OCC::GeomConvert_BSplineSurfaceKnotSplitting::NbUSplits()
{
	int _result = ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->NbUSplits();
	return _result;
}

int RDC::OCC::GeomConvert_BSplineSurfaceKnotSplitting::NbVSplits()
{
	int _result = ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->NbVSplits();
	return _result;
}

void RDC::OCC::GeomConvert_BSplineSurfaceKnotSplitting::Splitting(RDC::OCC::TColStd_Array1OfInteger^ USplit, RDC::OCC::TColStd_Array1OfInteger^ VSplit)
{
	((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->Splitting(*(::TColStd_Array1OfInteger*)USplit->NativeInstance, *(::TColStd_Array1OfInteger*)VSplit->NativeInstance);
}

int RDC::OCC::GeomConvert_BSplineSurfaceKnotSplitting::USplitValue(int UIndex)
{
	int _result = ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->USplitValue(UIndex);
	return _result;
}

int RDC::OCC::GeomConvert_BSplineSurfaceKnotSplitting::VSplitValue(int VIndex)
{
	int _result = ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->VSplitValue(VIndex);
	return _result;
}



//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineSurfaceToBezierSurface
//---------------------------------------------------------------------

RDC::OCC::GeomConvert_BSplineSurfaceToBezierSurface::GeomConvert_BSplineSurfaceToBezierSurface(RDC::OCC::Geom_BSplineSurface^ BasisSurface)
	: RDC::OCC::BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_BSplineSurfaceToBezierSurface(Handle(::Geom_BSplineSurface)(BasisSurface->NativeInstance));
}

RDC::OCC::GeomConvert_BSplineSurfaceToBezierSurface::GeomConvert_BSplineSurfaceToBezierSurface(RDC::OCC::Geom_BSplineSurface^ BasisSurface, double U1, double U2, double V1, double V2, double ParametricTolerance)
	: RDC::OCC::BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_BSplineSurfaceToBezierSurface(Handle(::Geom_BSplineSurface)(BasisSurface->NativeInstance), U1, U2, V1, V2, ParametricTolerance);
}

RDC::OCC::Geom_BezierSurface^ RDC::OCC::GeomConvert_BSplineSurfaceToBezierSurface::Patch(int UIndex, int VIndex)
{
	Handle(::Geom_BezierSurface) _result = ((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->Patch(UIndex, VIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BezierSurface::CreateDowncasted(_result.get());
}

void RDC::OCC::GeomConvert_BSplineSurfaceToBezierSurface::UKnots(RDC::OCC::TColStd_Array1OfReal^ TKnots)
{
	((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->UKnots(*(::TColStd_Array1OfReal*)TKnots->NativeInstance);
}

void RDC::OCC::GeomConvert_BSplineSurfaceToBezierSurface::VKnots(RDC::OCC::TColStd_Array1OfReal^ TKnots)
{
	((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->VKnots(*(::TColStd_Array1OfReal*)TKnots->NativeInstance);
}

int RDC::OCC::GeomConvert_BSplineSurfaceToBezierSurface::NbUPatches()
{
	int _result = ((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->NbUPatches();
	return _result;
}

int RDC::OCC::GeomConvert_BSplineSurfaceToBezierSurface::NbVPatches()
{
	int _result = ((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->NbVPatches();
	return _result;
}



//---------------------------------------------------------------------
//  Class  GeomConvert_CompBezierSurfacesToBSplineSurface
//---------------------------------------------------------------------

int RDC::OCC::GeomConvert_CompBezierSurfacesToBSplineSurface::NbUKnots()
{
	int _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->NbUKnots();
	return _result;
}

int RDC::OCC::GeomConvert_CompBezierSurfacesToBSplineSurface::NbUPoles()
{
	int _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->NbUPoles();
	return _result;
}

int RDC::OCC::GeomConvert_CompBezierSurfacesToBSplineSurface::NbVKnots()
{
	int _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->NbVKnots();
	return _result;
}

int RDC::OCC::GeomConvert_CompBezierSurfacesToBSplineSurface::NbVPoles()
{
	int _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->NbVPoles();
	return _result;
}

RDC::OCC::TColgp_HArray2OfPnt^ RDC::OCC::GeomConvert_CompBezierSurfacesToBSplineSurface::Poles()
{
	Handle(::TColgp_HArray2OfPnt) _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->Poles();
	return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HArray2OfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColStd_HArray1OfReal^ RDC::OCC::GeomConvert_CompBezierSurfacesToBSplineSurface::UKnots()
{
	Handle(::TColStd_HArray1OfReal) _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->UKnots();
	return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HArray1OfReal::CreateDowncasted(_result.get());
}

int RDC::OCC::GeomConvert_CompBezierSurfacesToBSplineSurface::UDegree()
{
	int _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->UDegree();
	return _result;
}

RDC::OCC::TColStd_HArray1OfReal^ RDC::OCC::GeomConvert_CompBezierSurfacesToBSplineSurface::VKnots()
{
	Handle(::TColStd_HArray1OfReal) _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->VKnots();
	return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HArray1OfReal::CreateDowncasted(_result.get());
}

int RDC::OCC::GeomConvert_CompBezierSurfacesToBSplineSurface::VDegree()
{
	int _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->VDegree();
	return _result;
}

RDC::OCC::TColStd_HArray1OfInteger^ RDC::OCC::GeomConvert_CompBezierSurfacesToBSplineSurface::UMultiplicities()
{
	Handle(::TColStd_HArray1OfInteger) _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->UMultiplicities();
	return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HArray1OfInteger::CreateDowncasted(_result.get());
}

RDC::OCC::TColStd_HArray1OfInteger^ RDC::OCC::GeomConvert_CompBezierSurfacesToBSplineSurface::VMultiplicities()
{
	Handle(::TColStd_HArray1OfInteger) _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->VMultiplicities();
	return _result.IsNull() ? nullptr : RDC::OCC::TColStd_HArray1OfInteger::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomConvert_CompBezierSurfacesToBSplineSurface::IsDone()
{
	bool _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->IsDone();
	return _result;
}



//---------------------------------------------------------------------
//  Class  GeomConvert_CompCurveToBSplineCurve
//---------------------------------------------------------------------

RDC::OCC::GeomConvert_CompCurveToBSplineCurve::GeomConvert_CompCurveToBSplineCurve(RDC::OCC::Convert_ParameterisationType Parameterisation)
	: RDC::OCC::BaseClass<::GeomConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_CompCurveToBSplineCurve((::Convert_ParameterisationType)Parameterisation);
}

RDC::OCC::GeomConvert_CompCurveToBSplineCurve::GeomConvert_CompCurveToBSplineCurve()
	: RDC::OCC::BaseClass<::GeomConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_CompCurveToBSplineCurve(Convert_TgtThetaOver2);
}

RDC::OCC::GeomConvert_CompCurveToBSplineCurve::GeomConvert_CompCurveToBSplineCurve(RDC::OCC::Geom_BoundedCurve^ BasisCurve, RDC::OCC::Convert_ParameterisationType Parameterisation)
	: RDC::OCC::BaseClass<::GeomConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_CompCurveToBSplineCurve(Handle(::Geom_BoundedCurve)(BasisCurve->NativeInstance), (::Convert_ParameterisationType)Parameterisation);
}

RDC::OCC::GeomConvert_CompCurveToBSplineCurve::GeomConvert_CompCurveToBSplineCurve(RDC::OCC::Geom_BoundedCurve^ BasisCurve)
	: RDC::OCC::BaseClass<::GeomConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_CompCurveToBSplineCurve(Handle(::Geom_BoundedCurve)(BasisCurve->NativeInstance), Convert_TgtThetaOver2);
}

bool RDC::OCC::GeomConvert_CompCurveToBSplineCurve::Add(RDC::OCC::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After, bool WithRatio, int MinM)
{
	bool _result = ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom_BoundedCurve)(NewCurve->NativeInstance), Tolerance, After, WithRatio, MinM);
	return _result;
}

bool RDC::OCC::GeomConvert_CompCurveToBSplineCurve::Add(RDC::OCC::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After, bool WithRatio)
{
	bool _result = ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom_BoundedCurve)(NewCurve->NativeInstance), Tolerance, After, WithRatio, 0);
	return _result;
}

bool RDC::OCC::GeomConvert_CompCurveToBSplineCurve::Add(RDC::OCC::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After)
{
	bool _result = ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom_BoundedCurve)(NewCurve->NativeInstance), Tolerance, After, true, 0);
	return _result;
}

bool RDC::OCC::GeomConvert_CompCurveToBSplineCurve::Add(RDC::OCC::Geom_BoundedCurve^ NewCurve, double Tolerance)
{
	bool _result = ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom_BoundedCurve)(NewCurve->NativeInstance), Tolerance, false, true, 0);
	return _result;
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::GeomConvert_CompCurveToBSplineCurve::BSplineCurve()
{
	Handle(::Geom_BSplineCurve) _result = ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->BSplineCurve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

void RDC::OCC::GeomConvert_CompCurveToBSplineCurve::Clear()
{
	((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Clear();
}



//---------------------------------------------------------------------
//  Class  GeomConvert_CurveToAnaCurve
//---------------------------------------------------------------------

RDC::OCC::GeomConvert_CurveToAnaCurve::GeomConvert_CurveToAnaCurve()
	: RDC::OCC::BaseClass<::GeomConvert_CurveToAnaCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_CurveToAnaCurve();
}

RDC::OCC::GeomConvert_CurveToAnaCurve::GeomConvert_CurveToAnaCurve(RDC::OCC::Geom_Curve^ C)
	: RDC::OCC::BaseClass<::GeomConvert_CurveToAnaCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_CurveToAnaCurve(Handle(::Geom_Curve)(C->NativeInstance));
}

void RDC::OCC::GeomConvert_CurveToAnaCurve::Init(RDC::OCC::Geom_Curve^ C)
{
	((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance));
}

bool RDC::OCC::GeomConvert_CurveToAnaCurve::ConvertToAnalytical(double theTol, RDC::OCC::Geom_Curve^ theResultCurve, double F, double L, double% newF, double% newL)
{
	Handle(::Geom_Curve) h_theResultCurve = theResultCurve->NativeInstance;
	pin_ptr<double> pp_newF = &newF;
	pin_ptr<double> pp_newL = &newL;
	bool _result = ((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->ConvertToAnalytical(theTol, h_theResultCurve, F, L, *(double*)pp_newF, *(double*)pp_newL);
	theResultCurve->NativeInstance = h_theResultCurve.get();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::GeomConvert_CurveToAnaCurve::ComputeCurve(RDC::OCC::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% theGap, RDC::OCC::GeomConvert_ConvType theCurvType, RDC::OCC::GeomAbs_CurveType theTarget)
{
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	pin_ptr<double> pp_theGap = &theGap;
	Handle(::Geom_Curve) _result = ::GeomConvert_CurveToAnaCurve::ComputeCurve(Handle(::Geom_Curve)(curve->NativeInstance), tolerance, c1, c2, *(double*)pp_cf, *(double*)pp_cl, *(double*)pp_theGap, (::GeomConvert_ConvType)theCurvType, (::GeomAbs_CurveType)theTarget);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::GeomConvert_CurveToAnaCurve::ComputeCurve(RDC::OCC::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% theGap, RDC::OCC::GeomConvert_ConvType theCurvType)
{
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	pin_ptr<double> pp_theGap = &theGap;
	Handle(::Geom_Curve) _result = ::GeomConvert_CurveToAnaCurve::ComputeCurve(Handle(::Geom_Curve)(curve->NativeInstance), tolerance, c1, c2, *(double*)pp_cf, *(double*)pp_cl, *(double*)pp_theGap, (::GeomConvert_ConvType)theCurvType, GeomAbs_Line);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::GeomConvert_CurveToAnaCurve::ComputeCurve(RDC::OCC::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% theGap)
{
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	pin_ptr<double> pp_theGap = &theGap;
	Handle(::Geom_Curve) _result = ::GeomConvert_CurveToAnaCurve::ComputeCurve(Handle(::Geom_Curve)(curve->NativeInstance), tolerance, c1, c2, *(double*)pp_cf, *(double*)pp_cl, *(double*)pp_theGap, GeomConvert_MinGap, GeomAbs_Line);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::GeomConvert_CurveToAnaCurve::ComputeCircle(RDC::OCC::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% Deviation)
{
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	pin_ptr<double> pp_Deviation = &Deviation;
	Handle(::Geom_Curve) _result = ::GeomConvert_CurveToAnaCurve::ComputeCircle(Handle(::Geom_Curve)(curve->NativeInstance), tolerance, c1, c2, *(double*)pp_cf, *(double*)pp_cl, *(double*)pp_Deviation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::GeomConvert_CurveToAnaCurve::ComputeEllipse(RDC::OCC::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% Deviation)
{
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	pin_ptr<double> pp_Deviation = &Deviation;
	Handle(::Geom_Curve) _result = ::GeomConvert_CurveToAnaCurve::ComputeEllipse(Handle(::Geom_Curve)(curve->NativeInstance), tolerance, c1, c2, *(double*)pp_cf, *(double*)pp_cl, *(double*)pp_Deviation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Line^ RDC::OCC::GeomConvert_CurveToAnaCurve::ComputeLine(RDC::OCC::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% Deviation)
{
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	pin_ptr<double> pp_Deviation = &Deviation;
	Handle(::Geom_Line) _result = ::GeomConvert_CurveToAnaCurve::ComputeLine(Handle(::Geom_Curve)(curve->NativeInstance), tolerance, c1, c2, *(double*)pp_cf, *(double*)pp_cl, *(double*)pp_Deviation);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Line::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomConvert_CurveToAnaCurve::IsLinear(RDC::OCC::TColgp_Array1OfPnt^ aPoints, double tolerance, double% Deviation)
{
	pin_ptr<double> pp_Deviation = &Deviation;
	bool _result = ::GeomConvert_CurveToAnaCurve::IsLinear(*(::TColgp_Array1OfPnt*)aPoints->NativeInstance, tolerance, *(double*)pp_Deviation);
	return _result;
}

RDC::OCC::gp_Lin^ RDC::OCC::GeomConvert_CurveToAnaCurve::GetLine(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, double% cf, double% cl)
{
	::gp_Lin* _result = new ::gp_Lin();
	pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	*_result = ::GeomConvert_CurveToAnaCurve::GetLine(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(double*)pp_cf, *(double*)pp_cl);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

bool RDC::OCC::GeomConvert_CurveToAnaCurve::GetCircle(RDC::OCC::gp_Circ^ Circ, RDC::OCC::Pnt P0, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P0 = &P0;
	pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
	bool _result = ::GeomConvert_CurveToAnaCurve::GetCircle(*(::gp_Circ*)Circ->NativeInstance, *(gp_Pnt*)pp_P0, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	return _result;
}

double RDC::OCC::GeomConvert_CurveToAnaCurve::Gap()
{
	double _result = ((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->Gap();
	return _result;
}

RDC::OCC::GeomConvert_ConvType RDC::OCC::GeomConvert_CurveToAnaCurve::GetConvType()
{
	::GeomConvert_ConvType _result = ((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->GetConvType();
	return (RDC::OCC::GeomConvert_ConvType)_result;
}

void RDC::OCC::GeomConvert_CurveToAnaCurve::SetConvType(RDC::OCC::GeomConvert_ConvType theConvType)
{
	((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->SetConvType((::GeomConvert_ConvType)theConvType);
}

RDC::OCC::GeomAbs_CurveType RDC::OCC::GeomConvert_CurveToAnaCurve::GetTarget()
{
	::GeomAbs_CurveType _result = ((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->GetTarget();
	return (RDC::OCC::GeomAbs_CurveType)_result;
}

void RDC::OCC::GeomConvert_CurveToAnaCurve::SetTarget(RDC::OCC::GeomAbs_CurveType theTarget)
{
	((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->SetTarget((::GeomAbs_CurveType)theTarget);
}



//---------------------------------------------------------------------
//  Class  GeomConvert_SurfToAnaSurf
//---------------------------------------------------------------------

RDC::OCC::GeomConvert_SurfToAnaSurf::GeomConvert_SurfToAnaSurf()
	: RDC::OCC::BaseClass<::GeomConvert_SurfToAnaSurf>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_SurfToAnaSurf();
}

RDC::OCC::GeomConvert_SurfToAnaSurf::GeomConvert_SurfToAnaSurf(RDC::OCC::Geom_Surface^ S)
	: RDC::OCC::BaseClass<::GeomConvert_SurfToAnaSurf>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_SurfToAnaSurf(Handle(::Geom_Surface)(S->NativeInstance));
}

void RDC::OCC::GeomConvert_SurfToAnaSurf::Init(RDC::OCC::Geom_Surface^ S)
{
	((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance));
}

void RDC::OCC::GeomConvert_SurfToAnaSurf::SetConvType(RDC::OCC::GeomConvert_ConvType theConvType)
{
	((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->SetConvType((::GeomConvert_ConvType)theConvType);
}

void RDC::OCC::GeomConvert_SurfToAnaSurf::SetConvType()
{
	((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->SetConvType(GeomConvert_Simplest);
}

void RDC::OCC::GeomConvert_SurfToAnaSurf::SetTarget(RDC::OCC::GeomAbs_SurfaceType theSurfType)
{
	((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->SetTarget((::GeomAbs_SurfaceType)theSurfType);
}

void RDC::OCC::GeomConvert_SurfToAnaSurf::SetTarget()
{
	((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->SetTarget(GeomAbs_Plane);
}

double RDC::OCC::GeomConvert_SurfToAnaSurf::Gap()
{
	double _result = ((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->Gap();
	return _result;
}

RDC::OCC::Geom_Surface^ RDC::OCC::GeomConvert_SurfToAnaSurf::ConvertToAnalytical(double InitialToler)
{
	Handle(::Geom_Surface) _result = ((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->ConvertToAnalytical(InitialToler);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Surface^ RDC::OCC::GeomConvert_SurfToAnaSurf::ConvertToAnalytical(double InitialToler, double Umin, double Umax, double Vmin, double Vmax)
{
	Handle(::Geom_Surface) _result = ((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->ConvertToAnalytical(InitialToler, Umin, Umax, Vmin, Vmax);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomConvert_SurfToAnaSurf::IsSame(RDC::OCC::Geom_Surface^ S1, RDC::OCC::Geom_Surface^ S2, double tol)
{
	bool _result = ::GeomConvert_SurfToAnaSurf::IsSame(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), tol);
	return _result;
}

bool RDC::OCC::GeomConvert_SurfToAnaSurf::IsCanonical(RDC::OCC::Geom_Surface^ S)
{
	bool _result = ::GeomConvert_SurfToAnaSurf::IsCanonical(Handle(::Geom_Surface)(S->NativeInstance));
	return _result;
}



//---------------------------------------------------------------------
//  Class  GeomConvert_Units
//---------------------------------------------------------------------

RDC::OCC::GeomConvert_Units::GeomConvert_Units()
	: RDC::OCC::BaseClass<::GeomConvert_Units>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_Units();
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::GeomConvert_Units::RadianToDegree(RDC::OCC::Geom2d_Curve^ theCurve, RDC::OCC::Geom_Surface^ theSurface, double theLengthFactor, double theFactorRadianDegree)
{
	Handle(::Geom2d_Curve) _result = ::GeomConvert_Units::RadianToDegree(Handle(::Geom2d_Curve)(theCurve->NativeInstance), Handle(::Geom_Surface)(theSurface->NativeInstance), theLengthFactor, theFactorRadianDegree);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::GeomConvert_Units::DegreeToRadian(RDC::OCC::Geom2d_Curve^ theCurve, RDC::OCC::Geom_Surface^ theSurface, double theLengthFactor, double theFactorRadianDegree)
{
	Handle(::Geom2d_Curve) _result = ::GeomConvert_Units::DegreeToRadian(Handle(::Geom2d_Curve)(theCurve->NativeInstance), Handle(::Geom_Surface)(theSurface->NativeInstance), theLengthFactor, theFactorRadianDegree);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::GeomConvert_Units::MirrorPCurve(RDC::OCC::Geom2d_Curve^ theCurve)
{
	Handle(::Geom2d_Curve) _result = ::GeomConvert_Units::MirrorPCurve(Handle(::Geom2d_Curve)(theCurve->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}



// Generated wrapper code for package Geom2dAPI

#include "OcctPCH.h"
#include "Geom2dAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "gp.h"
#include "TColgp.h"
#include "TColStd.h"
#include "GeomAbs.h"


//---------------------------------------------------------------------
//  Class  Geom2dAPI_ExtremaCurveCurve
//---------------------------------------------------------------------

RDC::OCC::Geom2dAPI_ExtremaCurveCurve::Geom2dAPI_ExtremaCurveCurve(RDC::OCC::Geom2d_Curve^ C1, RDC::OCC::Geom2d_Curve^ C2, double U1min, double U1max, double U2min, double U2max)
	: RDC::OCC::BaseClass<::Geom2dAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_ExtremaCurveCurve(Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), U1min, U1max, U2min, U2max);
}

int RDC::OCC::Geom2dAPI_ExtremaCurveCurve::NbExtrema()
{
	int _result = ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->NbExtrema();
	return _result;
}

void RDC::OCC::Geom2dAPI_ExtremaCurveCurve::Points(int Index, RDC::OCC::Pnt2d% P1, RDC::OCC::Pnt2d% P2)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
	((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->Points(Index, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void RDC::OCC::Geom2dAPI_ExtremaCurveCurve::Parameters(int Index, double% U1, double% U2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->Parameters(Index, *(double*)pp_U1, *(double*)pp_U2);
}

double RDC::OCC::Geom2dAPI_ExtremaCurveCurve::Distance(int Index)
{
	double _result = ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->Distance(Index);
	return _result;
}

void RDC::OCC::Geom2dAPI_ExtremaCurveCurve::NearestPoints(RDC::OCC::Pnt2d% P1, RDC::OCC::Pnt2d% P2)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
	((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->NearestPoints(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void RDC::OCC::Geom2dAPI_ExtremaCurveCurve::LowerDistanceParameters(double% U1, double% U2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->LowerDistanceParameters(*(double*)pp_U1, *(double*)pp_U2);
}

double RDC::OCC::Geom2dAPI_ExtremaCurveCurve::LowerDistance()
{
	double _result = ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->LowerDistance();
	return _result;
}



//---------------------------------------------------------------------
//  Class  Geom2dAPI_InterCurveCurve
//---------------------------------------------------------------------

RDC::OCC::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve()
	: RDC::OCC::BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_InterCurveCurve();
}

RDC::OCC::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(RDC::OCC::Geom2d_Curve^ C1, RDC::OCC::Geom2d_Curve^ C2, double Tol)
	: RDC::OCC::BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_InterCurveCurve(Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), Tol);
}

RDC::OCC::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(RDC::OCC::Geom2d_Curve^ C1, RDC::OCC::Geom2d_Curve^ C2)
	: RDC::OCC::BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_InterCurveCurve(Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), 9.9999999999999995E-7);
}

RDC::OCC::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(RDC::OCC::Geom2d_Curve^ C1, double Tol)
	: RDC::OCC::BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_InterCurveCurve(Handle(::Geom2d_Curve)(C1->NativeInstance), Tol);
}

RDC::OCC::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(RDC::OCC::Geom2d_Curve^ C1)
	: RDC::OCC::BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_InterCurveCurve(Handle(::Geom2d_Curve)(C1->NativeInstance), 9.9999999999999995E-7);
}

void RDC::OCC::Geom2dAPI_InterCurveCurve::Init(RDC::OCC::Geom2d_Curve^ C1, RDC::OCC::Geom2d_Curve^ C2, double Tol)
{
	((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), Tol);
}

void RDC::OCC::Geom2dAPI_InterCurveCurve::Init(RDC::OCC::Geom2d_Curve^ C1, RDC::OCC::Geom2d_Curve^ C2)
{
	((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), 9.9999999999999995E-7);
}

void RDC::OCC::Geom2dAPI_InterCurveCurve::Init(RDC::OCC::Geom2d_Curve^ C1, double Tol)
{
	((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C1->NativeInstance), Tol);
}

void RDC::OCC::Geom2dAPI_InterCurveCurve::Init(RDC::OCC::Geom2d_Curve^ C1)
{
	((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C1->NativeInstance), 9.9999999999999995E-7);
}

int RDC::OCC::Geom2dAPI_InterCurveCurve::NbPoints()
{
	int _result = ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->NbPoints();
	return _result;
}

RDC::OCC::Pnt2d RDC::OCC::Geom2dAPI_InterCurveCurve::Point(int Index)
{
	::gp_Pnt2d _nativeResult = ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Point(Index);
	return RDC::OCC::Pnt2d(_nativeResult);
}

int RDC::OCC::Geom2dAPI_InterCurveCurve::NbSegments()
{
	int _result = ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->NbSegments();
	return _result;
}

void RDC::OCC::Geom2dAPI_InterCurveCurve::Segment(int Index, RDC::OCC::Geom2d_Curve^ Curve1, RDC::OCC::Geom2d_Curve^ Curve2)
{
	Handle(::Geom2d_Curve) h_Curve1 = Curve1->NativeInstance;
	Handle(::Geom2d_Curve) h_Curve2 = Curve2->NativeInstance;
	((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Segment(Index, h_Curve1, h_Curve2);
	Curve1->NativeInstance = h_Curve1.get();
	Curve2->NativeInstance = h_Curve2.get();
}



//---------------------------------------------------------------------
//  Class  Geom2dAPI_Interpolate
//---------------------------------------------------------------------

RDC::OCC::Geom2dAPI_Interpolate::Geom2dAPI_Interpolate(RDC::OCC::TColgp_HArray1OfPnt2d^ Points, bool PeriodicFlag, double Tolerance)
	: RDC::OCC::BaseClass<::Geom2dAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_Interpolate(Handle(::TColgp_HArray1OfPnt2d)(Points->NativeInstance), PeriodicFlag, Tolerance);
}

RDC::OCC::Geom2dAPI_Interpolate::Geom2dAPI_Interpolate(RDC::OCC::TColgp_HArray1OfPnt2d^ Points, RDC::OCC::TColStd_HArray1OfReal^ Parameters, bool PeriodicFlag, double Tolerance)
	: RDC::OCC::BaseClass<::Geom2dAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_Interpolate(Handle(::TColgp_HArray1OfPnt2d)(Points->NativeInstance), Handle(::TColStd_HArray1OfReal)(Parameters->NativeInstance), PeriodicFlag, Tolerance);
}

void RDC::OCC::Geom2dAPI_Interpolate::Load(RDC::OCC::Vec2d InitialTangent, RDC::OCC::Vec2d FinalTangent, bool Scale)
{
	pin_ptr<RDC::OCC::Vec2d> pp_InitialTangent = &InitialTangent;
	pin_ptr<RDC::OCC::Vec2d> pp_FinalTangent = &FinalTangent;
	((::Geom2dAPI_Interpolate*)_NativeInstance)->Load(*(gp_Vec2d*)pp_InitialTangent, *(gp_Vec2d*)pp_FinalTangent, Scale);
}

void RDC::OCC::Geom2dAPI_Interpolate::Load(RDC::OCC::Vec2d InitialTangent, RDC::OCC::Vec2d FinalTangent)
{
	pin_ptr<RDC::OCC::Vec2d> pp_InitialTangent = &InitialTangent;
	pin_ptr<RDC::OCC::Vec2d> pp_FinalTangent = &FinalTangent;
	((::Geom2dAPI_Interpolate*)_NativeInstance)->Load(*(gp_Vec2d*)pp_InitialTangent, *(gp_Vec2d*)pp_FinalTangent, true);
}

void RDC::OCC::Geom2dAPI_Interpolate::Load(RDC::OCC::TColgp_Array1OfVec2d^ Tangents, RDC::OCC::TColStd_HArray1OfBoolean^ TangentFlags, bool Scale)
{
	((::Geom2dAPI_Interpolate*)_NativeInstance)->Load(*(::TColgp_Array1OfVec2d*)Tangents->NativeInstance, Handle(::TColStd_HArray1OfBoolean)(TangentFlags->NativeInstance), Scale);
}

void RDC::OCC::Geom2dAPI_Interpolate::Load(RDC::OCC::TColgp_Array1OfVec2d^ Tangents, RDC::OCC::TColStd_HArray1OfBoolean^ TangentFlags)
{
	((::Geom2dAPI_Interpolate*)_NativeInstance)->Load(*(::TColgp_Array1OfVec2d*)Tangents->NativeInstance, Handle(::TColStd_HArray1OfBoolean)(TangentFlags->NativeInstance), true);
}

void RDC::OCC::Geom2dAPI_Interpolate::Perform()
{
	((::Geom2dAPI_Interpolate*)_NativeInstance)->Perform();
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::Geom2dAPI_Interpolate::Curve()
{
	Handle(::Geom2d_BSplineCurve) _result = ((::Geom2dAPI_Interpolate*)_NativeInstance)->Curve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

bool RDC::OCC::Geom2dAPI_Interpolate::IsDone()
{
	bool _result = ((::Geom2dAPI_Interpolate*)_NativeInstance)->IsDone();
	return _result;
}



//---------------------------------------------------------------------
//  Class  Geom2dAPI_PointsToBSpline
//---------------------------------------------------------------------

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline()
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline();
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol2D)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 9.9999999999999995E-7);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 9.9999999999999995E-7);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, int DegMin)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, 3, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol2D)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 9.9999999999999995E-7);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, GeomAbs_C2, 9.9999999999999995E-7);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColStd_Array1OfReal^ YValues, double X0, double DX)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, 3, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol2D)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

RDC::OCC::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3)
	: RDC::OCC::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol2D)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 9.9999999999999995E-7);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 9.9999999999999995E-7);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, int DegMin)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, 3, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol2D)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 9.9999999999999995E-7);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, GeomAbs_C2, 9.9999999999999995E-7);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColStd_Array1OfReal^ YValues, double X0, double DX)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, 3, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol2D)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol2D)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

void RDC::OCC::Geom2dAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3)
{
	((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::Geom2dAPI_PointsToBSpline::Curve()
{
	Handle(::Geom2d_BSplineCurve) _result = ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Curve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

bool RDC::OCC::Geom2dAPI_PointsToBSpline::IsDone()
{
	bool _result = ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->IsDone();
	return _result;
}



//---------------------------------------------------------------------
//  Class  Geom2dAPI_ProjectPointOnCurve
//---------------------------------------------------------------------

RDC::OCC::Geom2dAPI_ProjectPointOnCurve::Geom2dAPI_ProjectPointOnCurve()
	: RDC::OCC::BaseClass<::Geom2dAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_ProjectPointOnCurve();
}

RDC::OCC::Geom2dAPI_ProjectPointOnCurve::Geom2dAPI_ProjectPointOnCurve(RDC::OCC::Pnt2d P, RDC::OCC::Geom2d_Curve^ Curve)
	: RDC::OCC::BaseClass<::Geom2dAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
	_NativeInstance = new ::Geom2dAPI_ProjectPointOnCurve(*(gp_Pnt2d*)pp_P, Handle(::Geom2d_Curve)(Curve->NativeInstance));
}

RDC::OCC::Geom2dAPI_ProjectPointOnCurve::Geom2dAPI_ProjectPointOnCurve(RDC::OCC::Pnt2d P, RDC::OCC::Geom2d_Curve^ Curve, double Umin, double Usup)
	: RDC::OCC::BaseClass<::Geom2dAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
	_NativeInstance = new ::Geom2dAPI_ProjectPointOnCurve(*(gp_Pnt2d*)pp_P, Handle(::Geom2d_Curve)(Curve->NativeInstance), Umin, Usup);
}

void RDC::OCC::Geom2dAPI_ProjectPointOnCurve::Init(RDC::OCC::Pnt2d P, RDC::OCC::Geom2d_Curve^ Curve)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
	((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_P, Handle(::Geom2d_Curve)(Curve->NativeInstance));
}

void RDC::OCC::Geom2dAPI_ProjectPointOnCurve::Init(RDC::OCC::Pnt2d P, RDC::OCC::Geom2d_Curve^ Curve, double Umin, double Usup)
{
	pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
	((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_P, Handle(::Geom2d_Curve)(Curve->NativeInstance), Umin, Usup);
}

int RDC::OCC::Geom2dAPI_ProjectPointOnCurve::NbPoints()
{
	int _result = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->NbPoints();
	return _result;
}

RDC::OCC::Pnt2d RDC::OCC::Geom2dAPI_ProjectPointOnCurve::Point(int Index)
{
	::gp_Pnt2d _nativeResult = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Point(Index);
	return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::Geom2dAPI_ProjectPointOnCurve::Parameter(int Index)
{
	double _result = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Parameter(Index);
	return _result;
}

void RDC::OCC::Geom2dAPI_ProjectPointOnCurve::Parameter(int Index, double% U)
{
	pin_ptr<double> pp_U = &U;
	((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Parameter(Index, *(double*)pp_U);
}

double RDC::OCC::Geom2dAPI_ProjectPointOnCurve::Distance(int Index)
{
	double _result = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Distance(Index);
	return _result;
}

RDC::OCC::Pnt2d RDC::OCC::Geom2dAPI_ProjectPointOnCurve::NearestPoint()
{
	::gp_Pnt2d _nativeResult = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->NearestPoint();
	return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::Geom2dAPI_ProjectPointOnCurve::LowerDistanceParameter()
{
	double _result = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->LowerDistanceParameter();
	return _result;
}

double RDC::OCC::Geom2dAPI_ProjectPointOnCurve::LowerDistance()
{
	double _result = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->LowerDistance();
	return _result;
}



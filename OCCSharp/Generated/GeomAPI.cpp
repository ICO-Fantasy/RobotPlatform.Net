// Generated wrapper code for package GeomAPI

#include "OcctPCH.h"
#include "GeomAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "Geom.h"
#include "gp.h"
#include "TColgp.h"
#include "TColStd.h"
#include "GeomAbs.h"
#include "Extrema.h"


//---------------------------------------------------------------------
//  Class  GeomAPI
//---------------------------------------------------------------------

RDC::OCC::GeomAPI::GeomAPI()
    : RDC::OCC::BaseClass<::GeomAPI>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI();
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::GeomAPI::To2d(RDC::OCC::Geom_Curve^ C, RDC::OCC::Pln P)
{
    pin_ptr<RDC::OCC::Pln> pp_P = &P;
    Handle(::Geom2d_Curve) _result = ::GeomAPI::To2d(Handle(::Geom_Curve)(C->NativeInstance), *(gp_Pln*)pp_P);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::GeomAPI::To3d(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Pln P)
{
    pin_ptr<RDC::OCC::Pln> pp_P = &P;
    Handle(::Geom_Curve) _result = ::GeomAPI::To3d(Handle(::Geom2d_Curve)(C->NativeInstance), *(gp_Pln*)pp_P);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaCurveCurve
//---------------------------------------------------------------------

RDC::OCC::GeomAPI_ExtremaCurveCurve::GeomAPI_ExtremaCurveCurve()
    : RDC::OCC::BaseClass<::GeomAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaCurveCurve();
}

RDC::OCC::GeomAPI_ExtremaCurveCurve::GeomAPI_ExtremaCurveCurve(RDC::OCC::Geom_Curve^ C1, RDC::OCC::Geom_Curve^ C2)
    : RDC::OCC::BaseClass<::GeomAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaCurveCurve(Handle(::Geom_Curve)(C1->NativeInstance), Handle(::Geom_Curve)(C2->NativeInstance));
}

RDC::OCC::GeomAPI_ExtremaCurveCurve::GeomAPI_ExtremaCurveCurve(RDC::OCC::Geom_Curve^ C1, RDC::OCC::Geom_Curve^ C2, double U1min, double U1max, double U2min, double U2max)
    : RDC::OCC::BaseClass<::GeomAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaCurveCurve(Handle(::Geom_Curve)(C1->NativeInstance), Handle(::Geom_Curve)(C2->NativeInstance), U1min, U1max, U2min, U2max);
}

void RDC::OCC::GeomAPI_ExtremaCurveCurve::Init(RDC::OCC::Geom_Curve^ C1, RDC::OCC::Geom_Curve^ C2)
{
    ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Init(Handle(::Geom_Curve)(C1->NativeInstance), Handle(::Geom_Curve)(C2->NativeInstance));
}

void RDC::OCC::GeomAPI_ExtremaCurveCurve::Init(RDC::OCC::Geom_Curve^ C1, RDC::OCC::Geom_Curve^ C2, double U1min, double U1max, double U2min, double U2max)
{
    ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Init(Handle(::Geom_Curve)(C1->NativeInstance), Handle(::Geom_Curve)(C2->NativeInstance), U1min, U1max, U2min, U2max);
}

int RDC::OCC::GeomAPI_ExtremaCurveCurve::NbExtrema()
{
    int _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->NbExtrema();
    return _result;
}

void RDC::OCC::GeomAPI_ExtremaCurveCurve::Points(int Index, RDC::OCC::Pnt% P1, RDC::OCC::Pnt% P2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Points(Index, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void RDC::OCC::GeomAPI_ExtremaCurveCurve::Parameters(int Index, double% U1, double% U2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_U2 = &U2;
    ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Parameters(Index, *(double*)pp_U1, *(double*)pp_U2);
}

double RDC::OCC::GeomAPI_ExtremaCurveCurve::Distance(int Index)
{
    double _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Distance(Index);
    return _result;
}

bool RDC::OCC::GeomAPI_ExtremaCurveCurve::IsParallel()
{
    bool _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->IsParallel();
    return _result;
}

void RDC::OCC::GeomAPI_ExtremaCurveCurve::NearestPoints(RDC::OCC::Pnt% P1, RDC::OCC::Pnt% P2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->NearestPoints(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void RDC::OCC::GeomAPI_ExtremaCurveCurve::LowerDistanceParameters(double% U1, double% U2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_U2 = &U2;
    ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->LowerDistanceParameters(*(double*)pp_U1, *(double*)pp_U2);
}

double RDC::OCC::GeomAPI_ExtremaCurveCurve::LowerDistance()
{
    double _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->LowerDistance();
    return _result;
}

bool RDC::OCC::GeomAPI_ExtremaCurveCurve::TotalNearestPoints(RDC::OCC::Pnt% P1, RDC::OCC::Pnt% P2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    bool _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->TotalNearestPoints(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
    return _result;
}

bool RDC::OCC::GeomAPI_ExtremaCurveCurve::TotalLowerDistanceParameters(double% U1, double% U2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_U2 = &U2;
    bool _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->TotalLowerDistanceParameters(*(double*)pp_U1, *(double*)pp_U2);
    return _result;
}

double RDC::OCC::GeomAPI_ExtremaCurveCurve::TotalLowerDistance()
{
    double _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->TotalLowerDistance();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaCurveSurface
//---------------------------------------------------------------------

RDC::OCC::GeomAPI_ExtremaCurveSurface::GeomAPI_ExtremaCurveSurface()
    : RDC::OCC::BaseClass<::GeomAPI_ExtremaCurveSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaCurveSurface();
}

RDC::OCC::GeomAPI_ExtremaCurveSurface::GeomAPI_ExtremaCurveSurface(RDC::OCC::Geom_Curve^ Curve, RDC::OCC::Geom_Surface^ Surface)
    : RDC::OCC::BaseClass<::GeomAPI_ExtremaCurveSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaCurveSurface(Handle(::Geom_Curve)(Curve->NativeInstance), Handle(::Geom_Surface)(Surface->NativeInstance));
}

RDC::OCC::GeomAPI_ExtremaCurveSurface::GeomAPI_ExtremaCurveSurface(RDC::OCC::Geom_Curve^ Curve, RDC::OCC::Geom_Surface^ Surface, double Wmin, double Wmax, double Umin, double Umax, double Vmin, double Vmax)
    : RDC::OCC::BaseClass<::GeomAPI_ExtremaCurveSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaCurveSurface(Handle(::Geom_Curve)(Curve->NativeInstance), Handle(::Geom_Surface)(Surface->NativeInstance), Wmin, Wmax, Umin, Umax, Vmin, Vmax);
}

void RDC::OCC::GeomAPI_ExtremaCurveSurface::Init(RDC::OCC::Geom_Curve^ Curve, RDC::OCC::Geom_Surface^ Surface)
{
    ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Init(Handle(::Geom_Curve)(Curve->NativeInstance), Handle(::Geom_Surface)(Surface->NativeInstance));
}

void RDC::OCC::GeomAPI_ExtremaCurveSurface::Init(RDC::OCC::Geom_Curve^ Curve, RDC::OCC::Geom_Surface^ Surface, double Wmin, double Wmax, double Umin, double Umax, double Vmin, double Vmax)
{
    ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Init(Handle(::Geom_Curve)(Curve->NativeInstance), Handle(::Geom_Surface)(Surface->NativeInstance), Wmin, Wmax, Umin, Umax, Vmin, Vmax);
}

int RDC::OCC::GeomAPI_ExtremaCurveSurface::NbExtrema()
{
    int _result = ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->NbExtrema();
    return _result;
}

void RDC::OCC::GeomAPI_ExtremaCurveSurface::Points(int Index, RDC::OCC::Pnt% P1, RDC::OCC::Pnt% P2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Points(Index, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void RDC::OCC::GeomAPI_ExtremaCurveSurface::Parameters(int Index, double% W, double% U, double% V)
{
    pin_ptr<double> pp_W = &W;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Parameters(Index, *(double*)pp_W, *(double*)pp_U, *(double*)pp_V);
}

double RDC::OCC::GeomAPI_ExtremaCurveSurface::Distance(int Index)
{
    double _result = ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Distance(Index);
    return _result;
}

bool RDC::OCC::GeomAPI_ExtremaCurveSurface::IsParallel()
{
    bool _result = ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->IsParallel();
    return _result;
}

void RDC::OCC::GeomAPI_ExtremaCurveSurface::NearestPoints(RDC::OCC::Pnt% PC, RDC::OCC::Pnt% PS)
{
    pin_ptr<RDC::OCC::Pnt> pp_PC = &PC;
    pin_ptr<RDC::OCC::Pnt> pp_PS = &PS;
    ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->NearestPoints(*(gp_Pnt*)pp_PC, *(gp_Pnt*)pp_PS);
}

void RDC::OCC::GeomAPI_ExtremaCurveSurface::LowerDistanceParameters(double% W, double% U, double% V)
{
    pin_ptr<double> pp_W = &W;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->LowerDistanceParameters(*(double*)pp_W, *(double*)pp_U, *(double*)pp_V);
}

double RDC::OCC::GeomAPI_ExtremaCurveSurface::LowerDistance()
{
    double _result = ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->LowerDistance();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaSurfaceSurface
//---------------------------------------------------------------------

RDC::OCC::GeomAPI_ExtremaSurfaceSurface::GeomAPI_ExtremaSurfaceSurface()
    : RDC::OCC::BaseClass<::GeomAPI_ExtremaSurfaceSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaSurfaceSurface();
}

RDC::OCC::GeomAPI_ExtremaSurfaceSurface::GeomAPI_ExtremaSurfaceSurface(RDC::OCC::Geom_Surface^ S1, RDC::OCC::Geom_Surface^ S2)
    : RDC::OCC::BaseClass<::GeomAPI_ExtremaSurfaceSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaSurfaceSurface(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance));
}

RDC::OCC::GeomAPI_ExtremaSurfaceSurface::GeomAPI_ExtremaSurfaceSurface(RDC::OCC::Geom_Surface^ S1, RDC::OCC::Geom_Surface^ S2, double U1min, double U1max, double V1min, double V1max, double U2min, double U2max, double V2min, double V2max)
    : RDC::OCC::BaseClass<::GeomAPI_ExtremaSurfaceSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaSurfaceSurface(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), U1min, U1max, V1min, V1max, U2min, U2max, V2min, V2max);
}

void RDC::OCC::GeomAPI_ExtremaSurfaceSurface::Init(RDC::OCC::Geom_Surface^ S1, RDC::OCC::Geom_Surface^ S2)
{
    ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Init(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance));
}

void RDC::OCC::GeomAPI_ExtremaSurfaceSurface::Init(RDC::OCC::Geom_Surface^ S1, RDC::OCC::Geom_Surface^ S2, double U1min, double U1max, double V1min, double V1max, double U2min, double U2max, double V2min, double V2max)
{
    ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Init(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), U1min, U1max, V1min, V1max, U2min, U2max, V2min, V2max);
}

int RDC::OCC::GeomAPI_ExtremaSurfaceSurface::NbExtrema()
{
    int _result = ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->NbExtrema();
    return _result;
}

void RDC::OCC::GeomAPI_ExtremaSurfaceSurface::Points(int Index, RDC::OCC::Pnt% P1, RDC::OCC::Pnt% P2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Points(Index, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void RDC::OCC::GeomAPI_ExtremaSurfaceSurface::Parameters(int Index, double% U1, double% V1, double% U2, double% V2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_V1 = &V1;
    pin_ptr<double> pp_U2 = &U2;
    pin_ptr<double> pp_V2 = &V2;
    ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Parameters(Index, *(double*)pp_U1, *(double*)pp_V1, *(double*)pp_U2, *(double*)pp_V2);
}

double RDC::OCC::GeomAPI_ExtremaSurfaceSurface::Distance(int Index)
{
    double _result = ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Distance(Index);
    return _result;
}

bool RDC::OCC::GeomAPI_ExtremaSurfaceSurface::IsParallel()
{
    bool _result = ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->IsParallel();
    return _result;
}

void RDC::OCC::GeomAPI_ExtremaSurfaceSurface::NearestPoints(RDC::OCC::Pnt% P1, RDC::OCC::Pnt% P2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->NearestPoints(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void RDC::OCC::GeomAPI_ExtremaSurfaceSurface::LowerDistanceParameters(double% U1, double% V1, double% U2, double% V2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_V1 = &V1;
    pin_ptr<double> pp_U2 = &U2;
    pin_ptr<double> pp_V2 = &V2;
    ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->LowerDistanceParameters(*(double*)pp_U1, *(double*)pp_V1, *(double*)pp_U2, *(double*)pp_V2);
}

double RDC::OCC::GeomAPI_ExtremaSurfaceSurface::LowerDistance()
{
    double _result = ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->LowerDistance();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomAPI_IntCS
//---------------------------------------------------------------------

RDC::OCC::GeomAPI_IntCS::GeomAPI_IntCS()
    : RDC::OCC::BaseClass<::GeomAPI_IntCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_IntCS();
}

RDC::OCC::GeomAPI_IntCS::GeomAPI_IntCS(RDC::OCC::Geom_Curve^ C, RDC::OCC::Geom_Surface^ S)
    : RDC::OCC::BaseClass<::GeomAPI_IntCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_IntCS(Handle(::Geom_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
}

void RDC::OCC::GeomAPI_IntCS::Perform(RDC::OCC::Geom_Curve^ C, RDC::OCC::Geom_Surface^ S)
{
    ((::GeomAPI_IntCS*)_NativeInstance)->Perform(Handle(::Geom_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
}

bool RDC::OCC::GeomAPI_IntCS::IsDone()
{
    bool _result = ((::GeomAPI_IntCS*)_NativeInstance)->IsDone();
    return _result;
}

int RDC::OCC::GeomAPI_IntCS::NbPoints()
{
    int _result = ((::GeomAPI_IntCS*)_NativeInstance)->NbPoints();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::GeomAPI_IntCS::Point(int Index)
{
    ::gp_Pnt _nativeResult = ((::GeomAPI_IntCS*)_NativeInstance)->Point(Index);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::GeomAPI_IntCS::Parameters(int Index, double% U, double% V, double% W)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    pin_ptr<double> pp_W = &W;
    ((::GeomAPI_IntCS*)_NativeInstance)->Parameters(Index, *(double*)pp_U, *(double*)pp_V, *(double*)pp_W);
}

int RDC::OCC::GeomAPI_IntCS::NbSegments()
{
    int _result = ((::GeomAPI_IntCS*)_NativeInstance)->NbSegments();
    return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::GeomAPI_IntCS::Segment(int Index)
{
    Handle(::Geom_Curve) _result = ((::GeomAPI_IntCS*)_NativeInstance)->Segment(Index);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::GeomAPI_IntCS::Parameters(int Index, double% U1, double% V1, double% U2, double% V2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_V1 = &V1;
    pin_ptr<double> pp_U2 = &U2;
    pin_ptr<double> pp_V2 = &V2;
    ((::GeomAPI_IntCS*)_NativeInstance)->Parameters(Index, *(double*)pp_U1, *(double*)pp_V1, *(double*)pp_U2, *(double*)pp_V2);
}



//---------------------------------------------------------------------
//  Class  GeomAPI_Interpolate
//---------------------------------------------------------------------

RDC::OCC::GeomAPI_Interpolate::GeomAPI_Interpolate(RDC::OCC::TColgp_HArray1OfPnt^ Points, bool PeriodicFlag, double Tolerance)
    : RDC::OCC::BaseClass<::GeomAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_Interpolate(Handle(::TColgp_HArray1OfPnt)(Points->NativeInstance), PeriodicFlag, Tolerance);
}

RDC::OCC::GeomAPI_Interpolate::GeomAPI_Interpolate(RDC::OCC::TColgp_HArray1OfPnt^ Points, RDC::OCC::TColStd_HArray1OfReal^ Parameters, bool PeriodicFlag, double Tolerance)
    : RDC::OCC::BaseClass<::GeomAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_Interpolate(Handle(::TColgp_HArray1OfPnt)(Points->NativeInstance), Handle(::TColStd_HArray1OfReal)(Parameters->NativeInstance), PeriodicFlag, Tolerance);
}

void RDC::OCC::GeomAPI_Interpolate::Load(RDC::OCC::Vec InitialTangent, RDC::OCC::Vec FinalTangent, bool Scale)
{
    pin_ptr<RDC::OCC::Vec> pp_InitialTangent = &InitialTangent;
    pin_ptr<RDC::OCC::Vec> pp_FinalTangent = &FinalTangent;
    ((::GeomAPI_Interpolate*)_NativeInstance)->Load(*(gp_Vec*)pp_InitialTangent, *(gp_Vec*)pp_FinalTangent, Scale);
}

void RDC::OCC::GeomAPI_Interpolate::Load(RDC::OCC::Vec InitialTangent, RDC::OCC::Vec FinalTangent)
{
    pin_ptr<RDC::OCC::Vec> pp_InitialTangent = &InitialTangent;
    pin_ptr<RDC::OCC::Vec> pp_FinalTangent = &FinalTangent;
    ((::GeomAPI_Interpolate*)_NativeInstance)->Load(*(gp_Vec*)pp_InitialTangent, *(gp_Vec*)pp_FinalTangent, true);
}

void RDC::OCC::GeomAPI_Interpolate::Load(RDC::OCC::TColgp_Array1OfVec^ Tangents, RDC::OCC::TColStd_HArray1OfBoolean^ TangentFlags, bool Scale)
{
    ((::GeomAPI_Interpolate*)_NativeInstance)->Load(*(::TColgp_Array1OfVec*)Tangents->NativeInstance, Handle(::TColStd_HArray1OfBoolean)(TangentFlags->NativeInstance), Scale);
}

void RDC::OCC::GeomAPI_Interpolate::Load(RDC::OCC::TColgp_Array1OfVec^ Tangents, RDC::OCC::TColStd_HArray1OfBoolean^ TangentFlags)
{
    ((::GeomAPI_Interpolate*)_NativeInstance)->Load(*(::TColgp_Array1OfVec*)Tangents->NativeInstance, Handle(::TColStd_HArray1OfBoolean)(TangentFlags->NativeInstance), true);
}

void RDC::OCC::GeomAPI_Interpolate::Perform()
{
    ((::GeomAPI_Interpolate*)_NativeInstance)->Perform();
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::GeomAPI_Interpolate::Curve()
{
    Handle(::Geom_BSplineCurve) _result = ((::GeomAPI_Interpolate*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomAPI_Interpolate::IsDone()
{
    bool _result = ((::GeomAPI_Interpolate*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomAPI_IntSS
//---------------------------------------------------------------------

RDC::OCC::GeomAPI_IntSS::GeomAPI_IntSS()
    : RDC::OCC::BaseClass<::GeomAPI_IntSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_IntSS();
}

RDC::OCC::GeomAPI_IntSS::GeomAPI_IntSS(RDC::OCC::Geom_Surface^ S1, RDC::OCC::Geom_Surface^ S2, double Tol)
    : RDC::OCC::BaseClass<::GeomAPI_IntSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_IntSS(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), Tol);
}

void RDC::OCC::GeomAPI_IntSS::Perform(RDC::OCC::Geom_Surface^ S1, RDC::OCC::Geom_Surface^ S2, double Tol)
{
    ((::GeomAPI_IntSS*)_NativeInstance)->Perform(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), Tol);
}

bool RDC::OCC::GeomAPI_IntSS::IsDone()
{
    bool _result = ((::GeomAPI_IntSS*)_NativeInstance)->IsDone();
    return _result;
}

int RDC::OCC::GeomAPI_IntSS::NbLines()
{
    int _result = ((::GeomAPI_IntSS*)_NativeInstance)->NbLines();
    return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::GeomAPI_IntSS::Line(int Index)
{
    Handle(::Geom_Curve) _result = ((::GeomAPI_IntSS*)_NativeInstance)->Line(Index);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  GeomAPI_PointsToBSpline
//---------------------------------------------------------------------

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline()
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline();
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, int DegMin)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(RDC::OCC::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, int DegMin)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters, int DegMin)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, RDC::OCC::TColStd_Array1OfReal^ Parameters)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSpline::Init(RDC::OCC::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::GeomAPI_PointsToBSpline::Curve()
{
    Handle(::Geom_BSplineCurve) _result = ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomAPI_PointsToBSpline::IsDone()
{
    bool _result = ((::GeomAPI_PointsToBSpline*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomAPI_PointsToBSplineSurface
//---------------------------------------------------------------------

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface()
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface();
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Points, int DegMin)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Points)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(RDC::OCC::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY)
    : RDC::OCC::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, 3, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColgp_Array2OfPnt^ Points, int DegMin)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColgp_Array2OfPnt^ Points)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Interpolate(RDC::OCC::TColgp_Array2OfPnt^ Points, bool thePeriodic)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Interpolate(*(::TColgp_Array2OfPnt*)Points->NativeInstance, thePeriodic);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Interpolate(RDC::OCC::TColgp_Array2OfPnt^ Points)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Interpolate(*(::TColgp_Array2OfPnt*)Points->NativeInstance, false);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, 3, 8, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Interpolate(RDC::OCC::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Interpolate(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, RDC::OCC::GeomAbs_Shape Continuity, double Tol3D)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, RDC::OCC::GeomAbs_Shape Continuity)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

void RDC::OCC::GeomAPI_PointsToBSplineSurface::Init(RDC::OCC::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomAPI_PointsToBSplineSurface::Surface()
{
    Handle(::Geom_BSplineSurface) _result = ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomAPI_PointsToBSplineSurface::IsDone()
{
    bool _result = ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomAPI_ProjectPointOnCurve
//---------------------------------------------------------------------

RDC::OCC::GeomAPI_ProjectPointOnCurve::GeomAPI_ProjectPointOnCurve()
    : RDC::OCC::BaseClass<::GeomAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ProjectPointOnCurve();
}

RDC::OCC::GeomAPI_ProjectPointOnCurve::GeomAPI_ProjectPointOnCurve(RDC::OCC::Pnt P, RDC::OCC::Geom_Curve^ Curve)
    : RDC::OCC::BaseClass<::GeomAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnCurve(*(gp_Pnt*)pp_P, Handle(::Geom_Curve)(Curve->NativeInstance));
}

RDC::OCC::GeomAPI_ProjectPointOnCurve::GeomAPI_ProjectPointOnCurve(RDC::OCC::Pnt P, RDC::OCC::Geom_Curve^ Curve, double Umin, double Usup)
    : RDC::OCC::BaseClass<::GeomAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnCurve(*(gp_Pnt*)pp_P, Handle(::Geom_Curve)(Curve->NativeInstance), Umin, Usup);
}

void RDC::OCC::GeomAPI_ProjectPointOnCurve::Init(RDC::OCC::Pnt P, RDC::OCC::Geom_Curve^ Curve)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Curve)(Curve->NativeInstance));
}

void RDC::OCC::GeomAPI_ProjectPointOnCurve::Init(RDC::OCC::Pnt P, RDC::OCC::Geom_Curve^ Curve, double Umin, double Usup)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Curve)(Curve->NativeInstance), Umin, Usup);
}

void RDC::OCC::GeomAPI_ProjectPointOnCurve::Init(RDC::OCC::Geom_Curve^ Curve, double Umin, double Usup)
{
    ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Init(Handle(::Geom_Curve)(Curve->NativeInstance), Umin, Usup);
}

void RDC::OCC::GeomAPI_ProjectPointOnCurve::Perform(RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

int RDC::OCC::GeomAPI_ProjectPointOnCurve::NbPoints()
{
    int _result = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->NbPoints();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::GeomAPI_ProjectPointOnCurve::Point(int Index)
{
    ::gp_Pnt _nativeResult = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Point(Index);
    return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::GeomAPI_ProjectPointOnCurve::Parameter(int Index)
{
    double _result = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Parameter(Index);
    return _result;
}

void RDC::OCC::GeomAPI_ProjectPointOnCurve::Parameter(int Index, double% U)
{
    pin_ptr<double> pp_U = &U;
    ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Parameter(Index, *(double*)pp_U);
}

double RDC::OCC::GeomAPI_ProjectPointOnCurve::Distance(int Index)
{
    double _result = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Distance(Index);
    return _result;
}

RDC::OCC::Pnt RDC::OCC::GeomAPI_ProjectPointOnCurve::NearestPoint()
{
    ::gp_Pnt _nativeResult = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->NearestPoint();
    return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::GeomAPI_ProjectPointOnCurve::LowerDistanceParameter()
{
    double _result = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->LowerDistanceParameter();
    return _result;
}

double RDC::OCC::GeomAPI_ProjectPointOnCurve::LowerDistance()
{
    double _result = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->LowerDistance();
    return _result;
}

RDC::OCC::Extrema_ExtPC^ RDC::OCC::GeomAPI_ProjectPointOnCurve::Extrema()
{
    ::Extrema_ExtPC* _result = new ::Extrema_ExtPC();
    *_result = (::Extrema_ExtPC)((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Extrema();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::Extrema_ExtPC(_result);
}



//---------------------------------------------------------------------
//  Class  GeomAPI_ProjectPointOnSurf
//---------------------------------------------------------------------

RDC::OCC::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf()
    : RDC::OCC::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf();
}

RDC::OCC::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, RDC::OCC::Extrema_ExtAlgo Algo)
    : RDC::OCC::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), (::Extrema_ExtAlgo)Algo);
}

RDC::OCC::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface)
    : RDC::OCC::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Extrema_ExtAlgo_Grad);
}

RDC::OCC::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, double Tolerance, RDC::OCC::Extrema_ExtAlgo Algo)
    : RDC::OCC::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Tolerance, (::Extrema_ExtAlgo)Algo);
}

RDC::OCC::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, double Tolerance)
    : RDC::OCC::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Tolerance, Extrema_ExtAlgo_Grad);
}

RDC::OCC::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance, RDC::OCC::Extrema_ExtAlgo Algo)
    : RDC::OCC::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Tolerance, (::Extrema_ExtAlgo)Algo);
}

RDC::OCC::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance)
    : RDC::OCC::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Tolerance, Extrema_ExtAlgo_Grad);
}

RDC::OCC::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, RDC::OCC::Extrema_ExtAlgo Algo)
    : RDC::OCC::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, (::Extrema_ExtAlgo)Algo);
}

RDC::OCC::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup)
    : RDC::OCC::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Extrema_ExtAlgo_Grad);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Init(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, double Tolerance, RDC::OCC::Extrema_ExtAlgo Algo)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Tolerance, (::Extrema_ExtAlgo)Algo);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Init(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, double Tolerance)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Tolerance, Extrema_ExtAlgo_Grad);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Init(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, RDC::OCC::Extrema_ExtAlgo Algo)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), (::Extrema_ExtAlgo)Algo);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Init(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Extrema_ExtAlgo_Grad);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Init(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance, RDC::OCC::Extrema_ExtAlgo Algo)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Tolerance, (::Extrema_ExtAlgo)Algo);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Init(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Tolerance, Extrema_ExtAlgo_Grad);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Init(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, RDC::OCC::Extrema_ExtAlgo Algo)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, (::Extrema_ExtAlgo)Algo);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Init(RDC::OCC::Pnt P, RDC::OCC::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Extrema_ExtAlgo_Grad);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Init(RDC::OCC::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance, RDC::OCC::Extrema_ExtAlgo Algo)
{
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Tolerance, (::Extrema_ExtAlgo)Algo);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Init(RDC::OCC::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance)
{
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Tolerance, Extrema_ExtAlgo_Grad);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Init(RDC::OCC::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, RDC::OCC::Extrema_ExtAlgo Algo)
{
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, (::Extrema_ExtAlgo)Algo);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Init(RDC::OCC::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup)
{
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Extrema_ExtAlgo_Grad);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::SetExtremaAlgo(RDC::OCC::Extrema_ExtAlgo theAlgo)
{
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->SetExtremaAlgo((::Extrema_ExtAlgo)theAlgo);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::SetExtremaFlag(RDC::OCC::Extrema_ExtFlag theExtFlag)
{
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->SetExtremaFlag((::Extrema_ExtFlag)theExtFlag);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Perform(RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

bool RDC::OCC::GeomAPI_ProjectPointOnSurf::IsDone()
{
    bool _result = ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->IsDone();
    return _result;
}

int RDC::OCC::GeomAPI_ProjectPointOnSurf::NbPoints()
{
    int _result = ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->NbPoints();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::GeomAPI_ProjectPointOnSurf::Point(int Index)
{
    ::gp_Pnt _nativeResult = ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Point(Index);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::Parameters(int Index, double% U, double% V)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Parameters(Index, *(double*)pp_U, *(double*)pp_V);
}

double RDC::OCC::GeomAPI_ProjectPointOnSurf::Distance(int Index)
{
    double _result = ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Distance(Index);
    return _result;
}

RDC::OCC::Pnt RDC::OCC::GeomAPI_ProjectPointOnSurf::NearestPoint()
{
    ::gp_Pnt _nativeResult = ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->NearestPoint();
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::GeomAPI_ProjectPointOnSurf::LowerDistanceParameters(double% U, double% V)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->LowerDistanceParameters(*(double*)pp_U, *(double*)pp_V);
}

double RDC::OCC::GeomAPI_ProjectPointOnSurf::LowerDistance()
{
    double _result = ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->LowerDistance();
    return _result;
}



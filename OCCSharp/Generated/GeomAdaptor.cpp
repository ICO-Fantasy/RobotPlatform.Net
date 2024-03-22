// Generated wrapper code for package GeomAdaptor

#include "OcctPCH.h"
#include "GeomAdaptor.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "Adaptor3d.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  GeomAdaptor
//---------------------------------------------------------------------

RDC::OCC::GeomAdaptor::GeomAdaptor()
    : RDC::OCC::BaseClass<::GeomAdaptor>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAdaptor();
}

RDC::OCC::Geom_Curve^ RDC::OCC::GeomAdaptor::MakeCurve(RDC::OCC::Adaptor3d_Curve^ C)
{
    Handle(::Geom_Curve) _result = ::GeomAdaptor::MakeCurve(*(::Adaptor3d_Curve*)C->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Surface^ RDC::OCC::GeomAdaptor::MakeSurface(RDC::OCC::Adaptor3d_Surface^ theS, bool theTrimFlag)
{
    Handle(::Geom_Surface) _result = ::GeomAdaptor::MakeSurface(*(::Adaptor3d_Surface*)theS->NativeInstance, theTrimFlag);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Surface^ RDC::OCC::GeomAdaptor::MakeSurface(RDC::OCC::Adaptor3d_Surface^ theS)
{
    Handle(::Geom_Surface) _result = ::GeomAdaptor::MakeSurface(*(::Adaptor3d_Surface*)theS->NativeInstance, true);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor_Curve
//---------------------------------------------------------------------

RDC::OCC::GeomAdaptor_Curve::GeomAdaptor_Curve()
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Curve();
}

RDC::OCC::GeomAdaptor_Curve::GeomAdaptor_Curve(RDC::OCC::Geom_Curve^ theCurve)
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Curve(Handle(::Geom_Curve)(theCurve->NativeInstance));
}

RDC::OCC::GeomAdaptor_Curve::GeomAdaptor_Curve(RDC::OCC::Geom_Curve^ theCurve, double theUFirst, double theULast)
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Curve(Handle(::Geom_Curve)(theCurve->NativeInstance), theUFirst, theULast);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::GeomAdaptor_Curve::ShallowCopy()
{
    Handle(::Adaptor3d_Curve) _result = ((::GeomAdaptor_Curve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::GeomAdaptor_Curve::Reset()
{
    ((::GeomAdaptor_Curve*)_NativeInstance)->Reset();
}

void RDC::OCC::GeomAdaptor_Curve::Load(RDC::OCC::Geom_Curve^ theCurve)
{
    ((::GeomAdaptor_Curve*)_NativeInstance)->Load(Handle(::Geom_Curve)(theCurve->NativeInstance));
}

void RDC::OCC::GeomAdaptor_Curve::Load(RDC::OCC::Geom_Curve^ theCurve, double theUFirst, double theULast)
{
    ((::GeomAdaptor_Curve*)_NativeInstance)->Load(Handle(::Geom_Curve)(theCurve->NativeInstance), theUFirst, theULast);
}

RDC::OCC::Geom_Curve^ RDC::OCC::GeomAdaptor_Curve::Curve()
{
    Handle(::Geom_Curve) _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

double RDC::OCC::GeomAdaptor_Curve::FirstParameter()
{
    double _result = ((::GeomAdaptor_Curve*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::GeomAdaptor_Curve::LastParameter()
{
    double _result = ((::GeomAdaptor_Curve*)_NativeInstance)->LastParameter();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::GeomAdaptor_Curve::Continuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::GeomAdaptor_Curve::NbIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_Curve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void RDC::OCC::GeomAdaptor_Curve::Intervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::GeomAdaptor_Curve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::GeomAdaptor_Curve::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Curve) _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomAdaptor_Curve::IsClosed()
{
    bool _result = ((::GeomAdaptor_Curve*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::GeomAdaptor_Curve::IsPeriodic()
{
    bool _result = ((::GeomAdaptor_Curve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double RDC::OCC::GeomAdaptor_Curve::Period()
{
    double _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Period();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::GeomAdaptor_Curve::Value(double U)
{
    ::gp_Pnt _nativeResult = ((::GeomAdaptor_Curve*)_NativeInstance)->Value(U);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::GeomAdaptor_Curve::D0(double U, RDC::OCC::Pnt% P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAdaptor_Curve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::GeomAdaptor_Curve::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V = &V;
    ((::GeomAdaptor_Curve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void RDC::OCC::GeomAdaptor_Curve::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ((::GeomAdaptor_Curve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::GeomAdaptor_Curve::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ((::GeomAdaptor_Curve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::GeomAdaptor_Curve::DN(double U, int N)
{
    ::gp_Vec _nativeResult = ((::GeomAdaptor_Curve*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec(_nativeResult);
}

double RDC::OCC::GeomAdaptor_Curve::Resolution(double R3d)
{
    double _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Resolution(R3d);
    return _result;
}

RDC::OCC::GeomAbs_CurveType RDC::OCC::GeomAdaptor_Curve::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::GeomAdaptor_Curve*)_NativeInstance)->GetType();
    return (RDC::OCC::GeomAbs_CurveType)_result;
}

RDC::OCC::gp_Lin^ RDC::OCC::GeomAdaptor_Curve::Line()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Line();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::GeomAdaptor_Curve::Circle()
{
    ::gp_Circ* _result = new ::gp_Circ();
    *_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Circle();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

RDC::OCC::gp_Elips^ RDC::OCC::GeomAdaptor_Curve::Ellipse()
{
    ::gp_Elips* _result = new ::gp_Elips();
    *_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Ellipse();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

RDC::OCC::gp_Hypr^ RDC::OCC::GeomAdaptor_Curve::Hyperbola()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Hyperbola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

RDC::OCC::gp_Parab^ RDC::OCC::GeomAdaptor_Curve::Parabola()
{
    ::gp_Parab* _result = new ::gp_Parab();
    *_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Parabola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

int RDC::OCC::GeomAdaptor_Curve::Degree()
{
    int _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Degree();
    return _result;
}

bool RDC::OCC::GeomAdaptor_Curve::IsRational()
{
    bool _result = ((::GeomAdaptor_Curve*)_NativeInstance)->IsRational();
    return _result;
}

int RDC::OCC::GeomAdaptor_Curve::NbPoles()
{
    int _result = ((::GeomAdaptor_Curve*)_NativeInstance)->NbPoles();
    return _result;
}

int RDC::OCC::GeomAdaptor_Curve::NbKnots()
{
    int _result = ((::GeomAdaptor_Curve*)_NativeInstance)->NbKnots();
    return _result;
}

RDC::OCC::Geom_BezierCurve^ RDC::OCC::GeomAdaptor_Curve::Bezier()
{
    Handle(::Geom_BezierCurve) _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BezierCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::GeomAdaptor_Curve::BSpline()
{
    Handle(::Geom_BSplineCurve) _result = ((::GeomAdaptor_Curve*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_OffsetCurve^ RDC::OCC::GeomAdaptor_Curve::OffsetCurve()
{
    Handle(::Geom_OffsetCurve) _result = ((::GeomAdaptor_Curve*)_NativeInstance)->OffsetCurve();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_OffsetCurve::CreateDowncasted(_result.get());
}

RDC::OCC::GeomAdaptor_Curve^ RDC::OCC::GeomAdaptor_Curve::CreateDowncasted(::GeomAdaptor_Curve* instance)
{
    return gcnew RDC::OCC::GeomAdaptor_Curve( instance );
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor_Surface
//---------------------------------------------------------------------

RDC::OCC::GeomAdaptor_Surface::GeomAdaptor_Surface()
    : RDC::OCC::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Surface();
}

RDC::OCC::GeomAdaptor_Surface::GeomAdaptor_Surface(RDC::OCC::Geom_Surface^ theSurf)
    : RDC::OCC::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Surface(Handle(::Geom_Surface)(theSurf->NativeInstance));
}

RDC::OCC::GeomAdaptor_Surface::GeomAdaptor_Surface(RDC::OCC::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU, double theTolV)
    : RDC::OCC::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Surface(Handle(::Geom_Surface)(theSurf->NativeInstance), theUFirst, theULast, theVFirst, theVLast, theTolU, theTolV);
}

RDC::OCC::GeomAdaptor_Surface::GeomAdaptor_Surface(RDC::OCC::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU)
    : RDC::OCC::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Surface(Handle(::Geom_Surface)(theSurf->NativeInstance), theUFirst, theULast, theVFirst, theVLast, theTolU, 0.);
}

RDC::OCC::GeomAdaptor_Surface::GeomAdaptor_Surface(RDC::OCC::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast)
    : RDC::OCC::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Surface(Handle(::Geom_Surface)(theSurf->NativeInstance), theUFirst, theULast, theVFirst, theVLast, 0., 0.);
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::GeomAdaptor_Surface::ShallowCopy()
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

void RDC::OCC::GeomAdaptor_Surface::Load(RDC::OCC::Geom_Surface^ theSurf)
{
    ((::GeomAdaptor_Surface*)_NativeInstance)->Load(Handle(::Geom_Surface)(theSurf->NativeInstance));
}

void RDC::OCC::GeomAdaptor_Surface::Load(RDC::OCC::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU, double theTolV)
{
    ((::GeomAdaptor_Surface*)_NativeInstance)->Load(Handle(::Geom_Surface)(theSurf->NativeInstance), theUFirst, theULast, theVFirst, theVLast, theTolU, theTolV);
}

void RDC::OCC::GeomAdaptor_Surface::Load(RDC::OCC::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU)
{
    ((::GeomAdaptor_Surface*)_NativeInstance)->Load(Handle(::Geom_Surface)(theSurf->NativeInstance), theUFirst, theULast, theVFirst, theVLast, theTolU, 0.);
}

void RDC::OCC::GeomAdaptor_Surface::Load(RDC::OCC::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast)
{
    ((::GeomAdaptor_Surface*)_NativeInstance)->Load(Handle(::Geom_Surface)(theSurf->NativeInstance), theUFirst, theULast, theVFirst, theVLast, 0., 0.);
}

RDC::OCC::Geom_Surface^ RDC::OCC::GeomAdaptor_Surface::Surface()
{
    Handle(::Geom_Surface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}

double RDC::OCC::GeomAdaptor_Surface::FirstUParameter()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->FirstUParameter();
    return _result;
}

double RDC::OCC::GeomAdaptor_Surface::LastUParameter()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->LastUParameter();
    return _result;
}

double RDC::OCC::GeomAdaptor_Surface::FirstVParameter()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->FirstVParameter();
    return _result;
}

double RDC::OCC::GeomAdaptor_Surface::LastVParameter()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->LastVParameter();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::GeomAdaptor_Surface::UContinuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_Surface*)_NativeInstance)->UContinuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::GeomAdaptor_Surface::VContinuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_Surface*)_NativeInstance)->VContinuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::GeomAdaptor_Surface::NbUIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)S);
    return _result;
}

int RDC::OCC::GeomAdaptor_Surface::NbVIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)S);
    return _result;
}

void RDC::OCC::GeomAdaptor_Surface::UIntervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::GeomAdaptor_Surface*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void RDC::OCC::GeomAdaptor_Surface::VIntervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::GeomAdaptor_Surface*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::GeomAdaptor_Surface::UTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->UTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::GeomAdaptor_Surface::VTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->VTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomAdaptor_Surface::IsUClosed()
{
    bool _result = ((::GeomAdaptor_Surface*)_NativeInstance)->IsUClosed();
    return _result;
}

bool RDC::OCC::GeomAdaptor_Surface::IsVClosed()
{
    bool _result = ((::GeomAdaptor_Surface*)_NativeInstance)->IsVClosed();
    return _result;
}

bool RDC::OCC::GeomAdaptor_Surface::IsUPeriodic()
{
    bool _result = ((::GeomAdaptor_Surface*)_NativeInstance)->IsUPeriodic();
    return _result;
}

double RDC::OCC::GeomAdaptor_Surface::UPeriod()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->UPeriod();
    return _result;
}

bool RDC::OCC::GeomAdaptor_Surface::IsVPeriodic()
{
    bool _result = ((::GeomAdaptor_Surface*)_NativeInstance)->IsVPeriodic();
    return _result;
}

double RDC::OCC::GeomAdaptor_Surface::VPeriod()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->VPeriod();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::GeomAdaptor_Surface::Value(double U, double V)
{
    ::gp_Pnt _nativeResult = ((::GeomAdaptor_Surface*)_NativeInstance)->Value(U, V);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::GeomAdaptor_Surface::D0(double U, double V, RDC::OCC::Pnt% P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::GeomAdaptor_Surface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::GeomAdaptor_Surface::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
    pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
    ((::GeomAdaptor_Surface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::GeomAdaptor_Surface::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
    pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
    pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
    pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
    pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
    ((::GeomAdaptor_Surface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::GeomAdaptor_Surface::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
    pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
    pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
    pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
    pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
    pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
    pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
    pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
    pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
    ((::GeomAdaptor_Surface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::GeomAdaptor_Surface::DN(double U, double V, int Nu, int Nv)
{
    ::gp_Vec _nativeResult = ((::GeomAdaptor_Surface*)_NativeInstance)->DN(U, V, Nu, Nv);
    return RDC::OCC::Vec(_nativeResult);
}

double RDC::OCC::GeomAdaptor_Surface::UResolution(double R3d)
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->UResolution(R3d);
    return _result;
}

double RDC::OCC::GeomAdaptor_Surface::VResolution(double R3d)
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->VResolution(R3d);
    return _result;
}

RDC::OCC::GeomAbs_SurfaceType RDC::OCC::GeomAdaptor_Surface::GetSurfaceType()
{
    ::GeomAbs_SurfaceType _result = ((::GeomAdaptor_Surface*)_NativeInstance)->GetType();
    return (RDC::OCC::GeomAbs_SurfaceType)_result;
}

RDC::OCC::Pln RDC::OCC::GeomAdaptor_Surface::Plane()
{
    ::gp_Pln _nativeResult = ((::GeomAdaptor_Surface*)_NativeInstance)->Plane();
    return RDC::OCC::Pln(_nativeResult);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::GeomAdaptor_Surface::Cylinder()
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    *_result = ((::GeomAdaptor_Surface*)_NativeInstance)->Cylinder();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

RDC::OCC::gp_Cone^ RDC::OCC::GeomAdaptor_Surface::Cone()
{
    ::gp_Cone* _result = new ::gp_Cone();
    *_result = ((::GeomAdaptor_Surface*)_NativeInstance)->Cone();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

RDC::OCC::gp_Sphere^ RDC::OCC::GeomAdaptor_Surface::Sphere()
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    *_result = ((::GeomAdaptor_Surface*)_NativeInstance)->Sphere();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}

RDC::OCC::gp_Torus^ RDC::OCC::GeomAdaptor_Surface::Torus()
{
    ::gp_Torus* _result = new ::gp_Torus();
    *_result = ((::GeomAdaptor_Surface*)_NativeInstance)->Torus();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}

int RDC::OCC::GeomAdaptor_Surface::UDegree()
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->UDegree();
    return _result;
}

int RDC::OCC::GeomAdaptor_Surface::NbUPoles()
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->NbUPoles();
    return _result;
}

int RDC::OCC::GeomAdaptor_Surface::VDegree()
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->VDegree();
    return _result;
}

int RDC::OCC::GeomAdaptor_Surface::NbVPoles()
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->NbVPoles();
    return _result;
}

int RDC::OCC::GeomAdaptor_Surface::NbUKnots()
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->NbUKnots();
    return _result;
}

int RDC::OCC::GeomAdaptor_Surface::NbVKnots()
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->NbVKnots();
    return _result;
}

bool RDC::OCC::GeomAdaptor_Surface::IsURational()
{
    bool _result = ((::GeomAdaptor_Surface*)_NativeInstance)->IsURational();
    return _result;
}

bool RDC::OCC::GeomAdaptor_Surface::IsVRational()
{
    bool _result = ((::GeomAdaptor_Surface*)_NativeInstance)->IsVRational();
    return _result;
}

RDC::OCC::Geom_BezierSurface^ RDC::OCC::GeomAdaptor_Surface::Bezier()
{
    Handle(::Geom_BezierSurface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BezierSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomAdaptor_Surface::BSpline()
{
    Handle(::Geom_BSplineSurface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Ax1 RDC::OCC::GeomAdaptor_Surface::AxeOfRevolution()
{
    ::gp_Ax1 _nativeResult = ((::GeomAdaptor_Surface*)_NativeInstance)->AxeOfRevolution();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::GeomAdaptor_Surface::Direction()
{
    ::gp_Dir _nativeResult = ((::GeomAdaptor_Surface*)_NativeInstance)->Direction();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::GeomAdaptor_Surface::BasisCurve()
{
    Handle(::Adaptor3d_Curve) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->BasisCurve();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::GeomAdaptor_Surface::BasisSurface()
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->BasisSurface();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

double RDC::OCC::GeomAdaptor_Surface::OffsetValue()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->OffsetValue();
    return _result;
}

RDC::OCC::GeomAdaptor_Surface^ RDC::OCC::GeomAdaptor_Surface::CreateDowncasted(::GeomAdaptor_Surface* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::GeomAdaptor_SurfaceOfLinearExtrusion)))
        return RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::CreateDowncasted((::GeomAdaptor_SurfaceOfLinearExtrusion*)instance);
    if (instance->IsKind(STANDARD_TYPE(::GeomAdaptor_SurfaceOfRevolution)))
        return RDC::OCC::GeomAdaptor_SurfaceOfRevolution::CreateDowncasted((::GeomAdaptor_SurfaceOfRevolution*)instance);
    
    return gcnew RDC::OCC::GeomAdaptor_Surface( instance );
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor_SurfaceOfLinearExtrusion
//---------------------------------------------------------------------

RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::GeomAdaptor_SurfaceOfLinearExtrusion()
    : RDC::OCC::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_SurfaceOfLinearExtrusion();
}

RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::GeomAdaptor_SurfaceOfLinearExtrusion(RDC::OCC::Adaptor3d_Curve^ C)
    : RDC::OCC::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_SurfaceOfLinearExtrusion(Handle(::Adaptor3d_Curve)(C->NativeInstance));
}

RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::GeomAdaptor_SurfaceOfLinearExtrusion(RDC::OCC::Adaptor3d_Curve^ C, RDC::OCC::Dir V)
    : RDC::OCC::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_V = &V;
    NativeInstance = new ::GeomAdaptor_SurfaceOfLinearExtrusion(Handle(::Adaptor3d_Curve)(C->NativeInstance), *(gp_Dir*)pp_V);
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::ShallowCopy()
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

void RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::Load(RDC::OCC::Adaptor3d_Curve^ C)
{
    ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Load(Handle(::Adaptor3d_Curve)(C->NativeInstance));
}

void RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::Load(RDC::OCC::Dir V)
{
    pin_ptr<RDC::OCC::Dir> pp_V = &V;
    ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Load(*(gp_Dir*)pp_V);
}

double RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::FirstUParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->FirstUParameter();
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::LastUParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->LastUParameter();
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::FirstVParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->FirstVParameter();
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::LastVParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->LastVParameter();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::UContinuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UContinuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::VContinuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VContinuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::NbUIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)S);
    return _result;
}

int RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::NbVIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)S);
    return _result;
}

void RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::UIntervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::VIntervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::UTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::VTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::IsUClosed()
{
    bool _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsUClosed();
    return _result;
}

bool RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::IsVClosed()
{
    bool _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsVClosed();
    return _result;
}

bool RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::IsUPeriodic()
{
    bool _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsUPeriodic();
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::UPeriod()
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UPeriod();
    return _result;
}

bool RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::IsVPeriodic()
{
    bool _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsVPeriodic();
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::VPeriod()
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VPeriod();
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::UResolution(double R3d)
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UResolution(R3d);
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::VResolution(double R3d)
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VResolution(R3d);
    return _result;
}

RDC::OCC::GeomAbs_SurfaceType RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::GetSurfaceType()
{
    ::GeomAbs_SurfaceType _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->GetType();
    return (RDC::OCC::GeomAbs_SurfaceType)_result;
}

RDC::OCC::Pln RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::Plane()
{
    ::gp_Pln _nativeResult = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Plane();
    return RDC::OCC::Pln(_nativeResult);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::Cylinder()
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    *_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Cylinder();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

RDC::OCC::gp_Cone^ RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::Cone()
{
    ::gp_Cone* _result = new ::gp_Cone();
    *_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Cone();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

RDC::OCC::gp_Sphere^ RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::Sphere()
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    *_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Sphere();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}

RDC::OCC::gp_Torus^ RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::Torus()
{
    ::gp_Torus* _result = new ::gp_Torus();
    *_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Torus();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}

int RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::UDegree()
{
    int _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UDegree();
    return _result;
}

int RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::NbUPoles()
{
    int _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->NbUPoles();
    return _result;
}

bool RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::IsURational()
{
    bool _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsURational();
    return _result;
}

bool RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::IsVRational()
{
    bool _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsVRational();
    return _result;
}

RDC::OCC::Geom_BezierSurface^ RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::Bezier()
{
    Handle(::Geom_BezierSurface) _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BezierSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::BSpline()
{
    Handle(::Geom_BSplineSurface) _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Ax1 RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::AxeOfRevolution()
{
    ::gp_Ax1 _nativeResult = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->AxeOfRevolution();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::Direction()
{
    ::gp_Dir _nativeResult = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Direction();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::BasisCurve()
{
    Handle(::Adaptor3d_Curve) _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->BasisCurve();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion^ RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion::CreateDowncasted(::GeomAdaptor_SurfaceOfLinearExtrusion* instance)
{
    return gcnew RDC::OCC::GeomAdaptor_SurfaceOfLinearExtrusion( instance );
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor_SurfaceOfRevolution
//---------------------------------------------------------------------

RDC::OCC::GeomAdaptor_SurfaceOfRevolution::GeomAdaptor_SurfaceOfRevolution()
    : RDC::OCC::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_SurfaceOfRevolution();
}

RDC::OCC::GeomAdaptor_SurfaceOfRevolution::GeomAdaptor_SurfaceOfRevolution(RDC::OCC::Adaptor3d_Curve^ C)
    : RDC::OCC::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_SurfaceOfRevolution(Handle(::Adaptor3d_Curve)(C->NativeInstance));
}

RDC::OCC::GeomAdaptor_SurfaceOfRevolution::GeomAdaptor_SurfaceOfRevolution(RDC::OCC::Adaptor3d_Curve^ C, RDC::OCC::Ax1 V)
    : RDC::OCC::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_V = &V;
    NativeInstance = new ::GeomAdaptor_SurfaceOfRevolution(Handle(::Adaptor3d_Curve)(C->NativeInstance), *(gp_Ax1*)pp_V);
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::GeomAdaptor_SurfaceOfRevolution::ShallowCopy()
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

void RDC::OCC::GeomAdaptor_SurfaceOfRevolution::Load(RDC::OCC::Adaptor3d_Curve^ C)
{
    ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Load(Handle(::Adaptor3d_Curve)(C->NativeInstance));
}

void RDC::OCC::GeomAdaptor_SurfaceOfRevolution::Load(RDC::OCC::Ax1 V)
{
    pin_ptr<RDC::OCC::Ax1> pp_V = &V;
    ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Load(*(gp_Ax1*)pp_V);
}

RDC::OCC::Ax1 RDC::OCC::GeomAdaptor_SurfaceOfRevolution::AxeOfRevolution()
{
    ::gp_Ax1 _nativeResult = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->AxeOfRevolution();
    return RDC::OCC::Ax1(_nativeResult);
}

double RDC::OCC::GeomAdaptor_SurfaceOfRevolution::FirstUParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->FirstUParameter();
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfRevolution::LastUParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->LastUParameter();
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfRevolution::FirstVParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->FirstVParameter();
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfRevolution::LastVParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->LastVParameter();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::GeomAdaptor_SurfaceOfRevolution::UContinuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UContinuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::GeomAdaptor_SurfaceOfRevolution::VContinuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VContinuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::GeomAdaptor_SurfaceOfRevolution::NbUIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)S);
    return _result;
}

int RDC::OCC::GeomAdaptor_SurfaceOfRevolution::NbVIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)S);
    return _result;
}

void RDC::OCC::GeomAdaptor_SurfaceOfRevolution::UIntervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void RDC::OCC::GeomAdaptor_SurfaceOfRevolution::VIntervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::GeomAdaptor_SurfaceOfRevolution::UTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::GeomAdaptor_SurfaceOfRevolution::VTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

bool RDC::OCC::GeomAdaptor_SurfaceOfRevolution::IsUClosed()
{
    bool _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsUClosed();
    return _result;
}

bool RDC::OCC::GeomAdaptor_SurfaceOfRevolution::IsVClosed()
{
    bool _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsVClosed();
    return _result;
}

bool RDC::OCC::GeomAdaptor_SurfaceOfRevolution::IsUPeriodic()
{
    bool _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsUPeriodic();
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfRevolution::UPeriod()
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UPeriod();
    return _result;
}

bool RDC::OCC::GeomAdaptor_SurfaceOfRevolution::IsVPeriodic()
{
    bool _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsVPeriodic();
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfRevolution::VPeriod()
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VPeriod();
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfRevolution::UResolution(double R3d)
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UResolution(R3d);
    return _result;
}

double RDC::OCC::GeomAdaptor_SurfaceOfRevolution::VResolution(double R3d)
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VResolution(R3d);
    return _result;
}

RDC::OCC::GeomAbs_SurfaceType RDC::OCC::GeomAdaptor_SurfaceOfRevolution::GetSurfaceType()
{
    ::GeomAbs_SurfaceType _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->GetType();
    return (RDC::OCC::GeomAbs_SurfaceType)_result;
}

RDC::OCC::Pln RDC::OCC::GeomAdaptor_SurfaceOfRevolution::Plane()
{
    ::gp_Pln _nativeResult = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Plane();
    return RDC::OCC::Pln(_nativeResult);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::GeomAdaptor_SurfaceOfRevolution::Cylinder()
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    *_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Cylinder();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

RDC::OCC::gp_Cone^ RDC::OCC::GeomAdaptor_SurfaceOfRevolution::Cone()
{
    ::gp_Cone* _result = new ::gp_Cone();
    *_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Cone();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

RDC::OCC::gp_Sphere^ RDC::OCC::GeomAdaptor_SurfaceOfRevolution::Sphere()
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    *_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Sphere();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}

RDC::OCC::gp_Torus^ RDC::OCC::GeomAdaptor_SurfaceOfRevolution::Torus()
{
    ::gp_Torus* _result = new ::gp_Torus();
    *_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Torus();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}

int RDC::OCC::GeomAdaptor_SurfaceOfRevolution::VDegree()
{
    int _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VDegree();
    return _result;
}

int RDC::OCC::GeomAdaptor_SurfaceOfRevolution::NbVPoles()
{
    int _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->NbVPoles();
    return _result;
}

int RDC::OCC::GeomAdaptor_SurfaceOfRevolution::NbVKnots()
{
    int _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->NbVKnots();
    return _result;
}

bool RDC::OCC::GeomAdaptor_SurfaceOfRevolution::IsURational()
{
    bool _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsURational();
    return _result;
}

bool RDC::OCC::GeomAdaptor_SurfaceOfRevolution::IsVRational()
{
    bool _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsVRational();
    return _result;
}

RDC::OCC::Geom_BezierSurface^ RDC::OCC::GeomAdaptor_SurfaceOfRevolution::Bezier()
{
    Handle(::Geom_BezierSurface) _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BezierSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::GeomAdaptor_SurfaceOfRevolution::BSpline()
{
    Handle(::Geom_BSplineSurface) _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Ax3 RDC::OCC::GeomAdaptor_SurfaceOfRevolution::Axis()
{
    ::gp_Ax3 _nativeResult = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Axis();
    return RDC::OCC::Ax3(_nativeResult);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::GeomAdaptor_SurfaceOfRevolution::BasisCurve()
{
    Handle(::Adaptor3d_Curve) _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->BasisCurve();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::GeomAdaptor_SurfaceOfRevolution^ RDC::OCC::GeomAdaptor_SurfaceOfRevolution::CreateDowncasted(::GeomAdaptor_SurfaceOfRevolution* instance)
{
    return gcnew RDC::OCC::GeomAdaptor_SurfaceOfRevolution( instance );
}



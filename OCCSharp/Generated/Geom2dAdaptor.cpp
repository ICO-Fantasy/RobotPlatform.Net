// Generated wrapper code for package Geom2dAdaptor

#include "OcctPCH.h"
#include "Geom2dAdaptor.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "Adaptor2d.h"
#include "BRepAdaptor.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  Geom2dAdaptor
//---------------------------------------------------------------------

RDC::OCC::Geom2dAdaptor::Geom2dAdaptor()
    : RDC::OCC::BaseClass<::Geom2dAdaptor>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAdaptor();
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::Geom2dAdaptor::MakeCurve(RDC::OCC::Adaptor2d_Curve2d^ HC)
{
    Handle(::Geom2d_Curve) _result = ::Geom2dAdaptor::MakeCurve(*(::Adaptor2d_Curve2d*)HC->NativeInstance);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  Geom2dAdaptor_Curve
//---------------------------------------------------------------------

RDC::OCC::Geom2dAdaptor_Curve::Geom2dAdaptor_Curve()
    : RDC::OCC::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2dAdaptor_Curve();
}

RDC::OCC::Geom2dAdaptor_Curve::Geom2dAdaptor_Curve(RDC::OCC::Geom2d_Curve^ C)
    : RDC::OCC::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2dAdaptor_Curve(Handle(::Geom2d_Curve)(C->NativeInstance));
}

RDC::OCC::Geom2dAdaptor_Curve::Geom2dAdaptor_Curve(RDC::OCC::Geom2d_Curve^ C, double UFirst, double ULast)
    : RDC::OCC::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2dAdaptor_Curve(Handle(::Geom2d_Curve)(C->NativeInstance), UFirst, ULast);
}

RDC::OCC::Adaptor2d_Curve2d^ RDC::OCC::Geom2dAdaptor_Curve::ShallowCopy()
{
    Handle(::Adaptor2d_Curve2d) _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2dAdaptor_Curve::Reset()
{
    ((::Geom2dAdaptor_Curve*)_NativeInstance)->Reset();
}

void RDC::OCC::Geom2dAdaptor_Curve::Load(RDC::OCC::Geom2d_Curve^ theCurve)
{
    ((::Geom2dAdaptor_Curve*)_NativeInstance)->Load(Handle(::Geom2d_Curve)(theCurve->NativeInstance));
}

void RDC::OCC::Geom2dAdaptor_Curve::Load(RDC::OCC::Geom2d_Curve^ theCurve, double theUFirst, double theULast)
{
    ((::Geom2dAdaptor_Curve*)_NativeInstance)->Load(Handle(::Geom2d_Curve)(theCurve->NativeInstance), theUFirst, theULast);
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::Geom2dAdaptor_Curve::Curve()
{
    Handle(::Geom2d_Curve) _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

double RDC::OCC::Geom2dAdaptor_Curve::FirstParameter()
{
    double _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::Geom2dAdaptor_Curve::LastParameter()
{
    double _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->LastParameter();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom2dAdaptor_Curve::Continuity()
{
    ::GeomAbs_Shape _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::Geom2dAdaptor_Curve::NbIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void RDC::OCC::Geom2dAdaptor_Curve::Intervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::Geom2dAdaptor_Curve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

RDC::OCC::Adaptor2d_Curve2d^ RDC::OCC::Geom2dAdaptor_Curve::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor2d_Curve2d) _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

bool RDC::OCC::Geom2dAdaptor_Curve::IsClosed()
{
    bool _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::Geom2dAdaptor_Curve::IsPeriodic()
{
    bool _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double RDC::OCC::Geom2dAdaptor_Curve::Period()
{
    double _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Period();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::Geom2dAdaptor_Curve::Value(double U)
{
    ::gp_Pnt2d _nativeResult = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Value(U);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::Geom2dAdaptor_Curve::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2dAdaptor_Curve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2dAdaptor_Curve::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    ((::Geom2dAdaptor_Curve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V);
}

void RDC::OCC::Geom2dAdaptor_Curve::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::Geom2dAdaptor_Curve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::Geom2dAdaptor_Curve::D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::Geom2dAdaptor_Curve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::Geom2dAdaptor_Curve::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::Geom2dAdaptor_Curve*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

double RDC::OCC::Geom2dAdaptor_Curve::Resolution(double Ruv)
{
    double _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Resolution(Ruv);
    return _result;
}

RDC::OCC::GeomAbs_CurveType RDC::OCC::Geom2dAdaptor_Curve::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->GetType();
    return (RDC::OCC::GeomAbs_CurveType)_result;
}

RDC::OCC::gp_Lin2d^ RDC::OCC::Geom2dAdaptor_Curve::Line()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Line();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::Geom2dAdaptor_Curve::Circle()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Circle();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::Geom2dAdaptor_Curve::Ellipse()
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    *_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Ellipse();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::Geom2dAdaptor_Curve::Hyperbola()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Hyperbola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::Geom2dAdaptor_Curve::Parabola()
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    *_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Parabola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

int RDC::OCC::Geom2dAdaptor_Curve::Degree()
{
    int _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Degree();
    return _result;
}

bool RDC::OCC::Geom2dAdaptor_Curve::IsRational()
{
    bool _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->IsRational();
    return _result;
}

int RDC::OCC::Geom2dAdaptor_Curve::NbPoles()
{
    int _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->NbPoles();
    return _result;
}

int RDC::OCC::Geom2dAdaptor_Curve::NbKnots()
{
    int _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->NbKnots();
    return _result;
}

int RDC::OCC::Geom2dAdaptor_Curve::NbSamples()
{
    int _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->NbSamples();
    return _result;
}

RDC::OCC::Geom2d_BezierCurve^ RDC::OCC::Geom2dAdaptor_Curve::Bezier()
{
    Handle(::Geom2d_BezierCurve) _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BezierCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::Geom2dAdaptor_Curve::BSpline()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2dAdaptor_Curve^ RDC::OCC::Geom2dAdaptor_Curve::CreateDowncasted(::Geom2dAdaptor_Curve* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRepAdaptor_Curve2d)))
        return RDC::OCC::BRepAdaptor_Curve2d::CreateDowncasted((::BRepAdaptor_Curve2d*)instance);
    
    return gcnew RDC::OCC::Geom2dAdaptor_Curve( instance );
}



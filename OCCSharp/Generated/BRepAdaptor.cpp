// Generated wrapper code for package BRepAdaptor

#include "OcctPCH.h"
#include "BRepAdaptor.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "Adaptor3d.h"
#include "gp.h"
#include "GeomAdaptor.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "Geom.h"
#include "Adaptor2d.h"


//---------------------------------------------------------------------
//  Class  BRepAdaptor_Array1OfCurve
//---------------------------------------------------------------------

RDC::OCC::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve()
    : RDC::OCC::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve();
}

RDC::OCC::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(int theLower, int theUpper)
    : RDC::OCC::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve(theLower, theUpper);
}

RDC::OCC::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(RDC::OCC::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : RDC::OCC::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve(*(::BRepAdaptor_Curve*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

RDC::OCC::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(RDC::OCC::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper)
    : RDC::OCC::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve(*(::BRepAdaptor_Curve*)theBegin->NativeInstance, theLower, theUpper, true);
}

void RDC::OCC::BRepAdaptor_Array1OfCurve::Init(RDC::OCC::BRepAdaptor_Curve^ theValue)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Init(*(::BRepAdaptor_Curve*)theValue->NativeInstance);
}

int RDC::OCC::BRepAdaptor_Array1OfCurve::Size()
{
    int _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::BRepAdaptor_Array1OfCurve::Length()
{
    int _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::BRepAdaptor_Array1OfCurve::IsEmpty()
{
    bool _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::BRepAdaptor_Array1OfCurve::Lower()
{
    int _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::BRepAdaptor_Array1OfCurve::Upper()
{
    int _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::BRepAdaptor_Array1OfCurve^ RDC::OCC::BRepAdaptor_Array1OfCurve::Assign(RDC::OCC::BRepAdaptor_Array1OfCurve^ theOther)
{
    ::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
    *_result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Assign(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepAdaptor_Array1OfCurve(_result);
}

RDC::OCC::BRepAdaptor_Array1OfCurve^ RDC::OCC::BRepAdaptor_Array1OfCurve::Move(RDC::OCC::BRepAdaptor_Array1OfCurve^ theOther)
{
    ::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
    *_result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Move(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepAdaptor_Array1OfCurve(_result);
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_Array1OfCurve::First()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->First();
    return gcnew RDC::OCC::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_Array1OfCurve::ChangeFirst()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeFirst();
    return gcnew RDC::OCC::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_Array1OfCurve::Last()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Last();
    return gcnew RDC::OCC::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_Array1OfCurve::ChangeLast()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeLast();
    return gcnew RDC::OCC::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_Array1OfCurve::Value(int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Value(theIndex);
    return gcnew RDC::OCC::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_Array1OfCurve::ChangeValue(int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeValue(theIndex);
    return gcnew RDC::OCC::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

void RDC::OCC::BRepAdaptor_Array1OfCurve::SetValue(int theIndex, RDC::OCC::BRepAdaptor_Curve^ theItem)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->SetValue(theIndex, *(::BRepAdaptor_Curve*)theItem->NativeInstance);
}

void RDC::OCC::BRepAdaptor_Array1OfCurve::UpdateLowerBound(int theLower)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::BRepAdaptor_Array1OfCurve::UpdateUpperBound(int theUpper)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::BRepAdaptor_Array1OfCurve::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::BRepAdaptor_Array1OfCurve::IsDeletable()
{
    bool _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<RDC::OCC::BRepAdaptor_Curve^>^ RDC::OCC::BRepAdaptor_Array1OfCurve::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::BRepAdaptor_Curve^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::BRepAdaptor_Array1OfCurve::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::BRepAdaptor_Curve^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Array1OfCurve::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Curve
//---------------------------------------------------------------------

RDC::OCC::BRepAdaptor_Curve::BRepAdaptor_Curve()
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve();
}

RDC::OCC::BRepAdaptor_Curve::BRepAdaptor_Curve(RDC::OCC::TopoDS_Edge^ E)
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve(*(::TopoDS_Edge*)E->NativeInstance);
}

RDC::OCC::BRepAdaptor_Curve::BRepAdaptor_Curve(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F)
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::BRepAdaptor_Curve::ShallowCopy()
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_Curve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::BRepAdaptor_Curve::Reset()
{
    ((::BRepAdaptor_Curve*)_NativeInstance)->Reset();
}

void RDC::OCC::BRepAdaptor_Curve::Initialize(RDC::OCC::TopoDS_Edge^ E)
{
    ((::BRepAdaptor_Curve*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance);
}

void RDC::OCC::BRepAdaptor_Curve::Initialize(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F)
{
    ((::BRepAdaptor_Curve*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

RDC::OCC::Trsf RDC::OCC::BRepAdaptor_Curve::Trsf()
{
    ::gp_Trsf _nativeResult = ((::BRepAdaptor_Curve*)_NativeInstance)->Trsf();
    return RDC::OCC::Trsf(_nativeResult);
}

bool RDC::OCC::BRepAdaptor_Curve::Is3DCurve()
{
    bool _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Is3DCurve();
    return _result;
}

bool RDC::OCC::BRepAdaptor_Curve::IsCurveOnSurface()
{
    bool _result = ((::BRepAdaptor_Curve*)_NativeInstance)->IsCurveOnSurface();
    return _result;
}

RDC::OCC::GeomAdaptor_Curve^ RDC::OCC::BRepAdaptor_Curve::Curve()
{
    const ::GeomAdaptor_Curve& _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Curve();
    return gcnew RDC::OCC::GeomAdaptor_Curve((::GeomAdaptor_Curve*)_result.ShallowCopy().get());
}

RDC::OCC::Adaptor3d_CurveOnSurface^ RDC::OCC::BRepAdaptor_Curve::CurveOnSurface()
{
    const ::Adaptor3d_CurveOnSurface& _result = ((::BRepAdaptor_Curve*)_NativeInstance)->CurveOnSurface();
    return gcnew RDC::OCC::Adaptor3d_CurveOnSurface((::Adaptor3d_CurveOnSurface*)_result.ShallowCopy().get());
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepAdaptor_Curve::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepAdaptor_Curve*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

double RDC::OCC::BRepAdaptor_Curve::Tolerance()
{
    double _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Tolerance();
    return _result;
}

double RDC::OCC::BRepAdaptor_Curve::FirstParameter()
{
    double _result = ((::BRepAdaptor_Curve*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::BRepAdaptor_Curve::LastParameter()
{
    double _result = ((::BRepAdaptor_Curve*)_NativeInstance)->LastParameter();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepAdaptor_Curve::Continuity()
{
    ::GeomAbs_Shape _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::BRepAdaptor_Curve::NbIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::BRepAdaptor_Curve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void RDC::OCC::BRepAdaptor_Curve::Intervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::BRepAdaptor_Curve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::BRepAdaptor_Curve::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

bool RDC::OCC::BRepAdaptor_Curve::IsClosed()
{
    bool _result = ((::BRepAdaptor_Curve*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::BRepAdaptor_Curve::IsPeriodic()
{
    bool _result = ((::BRepAdaptor_Curve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double RDC::OCC::BRepAdaptor_Curve::Period()
{
    double _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Period();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::BRepAdaptor_Curve::Value(double U)
{
    ::gp_Pnt _nativeResult = ((::BRepAdaptor_Curve*)_NativeInstance)->Value(U);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::BRepAdaptor_Curve::D0(double U, RDC::OCC::Pnt% P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::BRepAdaptor_Curve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::BRepAdaptor_Curve::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V = &V;
    ((::BRepAdaptor_Curve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void RDC::OCC::BRepAdaptor_Curve::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ((::BRepAdaptor_Curve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::BRepAdaptor_Curve::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ((::BRepAdaptor_Curve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::BRepAdaptor_Curve::DN(double U, int N)
{
    ::gp_Vec _nativeResult = ((::BRepAdaptor_Curve*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec(_nativeResult);
}

double RDC::OCC::BRepAdaptor_Curve::Resolution(double R3d)
{
    double _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Resolution(R3d);
    return _result;
}

RDC::OCC::GeomAbs_CurveType RDC::OCC::BRepAdaptor_Curve::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::BRepAdaptor_Curve*)_NativeInstance)->GetType();
    return (RDC::OCC::GeomAbs_CurveType)_result;
}

RDC::OCC::gp_Lin^ RDC::OCC::BRepAdaptor_Curve::Line()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Line();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::BRepAdaptor_Curve::Circle()
{
    ::gp_Circ* _result = new ::gp_Circ();
    *_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Circle();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

RDC::OCC::gp_Elips^ RDC::OCC::BRepAdaptor_Curve::Ellipse()
{
    ::gp_Elips* _result = new ::gp_Elips();
    *_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Ellipse();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

RDC::OCC::gp_Hypr^ RDC::OCC::BRepAdaptor_Curve::Hyperbola()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Hyperbola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

RDC::OCC::gp_Parab^ RDC::OCC::BRepAdaptor_Curve::Parabola()
{
    ::gp_Parab* _result = new ::gp_Parab();
    *_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Parabola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

int RDC::OCC::BRepAdaptor_Curve::Degree()
{
    int _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Degree();
    return _result;
}

bool RDC::OCC::BRepAdaptor_Curve::IsRational()
{
    bool _result = ((::BRepAdaptor_Curve*)_NativeInstance)->IsRational();
    return _result;
}

int RDC::OCC::BRepAdaptor_Curve::NbPoles()
{
    int _result = ((::BRepAdaptor_Curve*)_NativeInstance)->NbPoles();
    return _result;
}

int RDC::OCC::BRepAdaptor_Curve::NbKnots()
{
    int _result = ((::BRepAdaptor_Curve*)_NativeInstance)->NbKnots();
    return _result;
}

RDC::OCC::Geom_BezierCurve^ RDC::OCC::BRepAdaptor_Curve::Bezier()
{
    Handle(::Geom_BezierCurve) _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BezierCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::BRepAdaptor_Curve::BSpline()
{
    Handle(::Geom_BSplineCurve) _result = ((::BRepAdaptor_Curve*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_OffsetCurve^ RDC::OCC::BRepAdaptor_Curve::OffsetCurve()
{
    Handle(::Geom_OffsetCurve) _result = ((::BRepAdaptor_Curve*)_NativeInstance)->OffsetCurve();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_OffsetCurve::CreateDowncasted(_result.get());
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_Curve::CreateDowncasted(::BRepAdaptor_Curve* instance)
{
    return gcnew RDC::OCC::BRepAdaptor_Curve( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_HArray1OfCurve
//---------------------------------------------------------------------

RDC::OCC::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve();
}

RDC::OCC::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(int theLower, int theUpper)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve(theLower, theUpper);
}

RDC::OCC::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(int theLower, int theUpper, RDC::OCC::BRepAdaptor_Curve^ theValue)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve(theLower, theUpper, *(::BRepAdaptor_Curve*)theValue->NativeInstance);
}

RDC::OCC::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(RDC::OCC::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper, bool parameter1)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve(*(::BRepAdaptor_Curve*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

RDC::OCC::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(RDC::OCC::BRepAdaptor_Array1OfCurve^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
}

RDC::OCC::BRepAdaptor_Array1OfCurve^ RDC::OCC::BRepAdaptor_HArray1OfCurve::Array1()
{
    ::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
    *_result = (::BRepAdaptor_Array1OfCurve)((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepAdaptor_Array1OfCurve(_result);
}

RDC::OCC::BRepAdaptor_Array1OfCurve^ RDC::OCC::BRepAdaptor_HArray1OfCurve::ChangeArray1()
{
    ::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
    *_result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepAdaptor_Array1OfCurve(_result);
}

void RDC::OCC::BRepAdaptor_HArray1OfCurve::Init(RDC::OCC::BRepAdaptor_Curve^ theValue)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Init(*(::BRepAdaptor_Curve*)theValue->NativeInstance);
}

int RDC::OCC::BRepAdaptor_HArray1OfCurve::Size()
{
    int _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::BRepAdaptor_HArray1OfCurve::Length()
{
    int _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Length();
    return _result;
}

bool RDC::OCC::BRepAdaptor_HArray1OfCurve::IsEmpty()
{
    bool _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->IsEmpty();
    return _result;
}

int RDC::OCC::BRepAdaptor_HArray1OfCurve::Lower()
{
    int _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::BRepAdaptor_HArray1OfCurve::Upper()
{
    int _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Upper();
    return _result;
}

RDC::OCC::BRepAdaptor_HArray1OfCurve^ RDC::OCC::BRepAdaptor_HArray1OfCurve::Assign(RDC::OCC::BRepAdaptor_HArray1OfCurve^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::BRepAdaptor_HArray1OfCurve^ RDC::OCC::BRepAdaptor_HArray1OfCurve::Move(RDC::OCC::BRepAdaptor_HArray1OfCurve^ theOther)
{
    throw gcnew System::NotImplementedException();
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_HArray1OfCurve::First()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->First();
    return gcnew RDC::OCC::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_HArray1OfCurve::ChangeFirst()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeFirst();
    return gcnew RDC::OCC::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_HArray1OfCurve::Last()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Last();
    return gcnew RDC::OCC::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_HArray1OfCurve::ChangeLast()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeLast();
    return gcnew RDC::OCC::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_HArray1OfCurve::Value(int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Value(theIndex);
    return gcnew RDC::OCC::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

RDC::OCC::BRepAdaptor_Curve^ RDC::OCC::BRepAdaptor_HArray1OfCurve::ChangeValue(int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeValue(theIndex);
    return gcnew RDC::OCC::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

void RDC::OCC::BRepAdaptor_HArray1OfCurve::SetValue(int theIndex, RDC::OCC::BRepAdaptor_Curve^ theItem)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->SetValue(theIndex, *(::BRepAdaptor_Curve*)theItem->NativeInstance);
}

void RDC::OCC::BRepAdaptor_HArray1OfCurve::UpdateLowerBound(int theLower)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->UpdateLowerBound(theLower);
}

void RDC::OCC::BRepAdaptor_HArray1OfCurve::UpdateUpperBound(int theUpper)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void RDC::OCC::BRepAdaptor_HArray1OfCurve::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool RDC::OCC::BRepAdaptor_HArray1OfCurve::IsDeletable()
{
    bool _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->IsDeletable();
    return _result;
}

RDC::OCC::BRepAdaptor_HArray1OfCurve^ RDC::OCC::BRepAdaptor_HArray1OfCurve::CreateDowncasted(::BRepAdaptor_HArray1OfCurve* instance)
{
    return gcnew RDC::OCC::BRepAdaptor_HArray1OfCurve( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::BRepAdaptor_Curve^>^ RDC::OCC::BRepAdaptor_HArray1OfCurve::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::BRepAdaptor_Curve^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::BRepAdaptor_HArray1OfCurve::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::BRepAdaptor_Curve^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_HArray1OfCurve::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  BRepAdaptor_CompCurve
//---------------------------------------------------------------------

RDC::OCC::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve()
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_CompCurve();
}

RDC::OCC::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(RDC::OCC::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa)
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_CompCurve(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa);
}

RDC::OCC::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_CompCurve(*(::TopoDS_Wire*)W->NativeInstance, false);
}

RDC::OCC::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(RDC::OCC::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa, double First, double Last, double Tol)
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_CompCurve(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa, First, Last, Tol);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::BRepAdaptor_CompCurve::ShallowCopy()
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::BRepAdaptor_CompCurve::Initialize(RDC::OCC::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa)
{
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->Initialize(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa);
}

void RDC::OCC::BRepAdaptor_CompCurve::Initialize(RDC::OCC::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa, double First, double Last, double Tol)
{
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->Initialize(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa, First, Last, Tol);
}

RDC::OCC::TopoDS_Wire^ RDC::OCC::BRepAdaptor_CompCurve::Wire()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)((::BRepAdaptor_CompCurve*)_NativeInstance)->Wire();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Wire(_result);
}

void RDC::OCC::BRepAdaptor_CompCurve::Edge(double U, RDC::OCC::TopoDS_Edge^ E, double% UonE)
{
    pin_ptr<double> pp_UonE = &UonE;
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->Edge(U, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_UonE);
}

double RDC::OCC::BRepAdaptor_CompCurve::FirstParameter()
{
    double _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::BRepAdaptor_CompCurve::LastParameter()
{
    double _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->LastParameter();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepAdaptor_CompCurve::Continuity()
{
    ::GeomAbs_Shape _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::BRepAdaptor_CompCurve::NbIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void RDC::OCC::BRepAdaptor_CompCurve::Intervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::BRepAdaptor_CompCurve::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

bool RDC::OCC::BRepAdaptor_CompCurve::IsClosed()
{
    bool _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::BRepAdaptor_CompCurve::IsPeriodic()
{
    bool _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double RDC::OCC::BRepAdaptor_CompCurve::Period()
{
    double _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Period();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::BRepAdaptor_CompCurve::Value(double U)
{
    ::gp_Pnt _nativeResult = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Value(U);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::BRepAdaptor_CompCurve::D0(double U, RDC::OCC::Pnt% P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::BRepAdaptor_CompCurve::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V = &V;
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void RDC::OCC::BRepAdaptor_CompCurve::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::BRepAdaptor_CompCurve::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::BRepAdaptor_CompCurve::DN(double U, int N)
{
    ::gp_Vec _nativeResult = ((::BRepAdaptor_CompCurve*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec(_nativeResult);
}

double RDC::OCC::BRepAdaptor_CompCurve::Resolution(double R3d)
{
    double _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Resolution(R3d);
    return _result;
}

RDC::OCC::GeomAbs_CurveType RDC::OCC::BRepAdaptor_CompCurve::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->GetType();
    return (RDC::OCC::GeomAbs_CurveType)_result;
}

RDC::OCC::gp_Lin^ RDC::OCC::BRepAdaptor_CompCurve::Line()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Line();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::BRepAdaptor_CompCurve::Circle()
{
    ::gp_Circ* _result = new ::gp_Circ();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Circle();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

RDC::OCC::gp_Elips^ RDC::OCC::BRepAdaptor_CompCurve::Ellipse()
{
    ::gp_Elips* _result = new ::gp_Elips();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Ellipse();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

RDC::OCC::gp_Hypr^ RDC::OCC::BRepAdaptor_CompCurve::Hyperbola()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Hyperbola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

RDC::OCC::gp_Parab^ RDC::OCC::BRepAdaptor_CompCurve::Parabola()
{
    ::gp_Parab* _result = new ::gp_Parab();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Parabola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

int RDC::OCC::BRepAdaptor_CompCurve::Degree()
{
    int _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Degree();
    return _result;
}

bool RDC::OCC::BRepAdaptor_CompCurve::IsRational()
{
    bool _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->IsRational();
    return _result;
}

int RDC::OCC::BRepAdaptor_CompCurve::NbPoles()
{
    int _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->NbPoles();
    return _result;
}

int RDC::OCC::BRepAdaptor_CompCurve::NbKnots()
{
    int _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->NbKnots();
    return _result;
}

RDC::OCC::Geom_BezierCurve^ RDC::OCC::BRepAdaptor_CompCurve::Bezier()
{
    Handle(::Geom_BezierCurve) _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BezierCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::BRepAdaptor_CompCurve::BSpline()
{
    Handle(::Geom_BSplineCurve) _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::BRepAdaptor_CompCurve^ RDC::OCC::BRepAdaptor_CompCurve::CreateDowncasted(::BRepAdaptor_CompCurve* instance)
{
    return gcnew RDC::OCC::BRepAdaptor_CompCurve( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Curve2d
//---------------------------------------------------------------------

RDC::OCC::BRepAdaptor_Curve2d::BRepAdaptor_Curve2d()
    : RDC::OCC::Geom2dAdaptor_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve2d();
}

RDC::OCC::BRepAdaptor_Curve2d::BRepAdaptor_Curve2d(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F)
    : RDC::OCC::Geom2dAdaptor_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

RDC::OCC::Adaptor2d_Curve2d^ RDC::OCC::BRepAdaptor_Curve2d::ShallowCopy()
{
    Handle(::Adaptor2d_Curve2d) _result = ((::BRepAdaptor_Curve2d*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

void RDC::OCC::BRepAdaptor_Curve2d::Initialize(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F)
{
    ((::BRepAdaptor_Curve2d*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepAdaptor_Curve2d::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepAdaptor_Curve2d*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepAdaptor_Curve2d::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepAdaptor_Curve2d*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::BRepAdaptor_Curve2d^ RDC::OCC::BRepAdaptor_Curve2d::CreateDowncasted(::BRepAdaptor_Curve2d* instance)
{
    return gcnew RDC::OCC::BRepAdaptor_Curve2d( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Surface
//---------------------------------------------------------------------

RDC::OCC::BRepAdaptor_Surface::BRepAdaptor_Surface()
    : RDC::OCC::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Surface();
}

RDC::OCC::BRepAdaptor_Surface::BRepAdaptor_Surface(RDC::OCC::TopoDS_Face^ F, bool R)
    : RDC::OCC::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Surface(*(::TopoDS_Face*)F->NativeInstance, R);
}

RDC::OCC::BRepAdaptor_Surface::BRepAdaptor_Surface(RDC::OCC::TopoDS_Face^ F)
    : RDC::OCC::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Surface(*(::TopoDS_Face*)F->NativeInstance, true);
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::BRepAdaptor_Surface::ShallowCopy()
{
    Handle(::Adaptor3d_Surface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

void RDC::OCC::BRepAdaptor_Surface::Initialize(RDC::OCC::TopoDS_Face^ F, bool Restriction)
{
    ((::BRepAdaptor_Surface*)_NativeInstance)->Initialize(*(::TopoDS_Face*)F->NativeInstance, Restriction);
}

void RDC::OCC::BRepAdaptor_Surface::Initialize(RDC::OCC::TopoDS_Face^ F)
{
    ((::BRepAdaptor_Surface*)_NativeInstance)->Initialize(*(::TopoDS_Face*)F->NativeInstance, true);
}

RDC::OCC::GeomAdaptor_Surface^ RDC::OCC::BRepAdaptor_Surface::Surface()
{
    const ::GeomAdaptor_Surface& _result = ((::BRepAdaptor_Surface*)_NativeInstance)->Surface();
    return gcnew RDC::OCC::GeomAdaptor_Surface((::GeomAdaptor_Surface*)_result.ShallowCopy().get());
}

RDC::OCC::GeomAdaptor_Surface^ RDC::OCC::BRepAdaptor_Surface::ChangeSurface()
{
    const ::GeomAdaptor_Surface& _result = ((::BRepAdaptor_Surface*)_NativeInstance)->ChangeSurface();
    return gcnew RDC::OCC::GeomAdaptor_Surface((::GeomAdaptor_Surface*)_result.ShallowCopy().get());
}

RDC::OCC::Trsf RDC::OCC::BRepAdaptor_Surface::Trsf()
{
    ::gp_Trsf _nativeResult = ((::BRepAdaptor_Surface*)_NativeInstance)->Trsf();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepAdaptor_Surface::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepAdaptor_Surface*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

double RDC::OCC::BRepAdaptor_Surface::Tolerance()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->Tolerance();
    return _result;
}

double RDC::OCC::BRepAdaptor_Surface::FirstUParameter()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->FirstUParameter();
    return _result;
}

double RDC::OCC::BRepAdaptor_Surface::LastUParameter()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->LastUParameter();
    return _result;
}

double RDC::OCC::BRepAdaptor_Surface::FirstVParameter()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->FirstVParameter();
    return _result;
}

double RDC::OCC::BRepAdaptor_Surface::LastVParameter()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->LastVParameter();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepAdaptor_Surface::UContinuity()
{
    ::GeomAbs_Shape _result = ((::BRepAdaptor_Surface*)_NativeInstance)->UContinuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepAdaptor_Surface::VContinuity()
{
    ::GeomAbs_Shape _result = ((::BRepAdaptor_Surface*)_NativeInstance)->VContinuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::BRepAdaptor_Surface::NbUIntervals(RDC::OCC::GeomAbs_Shape theSh)
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)theSh);
    return _result;
}

int RDC::OCC::BRepAdaptor_Surface::NbVIntervals(RDC::OCC::GeomAbs_Shape theSh)
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)theSh);
    return _result;
}

void RDC::OCC::BRepAdaptor_Surface::UIntervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::BRepAdaptor_Surface*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void RDC::OCC::BRepAdaptor_Surface::VIntervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::BRepAdaptor_Surface*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::BRepAdaptor_Surface::UTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->UTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::BRepAdaptor_Surface::VTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->VTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

bool RDC::OCC::BRepAdaptor_Surface::IsUClosed()
{
    bool _result = ((::BRepAdaptor_Surface*)_NativeInstance)->IsUClosed();
    return _result;
}

bool RDC::OCC::BRepAdaptor_Surface::IsVClosed()
{
    bool _result = ((::BRepAdaptor_Surface*)_NativeInstance)->IsVClosed();
    return _result;
}

bool RDC::OCC::BRepAdaptor_Surface::IsUPeriodic()
{
    bool _result = ((::BRepAdaptor_Surface*)_NativeInstance)->IsUPeriodic();
    return _result;
}

double RDC::OCC::BRepAdaptor_Surface::UPeriod()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->UPeriod();
    return _result;
}

bool RDC::OCC::BRepAdaptor_Surface::IsVPeriodic()
{
    bool _result = ((::BRepAdaptor_Surface*)_NativeInstance)->IsVPeriodic();
    return _result;
}

double RDC::OCC::BRepAdaptor_Surface::VPeriod()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->VPeriod();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::BRepAdaptor_Surface::Value(double U, double V)
{
    ::gp_Pnt _nativeResult = ((::BRepAdaptor_Surface*)_NativeInstance)->Value(U, V);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::BRepAdaptor_Surface::D0(double U, double V, RDC::OCC::Pnt% P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::BRepAdaptor_Surface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::BRepAdaptor_Surface::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
    pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
    ((::BRepAdaptor_Surface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::BRepAdaptor_Surface::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
    pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
    pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
    pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
    pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
    ((::BRepAdaptor_Surface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::BRepAdaptor_Surface::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
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
    ((::BRepAdaptor_Surface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::BRepAdaptor_Surface::DN(double U, double V, int Nu, int Nv)
{
    ::gp_Vec _nativeResult = ((::BRepAdaptor_Surface*)_NativeInstance)->DN(U, V, Nu, Nv);
    return RDC::OCC::Vec(_nativeResult);
}

double RDC::OCC::BRepAdaptor_Surface::UResolution(double theR3d)
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->UResolution(theR3d);
    return _result;
}

double RDC::OCC::BRepAdaptor_Surface::VResolution(double theR3d)
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->VResolution(theR3d);
    return _result;
}

RDC::OCC::GeomAbs_SurfaceType RDC::OCC::BRepAdaptor_Surface::GetSurfaceType()
{
    ::GeomAbs_SurfaceType _result = ((::BRepAdaptor_Surface*)_NativeInstance)->GetType();
    return (RDC::OCC::GeomAbs_SurfaceType)_result;
}

RDC::OCC::Pln RDC::OCC::BRepAdaptor_Surface::Plane()
{
    ::gp_Pln _nativeResult = ((::BRepAdaptor_Surface*)_NativeInstance)->Plane();
    return RDC::OCC::Pln(_nativeResult);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::BRepAdaptor_Surface::Cylinder()
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    *_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Cylinder();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

RDC::OCC::gp_Cone^ RDC::OCC::BRepAdaptor_Surface::Cone()
{
    ::gp_Cone* _result = new ::gp_Cone();
    *_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Cone();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

RDC::OCC::gp_Sphere^ RDC::OCC::BRepAdaptor_Surface::Sphere()
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    *_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Sphere();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}

RDC::OCC::gp_Torus^ RDC::OCC::BRepAdaptor_Surface::Torus()
{
    ::gp_Torus* _result = new ::gp_Torus();
    *_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Torus();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}

int RDC::OCC::BRepAdaptor_Surface::UDegree()
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->UDegree();
    return _result;
}

int RDC::OCC::BRepAdaptor_Surface::NbUPoles()
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->NbUPoles();
    return _result;
}

int RDC::OCC::BRepAdaptor_Surface::VDegree()
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->VDegree();
    return _result;
}

int RDC::OCC::BRepAdaptor_Surface::NbVPoles()
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->NbVPoles();
    return _result;
}

int RDC::OCC::BRepAdaptor_Surface::NbUKnots()
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->NbUKnots();
    return _result;
}

int RDC::OCC::BRepAdaptor_Surface::NbVKnots()
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->NbVKnots();
    return _result;
}

bool RDC::OCC::BRepAdaptor_Surface::IsURational()
{
    bool _result = ((::BRepAdaptor_Surface*)_NativeInstance)->IsURational();
    return _result;
}

bool RDC::OCC::BRepAdaptor_Surface::IsVRational()
{
    bool _result = ((::BRepAdaptor_Surface*)_NativeInstance)->IsVRational();
    return _result;
}

RDC::OCC::Geom_BezierSurface^ RDC::OCC::BRepAdaptor_Surface::Bezier()
{
    Handle(::Geom_BezierSurface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BezierSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::BRepAdaptor_Surface::BSpline()
{
    Handle(::Geom_BSplineSurface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Ax1 RDC::OCC::BRepAdaptor_Surface::AxeOfRevolution()
{
    ::gp_Ax1 _nativeResult = ((::BRepAdaptor_Surface*)_NativeInstance)->AxeOfRevolution();
    return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::BRepAdaptor_Surface::Direction()
{
    ::gp_Dir _nativeResult = ((::BRepAdaptor_Surface*)_NativeInstance)->Direction();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::BRepAdaptor_Surface::BasisCurve()
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->BasisCurve();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::BRepAdaptor_Surface::BasisSurface()
{
    Handle(::Adaptor3d_Surface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->BasisSurface();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

double RDC::OCC::BRepAdaptor_Surface::OffsetValue()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->OffsetValue();
    return _result;
}

RDC::OCC::BRepAdaptor_Surface^ RDC::OCC::BRepAdaptor_Surface::CreateDowncasted(::BRepAdaptor_Surface* instance)
{
    return gcnew RDC::OCC::BRepAdaptor_Surface( instance );
}



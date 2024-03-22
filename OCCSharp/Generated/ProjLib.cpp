// Generated wrapper code for package ProjLib

#include "OcctPCH.h"
#include "ProjLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TColgp.h"
#include "Adaptor3d.h"
#include "Adaptor2d.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "gp.h"
#include "Geom2d.h"
#include "Geom.h"
#include "GeomAdaptor.h"


//---------------------------------------------------------------------
//  Class  ProjLib_SequenceOfHSequenceOfPnt
//---------------------------------------------------------------------

RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::ProjLib_SequenceOfHSequenceOfPnt()
    : RDC::OCC::BaseClass<::ProjLib_SequenceOfHSequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_SequenceOfHSequenceOfPnt();
}

RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::ProjLib_SequenceOfHSequenceOfPnt(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::ProjLib_SequenceOfHSequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_SequenceOfHSequenceOfPnt(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Size()
{
    int _result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Length()
{
    int _result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Lower()
{
    int _result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Upper()
{
    int _result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::IsEmpty()
{
    bool _result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Reverse()
{
    ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Reverse();
}

void RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Exchange(int I, int J)
{
    ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Clear()
{
    ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Clear(0L);
}

RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt^ RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Assign(RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt^ theOther)
{
    ::ProjLib_SequenceOfHSequenceOfPnt* _result = new ::ProjLib_SequenceOfHSequenceOfPnt();
    *_result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Assign(*(::ProjLib_SequenceOfHSequenceOfPnt*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt(_result);
}

void RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Remove(RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Iterator^ thePosition)
{
    ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Remove(*(::ProjLib_SequenceOfHSequenceOfPnt::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Append(RDC::OCC::TColgp_HSequenceOfPnt^ theItem)
{
    ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Append(Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance));
}

void RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Prepend(RDC::OCC::TColgp_HSequenceOfPnt^ theItem)
{
    ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Prepend(Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance));
}

void RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::InsertBefore(int theIndex, RDC::OCC::TColgp_HSequenceOfPnt^ theItem)
{
    ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->InsertBefore(theIndex, Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance));
}

void RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::InsertAfter(RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Iterator^ thePosition, RDC::OCC::TColgp_HSequenceOfPnt^ theItem)
{
    ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->InsertAfter(*(::ProjLib_SequenceOfHSequenceOfPnt::Iterator*)thePosition->NativeInstance, Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance));
}

void RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Split(int theIndex, RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt^ theSeq)
{
    ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Split(theIndex, *(::ProjLib_SequenceOfHSequenceOfPnt*)theSeq->NativeInstance);
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::First()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::ChangeFirst()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Last()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::ChangeLast()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Value(int theIndex)
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::ChangeValue(int theIndex)
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

void RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::SetValue(int theIndex, RDC::OCC::TColgp_HSequenceOfPnt^ theItem)
{
    ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->SetValue(theIndex, Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<RDC::OCC::TColgp_HSequenceOfPnt^>^ RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::TColgp_HSequenceOfPnt^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::TColgp_HSequenceOfPnt^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  ProjLib_SequenceOfHSequenceOfPnt::Iterator
//---------------------------------------------------------------------

RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Iterator::Iterator()
    : RDC::OCC::BaseClass<::ProjLib_SequenceOfHSequenceOfPnt::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_SequenceOfHSequenceOfPnt::Iterator();
}

bool RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Iterator::More()
{
    bool _result = ((::ProjLib_SequenceOfHSequenceOfPnt::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Iterator::Next()
{
    ((::ProjLib_SequenceOfHSequenceOfPnt::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Iterator::Value()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_SequenceOfHSequenceOfPnt::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Iterator::ChangeValue()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_SequenceOfHSequenceOfPnt::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

bool RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Iterator::IsEqual(RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Iterator^ theOther)
{
    bool _result = ((::ProjLib_SequenceOfHSequenceOfPnt::Iterator*)_NativeInstance)->IsEqual(*(::ProjLib_SequenceOfHSequenceOfPnt::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  ProjLib_ProjectedCurve
//---------------------------------------------------------------------

RDC::OCC::ProjLib_ProjectedCurve::ProjLib_ProjectedCurve()
    : RDC::OCC::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ProjLib_ProjectedCurve();
}

RDC::OCC::ProjLib_ProjectedCurve::ProjLib_ProjectedCurve(RDC::OCC::Adaptor3d_Surface^ S)
    : RDC::OCC::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ProjLib_ProjectedCurve(Handle(::Adaptor3d_Surface)(S->NativeInstance));
}

RDC::OCC::ProjLib_ProjectedCurve::ProjLib_ProjectedCurve(RDC::OCC::Adaptor3d_Surface^ S, RDC::OCC::Adaptor3d_Curve^ C)
    : RDC::OCC::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ProjLib_ProjectedCurve(Handle(::Adaptor3d_Surface)(S->NativeInstance), Handle(::Adaptor3d_Curve)(C->NativeInstance));
}

RDC::OCC::ProjLib_ProjectedCurve::ProjLib_ProjectedCurve(RDC::OCC::Adaptor3d_Surface^ S, RDC::OCC::Adaptor3d_Curve^ C, double Tol)
    : RDC::OCC::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ProjLib_ProjectedCurve(Handle(::Adaptor3d_Surface)(S->NativeInstance), Handle(::Adaptor3d_Curve)(C->NativeInstance), Tol);
}

RDC::OCC::Adaptor2d_Curve2d^ RDC::OCC::ProjLib_ProjectedCurve::ShallowCopy()
{
    Handle(::Adaptor2d_Curve2d) _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

void RDC::OCC::ProjLib_ProjectedCurve::Load(double Tolerance)
{
    ((::ProjLib_ProjectedCurve*)_NativeInstance)->Load(Tolerance);
}

void RDC::OCC::ProjLib_ProjectedCurve::Load(RDC::OCC::Adaptor3d_Surface^ S)
{
    ((::ProjLib_ProjectedCurve*)_NativeInstance)->Load(Handle(::Adaptor3d_Surface)(S->NativeInstance));
}

void RDC::OCC::ProjLib_ProjectedCurve::Perform(RDC::OCC::Adaptor3d_Curve^ C)
{
    ((::ProjLib_ProjectedCurve*)_NativeInstance)->Perform(Handle(::Adaptor3d_Curve)(C->NativeInstance));
}

void RDC::OCC::ProjLib_ProjectedCurve::SetDegree(int theDegMin, int theDegMax)
{
    ((::ProjLib_ProjectedCurve*)_NativeInstance)->SetDegree(theDegMin, theDegMax);
}

void RDC::OCC::ProjLib_ProjectedCurve::SetMaxSegments(int theMaxSegments)
{
    ((::ProjLib_ProjectedCurve*)_NativeInstance)->SetMaxSegments(theMaxSegments);
}

void RDC::OCC::ProjLib_ProjectedCurve::SetMaxDist(double theMaxDist)
{
    ((::ProjLib_ProjectedCurve*)_NativeInstance)->SetMaxDist(theMaxDist);
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::ProjLib_ProjectedCurve::GetSurface()
{
    Handle(::Adaptor3d_Surface) _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->GetSurface();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::ProjLib_ProjectedCurve::GetCurve()
{
    Handle(::Adaptor3d_Curve) _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->GetCurve();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

double RDC::OCC::ProjLib_ProjectedCurve::GetTolerance()
{
    double _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->GetTolerance();
    return _result;
}

double RDC::OCC::ProjLib_ProjectedCurve::FirstParameter()
{
    double _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::ProjLib_ProjectedCurve::LastParameter()
{
    double _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->LastParameter();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::ProjLib_ProjectedCurve::Continuity()
{
    ::GeomAbs_Shape _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::ProjLib_ProjectedCurve::NbIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void RDC::OCC::ProjLib_ProjectedCurve::Intervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::ProjLib_ProjectedCurve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

RDC::OCC::Adaptor2d_Curve2d^ RDC::OCC::ProjLib_ProjectedCurve::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor2d_Curve2d) _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

bool RDC::OCC::ProjLib_ProjectedCurve::IsClosed()
{
    bool _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::ProjLib_ProjectedCurve::IsPeriodic()
{
    bool _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double RDC::OCC::ProjLib_ProjectedCurve::Period()
{
    double _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Period();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::ProjLib_ProjectedCurve::Value(double U)
{
    ::gp_Pnt2d _nativeResult = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Value(U);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::ProjLib_ProjectedCurve::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::ProjLib_ProjectedCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::ProjLib_ProjectedCurve::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    ((::ProjLib_ProjectedCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V);
}

void RDC::OCC::ProjLib_ProjectedCurve::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::ProjLib_ProjectedCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::ProjLib_ProjectedCurve::D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::ProjLib_ProjectedCurve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::ProjLib_ProjectedCurve::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::ProjLib_ProjectedCurve*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

double RDC::OCC::ProjLib_ProjectedCurve::Resolution(double R3d)
{
    double _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Resolution(R3d);
    return _result;
}

RDC::OCC::GeomAbs_CurveType RDC::OCC::ProjLib_ProjectedCurve::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->GetType();
    return (RDC::OCC::GeomAbs_CurveType)_result;
}

RDC::OCC::gp_Lin2d^ RDC::OCC::ProjLib_ProjectedCurve::Line()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Line();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::ProjLib_ProjectedCurve::Circle()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Circle();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::ProjLib_ProjectedCurve::Ellipse()
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    *_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Ellipse();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::ProjLib_ProjectedCurve::Hyperbola()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Hyperbola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::ProjLib_ProjectedCurve::Parabola()
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    *_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Parabola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

int RDC::OCC::ProjLib_ProjectedCurve::Degree()
{
    int _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Degree();
    return _result;
}

bool RDC::OCC::ProjLib_ProjectedCurve::IsRational()
{
    bool _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->IsRational();
    return _result;
}

int RDC::OCC::ProjLib_ProjectedCurve::NbPoles()
{
    int _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->NbPoles();
    return _result;
}

int RDC::OCC::ProjLib_ProjectedCurve::NbKnots()
{
    int _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->NbKnots();
    return _result;
}

RDC::OCC::Geom2d_BezierCurve^ RDC::OCC::ProjLib_ProjectedCurve::Bezier()
{
    Handle(::Geom2d_BezierCurve) _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BezierCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::ProjLib_ProjectedCurve::BSpline()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::ProjLib_ProjectedCurve^ RDC::OCC::ProjLib_ProjectedCurve::CreateDowncasted(::ProjLib_ProjectedCurve* instance)
{
    return gcnew RDC::OCC::ProjLib_ProjectedCurve( instance );
}



//---------------------------------------------------------------------
//  Class  ProjLib
//---------------------------------------------------------------------

RDC::OCC::ProjLib::ProjLib()
    : RDC::OCC::BaseClass<::ProjLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib();
}

RDC::OCC::Pnt2d RDC::OCC::ProjLib::Project(RDC::OCC::Pln Pl, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ::gp_Pnt2d _nativeResult = ::ProjLib::Project(*(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_P);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::ProjLib::Project(RDC::OCC::Pln Pl, RDC::OCC::gp_Lin^ L)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    *_result = ::ProjLib::Project(*(gp_Pln*)pp_Pl, *(::gp_Lin*)L->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::ProjLib::Project(RDC::OCC::Pln Pl, RDC::OCC::gp_Circ^ C)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    *_result = ::ProjLib::Project(*(gp_Pln*)pp_Pl, *(::gp_Circ*)C->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::ProjLib::Project(RDC::OCC::Pln Pl, RDC::OCC::gp_Elips^ E)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    *_result = ::ProjLib::Project(*(gp_Pln*)pp_Pl, *(::gp_Elips*)E->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::ProjLib::Project(RDC::OCC::Pln Pl, RDC::OCC::gp_Parab^ P)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    *_result = ::ProjLib::Project(*(gp_Pln*)pp_Pl, *(::gp_Parab*)P->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::ProjLib::Project(RDC::OCC::Pln Pl, RDC::OCC::gp_Hypr^ H)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    *_result = ::ProjLib::Project(*(gp_Pln*)pp_Pl, *(::gp_Hypr*)H->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

RDC::OCC::Pnt2d RDC::OCC::ProjLib::Project(RDC::OCC::gp_Cylinder^ Cy, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ::gp_Pnt2d _nativeResult = ::ProjLib::Project(*(::gp_Cylinder*)Cy->NativeInstance, *(gp_Pnt*)pp_P);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::ProjLib::Project(RDC::OCC::gp_Cylinder^ Cy, RDC::OCC::gp_Lin^ L)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ::ProjLib::Project(*(::gp_Cylinder*)Cy->NativeInstance, *(::gp_Lin*)L->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::ProjLib::Project(RDC::OCC::gp_Cylinder^ Cy, RDC::OCC::gp_Circ^ Ci)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ::ProjLib::Project(*(::gp_Cylinder*)Cy->NativeInstance, *(::gp_Circ*)Ci->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::Pnt2d RDC::OCC::ProjLib::Project(RDC::OCC::gp_Cone^ Co, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ::gp_Pnt2d _nativeResult = ::ProjLib::Project(*(::gp_Cone*)Co->NativeInstance, *(gp_Pnt*)pp_P);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::ProjLib::Project(RDC::OCC::gp_Cone^ Co, RDC::OCC::gp_Lin^ L)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ::ProjLib::Project(*(::gp_Cone*)Co->NativeInstance, *(::gp_Lin*)L->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::ProjLib::Project(RDC::OCC::gp_Cone^ Co, RDC::OCC::gp_Circ^ Ci)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ::ProjLib::Project(*(::gp_Cone*)Co->NativeInstance, *(::gp_Circ*)Ci->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::Pnt2d RDC::OCC::ProjLib::Project(RDC::OCC::gp_Sphere^ Sp, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ::gp_Pnt2d _nativeResult = ::ProjLib::Project(*(::gp_Sphere*)Sp->NativeInstance, *(gp_Pnt*)pp_P);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::ProjLib::Project(RDC::OCC::gp_Sphere^ Sp, RDC::OCC::gp_Circ^ Ci)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ::ProjLib::Project(*(::gp_Sphere*)Sp->NativeInstance, *(::gp_Circ*)Ci->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::Pnt2d RDC::OCC::ProjLib::Project(RDC::OCC::gp_Torus^ To, RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ::gp_Pnt2d _nativeResult = ::ProjLib::Project(*(::gp_Torus*)To->NativeInstance, *(gp_Pnt*)pp_P);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::ProjLib::Project(RDC::OCC::gp_Torus^ To, RDC::OCC::gp_Circ^ Ci)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ::ProjLib::Project(*(::gp_Torus*)To->NativeInstance, *(::gp_Circ*)Ci->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::ProjLib::MakePCurveOfType(RDC::OCC::ProjLib_ProjectedCurve^ PC, RDC::OCC::Geom2d_Curve^ aC)
{
    Handle(::Geom2d_Curve) h_aC = aC->NativeInstance;
    ::ProjLib::MakePCurveOfType(*(::ProjLib_ProjectedCurve*)PC->NativeInstance, h_aC);
    aC->NativeInstance = h_aC.get();
}

bool RDC::OCC::ProjLib::IsAnaSurf(RDC::OCC::Adaptor3d_Surface^ theAS)
{
    bool _result = ::ProjLib::IsAnaSurf(Handle(::Adaptor3d_Surface)(theAS->NativeInstance));
    return _result;
}



//---------------------------------------------------------------------
//  Class  ProjLib_HSequenceOfHSequenceOfPnt
//---------------------------------------------------------------------

RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::ProjLib_HSequenceOfHSequenceOfPnt()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ProjLib_HSequenceOfHSequenceOfPnt();
}

RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::ProjLib_HSequenceOfHSequenceOfPnt(RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt^ theOther)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ProjLib_HSequenceOfHSequenceOfPnt(*(::ProjLib_SequenceOfHSequenceOfPnt*)theOther->NativeInstance);
}

RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Sequence()
{
    ::ProjLib_SequenceOfHSequenceOfPnt* _result = new ::ProjLib_SequenceOfHSequenceOfPnt();
    *_result = (::ProjLib_SequenceOfHSequenceOfPnt)((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt(_result);
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Append(RDC::OCC::TColgp_HSequenceOfPnt^ theItem)
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Append(Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance));
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Append(RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt^ theSequence)
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Append(*(::ProjLib_SequenceOfHSequenceOfPnt*)theSequence->NativeInstance);
}

RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::ChangeSequence()
{
    ::ProjLib_SequenceOfHSequenceOfPnt* _result = new ::ProjLib_SequenceOfHSequenceOfPnt();
    *_result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeSequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::ProjLib_SequenceOfHSequenceOfPnt(_result);
}

int RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Size()
{
    int _result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Length()
{
    int _result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Lower()
{
    int _result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Upper()
{
    int _result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::IsEmpty()
{
    bool _result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Reverse()
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Reverse();
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Exchange(int I, int J)
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Clear()
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Clear(0L);
}

RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Assign(RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Remove(RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Iterator^ thePosition)
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Remove(*(::ProjLib_HSequenceOfHSequenceOfPnt::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Prepend(RDC::OCC::TColgp_HSequenceOfPnt^ theItem)
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Prepend(Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance));
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::InsertBefore(int theIndex, RDC::OCC::TColgp_HSequenceOfPnt^ theItem)
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->InsertBefore(theIndex, Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance));
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::InsertAfter(RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Iterator^ thePosition, RDC::OCC::TColgp_HSequenceOfPnt^ theItem)
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->InsertAfter(*(::ProjLib_HSequenceOfHSequenceOfPnt::Iterator*)thePosition->NativeInstance, Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance));
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Split(int theIndex, RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt^ theSeq)
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Split(theIndex, *(::ProjLib_HSequenceOfHSequenceOfPnt*)theSeq->NativeInstance);
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::First()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::ChangeFirst()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Last()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::ChangeLast()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Value(int theIndex)
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::ChangeValue(int theIndex)
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::SetValue(int theIndex, RDC::OCC::TColgp_HSequenceOfPnt^ theItem)
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->SetValue(theIndex, Handle(::TColgp_HSequenceOfPnt)(theItem->NativeInstance));
}

RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::CreateDowncasted(::ProjLib_HSequenceOfHSequenceOfPnt* instance)
{
    return gcnew RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt( instance );
}

System::Collections::Generic::IEnumerator<RDC::OCC::TColgp_HSequenceOfPnt^>^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::TColgp_HSequenceOfPnt^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::TColgp_HSequenceOfPnt^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  ProjLib_HSequenceOfHSequenceOfPnt::Iterator
//---------------------------------------------------------------------

RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Iterator::Iterator()
    : RDC::OCC::BaseClass<::ProjLib_HSequenceOfHSequenceOfPnt::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_HSequenceOfHSequenceOfPnt::Iterator();
}

bool RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Iterator::More()
{
    bool _result = ((::ProjLib_HSequenceOfHSequenceOfPnt::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Iterator::Next()
{
    ((::ProjLib_HSequenceOfHSequenceOfPnt::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Iterator::Value()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_HSequenceOfHSequenceOfPnt::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::TColgp_HSequenceOfPnt^ RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Iterator::ChangeValue()
{
    Handle(::TColgp_HSequenceOfPnt) _result = ((::ProjLib_HSequenceOfHSequenceOfPnt::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : RDC::OCC::TColgp_HSequenceOfPnt::CreateDowncasted(_result.get());
}

bool RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Iterator::IsEqual(RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Iterator^ theOther)
{
    bool _result = ((::ProjLib_HSequenceOfHSequenceOfPnt::Iterator*)_NativeInstance)->IsEqual(*(::ProjLib_HSequenceOfHSequenceOfPnt::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  ProjLib_Projector
//---------------------------------------------------------------------

RDC::OCC::ProjLib_Projector::ProjLib_Projector()
    : RDC::OCC::BaseClass<::ProjLib_Projector>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Projector();
}

bool RDC::OCC::ProjLib_Projector::IsDone()
{
    bool _result = ((::ProjLib_Projector*)_NativeInstance)->IsDone();
    return _result;
}

void RDC::OCC::ProjLib_Projector::Done()
{
    ((::ProjLib_Projector*)_NativeInstance)->Done();
}

RDC::OCC::GeomAbs_CurveType RDC::OCC::ProjLib_Projector::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::ProjLib_Projector*)_NativeInstance)->GetType();
    return (RDC::OCC::GeomAbs_CurveType)_result;
}

void RDC::OCC::ProjLib_Projector::SetBSpline(RDC::OCC::Geom2d_BSplineCurve^ C)
{
    ((::ProjLib_Projector*)_NativeInstance)->SetBSpline(Handle(::Geom2d_BSplineCurve)(C->NativeInstance));
}

void RDC::OCC::ProjLib_Projector::SetBezier(RDC::OCC::Geom2d_BezierCurve^ C)
{
    ((::ProjLib_Projector*)_NativeInstance)->SetBezier(Handle(::Geom2d_BezierCurve)(C->NativeInstance));
}

void RDC::OCC::ProjLib_Projector::SetType(RDC::OCC::GeomAbs_CurveType Type)
{
    ((::ProjLib_Projector*)_NativeInstance)->SetType((::GeomAbs_CurveType)Type);
}

bool RDC::OCC::ProjLib_Projector::IsPeriodic()
{
    bool _result = ((::ProjLib_Projector*)_NativeInstance)->IsPeriodic();
    return _result;
}

void RDC::OCC::ProjLib_Projector::SetPeriodic()
{
    ((::ProjLib_Projector*)_NativeInstance)->SetPeriodic();
}

RDC::OCC::gp_Lin2d^ RDC::OCC::ProjLib_Projector::Line()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = (::gp_Lin2d)((::ProjLib_Projector*)_NativeInstance)->Line();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::ProjLib_Projector::Circle()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::ProjLib_Projector*)_NativeInstance)->Circle();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::ProjLib_Projector::Ellipse()
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    *_result = (::gp_Elips2d)((::ProjLib_Projector*)_NativeInstance)->Ellipse();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::ProjLib_Projector::Hyperbola()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = (::gp_Hypr2d)((::ProjLib_Projector*)_NativeInstance)->Hyperbola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::ProjLib_Projector::Parabola()
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    *_result = (::gp_Parab2d)((::ProjLib_Projector*)_NativeInstance)->Parabola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

RDC::OCC::Geom2d_BezierCurve^ RDC::OCC::ProjLib_Projector::Bezier()
{
    Handle(::Geom2d_BezierCurve) _result = ((::ProjLib_Projector*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BezierCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::ProjLib_Projector::BSpline()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::ProjLib_Projector*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

void RDC::OCC::ProjLib_Projector::Project(RDC::OCC::gp_Lin^ L)
{
    ((::ProjLib_Projector*)_NativeInstance)->Project(*(::gp_Lin*)L->NativeInstance);
}

void RDC::OCC::ProjLib_Projector::Project(RDC::OCC::gp_Circ^ C)
{
    ((::ProjLib_Projector*)_NativeInstance)->Project(*(::gp_Circ*)C->NativeInstance);
}

void RDC::OCC::ProjLib_Projector::Project(RDC::OCC::gp_Elips^ E)
{
    ((::ProjLib_Projector*)_NativeInstance)->Project(*(::gp_Elips*)E->NativeInstance);
}

void RDC::OCC::ProjLib_Projector::Project(RDC::OCC::gp_Parab^ P)
{
    ((::ProjLib_Projector*)_NativeInstance)->Project(*(::gp_Parab*)P->NativeInstance);
}

void RDC::OCC::ProjLib_Projector::Project(RDC::OCC::gp_Hypr^ H)
{
    ((::ProjLib_Projector*)_NativeInstance)->Project(*(::gp_Hypr*)H->NativeInstance);
}

void RDC::OCC::ProjLib_Projector::UFrame(double CFirst, double CLast, double UFirst, double Period)
{
    ((::ProjLib_Projector*)_NativeInstance)->UFrame(CFirst, CLast, UFirst, Period);
}

void RDC::OCC::ProjLib_Projector::VFrame(double CFirst, double CLast, double VFirst, double Period)
{
    ((::ProjLib_Projector*)_NativeInstance)->VFrame(CFirst, CLast, VFirst, Period);
}



//---------------------------------------------------------------------
//  Class  ProjLib_CompProjectedCurve
//---------------------------------------------------------------------

RDC::OCC::ProjLib_CompProjectedCurve::ProjLib_CompProjectedCurve()
    : RDC::OCC::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ProjLib_CompProjectedCurve();
}

RDC::OCC::ProjLib_CompProjectedCurve::ProjLib_CompProjectedCurve(RDC::OCC::Adaptor3d_Surface^ S, RDC::OCC::Adaptor3d_Curve^ C, double TolU, double TolV)
    : RDC::OCC::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ProjLib_CompProjectedCurve(Handle(::Adaptor3d_Surface)(S->NativeInstance), Handle(::Adaptor3d_Curve)(C->NativeInstance), TolU, TolV);
}

RDC::OCC::ProjLib_CompProjectedCurve::ProjLib_CompProjectedCurve(RDC::OCC::Adaptor3d_Surface^ S, RDC::OCC::Adaptor3d_Curve^ C, double TolU, double TolV, double MaxDist)
    : RDC::OCC::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ProjLib_CompProjectedCurve(Handle(::Adaptor3d_Surface)(S->NativeInstance), Handle(::Adaptor3d_Curve)(C->NativeInstance), TolU, TolV, MaxDist);
}

RDC::OCC::ProjLib_CompProjectedCurve::ProjLib_CompProjectedCurve(double Tol3d, RDC::OCC::Adaptor3d_Surface^ S, RDC::OCC::Adaptor3d_Curve^ C, double MaxDist)
    : RDC::OCC::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ProjLib_CompProjectedCurve(Tol3d, Handle(::Adaptor3d_Surface)(S->NativeInstance), Handle(::Adaptor3d_Curve)(C->NativeInstance), MaxDist);
}

RDC::OCC::ProjLib_CompProjectedCurve::ProjLib_CompProjectedCurve(double Tol3d, RDC::OCC::Adaptor3d_Surface^ S, RDC::OCC::Adaptor3d_Curve^ C)
    : RDC::OCC::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ProjLib_CompProjectedCurve(Tol3d, Handle(::Adaptor3d_Surface)(S->NativeInstance), Handle(::Adaptor3d_Curve)(C->NativeInstance), -1.);
}

RDC::OCC::Adaptor2d_Curve2d^ RDC::OCC::ProjLib_CompProjectedCurve::ShallowCopy()
{
    Handle(::Adaptor2d_Curve2d) _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

void RDC::OCC::ProjLib_CompProjectedCurve::Init()
{
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->Init();
}

void RDC::OCC::ProjLib_CompProjectedCurve::Perform()
{
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->Perform();
}

void RDC::OCC::ProjLib_CompProjectedCurve::SetTol3d(double theTol3d)
{
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->SetTol3d(theTol3d);
}

void RDC::OCC::ProjLib_CompProjectedCurve::SetContinuity(RDC::OCC::GeomAbs_Shape theContinuity)
{
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->SetContinuity((::GeomAbs_Shape)theContinuity);
}

void RDC::OCC::ProjLib_CompProjectedCurve::SetMaxDegree(int theMaxDegree)
{
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->SetMaxDegree(theMaxDegree);
}

void RDC::OCC::ProjLib_CompProjectedCurve::SetMaxSeg(int theMaxSeg)
{
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->SetMaxSeg(theMaxSeg);
}

void RDC::OCC::ProjLib_CompProjectedCurve::SetProj2d(bool theProj2d)
{
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->SetProj2d(theProj2d);
}

void RDC::OCC::ProjLib_CompProjectedCurve::SetProj3d(bool theProj3d)
{
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->SetProj3d(theProj3d);
}

void RDC::OCC::ProjLib_CompProjectedCurve::Load(RDC::OCC::Adaptor3d_Surface^ S)
{
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->Load(Handle(::Adaptor3d_Surface)(S->NativeInstance));
}

void RDC::OCC::ProjLib_CompProjectedCurve::Load(RDC::OCC::Adaptor3d_Curve^ C)
{
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->Load(Handle(::Adaptor3d_Curve)(C->NativeInstance));
}

RDC::OCC::Adaptor3d_Surface^ RDC::OCC::ProjLib_CompProjectedCurve::GetSurface()
{
    Handle(::Adaptor3d_Surface) _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetSurface();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::ProjLib_CompProjectedCurve::GetCurve()
{
    Handle(::Adaptor3d_Curve) _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetCurve();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::ProjLib_CompProjectedCurve::GetTolerance(double% TolU, double% TolV)
{
    pin_ptr<double> pp_TolU = &TolU;
    pin_ptr<double> pp_TolV = &TolV;
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetTolerance(*(double*)pp_TolU, *(double*)pp_TolV);
}

int RDC::OCC::ProjLib_CompProjectedCurve::NbCurves()
{
    int _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->NbCurves();
    return _result;
}

void RDC::OCC::ProjLib_CompProjectedCurve::Bounds(int Index, double% Udeb, double% Ufin)
{
    pin_ptr<double> pp_Udeb = &Udeb;
    pin_ptr<double> pp_Ufin = &Ufin;
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->Bounds(Index, *(double*)pp_Udeb, *(double*)pp_Ufin);
}

bool RDC::OCC::ProjLib_CompProjectedCurve::IsSinglePnt(int Index, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    bool _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->IsSinglePnt(Index, *(gp_Pnt2d*)pp_P);
    return _result;
}

bool RDC::OCC::ProjLib_CompProjectedCurve::IsUIso(int Index, double% U)
{
    pin_ptr<double> pp_U = &U;
    bool _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->IsUIso(Index, *(double*)pp_U);
    return _result;
}

bool RDC::OCC::ProjLib_CompProjectedCurve::IsVIso(int Index, double% V)
{
    pin_ptr<double> pp_V = &V;
    bool _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->IsVIso(Index, *(double*)pp_V);
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::ProjLib_CompProjectedCurve::Value(double U)
{
    ::gp_Pnt2d _nativeResult = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->Value(U);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::ProjLib_CompProjectedCurve::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::ProjLib_CompProjectedCurve::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V);
}

void RDC::OCC::ProjLib_CompProjectedCurve::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

RDC::OCC::Vec2d RDC::OCC::ProjLib_CompProjectedCurve::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

double RDC::OCC::ProjLib_CompProjectedCurve::FirstParameter()
{
    double _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::ProjLib_CompProjectedCurve::LastParameter()
{
    double _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->LastParameter();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::ProjLib_CompProjectedCurve::Continuity()
{
    ::GeomAbs_Shape _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::ProjLib_CompProjectedCurve::NbIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

RDC::OCC::Adaptor2d_Curve2d^ RDC::OCC::ProjLib_CompProjectedCurve::Trim(double FirstParam, double LastParam, double Tol)
{
    Handle(::Adaptor2d_Curve2d) _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->Trim(FirstParam, LastParam, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

void RDC::OCC::ProjLib_CompProjectedCurve::Intervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::ProjLib_CompProjectedCurve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

double RDC::OCC::ProjLib_CompProjectedCurve::MaxDistance(int Index)
{
    double _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->MaxDistance(Index);
    return _result;
}

RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt^ RDC::OCC::ProjLib_CompProjectedCurve::GetSequence()
{
    Handle(::ProjLib_HSequenceOfHSequenceOfPnt) _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetSequence();
    return _result.IsNull() ? nullptr : RDC::OCC::ProjLib_HSequenceOfHSequenceOfPnt::CreateDowncasted(_result.get());
}

RDC::OCC::GeomAbs_CurveType RDC::OCC::ProjLib_CompProjectedCurve::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetType();
    return (RDC::OCC::GeomAbs_CurveType)_result;
}

bool RDC::OCC::ProjLib_CompProjectedCurve::ResultIsPoint(int theIndex)
{
    bool _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->ResultIsPoint(theIndex);
    return _result;
}

double RDC::OCC::ProjLib_CompProjectedCurve::GetResult2dUApproxError(int theIndex)
{
    double _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetResult2dUApproxError(theIndex);
    return _result;
}

double RDC::OCC::ProjLib_CompProjectedCurve::GetResult2dVApproxError(int theIndex)
{
    double _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetResult2dVApproxError(theIndex);
    return _result;
}

double RDC::OCC::ProjLib_CompProjectedCurve::GetResult3dApproxError(int theIndex)
{
    double _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetResult3dApproxError(theIndex);
    return _result;
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::ProjLib_CompProjectedCurve::GetResult2dC(int theIndex)
{
    Handle(::Geom2d_Curve) _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetResult2dC(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::ProjLib_CompProjectedCurve::GetResult3dC(int theIndex)
{
    Handle(::Geom_Curve) _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetResult3dC(theIndex);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Pnt2d RDC::OCC::ProjLib_CompProjectedCurve::GetResult2dP(int theIndex)
{
    ::gp_Pnt2d _nativeResult = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetResult2dP(theIndex);
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::ProjLib_CompProjectedCurve::GetResult3dP(int theIndex)
{
    ::gp_Pnt _nativeResult = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetResult3dP(theIndex);
    return RDC::OCC::Pnt(_nativeResult);
}

bool RDC::OCC::ProjLib_CompProjectedCurve::GetProj2d()
{
    bool _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetProj2d();
    return _result;
}

bool RDC::OCC::ProjLib_CompProjectedCurve::GetProj3d()
{
    bool _result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetProj3d();
    return _result;
}

RDC::OCC::ProjLib_CompProjectedCurve^ RDC::OCC::ProjLib_CompProjectedCurve::CreateDowncasted(::ProjLib_CompProjectedCurve* instance)
{
    return gcnew RDC::OCC::ProjLib_CompProjectedCurve( instance );
}



//---------------------------------------------------------------------
//  Class  ProjLib_ComputeApprox
//---------------------------------------------------------------------

RDC::OCC::ProjLib_ComputeApprox::ProjLib_ComputeApprox()
    : RDC::OCC::BaseClass<::ProjLib_ComputeApprox>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_ComputeApprox();
}

RDC::OCC::ProjLib_ComputeApprox::ProjLib_ComputeApprox(RDC::OCC::Adaptor3d_Curve^ C, RDC::OCC::Adaptor3d_Surface^ S, double Tol)
    : RDC::OCC::BaseClass<::ProjLib_ComputeApprox>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_ComputeApprox(Handle(::Adaptor3d_Curve)(C->NativeInstance), Handle(::Adaptor3d_Surface)(S->NativeInstance), Tol);
}

void RDC::OCC::ProjLib_ComputeApprox::Perform(RDC::OCC::Adaptor3d_Curve^ C, RDC::OCC::Adaptor3d_Surface^ S)
{
    ((::ProjLib_ComputeApprox*)_NativeInstance)->Perform(Handle(::Adaptor3d_Curve)(C->NativeInstance), Handle(::Adaptor3d_Surface)(S->NativeInstance));
}

void RDC::OCC::ProjLib_ComputeApprox::SetTolerance(double theTolerance)
{
    ((::ProjLib_ComputeApprox*)_NativeInstance)->SetTolerance(theTolerance);
}

void RDC::OCC::ProjLib_ComputeApprox::SetDegree(int theDegMin, int theDegMax)
{
    ((::ProjLib_ComputeApprox*)_NativeInstance)->SetDegree(theDegMin, theDegMax);
}

void RDC::OCC::ProjLib_ComputeApprox::SetMaxSegments(int theMaxSegments)
{
    ((::ProjLib_ComputeApprox*)_NativeInstance)->SetMaxSegments(theMaxSegments);
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::ProjLib_ComputeApprox::BSpline()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::ProjLib_ComputeApprox*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BezierCurve^ RDC::OCC::ProjLib_ComputeApprox::Bezier()
{
    Handle(::Geom2d_BezierCurve) _result = ((::ProjLib_ComputeApprox*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BezierCurve::CreateDowncasted(_result.get());
}

double RDC::OCC::ProjLib_ComputeApprox::Tolerance()
{
    double _result = ((::ProjLib_ComputeApprox*)_NativeInstance)->Tolerance();
    return _result;
}



//---------------------------------------------------------------------
//  Class  ProjLib_ComputeApproxOnPolarSurface
//---------------------------------------------------------------------

RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::ProjLib_ComputeApproxOnPolarSurface()
    : RDC::OCC::BaseClass<::ProjLib_ComputeApproxOnPolarSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_ComputeApproxOnPolarSurface();
}

RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::ProjLib_ComputeApproxOnPolarSurface(RDC::OCC::Adaptor3d_Curve^ C, RDC::OCC::Adaptor3d_Surface^ S, double Tol)
    : RDC::OCC::BaseClass<::ProjLib_ComputeApproxOnPolarSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_ComputeApproxOnPolarSurface(Handle(::Adaptor3d_Curve)(C->NativeInstance), Handle(::Adaptor3d_Surface)(S->NativeInstance), Tol);
}

RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::ProjLib_ComputeApproxOnPolarSurface(RDC::OCC::Adaptor3d_Curve^ C, RDC::OCC::Adaptor3d_Surface^ S)
    : RDC::OCC::BaseClass<::ProjLib_ComputeApproxOnPolarSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_ComputeApproxOnPolarSurface(Handle(::Adaptor3d_Curve)(C->NativeInstance), Handle(::Adaptor3d_Surface)(S->NativeInstance), 1.0E-4);
}

RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::ProjLib_ComputeApproxOnPolarSurface(RDC::OCC::Adaptor2d_Curve2d^ InitCurve2d, RDC::OCC::Adaptor3d_Curve^ C, RDC::OCC::Adaptor3d_Surface^ S, double Tol)
    : RDC::OCC::BaseClass<::ProjLib_ComputeApproxOnPolarSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_ComputeApproxOnPolarSurface(Handle(::Adaptor2d_Curve2d)(InitCurve2d->NativeInstance), Handle(::Adaptor3d_Curve)(C->NativeInstance), Handle(::Adaptor3d_Surface)(S->NativeInstance), Tol);
}

RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::ProjLib_ComputeApproxOnPolarSurface(RDC::OCC::Adaptor2d_Curve2d^ InitCurve2d, RDC::OCC::Adaptor2d_Curve2d^ InitCurve2dBis, RDC::OCC::Adaptor3d_Curve^ C, RDC::OCC::Adaptor3d_Surface^ S, double Tol)
    : RDC::OCC::BaseClass<::ProjLib_ComputeApproxOnPolarSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_ComputeApproxOnPolarSurface(Handle(::Adaptor2d_Curve2d)(InitCurve2d->NativeInstance), Handle(::Adaptor2d_Curve2d)(InitCurve2dBis->NativeInstance), Handle(::Adaptor3d_Curve)(C->NativeInstance), Handle(::Adaptor3d_Surface)(S->NativeInstance), Tol);
}

void RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::SetDegree(int theDegMin, int theDegMax)
{
    ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->SetDegree(theDegMin, theDegMax);
}

void RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::SetMaxSegments(int theMaxSegments)
{
    ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->SetMaxSegments(theMaxSegments);
}

void RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::SetMaxDist(double theMaxDist)
{
    ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->SetMaxDist(theMaxDist);
}

void RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::SetTolerance(double theTolerance)
{
    ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->SetTolerance(theTolerance);
}

void RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::Perform(RDC::OCC::Adaptor3d_Curve^ C, RDC::OCC::Adaptor3d_Surface^ S)
{
    ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->Perform(Handle(::Adaptor3d_Curve)(C->NativeInstance), Handle(::Adaptor3d_Surface)(S->NativeInstance));
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::Perform(RDC::OCC::Adaptor2d_Curve2d^ InitCurve2d, RDC::OCC::Adaptor3d_Curve^ C, RDC::OCC::Adaptor3d_Surface^ S)
{
    Handle(::Geom2d_BSplineCurve) _result = ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->Perform(Handle(::Adaptor2d_Curve2d)(InitCurve2d->NativeInstance), Handle(::Adaptor3d_Curve)(C->NativeInstance), Handle(::Adaptor3d_Surface)(S->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Adaptor2d_Curve2d^ RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::BuildInitialCurve2d(RDC::OCC::Adaptor3d_Curve^ Curve, RDC::OCC::Adaptor3d_Surface^ S)
{
    Handle(::Adaptor2d_Curve2d) _result = ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->BuildInitialCurve2d(Handle(::Adaptor3d_Curve)(Curve->NativeInstance), Handle(::Adaptor3d_Surface)(S->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::ProjectUsingInitialCurve2d(RDC::OCC::Adaptor3d_Curve^ Curve, RDC::OCC::Adaptor3d_Surface^ S, RDC::OCC::Adaptor2d_Curve2d^ InitCurve2d)
{
    Handle(::Geom2d_BSplineCurve) _result = ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->ProjectUsingInitialCurve2d(Handle(::Adaptor3d_Curve)(Curve->NativeInstance), Handle(::Adaptor3d_Surface)(S->NativeInstance), Handle(::Adaptor2d_Curve2d)(InitCurve2d->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::BSpline()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::Curve2d()
{
    Handle(::Geom2d_Curve) _result = ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->Curve2d();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

bool RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::IsDone()
{
    bool _result = ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->IsDone();
    return _result;
}

double RDC::OCC::ProjLib_ComputeApproxOnPolarSurface::Tolerance()
{
    double _result = ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->Tolerance();
    return _result;
}



//---------------------------------------------------------------------
//  Class  ProjLib_Cone
//---------------------------------------------------------------------

RDC::OCC::ProjLib_Cone::ProjLib_Cone()
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Cone();
}

RDC::OCC::ProjLib_Cone::ProjLib_Cone(RDC::OCC::gp_Cone^ Co)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Cone(*(::gp_Cone*)Co->NativeInstance);
}

RDC::OCC::ProjLib_Cone::ProjLib_Cone(RDC::OCC::gp_Cone^ Co, RDC::OCC::gp_Lin^ L)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Cone(*(::gp_Cone*)Co->NativeInstance, *(::gp_Lin*)L->NativeInstance);
}

RDC::OCC::ProjLib_Cone::ProjLib_Cone(RDC::OCC::gp_Cone^ Co, RDC::OCC::gp_Circ^ C)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Cone(*(::gp_Cone*)Co->NativeInstance, *(::gp_Circ*)C->NativeInstance);
}

void RDC::OCC::ProjLib_Cone::Init(RDC::OCC::gp_Cone^ Co)
{
    ((::ProjLib_Cone*)_NativeInstance)->Init(*(::gp_Cone*)Co->NativeInstance);
}

void RDC::OCC::ProjLib_Cone::Project(RDC::OCC::gp_Lin^ L)
{
    ((::ProjLib_Cone*)_NativeInstance)->Project(*(::gp_Lin*)L->NativeInstance);
}

void RDC::OCC::ProjLib_Cone::Project(RDC::OCC::gp_Circ^ C)
{
    ((::ProjLib_Cone*)_NativeInstance)->Project(*(::gp_Circ*)C->NativeInstance);
}

void RDC::OCC::ProjLib_Cone::Project(RDC::OCC::gp_Elips^ E)
{
    ((::ProjLib_Cone*)_NativeInstance)->Project(*(::gp_Elips*)E->NativeInstance);
}

void RDC::OCC::ProjLib_Cone::Project(RDC::OCC::gp_Parab^ P)
{
    ((::ProjLib_Cone*)_NativeInstance)->Project(*(::gp_Parab*)P->NativeInstance);
}

void RDC::OCC::ProjLib_Cone::Project(RDC::OCC::gp_Hypr^ H)
{
    ((::ProjLib_Cone*)_NativeInstance)->Project(*(::gp_Hypr*)H->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  ProjLib_Cylinder
//---------------------------------------------------------------------

RDC::OCC::ProjLib_Cylinder::ProjLib_Cylinder()
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Cylinder();
}

RDC::OCC::ProjLib_Cylinder::ProjLib_Cylinder(RDC::OCC::gp_Cylinder^ Cyl)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Cylinder(*(::gp_Cylinder*)Cyl->NativeInstance);
}

RDC::OCC::ProjLib_Cylinder::ProjLib_Cylinder(RDC::OCC::gp_Cylinder^ Cyl, RDC::OCC::gp_Lin^ L)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Cylinder(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Lin*)L->NativeInstance);
}

RDC::OCC::ProjLib_Cylinder::ProjLib_Cylinder(RDC::OCC::gp_Cylinder^ Cyl, RDC::OCC::gp_Circ^ C)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Cylinder(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Circ*)C->NativeInstance);
}

RDC::OCC::ProjLib_Cylinder::ProjLib_Cylinder(RDC::OCC::gp_Cylinder^ Cyl, RDC::OCC::gp_Elips^ E)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Cylinder(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Elips*)E->NativeInstance);
}

void RDC::OCC::ProjLib_Cylinder::Init(RDC::OCC::gp_Cylinder^ Cyl)
{
    ((::ProjLib_Cylinder*)_NativeInstance)->Init(*(::gp_Cylinder*)Cyl->NativeInstance);
}

void RDC::OCC::ProjLib_Cylinder::Project(RDC::OCC::gp_Lin^ L)
{
    ((::ProjLib_Cylinder*)_NativeInstance)->Project(*(::gp_Lin*)L->NativeInstance);
}

void RDC::OCC::ProjLib_Cylinder::Project(RDC::OCC::gp_Circ^ C)
{
    ((::ProjLib_Cylinder*)_NativeInstance)->Project(*(::gp_Circ*)C->NativeInstance);
}

void RDC::OCC::ProjLib_Cylinder::Project(RDC::OCC::gp_Elips^ E)
{
    ((::ProjLib_Cylinder*)_NativeInstance)->Project(*(::gp_Elips*)E->NativeInstance);
}

void RDC::OCC::ProjLib_Cylinder::Project(RDC::OCC::gp_Parab^ P)
{
    ((::ProjLib_Cylinder*)_NativeInstance)->Project(*(::gp_Parab*)P->NativeInstance);
}

void RDC::OCC::ProjLib_Cylinder::Project(RDC::OCC::gp_Hypr^ H)
{
    ((::ProjLib_Cylinder*)_NativeInstance)->Project(*(::gp_Hypr*)H->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  ProjLib_Plane
//---------------------------------------------------------------------

RDC::OCC::ProjLib_Plane::ProjLib_Plane()
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Plane();
}

RDC::OCC::ProjLib_Plane::ProjLib_Plane(RDC::OCC::Pln Pl)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    _NativeInstance = new ::ProjLib_Plane(*(gp_Pln*)pp_Pl);
}

RDC::OCC::ProjLib_Plane::ProjLib_Plane(RDC::OCC::Pln Pl, RDC::OCC::gp_Lin^ L)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    _NativeInstance = new ::ProjLib_Plane(*(gp_Pln*)pp_Pl, *(::gp_Lin*)L->NativeInstance);
}

RDC::OCC::ProjLib_Plane::ProjLib_Plane(RDC::OCC::Pln Pl, RDC::OCC::gp_Circ^ C)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    _NativeInstance = new ::ProjLib_Plane(*(gp_Pln*)pp_Pl, *(::gp_Circ*)C->NativeInstance);
}

RDC::OCC::ProjLib_Plane::ProjLib_Plane(RDC::OCC::Pln Pl, RDC::OCC::gp_Elips^ E)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    _NativeInstance = new ::ProjLib_Plane(*(gp_Pln*)pp_Pl, *(::gp_Elips*)E->NativeInstance);
}

RDC::OCC::ProjLib_Plane::ProjLib_Plane(RDC::OCC::Pln Pl, RDC::OCC::gp_Parab^ P)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    _NativeInstance = new ::ProjLib_Plane(*(gp_Pln*)pp_Pl, *(::gp_Parab*)P->NativeInstance);
}

RDC::OCC::ProjLib_Plane::ProjLib_Plane(RDC::OCC::Pln Pl, RDC::OCC::gp_Hypr^ H)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    _NativeInstance = new ::ProjLib_Plane(*(gp_Pln*)pp_Pl, *(::gp_Hypr*)H->NativeInstance);
}

void RDC::OCC::ProjLib_Plane::Init(RDC::OCC::Pln Pl)
{
    pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
    ((::ProjLib_Plane*)_NativeInstance)->Init(*(gp_Pln*)pp_Pl);
}

void RDC::OCC::ProjLib_Plane::Project(RDC::OCC::gp_Lin^ L)
{
    ((::ProjLib_Plane*)_NativeInstance)->Project(*(::gp_Lin*)L->NativeInstance);
}

void RDC::OCC::ProjLib_Plane::Project(RDC::OCC::gp_Circ^ C)
{
    ((::ProjLib_Plane*)_NativeInstance)->Project(*(::gp_Circ*)C->NativeInstance);
}

void RDC::OCC::ProjLib_Plane::Project(RDC::OCC::gp_Elips^ E)
{
    ((::ProjLib_Plane*)_NativeInstance)->Project(*(::gp_Elips*)E->NativeInstance);
}

void RDC::OCC::ProjLib_Plane::Project(RDC::OCC::gp_Parab^ P)
{
    ((::ProjLib_Plane*)_NativeInstance)->Project(*(::gp_Parab*)P->NativeInstance);
}

void RDC::OCC::ProjLib_Plane::Project(RDC::OCC::gp_Hypr^ H)
{
    ((::ProjLib_Plane*)_NativeInstance)->Project(*(::gp_Hypr*)H->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  ProjLib_PrjResolve
//---------------------------------------------------------------------

RDC::OCC::ProjLib_PrjResolve::ProjLib_PrjResolve(RDC::OCC::Adaptor3d_Curve^ C, RDC::OCC::Adaptor3d_Surface^ S, int Fix)
    : RDC::OCC::BaseClass<::ProjLib_PrjResolve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_PrjResolve(*(::Adaptor3d_Curve*)C->NativeInstance, *(::Adaptor3d_Surface*)S->NativeInstance, Fix);
}

void RDC::OCC::ProjLib_PrjResolve::Perform(double t, double U, double V, RDC::OCC::Pnt2d Tol, RDC::OCC::Pnt2d Inf, RDC::OCC::Pnt2d Sup, double FTol, bool StrictInside)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Tol = &Tol;
    pin_ptr<RDC::OCC::Pnt2d> pp_Inf = &Inf;
    pin_ptr<RDC::OCC::Pnt2d> pp_Sup = &Sup;
    ((::ProjLib_PrjResolve*)_NativeInstance)->Perform(t, U, V, *(gp_Pnt2d*)pp_Tol, *(gp_Pnt2d*)pp_Inf, *(gp_Pnt2d*)pp_Sup, FTol, StrictInside);
}

void RDC::OCC::ProjLib_PrjResolve::Perform(double t, double U, double V, RDC::OCC::Pnt2d Tol, RDC::OCC::Pnt2d Inf, RDC::OCC::Pnt2d Sup, double FTol)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Tol = &Tol;
    pin_ptr<RDC::OCC::Pnt2d> pp_Inf = &Inf;
    pin_ptr<RDC::OCC::Pnt2d> pp_Sup = &Sup;
    ((::ProjLib_PrjResolve*)_NativeInstance)->Perform(t, U, V, *(gp_Pnt2d*)pp_Tol, *(gp_Pnt2d*)pp_Inf, *(gp_Pnt2d*)pp_Sup, FTol, false);
}

void RDC::OCC::ProjLib_PrjResolve::Perform(double t, double U, double V, RDC::OCC::Pnt2d Tol, RDC::OCC::Pnt2d Inf, RDC::OCC::Pnt2d Sup)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Tol = &Tol;
    pin_ptr<RDC::OCC::Pnt2d> pp_Inf = &Inf;
    pin_ptr<RDC::OCC::Pnt2d> pp_Sup = &Sup;
    ((::ProjLib_PrjResolve*)_NativeInstance)->Perform(t, U, V, *(gp_Pnt2d*)pp_Tol, *(gp_Pnt2d*)pp_Inf, *(gp_Pnt2d*)pp_Sup, -1, false);
}

bool RDC::OCC::ProjLib_PrjResolve::IsDone()
{
    bool _result = ((::ProjLib_PrjResolve*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::ProjLib_PrjResolve::Solution()
{
    ::gp_Pnt2d _nativeResult = ((::ProjLib_PrjResolve*)_NativeInstance)->Solution();
    return RDC::OCC::Pnt2d(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  ProjLib_ProjectOnPlane
//---------------------------------------------------------------------

RDC::OCC::ProjLib_ProjectOnPlane::ProjLib_ProjectOnPlane()
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ProjLib_ProjectOnPlane();
}

RDC::OCC::ProjLib_ProjectOnPlane::ProjLib_ProjectOnPlane(RDC::OCC::Ax3 Pl)
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax3> pp_Pl = &Pl;
    NativeInstance = new ::ProjLib_ProjectOnPlane(*(gp_Ax3*)pp_Pl);
}

RDC::OCC::ProjLib_ProjectOnPlane::ProjLib_ProjectOnPlane(RDC::OCC::Ax3 Pl, RDC::OCC::Dir D)
    : RDC::OCC::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax3> pp_Pl = &Pl;
    pin_ptr<RDC::OCC::Dir> pp_D = &D;
    NativeInstance = new ::ProjLib_ProjectOnPlane(*(gp_Ax3*)pp_Pl, *(gp_Dir*)pp_D);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::ProjLib_ProjectOnPlane::ShallowCopy()
{
    Handle(::Adaptor3d_Curve) _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::ProjLib_ProjectOnPlane::Load(RDC::OCC::Adaptor3d_Curve^ C, double Tolerance, bool KeepParametrization)
{
    ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Load(Handle(::Adaptor3d_Curve)(C->NativeInstance), Tolerance, KeepParametrization);
}

void RDC::OCC::ProjLib_ProjectOnPlane::Load(RDC::OCC::Adaptor3d_Curve^ C, double Tolerance)
{
    ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Load(Handle(::Adaptor3d_Curve)(C->NativeInstance), Tolerance, true);
}

RDC::OCC::Ax3 RDC::OCC::ProjLib_ProjectOnPlane::GetPlane()
{
    ::gp_Ax3 _nativeResult = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->GetPlane();
    return RDC::OCC::Ax3(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::ProjLib_ProjectOnPlane::GetDirection()
{
    ::gp_Dir _nativeResult = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->GetDirection();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::ProjLib_ProjectOnPlane::GetCurve()
{
    Handle(::Adaptor3d_Curve) _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->GetCurve();
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::GeomAdaptor_Curve^ RDC::OCC::ProjLib_ProjectOnPlane::GetResult()
{
    Handle(::GeomAdaptor_Curve) _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->GetResult();
    return _result.IsNull() ? nullptr : RDC::OCC::GeomAdaptor_Curve::CreateDowncasted(_result.get());
}

double RDC::OCC::ProjLib_ProjectOnPlane::FirstParameter()
{
    double _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::ProjLib_ProjectOnPlane::LastParameter()
{
    double _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->LastParameter();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::ProjLib_ProjectOnPlane::Continuity()
{
    ::GeomAbs_Shape _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::ProjLib_ProjectOnPlane::NbIntervals(RDC::OCC::GeomAbs_Shape S)
{
    int _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void RDC::OCC::ProjLib_ProjectOnPlane::Intervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S)
{
    ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

RDC::OCC::Adaptor3d_Curve^ RDC::OCC::ProjLib_ProjectOnPlane::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Curve) _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : RDC::OCC::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

bool RDC::OCC::ProjLib_ProjectOnPlane::IsClosed()
{
    bool _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::ProjLib_ProjectOnPlane::IsPeriodic()
{
    bool _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->IsPeriodic();
    return _result;
}

double RDC::OCC::ProjLib_ProjectOnPlane::Period()
{
    double _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Period();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::ProjLib_ProjectOnPlane::Value(double U)
{
    ::gp_Pnt _nativeResult = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Value(U);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::ProjLib_ProjectOnPlane::D0(double U, RDC::OCC::Pnt% P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::ProjLib_ProjectOnPlane*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::ProjLib_ProjectOnPlane::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V = &V;
    ((::ProjLib_ProjectOnPlane*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void RDC::OCC::ProjLib_ProjectOnPlane::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ((::ProjLib_ProjectOnPlane*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::ProjLib_ProjectOnPlane::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ((::ProjLib_ProjectOnPlane*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::ProjLib_ProjectOnPlane::DN(double U, int N)
{
    ::gp_Vec _nativeResult = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec(_nativeResult);
}

double RDC::OCC::ProjLib_ProjectOnPlane::Resolution(double R3d)
{
    double _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Resolution(R3d);
    return _result;
}

RDC::OCC::GeomAbs_CurveType RDC::OCC::ProjLib_ProjectOnPlane::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->GetType();
    return (RDC::OCC::GeomAbs_CurveType)_result;
}

RDC::OCC::gp_Lin^ RDC::OCC::ProjLib_ProjectOnPlane::Line()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Line();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::ProjLib_ProjectOnPlane::Circle()
{
    ::gp_Circ* _result = new ::gp_Circ();
    *_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Circle();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

RDC::OCC::gp_Elips^ RDC::OCC::ProjLib_ProjectOnPlane::Ellipse()
{
    ::gp_Elips* _result = new ::gp_Elips();
    *_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Ellipse();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

RDC::OCC::gp_Hypr^ RDC::OCC::ProjLib_ProjectOnPlane::Hyperbola()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Hyperbola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

RDC::OCC::gp_Parab^ RDC::OCC::ProjLib_ProjectOnPlane::Parabola()
{
    ::gp_Parab* _result = new ::gp_Parab();
    *_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Parabola();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

int RDC::OCC::ProjLib_ProjectOnPlane::Degree()
{
    int _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Degree();
    return _result;
}

bool RDC::OCC::ProjLib_ProjectOnPlane::IsRational()
{
    bool _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->IsRational();
    return _result;
}

int RDC::OCC::ProjLib_ProjectOnPlane::NbPoles()
{
    int _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->NbPoles();
    return _result;
}

int RDC::OCC::ProjLib_ProjectOnPlane::NbKnots()
{
    int _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->NbKnots();
    return _result;
}

RDC::OCC::Geom_BezierCurve^ RDC::OCC::ProjLib_ProjectOnPlane::Bezier()
{
    Handle(::Geom_BezierCurve) _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BezierCurve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::ProjLib_ProjectOnPlane::BSpline()
{
    Handle(::Geom_BSplineCurve) _result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

RDC::OCC::ProjLib_ProjectOnPlane^ RDC::OCC::ProjLib_ProjectOnPlane::CreateDowncasted(::ProjLib_ProjectOnPlane* instance)
{
    return gcnew RDC::OCC::ProjLib_ProjectOnPlane( instance );
}



//---------------------------------------------------------------------
//  Class  ProjLib_ProjectOnSurface
//---------------------------------------------------------------------

RDC::OCC::ProjLib_ProjectOnSurface::ProjLib_ProjectOnSurface()
    : RDC::OCC::BaseClass<::ProjLib_ProjectOnSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_ProjectOnSurface();
}

RDC::OCC::ProjLib_ProjectOnSurface::ProjLib_ProjectOnSurface(RDC::OCC::Adaptor3d_Surface^ S)
    : RDC::OCC::BaseClass<::ProjLib_ProjectOnSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_ProjectOnSurface(Handle(::Adaptor3d_Surface)(S->NativeInstance));
}

void RDC::OCC::ProjLib_ProjectOnSurface::Load(RDC::OCC::Adaptor3d_Surface^ S)
{
    ((::ProjLib_ProjectOnSurface*)_NativeInstance)->Load(Handle(::Adaptor3d_Surface)(S->NativeInstance));
}

void RDC::OCC::ProjLib_ProjectOnSurface::Load(RDC::OCC::Adaptor3d_Curve^ C, double Tolerance)
{
    ((::ProjLib_ProjectOnSurface*)_NativeInstance)->Load(Handle(::Adaptor3d_Curve)(C->NativeInstance), Tolerance);
}

bool RDC::OCC::ProjLib_ProjectOnSurface::IsDone()
{
    bool _result = ((::ProjLib_ProjectOnSurface*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::ProjLib_ProjectOnSurface::BSpline()
{
    Handle(::Geom_BSplineCurve) _result = ((::ProjLib_ProjectOnSurface*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineCurve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  ProjLib_Sphere
//---------------------------------------------------------------------

RDC::OCC::ProjLib_Sphere::ProjLib_Sphere()
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Sphere();
}

RDC::OCC::ProjLib_Sphere::ProjLib_Sphere(RDC::OCC::gp_Sphere^ Sp)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Sphere(*(::gp_Sphere*)Sp->NativeInstance);
}

RDC::OCC::ProjLib_Sphere::ProjLib_Sphere(RDC::OCC::gp_Sphere^ Sp, RDC::OCC::gp_Circ^ C)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Sphere(*(::gp_Sphere*)Sp->NativeInstance, *(::gp_Circ*)C->NativeInstance);
}

void RDC::OCC::ProjLib_Sphere::Init(RDC::OCC::gp_Sphere^ Sp)
{
    ((::ProjLib_Sphere*)_NativeInstance)->Init(*(::gp_Sphere*)Sp->NativeInstance);
}

void RDC::OCC::ProjLib_Sphere::Project(RDC::OCC::gp_Lin^ L)
{
    ((::ProjLib_Sphere*)_NativeInstance)->Project(*(::gp_Lin*)L->NativeInstance);
}

void RDC::OCC::ProjLib_Sphere::Project(RDC::OCC::gp_Circ^ C)
{
    ((::ProjLib_Sphere*)_NativeInstance)->Project(*(::gp_Circ*)C->NativeInstance);
}

void RDC::OCC::ProjLib_Sphere::Project(RDC::OCC::gp_Elips^ E)
{
    ((::ProjLib_Sphere*)_NativeInstance)->Project(*(::gp_Elips*)E->NativeInstance);
}

void RDC::OCC::ProjLib_Sphere::Project(RDC::OCC::gp_Parab^ P)
{
    ((::ProjLib_Sphere*)_NativeInstance)->Project(*(::gp_Parab*)P->NativeInstance);
}

void RDC::OCC::ProjLib_Sphere::Project(RDC::OCC::gp_Hypr^ H)
{
    ((::ProjLib_Sphere*)_NativeInstance)->Project(*(::gp_Hypr*)H->NativeInstance);
}

void RDC::OCC::ProjLib_Sphere::SetInBounds(double U)
{
    ((::ProjLib_Sphere*)_NativeInstance)->SetInBounds(U);
}



//---------------------------------------------------------------------
//  Class  ProjLib_Torus
//---------------------------------------------------------------------

RDC::OCC::ProjLib_Torus::ProjLib_Torus()
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Torus();
}

RDC::OCC::ProjLib_Torus::ProjLib_Torus(RDC::OCC::gp_Torus^ To)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Torus(*(::gp_Torus*)To->NativeInstance);
}

RDC::OCC::ProjLib_Torus::ProjLib_Torus(RDC::OCC::gp_Torus^ To, RDC::OCC::gp_Circ^ C)
    : RDC::OCC::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ProjLib_Torus(*(::gp_Torus*)To->NativeInstance, *(::gp_Circ*)C->NativeInstance);
}

void RDC::OCC::ProjLib_Torus::Init(RDC::OCC::gp_Torus^ To)
{
    ((::ProjLib_Torus*)_NativeInstance)->Init(*(::gp_Torus*)To->NativeInstance);
}

void RDC::OCC::ProjLib_Torus::Project(RDC::OCC::gp_Lin^ L)
{
    ((::ProjLib_Torus*)_NativeInstance)->Project(*(::gp_Lin*)L->NativeInstance);
}

void RDC::OCC::ProjLib_Torus::Project(RDC::OCC::gp_Circ^ C)
{
    ((::ProjLib_Torus*)_NativeInstance)->Project(*(::gp_Circ*)C->NativeInstance);
}

void RDC::OCC::ProjLib_Torus::Project(RDC::OCC::gp_Elips^ E)
{
    ((::ProjLib_Torus*)_NativeInstance)->Project(*(::gp_Elips*)E->NativeInstance);
}

void RDC::OCC::ProjLib_Torus::Project(RDC::OCC::gp_Parab^ P)
{
    ((::ProjLib_Torus*)_NativeInstance)->Project(*(::gp_Parab*)P->NativeInstance);
}

void RDC::OCC::ProjLib_Torus::Project(RDC::OCC::gp_Hypr^ H)
{
    ((::ProjLib_Torus*)_NativeInstance)->Project(*(::gp_Hypr*)H->NativeInstance);
}



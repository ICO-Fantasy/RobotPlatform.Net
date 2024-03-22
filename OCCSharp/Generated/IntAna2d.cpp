// Generated wrapper code for package IntAna2d

#include "OcctPCH.h"
#include "IntAna2d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"


//---------------------------------------------------------------------
//  Class  IntAna2d_IntPoint
//---------------------------------------------------------------------

RDC::OCC::IntAna2d_IntPoint::IntAna2d_IntPoint(double X, double Y, double U1, double U2)
    : RDC::OCC::BaseClass<::IntAna2d_IntPoint>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_IntPoint(X, Y, U1, U2);
}

RDC::OCC::IntAna2d_IntPoint::IntAna2d_IntPoint(double X, double Y, double U1)
    : RDC::OCC::BaseClass<::IntAna2d_IntPoint>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_IntPoint(X, Y, U1);
}

RDC::OCC::IntAna2d_IntPoint::IntAna2d_IntPoint()
    : RDC::OCC::BaseClass<::IntAna2d_IntPoint>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_IntPoint();
}

void RDC::OCC::IntAna2d_IntPoint::SetValue(double X, double Y, double U1, double U2)
{
    ((::IntAna2d_IntPoint*)_NativeInstance)->SetValue(X, Y, U1, U2);
}

void RDC::OCC::IntAna2d_IntPoint::SetValue(double X, double Y, double U1)
{
    ((::IntAna2d_IntPoint*)_NativeInstance)->SetValue(X, Y, U1);
}

RDC::OCC::Pnt2d RDC::OCC::IntAna2d_IntPoint::Value()
{
    ::gp_Pnt2d _nativeResult = ((::IntAna2d_IntPoint*)_NativeInstance)->Value();
    return RDC::OCC::Pnt2d(_nativeResult);
}

bool RDC::OCC::IntAna2d_IntPoint::SecondIsImplicit()
{
    bool _result = ((::IntAna2d_IntPoint*)_NativeInstance)->SecondIsImplicit();
    return _result;
}

double RDC::OCC::IntAna2d_IntPoint::ParamOnFirst()
{
    double _result = ((::IntAna2d_IntPoint*)_NativeInstance)->ParamOnFirst();
    return _result;
}

double RDC::OCC::IntAna2d_IntPoint::ParamOnSecond()
{
    double _result = ((::IntAna2d_IntPoint*)_NativeInstance)->ParamOnSecond();
    return _result;
}



//---------------------------------------------------------------------
//  Class  IntAna2d_Conic
//---------------------------------------------------------------------

RDC::OCC::IntAna2d_Conic::IntAna2d_Conic(RDC::OCC::gp_Circ2d^ C)
    : RDC::OCC::BaseClass<::IntAna2d_Conic>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_Conic(*(::gp_Circ2d*)C->NativeInstance);
}

RDC::OCC::IntAna2d_Conic::IntAna2d_Conic(RDC::OCC::gp_Lin2d^ C)
    : RDC::OCC::BaseClass<::IntAna2d_Conic>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_Conic(*(::gp_Lin2d*)C->NativeInstance);
}

RDC::OCC::IntAna2d_Conic::IntAna2d_Conic(RDC::OCC::gp_Parab2d^ C)
    : RDC::OCC::BaseClass<::IntAna2d_Conic>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_Conic(*(::gp_Parab2d*)C->NativeInstance);
}

RDC::OCC::IntAna2d_Conic::IntAna2d_Conic(RDC::OCC::gp_Hypr2d^ C)
    : RDC::OCC::BaseClass<::IntAna2d_Conic>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_Conic(*(::gp_Hypr2d*)C->NativeInstance);
}

RDC::OCC::IntAna2d_Conic::IntAna2d_Conic(RDC::OCC::gp_Elips2d^ C)
    : RDC::OCC::BaseClass<::IntAna2d_Conic>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_Conic(*(::gp_Elips2d*)C->NativeInstance);
}

double RDC::OCC::IntAna2d_Conic::Value(double X, double Y)
{
    double _result = ((::IntAna2d_Conic*)_NativeInstance)->Value(X, Y);
    return _result;
}

RDC::OCC::XY RDC::OCC::IntAna2d_Conic::Grad(double X, double Y)
{
    ::gp_XY _nativeResult = ((::IntAna2d_Conic*)_NativeInstance)->Grad(X, Y);
    return RDC::OCC::XY(_nativeResult);
}

void RDC::OCC::IntAna2d_Conic::ValAndGrad(double X, double Y, double% Val, RDC::OCC::XY% Grd)
{
    pin_ptr<double> pp_Val = &Val;
    pin_ptr<RDC::OCC::XY> pp_Grd = &Grd;
    ((::IntAna2d_Conic*)_NativeInstance)->ValAndGrad(X, Y, *(double*)pp_Val, *(gp_XY*)pp_Grd);
}

void RDC::OCC::IntAna2d_Conic::Coefficients(double% A, double% B, double% C, double% D, double% E, double% F)
{
    pin_ptr<double> pp_A = &A;
    pin_ptr<double> pp_B = &B;
    pin_ptr<double> pp_C = &C;
    pin_ptr<double> pp_D = &D;
    pin_ptr<double> pp_E = &E;
    pin_ptr<double> pp_F = &F;
    ((::IntAna2d_Conic*)_NativeInstance)->Coefficients(*(double*)pp_A, *(double*)pp_B, *(double*)pp_C, *(double*)pp_D, *(double*)pp_E, *(double*)pp_F);
}

void RDC::OCC::IntAna2d_Conic::NewCoefficients(double% A, double% B, double% C, double% D, double% E, double% F, RDC::OCC::Ax2d Axis)
{
    pin_ptr<double> pp_A = &A;
    pin_ptr<double> pp_B = &B;
    pin_ptr<double> pp_C = &C;
    pin_ptr<double> pp_D = &D;
    pin_ptr<double> pp_E = &E;
    pin_ptr<double> pp_F = &F;
    pin_ptr<RDC::OCC::Ax2d> pp_Axis = &Axis;
    ((::IntAna2d_Conic*)_NativeInstance)->NewCoefficients(*(double*)pp_A, *(double*)pp_B, *(double*)pp_C, *(double*)pp_D, *(double*)pp_E, *(double*)pp_F, *(gp_Ax2d*)pp_Axis);
}



//---------------------------------------------------------------------
//  Class  IntAna2d_AnaIntersection
//---------------------------------------------------------------------

RDC::OCC::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection()
    : RDC::OCC::BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_AnaIntersection();
}

RDC::OCC::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(RDC::OCC::gp_Lin2d^ L1, RDC::OCC::gp_Lin2d^ L2)
    : RDC::OCC::BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Lin2d*)L1->NativeInstance, *(::gp_Lin2d*)L2->NativeInstance);
}

RDC::OCC::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(RDC::OCC::gp_Circ2d^ C1, RDC::OCC::gp_Circ2d^ C2)
    : RDC::OCC::BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Circ2d*)C1->NativeInstance, *(::gp_Circ2d*)C2->NativeInstance);
}

RDC::OCC::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(RDC::OCC::gp_Lin2d^ L, RDC::OCC::gp_Circ2d^ C)
    : RDC::OCC::BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Lin2d*)L->NativeInstance, *(::gp_Circ2d*)C->NativeInstance);
}

RDC::OCC::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(RDC::OCC::gp_Lin2d^ L, RDC::OCC::IntAna2d_Conic^ C)
    : RDC::OCC::BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Lin2d*)L->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

RDC::OCC::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(RDC::OCC::gp_Circ2d^ C, RDC::OCC::IntAna2d_Conic^ Co)
    : RDC::OCC::BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Circ2d*)C->NativeInstance, *(::IntAna2d_Conic*)Co->NativeInstance);
}

RDC::OCC::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(RDC::OCC::gp_Elips2d^ E, RDC::OCC::IntAna2d_Conic^ C)
    : RDC::OCC::BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Elips2d*)E->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

RDC::OCC::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(RDC::OCC::gp_Parab2d^ P, RDC::OCC::IntAna2d_Conic^ C)
    : RDC::OCC::BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Parab2d*)P->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

RDC::OCC::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(RDC::OCC::gp_Hypr2d^ H, RDC::OCC::IntAna2d_Conic^ C)
    : RDC::OCC::BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Hypr2d*)H->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

void RDC::OCC::IntAna2d_AnaIntersection::Perform(RDC::OCC::gp_Lin2d^ L1, RDC::OCC::gp_Lin2d^ L2)
{
    ((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Lin2d*)L1->NativeInstance, *(::gp_Lin2d*)L2->NativeInstance);
}

void RDC::OCC::IntAna2d_AnaIntersection::Perform(RDC::OCC::gp_Circ2d^ C1, RDC::OCC::gp_Circ2d^ C2)
{
    ((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Circ2d*)C1->NativeInstance, *(::gp_Circ2d*)C2->NativeInstance);
}

void RDC::OCC::IntAna2d_AnaIntersection::Perform(RDC::OCC::gp_Lin2d^ L, RDC::OCC::gp_Circ2d^ C)
{
    ((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Lin2d*)L->NativeInstance, *(::gp_Circ2d*)C->NativeInstance);
}

void RDC::OCC::IntAna2d_AnaIntersection::Perform(RDC::OCC::gp_Lin2d^ L, RDC::OCC::IntAna2d_Conic^ C)
{
    ((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Lin2d*)L->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

void RDC::OCC::IntAna2d_AnaIntersection::Perform(RDC::OCC::gp_Circ2d^ C, RDC::OCC::IntAna2d_Conic^ Co)
{
    ((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Circ2d*)C->NativeInstance, *(::IntAna2d_Conic*)Co->NativeInstance);
}

void RDC::OCC::IntAna2d_AnaIntersection::Perform(RDC::OCC::gp_Elips2d^ E, RDC::OCC::IntAna2d_Conic^ C)
{
    ((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Elips2d*)E->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

void RDC::OCC::IntAna2d_AnaIntersection::Perform(RDC::OCC::gp_Parab2d^ P, RDC::OCC::IntAna2d_Conic^ C)
{
    ((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Parab2d*)P->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

void RDC::OCC::IntAna2d_AnaIntersection::Perform(RDC::OCC::gp_Hypr2d^ H, RDC::OCC::IntAna2d_Conic^ C)
{
    ((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Hypr2d*)H->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

bool RDC::OCC::IntAna2d_AnaIntersection::IsDone()
{
    bool _result = ((::IntAna2d_AnaIntersection*)_NativeInstance)->IsDone();
    return _result;
}

bool RDC::OCC::IntAna2d_AnaIntersection::IsEmpty()
{
    bool _result = ((::IntAna2d_AnaIntersection*)_NativeInstance)->IsEmpty();
    return _result;
}

bool RDC::OCC::IntAna2d_AnaIntersection::IdenticalElements()
{
    bool _result = ((::IntAna2d_AnaIntersection*)_NativeInstance)->IdenticalElements();
    return _result;
}

bool RDC::OCC::IntAna2d_AnaIntersection::ParallelElements()
{
    bool _result = ((::IntAna2d_AnaIntersection*)_NativeInstance)->ParallelElements();
    return _result;
}

int RDC::OCC::IntAna2d_AnaIntersection::NbPoints()
{
    int _result = ((::IntAna2d_AnaIntersection*)_NativeInstance)->NbPoints();
    return _result;
}

RDC::OCC::IntAna2d_IntPoint^ RDC::OCC::IntAna2d_AnaIntersection::Point(int N)
{
    ::IntAna2d_IntPoint* _result = new ::IntAna2d_IntPoint();
    *_result = (::IntAna2d_IntPoint)((::IntAna2d_AnaIntersection*)_NativeInstance)->Point(N);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::IntAna2d_IntPoint(_result);
}



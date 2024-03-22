// Generated wrapper code for package Precision

#include "OcctPCH.h"
#include "Precision.h"

using namespace System::Runtime::InteropServices; // for class Marshal



//---------------------------------------------------------------------
//  Class  Precision
//---------------------------------------------------------------------

RDC::OCC::Precision::Precision()
    : RDC::OCC::BaseClass<::Precision>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Precision();
}

double RDC::OCC::Precision::Angular()
{
    double _result = ::Precision::Angular();
    return _result;
}

double RDC::OCC::Precision::Confusion()
{
    double _result = ::Precision::Confusion();
    return _result;
}

double RDC::OCC::Precision::SquareConfusion()
{
    double _result = ::Precision::SquareConfusion();
    return _result;
}

double RDC::OCC::Precision::Intersection()
{
    double _result = ::Precision::Intersection();
    return _result;
}

double RDC::OCC::Precision::Approximation()
{
    double _result = ::Precision::Approximation();
    return _result;
}

double RDC::OCC::Precision::Parametric(double P, double T)
{
    double _result = ::Precision::Parametric(P, T);
    return _result;
}

double RDC::OCC::Precision::PConfusion(double T)
{
    double _result = ::Precision::PConfusion(T);
    return _result;
}

double RDC::OCC::Precision::SquarePConfusion()
{
    double _result = ::Precision::SquarePConfusion();
    return _result;
}

double RDC::OCC::Precision::PIntersection(double T)
{
    double _result = ::Precision::PIntersection(T);
    return _result;
}

double RDC::OCC::Precision::PApproximation(double T)
{
    double _result = ::Precision::PApproximation(T);
    return _result;
}

double RDC::OCC::Precision::Parametric(double P)
{
    double _result = ::Precision::Parametric(P);
    return _result;
}

double RDC::OCC::Precision::PConfusion()
{
    double _result = ::Precision::PConfusion();
    return _result;
}

double RDC::OCC::Precision::PIntersection()
{
    double _result = ::Precision::PIntersection();
    return _result;
}

double RDC::OCC::Precision::PApproximation()
{
    double _result = ::Precision::PApproximation();
    return _result;
}

bool RDC::OCC::Precision::IsInfinite(double R)
{
    bool _result = ::Precision::IsInfinite(R);
    return _result;
}

bool RDC::OCC::Precision::IsPositiveInfinite(double R)
{
    bool _result = ::Precision::IsPositiveInfinite(R);
    return _result;
}

bool RDC::OCC::Precision::IsNegativeInfinite(double R)
{
    bool _result = ::Precision::IsNegativeInfinite(R);
    return _result;
}

double RDC::OCC::Precision::Infinite()
{
    double _result = ::Precision::Infinite();
    return _result;
}



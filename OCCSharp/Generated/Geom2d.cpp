// Generated wrapper code for package Geom2d

#include "OcctPCH.h"
#include "Geom2d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "GeomAbs.h"
#include "TColgp.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  Geom2d_Geometry
//---------------------------------------------------------------------

RDC::OCC::Geom2d_Geometry::Geom2d_Geometry()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom2d_Geometry::Mirror(RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Geometry*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_Geometry::Mirror(RDC::OCC::Ax2d A)
{
    pin_ptr<RDC::OCC::Ax2d> pp_A = &A;
    ((::Geom2d_Geometry*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_A);
}

void RDC::OCC::Geom2d_Geometry::Rotate(RDC::OCC::Pnt2d P, double Ang)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Geometry*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_P, Ang);
}

void RDC::OCC::Geom2d_Geometry::Scale(RDC::OCC::Pnt2d P, double S)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Geometry*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_P, S);
}

void RDC::OCC::Geom2d_Geometry::Translate(RDC::OCC::Vec2d V)
{
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    ((::Geom2d_Geometry*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_V);
}

void RDC::OCC::Geom2d_Geometry::Translate(RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    ((::Geom2d_Geometry*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void RDC::OCC::Geom2d_Geometry::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_Geometry*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Geometry::Mirrored(RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Geometry*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_P);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Geometry::Mirrored(RDC::OCC::Ax2d A)
{
    pin_ptr<RDC::OCC::Ax2d> pp_A = &A;
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Geometry*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_A);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Geometry::Rotated(RDC::OCC::Pnt2d P, double Ang)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Geometry*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_P, Ang);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Geometry::Scaled(RDC::OCC::Pnt2d P, double S)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Geometry*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_P, S);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Geometry::Transformed(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Geometry*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_T);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Geometry::Translated(RDC::OCC::Vec2d V)
{
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Geometry*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_V);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Geometry::Translated(RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Geometry*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Geometry::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Geometry*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_Geometry::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Geometry*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_Geometry::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Geometry*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Geometry::CreateDowncasted(::Geom2d_Geometry* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_AxisPlacement)))
        return RDC::OCC::Geom2d_AxisPlacement::CreateDowncasted((::Geom2d_AxisPlacement*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_Curve)))
        return RDC::OCC::Geom2d_Curve::CreateDowncasted((::Geom2d_Curve*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_Point)))
        return RDC::OCC::Geom2d_Point::CreateDowncasted((::Geom2d_Point*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_Vector)))
        return RDC::OCC::Geom2d_Vector::CreateDowncasted((::Geom2d_Vector*)instance);
    
    return gcnew RDC::OCC::Geom2d_Geometry( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_AxisPlacement
//---------------------------------------------------------------------

RDC::OCC::Geom2d_AxisPlacement::Geom2d_AxisPlacement(RDC::OCC::Ax2d A)
    : RDC::OCC::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_A = &A;
    NativeInstance = new ::Geom2d_AxisPlacement(*(gp_Ax2d*)pp_A);
}

RDC::OCC::Geom2d_AxisPlacement::Geom2d_AxisPlacement(RDC::OCC::Pnt2d P, RDC::OCC::Dir2d V)
    : RDC::OCC::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Dir2d> pp_V = &V;
    NativeInstance = new ::Geom2d_AxisPlacement(*(gp_Pnt2d*)pp_P, *(gp_Dir2d*)pp_V);
}

void RDC::OCC::Geom2d_AxisPlacement::Reverse()
{
    ((::Geom2d_AxisPlacement*)_NativeInstance)->Reverse();
}

RDC::OCC::Geom2d_AxisPlacement^ RDC::OCC::Geom2d_AxisPlacement::Reversed()
{
    Handle(::Geom2d_AxisPlacement) _result = ((::Geom2d_AxisPlacement*)_NativeInstance)->Reversed();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_AxisPlacement::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_AxisPlacement::SetAxis(RDC::OCC::Ax2d A)
{
    pin_ptr<RDC::OCC::Ax2d> pp_A = &A;
    ((::Geom2d_AxisPlacement*)_NativeInstance)->SetAxis(*(gp_Ax2d*)pp_A);
}

void RDC::OCC::Geom2d_AxisPlacement::SetDirection(RDC::OCC::Dir2d V)
{
    pin_ptr<RDC::OCC::Dir2d> pp_V = &V;
    ((::Geom2d_AxisPlacement*)_NativeInstance)->SetDirection(*(gp_Dir2d*)pp_V);
}

void RDC::OCC::Geom2d_AxisPlacement::SetLocation(RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_AxisPlacement*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_P);
}

double RDC::OCC::Geom2d_AxisPlacement::Angle(RDC::OCC::Geom2d_AxisPlacement^ Other)
{
    double _result = ((::Geom2d_AxisPlacement*)_NativeInstance)->Angle(Handle(::Geom2d_AxisPlacement)(Other->NativeInstance));
    return _result;
}

RDC::OCC::Ax2d RDC::OCC::Geom2d_AxisPlacement::Ax2d()
{
    ::gp_Ax2d _nativeResult = ((::Geom2d_AxisPlacement*)_NativeInstance)->Ax2d();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::Geom2d_AxisPlacement::Direction()
{
    ::gp_Dir2d _nativeResult = ((::Geom2d_AxisPlacement*)_NativeInstance)->Direction();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_AxisPlacement::Location()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_AxisPlacement*)_NativeInstance)->Location();
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::Geom2d_AxisPlacement::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_AxisPlacement*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_AxisPlacement::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_AxisPlacement*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_AxisPlacement^ RDC::OCC::Geom2d_AxisPlacement::CreateDowncasted(::Geom2d_AxisPlacement* instance)
{
    return gcnew RDC::OCC::Geom2d_AxisPlacement( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Curve
//---------------------------------------------------------------------

RDC::OCC::Geom2d_Curve::Geom2d_Curve()
    : RDC::OCC::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom2d_Curve::Reverse()
{
    ((::Geom2d_Curve*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom2d_Curve::ReversedParameter(double U)
{
    double _result = ((::Geom2d_Curve*)_NativeInstance)->ReversedParameter(U);
    return _result;
}

double RDC::OCC::Geom2d_Curve::TransformedParameter(double U, RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    double _result = ((::Geom2d_Curve*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf2d*)pp_T);
    return _result;
}

double RDC::OCC::Geom2d_Curve::ParametricTransformation(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    double _result = ((::Geom2d_Curve*)_NativeInstance)->ParametricTransformation(*(gp_Trsf2d*)pp_T);
    return _result;
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::Geom2d_Curve::Reversed()
{
    Handle(::Geom2d_Curve) _result = ((::Geom2d_Curve*)_NativeInstance)->Reversed();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

double RDC::OCC::Geom2d_Curve::FirstParameter()
{
    double _result = ((::Geom2d_Curve*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::Geom2d_Curve::LastParameter()
{
    double _result = ((::Geom2d_Curve*)_NativeInstance)->LastParameter();
    return _result;
}

bool RDC::OCC::Geom2d_Curve::IsClosed()
{
    bool _result = ((::Geom2d_Curve*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::Geom2d_Curve::IsPeriodic()
{
    bool _result = ((::Geom2d_Curve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double RDC::OCC::Geom2d_Curve::Period()
{
    double _result = ((::Geom2d_Curve*)_NativeInstance)->Period();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom2d_Curve::Continuity()
{
    ::GeomAbs_Shape _result = ((::Geom2d_Curve*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

bool RDC::OCC::Geom2d_Curve::IsCN(int N)
{
    bool _result = ((::Geom2d_Curve*)_NativeInstance)->IsCN(N);
    return _result;
}

void RDC::OCC::Geom2d_Curve::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Curve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_Curve::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ((::Geom2d_Curve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::Geom2d_Curve::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::Geom2d_Curve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::Geom2d_Curve::D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::Geom2d_Curve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::Geom2d_Curve::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::Geom2d_Curve*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_Curve::Value(double U)
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_Curve*)_NativeInstance)->Value(U);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::Geom2d_Curve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Curve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_Curve::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Curve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::Geom2d_Curve::CreateDowncasted(::Geom2d_Curve* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_BoundedCurve)))
        return RDC::OCC::Geom2d_BoundedCurve::CreateDowncasted((::Geom2d_BoundedCurve*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_Conic)))
        return RDC::OCC::Geom2d_Conic::CreateDowncasted((::Geom2d_Conic*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_Line)))
        return RDC::OCC::Geom2d_Line::CreateDowncasted((::Geom2d_Line*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_OffsetCurve)))
        return RDC::OCC::Geom2d_OffsetCurve::CreateDowncasted((::Geom2d_OffsetCurve*)instance);
    
    return gcnew RDC::OCC::Geom2d_Curve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_BoundedCurve
//---------------------------------------------------------------------

RDC::OCC::Geom2d_BoundedCurve::Geom2d_BoundedCurve()
    : RDC::OCC::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_BoundedCurve::EndPoint()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_BoundedCurve*)_NativeInstance)->EndPoint();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_BoundedCurve::StartPoint()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_BoundedCurve*)_NativeInstance)->StartPoint();
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::Geom2d_BoundedCurve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_BoundedCurve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_BoundedCurve::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_BoundedCurve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_BoundedCurve^ RDC::OCC::Geom2d_BoundedCurve::CreateDowncasted(::Geom2d_BoundedCurve* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_BezierCurve)))
        return RDC::OCC::Geom2d_BezierCurve::CreateDowncasted((::Geom2d_BezierCurve*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_BSplineCurve)))
        return RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted((::Geom2d_BSplineCurve*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_TrimmedCurve)))
        return RDC::OCC::Geom2d_TrimmedCurve::CreateDowncasted((::Geom2d_TrimmedCurve*)instance);
    
    return gcnew RDC::OCC::Geom2d_BoundedCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_BezierCurve
//---------------------------------------------------------------------

RDC::OCC::Geom2d_BezierCurve::Geom2d_BezierCurve(RDC::OCC::TColgp_Array1OfPnt2d^ CurvePoles)
    : RDC::OCC::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_BezierCurve(*(::TColgp_Array1OfPnt2d*)CurvePoles->NativeInstance);
}

RDC::OCC::Geom2d_BezierCurve::Geom2d_BezierCurve(RDC::OCC::TColgp_Array1OfPnt2d^ CurvePoles, RDC::OCC::TColStd_Array1OfReal^ PoleWeights)
    : RDC::OCC::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_BezierCurve(*(::TColgp_Array1OfPnt2d*)CurvePoles->NativeInstance, *(::TColStd_Array1OfReal*)PoleWeights->NativeInstance);
}

void RDC::OCC::Geom2d_BezierCurve::Increase(int Degree)
{
    ((::Geom2d_BezierCurve*)_NativeInstance)->Increase(Degree);
}

void RDC::OCC::Geom2d_BezierCurve::InsertPoleAfter(int Index, RDC::OCC::Pnt2d P, double Weight)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BezierCurve*)_NativeInstance)->InsertPoleAfter(Index, *(gp_Pnt2d*)pp_P, Weight);
}

void RDC::OCC::Geom2d_BezierCurve::InsertPoleAfter(int Index, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BezierCurve*)_NativeInstance)->InsertPoleAfter(Index, *(gp_Pnt2d*)pp_P, 1.);
}

void RDC::OCC::Geom2d_BezierCurve::InsertPoleBefore(int Index, RDC::OCC::Pnt2d P, double Weight)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BezierCurve*)_NativeInstance)->InsertPoleBefore(Index, *(gp_Pnt2d*)pp_P, Weight);
}

void RDC::OCC::Geom2d_BezierCurve::InsertPoleBefore(int Index, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BezierCurve*)_NativeInstance)->InsertPoleBefore(Index, *(gp_Pnt2d*)pp_P, 1.);
}

void RDC::OCC::Geom2d_BezierCurve::RemovePole(int Index)
{
    ((::Geom2d_BezierCurve*)_NativeInstance)->RemovePole(Index);
}

void RDC::OCC::Geom2d_BezierCurve::Reverse()
{
    ((::Geom2d_BezierCurve*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom2d_BezierCurve::ReversedParameter(double U)
{
    double _result = ((::Geom2d_BezierCurve*)_NativeInstance)->ReversedParameter(U);
    return _result;
}

void RDC::OCC::Geom2d_BezierCurve::Segment(double U1, double U2)
{
    ((::Geom2d_BezierCurve*)_NativeInstance)->Segment(U1, U2);
}

void RDC::OCC::Geom2d_BezierCurve::SetPole(int Index, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BezierCurve*)_NativeInstance)->SetPole(Index, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_BezierCurve::SetPole(int Index, RDC::OCC::Pnt2d P, double Weight)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BezierCurve*)_NativeInstance)->SetPole(Index, *(gp_Pnt2d*)pp_P, Weight);
}

void RDC::OCC::Geom2d_BezierCurve::SetWeight(int Index, double Weight)
{
    ((::Geom2d_BezierCurve*)_NativeInstance)->SetWeight(Index, Weight);
}

bool RDC::OCC::Geom2d_BezierCurve::IsClosed()
{
    bool _result = ((::Geom2d_BezierCurve*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::Geom2d_BezierCurve::IsCN(int N)
{
    bool _result = ((::Geom2d_BezierCurve*)_NativeInstance)->IsCN(N);
    return _result;
}

bool RDC::OCC::Geom2d_BezierCurve::IsPeriodic()
{
    bool _result = ((::Geom2d_BezierCurve*)_NativeInstance)->IsPeriodic();
    return _result;
}

bool RDC::OCC::Geom2d_BezierCurve::IsRational()
{
    bool _result = ((::Geom2d_BezierCurve*)_NativeInstance)->IsRational();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom2d_BezierCurve::Continuity()
{
    ::GeomAbs_Shape _result = ((::Geom2d_BezierCurve*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::Geom2d_BezierCurve::Degree()
{
    int _result = ((::Geom2d_BezierCurve*)_NativeInstance)->Degree();
    return _result;
}

void RDC::OCC::Geom2d_BezierCurve::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BezierCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_BezierCurve::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ((::Geom2d_BezierCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::Geom2d_BezierCurve::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::Geom2d_BezierCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::Geom2d_BezierCurve::D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::Geom2d_BezierCurve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::Geom2d_BezierCurve::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::Geom2d_BezierCurve*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_BezierCurve::EndPoint()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_BezierCurve*)_NativeInstance)->EndPoint();
    return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::Geom2d_BezierCurve::FirstParameter()
{
    double _result = ((::Geom2d_BezierCurve*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::Geom2d_BezierCurve::LastParameter()
{
    double _result = ((::Geom2d_BezierCurve*)_NativeInstance)->LastParameter();
    return _result;
}

int RDC::OCC::Geom2d_BezierCurve::NbPoles()
{
    int _result = ((::Geom2d_BezierCurve*)_NativeInstance)->NbPoles();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_BezierCurve::Pole(int Index)
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_BezierCurve*)_NativeInstance)->Pole(Index);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::Geom2d_BezierCurve::Poles(RDC::OCC::TColgp_Array1OfPnt2d^ P)
{
    ((::Geom2d_BezierCurve*)_NativeInstance)->Poles(*(::TColgp_Array1OfPnt2d*)P->NativeInstance);
}

RDC::OCC::TColgp_Array1OfPnt2d^ RDC::OCC::Geom2d_BezierCurve::Poles()
{
    ::TColgp_Array1OfPnt2d* _result = new ::TColgp_Array1OfPnt2d();
    *_result = (::TColgp_Array1OfPnt2d)((::Geom2d_BezierCurve*)_NativeInstance)->Poles();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfPnt2d(_result);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_BezierCurve::StartPoint()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_BezierCurve*)_NativeInstance)->StartPoint();
    return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::Geom2d_BezierCurve::Weight(int Index)
{
    double _result = ((::Geom2d_BezierCurve*)_NativeInstance)->Weight(Index);
    return _result;
}

void RDC::OCC::Geom2d_BezierCurve::Weights(RDC::OCC::TColStd_Array1OfReal^ W)
{
    ((::Geom2d_BezierCurve*)_NativeInstance)->Weights(*(::TColStd_Array1OfReal*)W->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::Geom2d_BezierCurve::Weights()
{
    const ::TColStd_Array1OfReal* _result = ((::Geom2d_BezierCurve*)_NativeInstance)->Weights();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal((::TColStd_Array1OfReal*)_result);
}

void RDC::OCC::Geom2d_BezierCurve::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_BezierCurve*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

int RDC::OCC::Geom2d_BezierCurve::MaxDegree()
{
    int _result = ::Geom2d_BezierCurve::MaxDegree();
    return _result;
}

void RDC::OCC::Geom2d_BezierCurve::Resolution(double ToleranceUV, double% UTolerance)
{
    pin_ptr<double> pp_UTolerance = &UTolerance;
    ((::Geom2d_BezierCurve*)_NativeInstance)->Resolution(ToleranceUV, *(double*)pp_UTolerance);
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_BezierCurve::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_BezierCurve*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_BezierCurve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_BezierCurve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_BezierCurve::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_BezierCurve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_BezierCurve^ RDC::OCC::Geom2d_BezierCurve::CreateDowncasted(::Geom2d_BezierCurve* instance)
{
    return gcnew RDC::OCC::Geom2d_BezierCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_BSplineCurve
//---------------------------------------------------------------------

RDC::OCC::Geom2d_BSplineCurve::Geom2d_BSplineCurve(RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic)
    : RDC::OCC::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_BSplineCurve(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, Periodic);
}

RDC::OCC::Geom2d_BSplineCurve::Geom2d_BSplineCurve(RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Multiplicities, int Degree)
    : RDC::OCC::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_BSplineCurve(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, false);
}

RDC::OCC::Geom2d_BSplineCurve::Geom2d_BSplineCurve(RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic)
    : RDC::OCC::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_BSplineCurve(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, Periodic);
}

RDC::OCC::Geom2d_BSplineCurve::Geom2d_BSplineCurve(RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Multiplicities, int Degree)
    : RDC::OCC::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_BSplineCurve(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, false);
}

void RDC::OCC::Geom2d_BSplineCurve::IncreaseDegree(int Degree)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->IncreaseDegree(Degree);
}

void RDC::OCC::Geom2d_BSplineCurve::IncreaseMultiplicity(int Index, int M)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->IncreaseMultiplicity(Index, M);
}

void RDC::OCC::Geom2d_BSplineCurve::IncreaseMultiplicity(int I1, int I2, int M)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->IncreaseMultiplicity(I1, I2, M);
}

void RDC::OCC::Geom2d_BSplineCurve::IncrementMultiplicity(int I1, int I2, int M)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->IncrementMultiplicity(I1, I2, M);
}

void RDC::OCC::Geom2d_BSplineCurve::InsertKnot(double U, int M, double ParametricTolerance)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->InsertKnot(U, M, ParametricTolerance);
}

void RDC::OCC::Geom2d_BSplineCurve::InsertKnot(double U, int M)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->InsertKnot(U, M, 0.);
}

void RDC::OCC::Geom2d_BSplineCurve::InsertKnot(double U)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->InsertKnot(U, 1, 0.);
}

void RDC::OCC::Geom2d_BSplineCurve::InsertKnots(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double ParametricTolerance, bool Add)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->InsertKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, ParametricTolerance, Add);
}

void RDC::OCC::Geom2d_BSplineCurve::InsertKnots(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double ParametricTolerance)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->InsertKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, ParametricTolerance, false);
}

void RDC::OCC::Geom2d_BSplineCurve::InsertKnots(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->InsertKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, 0., false);
}

bool RDC::OCC::Geom2d_BSplineCurve::RemoveKnot(int Index, int M, double Tolerance)
{
    bool _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->RemoveKnot(Index, M, Tolerance);
    return _result;
}

void RDC::OCC::Geom2d_BSplineCurve::InsertPoleAfter(int Index, RDC::OCC::Pnt2d P, double Weight)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->InsertPoleAfter(Index, *(gp_Pnt2d*)pp_P, Weight);
}

void RDC::OCC::Geom2d_BSplineCurve::InsertPoleAfter(int Index, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->InsertPoleAfter(Index, *(gp_Pnt2d*)pp_P, 1.);
}

void RDC::OCC::Geom2d_BSplineCurve::InsertPoleBefore(int Index, RDC::OCC::Pnt2d P, double Weight)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->InsertPoleBefore(Index, *(gp_Pnt2d*)pp_P, Weight);
}

void RDC::OCC::Geom2d_BSplineCurve::InsertPoleBefore(int Index, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->InsertPoleBefore(Index, *(gp_Pnt2d*)pp_P, 1.);
}

void RDC::OCC::Geom2d_BSplineCurve::RemovePole(int Index)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->RemovePole(Index);
}

void RDC::OCC::Geom2d_BSplineCurve::Reverse()
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom2d_BSplineCurve::ReversedParameter(double U)
{
    double _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->ReversedParameter(U);
    return _result;
}

void RDC::OCC::Geom2d_BSplineCurve::Segment(double U1, double U2, double theTolerance)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->Segment(U1, U2, theTolerance);
}

void RDC::OCC::Geom2d_BSplineCurve::Segment(double U1, double U2)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->Segment(U1, U2, ::Precision::PConfusion());
}

void RDC::OCC::Geom2d_BSplineCurve::SetKnot(int Index, double K)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->SetKnot(Index, K);
}

void RDC::OCC::Geom2d_BSplineCurve::SetKnots(RDC::OCC::TColStd_Array1OfReal^ K)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->SetKnots(*(::TColStd_Array1OfReal*)K->NativeInstance);
}

void RDC::OCC::Geom2d_BSplineCurve::SetKnot(int Index, double K, int M)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->SetKnot(Index, K, M);
}

void RDC::OCC::Geom2d_BSplineCurve::PeriodicNormalization(double% U)
{
    pin_ptr<double> pp_U = &U;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->PeriodicNormalization(*(double*)pp_U);
}

void RDC::OCC::Geom2d_BSplineCurve::SetPeriodic()
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->SetPeriodic();
}

void RDC::OCC::Geom2d_BSplineCurve::SetOrigin(int Index)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->SetOrigin(Index);
}

void RDC::OCC::Geom2d_BSplineCurve::SetNotPeriodic()
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->SetNotPeriodic();
}

void RDC::OCC::Geom2d_BSplineCurve::SetPole(int Index, RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->SetPole(Index, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_BSplineCurve::SetPole(int Index, RDC::OCC::Pnt2d P, double Weight)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->SetPole(Index, *(gp_Pnt2d*)pp_P, Weight);
}

void RDC::OCC::Geom2d_BSplineCurve::SetWeight(int Index, double Weight)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->SetWeight(Index, Weight);
}

void RDC::OCC::Geom2d_BSplineCurve::MovePoint(double U, RDC::OCC::Pnt2d P, int Index1, int Index2, int% FirstModifiedPole, int% LastModifiedPole)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<int> pp_FirstModifiedPole = &FirstModifiedPole;
    pin_ptr<int> pp_LastModifiedPole = &LastModifiedPole;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->MovePoint(U, *(gp_Pnt2d*)pp_P, Index1, Index2, *(int*)pp_FirstModifiedPole, *(int*)pp_LastModifiedPole);
}

void RDC::OCC::Geom2d_BSplineCurve::MovePointAndTangent(double U, RDC::OCC::Pnt2d P, RDC::OCC::Vec2d Tangent, double Tolerance, int StartingCondition, int EndingCondition, int% ErrorStatus)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_Tangent = &Tangent;
    pin_ptr<int> pp_ErrorStatus = &ErrorStatus;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->MovePointAndTangent(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_Tangent, Tolerance, StartingCondition, EndingCondition, *(int*)pp_ErrorStatus);
}

bool RDC::OCC::Geom2d_BSplineCurve::IsCN(int N)
{
    bool _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->IsCN(N);
    return _result;
}

bool RDC::OCC::Geom2d_BSplineCurve::IsG1(double theTf, double theTl, double theAngTol)
{
    bool _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->IsG1(theTf, theTl, theAngTol);
    return _result;
}

bool RDC::OCC::Geom2d_BSplineCurve::IsClosed()
{
    bool _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::Geom2d_BSplineCurve::IsPeriodic()
{
    bool _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->IsPeriodic();
    return _result;
}

bool RDC::OCC::Geom2d_BSplineCurve::IsRational()
{
    bool _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->IsRational();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom2d_BSplineCurve::Continuity()
{
    ::GeomAbs_Shape _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::Geom2d_BSplineCurve::Degree()
{
    int _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->Degree();
    return _result;
}

void RDC::OCC::Geom2d_BSplineCurve::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_BSplineCurve::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::Geom2d_BSplineCurve::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::Geom2d_BSplineCurve::D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::Geom2d_BSplineCurve::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::Geom2d_BSplineCurve*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_BSplineCurve::LocalValue(double U, int FromK1, int ToK2)
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_BSplineCurve*)_NativeInstance)->LocalValue(U, FromK1, ToK2);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::Geom2d_BSplineCurve::LocalD0(double U, int FromK1, int ToK2, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->LocalD0(U, FromK1, ToK2, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_BSplineCurve::LocalD1(double U, int FromK1, int ToK2, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->LocalD1(U, FromK1, ToK2, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::Geom2d_BSplineCurve::LocalD2(double U, int FromK1, int ToK2, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->LocalD2(U, FromK1, ToK2, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::Geom2d_BSplineCurve::LocalD3(double U, int FromK1, int ToK2, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->LocalD3(U, FromK1, ToK2, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::Geom2d_BSplineCurve::LocalDN(double U, int FromK1, int ToK2, int N)
{
    ::gp_Vec2d _nativeResult = ((::Geom2d_BSplineCurve*)_NativeInstance)->LocalDN(U, FromK1, ToK2, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_BSplineCurve::EndPoint()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_BSplineCurve*)_NativeInstance)->EndPoint();
    return RDC::OCC::Pnt2d(_nativeResult);
}

int RDC::OCC::Geom2d_BSplineCurve::FirstUKnotIndex()
{
    int _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->FirstUKnotIndex();
    return _result;
}

double RDC::OCC::Geom2d_BSplineCurve::FirstParameter()
{
    double _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::Geom2d_BSplineCurve::Knot(int Index)
{
    double _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->Knot(Index);
    return _result;
}

void RDC::OCC::Geom2d_BSplineCurve::Knots(RDC::OCC::TColStd_Array1OfReal^ K)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->Knots(*(::TColStd_Array1OfReal*)K->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::Geom2d_BSplineCurve::Knots()
{
    ::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
    *_result = (::TColStd_Array1OfReal)((::Geom2d_BSplineCurve*)_NativeInstance)->Knots();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

void RDC::OCC::Geom2d_BSplineCurve::KnotSequence(RDC::OCC::TColStd_Array1OfReal^ K)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->KnotSequence(*(::TColStd_Array1OfReal*)K->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::Geom2d_BSplineCurve::KnotSequence()
{
    ::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
    *_result = (::TColStd_Array1OfReal)((::Geom2d_BSplineCurve*)_NativeInstance)->KnotSequence();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

RDC::OCC::GeomAbs_BSplKnotDistribution RDC::OCC::Geom2d_BSplineCurve::KnotDistribution()
{
    ::GeomAbs_BSplKnotDistribution _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->KnotDistribution();
    return (RDC::OCC::GeomAbs_BSplKnotDistribution)_result;
}

int RDC::OCC::Geom2d_BSplineCurve::LastUKnotIndex()
{
    int _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->LastUKnotIndex();
    return _result;
}

double RDC::OCC::Geom2d_BSplineCurve::LastParameter()
{
    double _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->LastParameter();
    return _result;
}

void RDC::OCC::Geom2d_BSplineCurve::LocateU(double U, double ParametricTolerance, int% I1, int% I2, bool WithKnotRepetition)
{
    pin_ptr<int> pp_I1 = &I1;
    pin_ptr<int> pp_I2 = &I2;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->LocateU(U, ParametricTolerance, *(int*)pp_I1, *(int*)pp_I2, WithKnotRepetition);
}

void RDC::OCC::Geom2d_BSplineCurve::LocateU(double U, double ParametricTolerance, int% I1, int% I2)
{
    pin_ptr<int> pp_I1 = &I1;
    pin_ptr<int> pp_I2 = &I2;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->LocateU(U, ParametricTolerance, *(int*)pp_I1, *(int*)pp_I2, false);
}

int RDC::OCC::Geom2d_BSplineCurve::Multiplicity(int Index)
{
    int _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->Multiplicity(Index);
    return _result;
}

void RDC::OCC::Geom2d_BSplineCurve::Multiplicities(RDC::OCC::TColStd_Array1OfInteger^ M)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->Multiplicities(*(::TColStd_Array1OfInteger*)M->NativeInstance);
}

RDC::OCC::TColStd_Array1OfInteger^ RDC::OCC::Geom2d_BSplineCurve::Multiplicities()
{
    ::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
    *_result = (::TColStd_Array1OfInteger)((::Geom2d_BSplineCurve*)_NativeInstance)->Multiplicities();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfInteger(_result);
}

int RDC::OCC::Geom2d_BSplineCurve::NbKnots()
{
    int _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->NbKnots();
    return _result;
}

int RDC::OCC::Geom2d_BSplineCurve::NbPoles()
{
    int _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->NbPoles();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_BSplineCurve::Pole(int Index)
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_BSplineCurve*)_NativeInstance)->Pole(Index);
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::Geom2d_BSplineCurve::Poles(RDC::OCC::TColgp_Array1OfPnt2d^ P)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->Poles(*(::TColgp_Array1OfPnt2d*)P->NativeInstance);
}

RDC::OCC::TColgp_Array1OfPnt2d^ RDC::OCC::Geom2d_BSplineCurve::Poles()
{
    ::TColgp_Array1OfPnt2d* _result = new ::TColgp_Array1OfPnt2d();
    *_result = (::TColgp_Array1OfPnt2d)((::Geom2d_BSplineCurve*)_NativeInstance)->Poles();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfPnt2d(_result);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_BSplineCurve::StartPoint()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_BSplineCurve*)_NativeInstance)->StartPoint();
    return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::Geom2d_BSplineCurve::Weight(int Index)
{
    double _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->Weight(Index);
    return _result;
}

void RDC::OCC::Geom2d_BSplineCurve::Weights(RDC::OCC::TColStd_Array1OfReal^ W)
{
    ((::Geom2d_BSplineCurve*)_NativeInstance)->Weights(*(::TColStd_Array1OfReal*)W->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::Geom2d_BSplineCurve::Weights()
{
    const ::TColStd_Array1OfReal* _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->Weights();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal((::TColStd_Array1OfReal*)_result);
}

void RDC::OCC::Geom2d_BSplineCurve::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

int RDC::OCC::Geom2d_BSplineCurve::MaxDegree()
{
    int _result = ::Geom2d_BSplineCurve::MaxDegree();
    return _result;
}

void RDC::OCC::Geom2d_BSplineCurve::Resolution(double ToleranceUV, double% UTolerance)
{
    pin_ptr<double> pp_UTolerance = &UTolerance;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->Resolution(ToleranceUV, *(double*)pp_UTolerance);
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_BSplineCurve::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_BSplineCurve*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_BSplineCurve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_BSplineCurve::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_BSplineCurve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_BSplineCurve^ RDC::OCC::Geom2d_BSplineCurve::CreateDowncasted(::Geom2d_BSplineCurve* instance)
{
    return gcnew RDC::OCC::Geom2d_BSplineCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Point
//---------------------------------------------------------------------

RDC::OCC::Geom2d_Point::Geom2d_Point()
    : RDC::OCC::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom2d_Point::Coord(double% X, double% Y)
{
    pin_ptr<double> pp_X = &X;
    pin_ptr<double> pp_Y = &Y;
    ((::Geom2d_Point*)_NativeInstance)->Coord(*(double*)pp_X, *(double*)pp_Y);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_Point::Pnt2d()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_Point*)_NativeInstance)->Pnt2d();
    return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::Geom2d_Point::X()
{
    double _result = ((::Geom2d_Point*)_NativeInstance)->X();
    return _result;
}

double RDC::OCC::Geom2d_Point::Y()
{
    double _result = ((::Geom2d_Point*)_NativeInstance)->Y();
    return _result;
}

double RDC::OCC::Geom2d_Point::Distance(RDC::OCC::Geom2d_Point^ Other)
{
    double _result = ((::Geom2d_Point*)_NativeInstance)->Distance(Handle(::Geom2d_Point)(Other->NativeInstance));
    return _result;
}

double RDC::OCC::Geom2d_Point::SquareDistance(RDC::OCC::Geom2d_Point^ Other)
{
    double _result = ((::Geom2d_Point*)_NativeInstance)->SquareDistance(Handle(::Geom2d_Point)(Other->NativeInstance));
    return _result;
}

void RDC::OCC::Geom2d_Point::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Point*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_Point::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Point*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_Point^ RDC::OCC::Geom2d_Point::CreateDowncasted(::Geom2d_Point* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_CartesianPoint)))
        return RDC::OCC::Geom2d_CartesianPoint::CreateDowncasted((::Geom2d_CartesianPoint*)instance);
    
    return gcnew RDC::OCC::Geom2d_Point( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_CartesianPoint
//---------------------------------------------------------------------

RDC::OCC::Geom2d_CartesianPoint::Geom2d_CartesianPoint(RDC::OCC::Pnt2d P)
    : RDC::OCC::Geom2d_Point(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    NativeInstance = new ::Geom2d_CartesianPoint(*(gp_Pnt2d*)pp_P);
}

RDC::OCC::Geom2d_CartesianPoint::Geom2d_CartesianPoint(double X, double Y)
    : RDC::OCC::Geom2d_Point(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_CartesianPoint(X, Y);
}

void RDC::OCC::Geom2d_CartesianPoint::SetCoord(double X, double Y)
{
    ((::Geom2d_CartesianPoint*)_NativeInstance)->SetCoord(X, Y);
}

void RDC::OCC::Geom2d_CartesianPoint::SetPnt2d(RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_CartesianPoint*)_NativeInstance)->SetPnt2d(*(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_CartesianPoint::SetX(double X)
{
    ((::Geom2d_CartesianPoint*)_NativeInstance)->SetX(X);
}

void RDC::OCC::Geom2d_CartesianPoint::SetY(double Y)
{
    ((::Geom2d_CartesianPoint*)_NativeInstance)->SetY(Y);
}

void RDC::OCC::Geom2d_CartesianPoint::Coord(double% X, double% Y)
{
    pin_ptr<double> pp_X = &X;
    pin_ptr<double> pp_Y = &Y;
    ((::Geom2d_CartesianPoint*)_NativeInstance)->Coord(*(double*)pp_X, *(double*)pp_Y);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_CartesianPoint::Pnt2d()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_CartesianPoint*)_NativeInstance)->Pnt2d();
    return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::Geom2d_CartesianPoint::X()
{
    double _result = ((::Geom2d_CartesianPoint*)_NativeInstance)->X();
    return _result;
}

double RDC::OCC::Geom2d_CartesianPoint::Y()
{
    double _result = ((::Geom2d_CartesianPoint*)_NativeInstance)->Y();
    return _result;
}

void RDC::OCC::Geom2d_CartesianPoint::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_CartesianPoint*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_CartesianPoint::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_CartesianPoint*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_CartesianPoint::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_CartesianPoint*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_CartesianPoint::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_CartesianPoint*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_CartesianPoint^ RDC::OCC::Geom2d_CartesianPoint::CreateDowncasted(::Geom2d_CartesianPoint* instance)
{
    return gcnew RDC::OCC::Geom2d_CartesianPoint( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Conic
//---------------------------------------------------------------------

RDC::OCC::Geom2d_Conic::Geom2d_Conic()
    : RDC::OCC::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom2d_Conic::SetAxis(RDC::OCC::Ax22d theA)
{
    pin_ptr<RDC::OCC::Ax22d> pp_theA = &theA;
    ((::Geom2d_Conic*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_theA);
}

void RDC::OCC::Geom2d_Conic::SetXAxis(RDC::OCC::Ax2d theAX)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theAX = &theAX;
    ((::Geom2d_Conic*)_NativeInstance)->SetXAxis(*(gp_Ax2d*)pp_theAX);
}

void RDC::OCC::Geom2d_Conic::SetYAxis(RDC::OCC::Ax2d theAY)
{
    pin_ptr<RDC::OCC::Ax2d> pp_theAY = &theAY;
    ((::Geom2d_Conic*)_NativeInstance)->SetYAxis(*(gp_Ax2d*)pp_theAY);
}

void RDC::OCC::Geom2d_Conic::SetLocation(RDC::OCC::Pnt2d theP)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_theP = &theP;
    ((::Geom2d_Conic*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_theP);
}

RDC::OCC::Ax2d RDC::OCC::Geom2d_Conic::XAxis()
{
    ::gp_Ax2d _nativeResult = ((::Geom2d_Conic*)_NativeInstance)->XAxis();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::Geom2d_Conic::YAxis()
{
    ::gp_Ax2d _nativeResult = ((::Geom2d_Conic*)_NativeInstance)->YAxis();
    return RDC::OCC::Ax2d(_nativeResult);
}

double RDC::OCC::Geom2d_Conic::Eccentricity()
{
    double _result = ((::Geom2d_Conic*)_NativeInstance)->Eccentricity();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_Conic::Location()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_Conic*)_NativeInstance)->Location();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Ax22d RDC::OCC::Geom2d_Conic::Position()
{
    ::gp_Ax22d _nativeResult = ((::Geom2d_Conic*)_NativeInstance)->Position();
    return RDC::OCC::Ax22d(_nativeResult);
}

void RDC::OCC::Geom2d_Conic::Reverse()
{
    ((::Geom2d_Conic*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom2d_Conic::ReversedParameter(double U)
{
    double _result = ((::Geom2d_Conic*)_NativeInstance)->ReversedParameter(U);
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom2d_Conic::Continuity()
{
    ::GeomAbs_Shape _result = ((::Geom2d_Conic*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

bool RDC::OCC::Geom2d_Conic::IsCN(int N)
{
    bool _result = ((::Geom2d_Conic*)_NativeInstance)->IsCN(N);
    return _result;
}

void RDC::OCC::Geom2d_Conic::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Conic*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_Conic::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Conic*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_Conic^ RDC::OCC::Geom2d_Conic::CreateDowncasted(::Geom2d_Conic* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_Circle)))
        return RDC::OCC::Geom2d_Circle::CreateDowncasted((::Geom2d_Circle*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_Ellipse)))
        return RDC::OCC::Geom2d_Ellipse::CreateDowncasted((::Geom2d_Ellipse*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_Hyperbola)))
        return RDC::OCC::Geom2d_Hyperbola::CreateDowncasted((::Geom2d_Hyperbola*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_Parabola)))
        return RDC::OCC::Geom2d_Parabola::CreateDowncasted((::Geom2d_Parabola*)instance);
    
    return gcnew RDC::OCC::Geom2d_Conic( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Circle
//---------------------------------------------------------------------

RDC::OCC::Geom2d_Circle::Geom2d_Circle(RDC::OCC::gp_Circ2d^ C)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_Circle(*(::gp_Circ2d*)C->NativeInstance);
}

RDC::OCC::Geom2d_Circle::Geom2d_Circle(RDC::OCC::Ax2d A, double Radius, bool Sense)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_A = &A;
    NativeInstance = new ::Geom2d_Circle(*(gp_Ax2d*)pp_A, Radius, Sense);
}

RDC::OCC::Geom2d_Circle::Geom2d_Circle(RDC::OCC::Ax2d A, double Radius)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_A = &A;
    NativeInstance = new ::Geom2d_Circle(*(gp_Ax2d*)pp_A, Radius, true);
}

RDC::OCC::Geom2d_Circle::Geom2d_Circle(RDC::OCC::Ax22d A, double Radius)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax22d> pp_A = &A;
    NativeInstance = new ::Geom2d_Circle(*(gp_Ax22d*)pp_A, Radius);
}

void RDC::OCC::Geom2d_Circle::SetCirc2d(RDC::OCC::gp_Circ2d^ C)
{
    ((::Geom2d_Circle*)_NativeInstance)->SetCirc2d(*(::gp_Circ2d*)C->NativeInstance);
}

void RDC::OCC::Geom2d_Circle::SetRadius(double R)
{
    ((::Geom2d_Circle*)_NativeInstance)->SetRadius(R);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::Geom2d_Circle::Circ2d()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::Geom2d_Circle*)_NativeInstance)->Circ2d();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

double RDC::OCC::Geom2d_Circle::Radius()
{
    double _result = ((::Geom2d_Circle*)_NativeInstance)->Radius();
    return _result;
}

double RDC::OCC::Geom2d_Circle::ReversedParameter(double U)
{
    double _result = ((::Geom2d_Circle*)_NativeInstance)->ReversedParameter(U);
    return _result;
}

double RDC::OCC::Geom2d_Circle::Eccentricity()
{
    double _result = ((::Geom2d_Circle*)_NativeInstance)->Eccentricity();
    return _result;
}

double RDC::OCC::Geom2d_Circle::FirstParameter()
{
    double _result = ((::Geom2d_Circle*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::Geom2d_Circle::LastParameter()
{
    double _result = ((::Geom2d_Circle*)_NativeInstance)->LastParameter();
    return _result;
}

bool RDC::OCC::Geom2d_Circle::IsClosed()
{
    bool _result = ((::Geom2d_Circle*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::Geom2d_Circle::IsPeriodic()
{
    bool _result = ((::Geom2d_Circle*)_NativeInstance)->IsPeriodic();
    return _result;
}

void RDC::OCC::Geom2d_Circle::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Circle*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_Circle::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ((::Geom2d_Circle*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::Geom2d_Circle::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::Geom2d_Circle*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::Geom2d_Circle::D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::Geom2d_Circle*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::Geom2d_Circle::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::Geom2d_Circle*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::Geom2d_Circle::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_Circle*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Circle::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Circle*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_Circle::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Circle*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_Circle::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Circle*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_Circle^ RDC::OCC::Geom2d_Circle::CreateDowncasted(::Geom2d_Circle* instance)
{
    return gcnew RDC::OCC::Geom2d_Circle( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Vector
//---------------------------------------------------------------------

RDC::OCC::Geom2d_Vector::Geom2d_Vector()
    : RDC::OCC::Geom2d_Geometry(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom2d_Vector::Reverse()
{
    ((::Geom2d_Vector*)_NativeInstance)->Reverse();
}

RDC::OCC::Geom2d_Vector^ RDC::OCC::Geom2d_Vector::Reversed()
{
    Handle(::Geom2d_Vector) _result = ((::Geom2d_Vector*)_NativeInstance)->Reversed();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Vector::CreateDowncasted(_result.get());
}

double RDC::OCC::Geom2d_Vector::Angle(RDC::OCC::Geom2d_Vector^ Other)
{
    double _result = ((::Geom2d_Vector*)_NativeInstance)->Angle(Handle(::Geom2d_Vector)(Other->NativeInstance));
    return _result;
}

void RDC::OCC::Geom2d_Vector::Coord(double% X, double% Y)
{
    pin_ptr<double> pp_X = &X;
    pin_ptr<double> pp_Y = &Y;
    ((::Geom2d_Vector*)_NativeInstance)->Coord(*(double*)pp_X, *(double*)pp_Y);
}

double RDC::OCC::Geom2d_Vector::Magnitude()
{
    double _result = ((::Geom2d_Vector*)_NativeInstance)->Magnitude();
    return _result;
}

double RDC::OCC::Geom2d_Vector::SquareMagnitude()
{
    double _result = ((::Geom2d_Vector*)_NativeInstance)->SquareMagnitude();
    return _result;
}

double RDC::OCC::Geom2d_Vector::X()
{
    double _result = ((::Geom2d_Vector*)_NativeInstance)->X();
    return _result;
}

double RDC::OCC::Geom2d_Vector::Y()
{
    double _result = ((::Geom2d_Vector*)_NativeInstance)->Y();
    return _result;
}

double RDC::OCC::Geom2d_Vector::Crossed(RDC::OCC::Geom2d_Vector^ Other)
{
    double _result = ((::Geom2d_Vector*)_NativeInstance)->Crossed(Handle(::Geom2d_Vector)(Other->NativeInstance));
    return _result;
}

double RDC::OCC::Geom2d_Vector::Dot(RDC::OCC::Geom2d_Vector^ Other)
{
    double _result = ((::Geom2d_Vector*)_NativeInstance)->Dot(Handle(::Geom2d_Vector)(Other->NativeInstance));
    return _result;
}

RDC::OCC::Vec2d RDC::OCC::Geom2d_Vector::Vec2d()
{
    ::gp_Vec2d _nativeResult = ((::Geom2d_Vector*)_NativeInstance)->Vec2d();
    return RDC::OCC::Vec2d(_nativeResult);
}

RDC::OCC::Geom2d_Vector^ RDC::OCC::Geom2d_Vector::CreateDowncasted(::Geom2d_Vector* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_Direction)))
        return RDC::OCC::Geom2d_Direction::CreateDowncasted((::Geom2d_Direction*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_VectorWithMagnitude)))
        return RDC::OCC::Geom2d_VectorWithMagnitude::CreateDowncasted((::Geom2d_VectorWithMagnitude*)instance);
    
    return gcnew RDC::OCC::Geom2d_Vector( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Direction
//---------------------------------------------------------------------

RDC::OCC::Geom2d_Direction::Geom2d_Direction(double X, double Y)
    : RDC::OCC::Geom2d_Vector(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_Direction(X, Y);
}

RDC::OCC::Geom2d_Direction::Geom2d_Direction(RDC::OCC::Dir2d V)
    : RDC::OCC::Geom2d_Vector(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir2d> pp_V = &V;
    NativeInstance = new ::Geom2d_Direction(*(gp_Dir2d*)pp_V);
}

void RDC::OCC::Geom2d_Direction::SetCoord(double X, double Y)
{
    ((::Geom2d_Direction*)_NativeInstance)->SetCoord(X, Y);
}

void RDC::OCC::Geom2d_Direction::SetDir2d(RDC::OCC::Dir2d V)
{
    pin_ptr<RDC::OCC::Dir2d> pp_V = &V;
    ((::Geom2d_Direction*)_NativeInstance)->SetDir2d(*(gp_Dir2d*)pp_V);
}

void RDC::OCC::Geom2d_Direction::SetX(double X)
{
    ((::Geom2d_Direction*)_NativeInstance)->SetX(X);
}

void RDC::OCC::Geom2d_Direction::SetY(double Y)
{
    ((::Geom2d_Direction*)_NativeInstance)->SetY(Y);
}

RDC::OCC::Dir2d RDC::OCC::Geom2d_Direction::Dir2d()
{
    ::gp_Dir2d _nativeResult = ((::Geom2d_Direction*)_NativeInstance)->Dir2d();
    return RDC::OCC::Dir2d(_nativeResult);
}

double RDC::OCC::Geom2d_Direction::Magnitude()
{
    double _result = ((::Geom2d_Direction*)_NativeInstance)->Magnitude();
    return _result;
}

double RDC::OCC::Geom2d_Direction::SquareMagnitude()
{
    double _result = ((::Geom2d_Direction*)_NativeInstance)->SquareMagnitude();
    return _result;
}

double RDC::OCC::Geom2d_Direction::Crossed(RDC::OCC::Geom2d_Vector^ Other)
{
    double _result = ((::Geom2d_Direction*)_NativeInstance)->Crossed(Handle(::Geom2d_Vector)(Other->NativeInstance));
    return _result;
}

void RDC::OCC::Geom2d_Direction::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_Direction*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Direction::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Direction*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Direction^ RDC::OCC::Geom2d_Direction::CreateDowncasted(::Geom2d_Direction* instance)
{
    return gcnew RDC::OCC::Geom2d_Direction( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Ellipse
//---------------------------------------------------------------------

RDC::OCC::Geom2d_Ellipse::Geom2d_Ellipse(RDC::OCC::gp_Elips2d^ E)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_Ellipse(*(::gp_Elips2d*)E->NativeInstance);
}

RDC::OCC::Geom2d_Ellipse::Geom2d_Ellipse(RDC::OCC::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_MajorAxis = &MajorAxis;
    NativeInstance = new ::Geom2d_Ellipse(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, Sense);
}

RDC::OCC::Geom2d_Ellipse::Geom2d_Ellipse(RDC::OCC::Ax2d MajorAxis, double MajorRadius, double MinorRadius)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_MajorAxis = &MajorAxis;
    NativeInstance = new ::Geom2d_Ellipse(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, true);
}

RDC::OCC::Geom2d_Ellipse::Geom2d_Ellipse(RDC::OCC::Ax22d Axis, double MajorRadius, double MinorRadius)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Axis = &Axis;
    NativeInstance = new ::Geom2d_Ellipse(*(gp_Ax22d*)pp_Axis, MajorRadius, MinorRadius);
}

void RDC::OCC::Geom2d_Ellipse::SetElips2d(RDC::OCC::gp_Elips2d^ E)
{
    ((::Geom2d_Ellipse*)_NativeInstance)->SetElips2d(*(::gp_Elips2d*)E->NativeInstance);
}

void RDC::OCC::Geom2d_Ellipse::SetMajorRadius(double MajorRadius)
{
    ((::Geom2d_Ellipse*)_NativeInstance)->SetMajorRadius(MajorRadius);
}

void RDC::OCC::Geom2d_Ellipse::SetMinorRadius(double MinorRadius)
{
    ((::Geom2d_Ellipse*)_NativeInstance)->SetMinorRadius(MinorRadius);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::Geom2d_Ellipse::Elips2d()
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    *_result = ((::Geom2d_Ellipse*)_NativeInstance)->Elips2d();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

double RDC::OCC::Geom2d_Ellipse::ReversedParameter(double U)
{
    double _result = ((::Geom2d_Ellipse*)_NativeInstance)->ReversedParameter(U);
    return _result;
}

RDC::OCC::Ax2d RDC::OCC::Geom2d_Ellipse::Directrix1()
{
    ::gp_Ax2d _nativeResult = ((::Geom2d_Ellipse*)_NativeInstance)->Directrix1();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::Geom2d_Ellipse::Directrix2()
{
    ::gp_Ax2d _nativeResult = ((::Geom2d_Ellipse*)_NativeInstance)->Directrix2();
    return RDC::OCC::Ax2d(_nativeResult);
}

double RDC::OCC::Geom2d_Ellipse::Eccentricity()
{
    double _result = ((::Geom2d_Ellipse*)_NativeInstance)->Eccentricity();
    return _result;
}

double RDC::OCC::Geom2d_Ellipse::Focal()
{
    double _result = ((::Geom2d_Ellipse*)_NativeInstance)->Focal();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_Ellipse::Focus1()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_Ellipse*)_NativeInstance)->Focus1();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_Ellipse::Focus2()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_Ellipse*)_NativeInstance)->Focus2();
    return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::Geom2d_Ellipse::MajorRadius()
{
    double _result = ((::Geom2d_Ellipse*)_NativeInstance)->MajorRadius();
    return _result;
}

double RDC::OCC::Geom2d_Ellipse::MinorRadius()
{
    double _result = ((::Geom2d_Ellipse*)_NativeInstance)->MinorRadius();
    return _result;
}

double RDC::OCC::Geom2d_Ellipse::Parameter()
{
    double _result = ((::Geom2d_Ellipse*)_NativeInstance)->Parameter();
    return _result;
}

double RDC::OCC::Geom2d_Ellipse::FirstParameter()
{
    double _result = ((::Geom2d_Ellipse*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::Geom2d_Ellipse::LastParameter()
{
    double _result = ((::Geom2d_Ellipse*)_NativeInstance)->LastParameter();
    return _result;
}

bool RDC::OCC::Geom2d_Ellipse::IsClosed()
{
    bool _result = ((::Geom2d_Ellipse*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::Geom2d_Ellipse::IsPeriodic()
{
    bool _result = ((::Geom2d_Ellipse*)_NativeInstance)->IsPeriodic();
    return _result;
}

void RDC::OCC::Geom2d_Ellipse::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Ellipse*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_Ellipse::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ((::Geom2d_Ellipse*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::Geom2d_Ellipse::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::Geom2d_Ellipse*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::Geom2d_Ellipse::D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::Geom2d_Ellipse*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::Geom2d_Ellipse::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::Geom2d_Ellipse*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::Geom2d_Ellipse::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_Ellipse*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Ellipse::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Ellipse*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_Ellipse::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Ellipse*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_Ellipse::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Ellipse*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_Ellipse^ RDC::OCC::Geom2d_Ellipse::CreateDowncasted(::Geom2d_Ellipse* instance)
{
    return gcnew RDC::OCC::Geom2d_Ellipse( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Hyperbola
//---------------------------------------------------------------------

RDC::OCC::Geom2d_Hyperbola::Geom2d_Hyperbola(RDC::OCC::gp_Hypr2d^ H)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_Hyperbola(*(::gp_Hypr2d*)H->NativeInstance);
}

RDC::OCC::Geom2d_Hyperbola::Geom2d_Hyperbola(RDC::OCC::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_MajorAxis = &MajorAxis;
    NativeInstance = new ::Geom2d_Hyperbola(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, Sense);
}

RDC::OCC::Geom2d_Hyperbola::Geom2d_Hyperbola(RDC::OCC::Ax2d MajorAxis, double MajorRadius, double MinorRadius)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_MajorAxis = &MajorAxis;
    NativeInstance = new ::Geom2d_Hyperbola(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, true);
}

RDC::OCC::Geom2d_Hyperbola::Geom2d_Hyperbola(RDC::OCC::Ax22d Axis, double MajorRadius, double MinorRadius)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Axis = &Axis;
    NativeInstance = new ::Geom2d_Hyperbola(*(gp_Ax22d*)pp_Axis, MajorRadius, MinorRadius);
}

void RDC::OCC::Geom2d_Hyperbola::SetHypr2d(RDC::OCC::gp_Hypr2d^ H)
{
    ((::Geom2d_Hyperbola*)_NativeInstance)->SetHypr2d(*(::gp_Hypr2d*)H->NativeInstance);
}

void RDC::OCC::Geom2d_Hyperbola::SetMajorRadius(double MajorRadius)
{
    ((::Geom2d_Hyperbola*)_NativeInstance)->SetMajorRadius(MajorRadius);
}

void RDC::OCC::Geom2d_Hyperbola::SetMinorRadius(double MinorRadius)
{
    ((::Geom2d_Hyperbola*)_NativeInstance)->SetMinorRadius(MinorRadius);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::Geom2d_Hyperbola::Hypr2d()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::Geom2d_Hyperbola*)_NativeInstance)->Hypr2d();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

double RDC::OCC::Geom2d_Hyperbola::ReversedParameter(double U)
{
    double _result = ((::Geom2d_Hyperbola*)_NativeInstance)->ReversedParameter(U);
    return _result;
}

double RDC::OCC::Geom2d_Hyperbola::FirstParameter()
{
    double _result = ((::Geom2d_Hyperbola*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::Geom2d_Hyperbola::LastParameter()
{
    double _result = ((::Geom2d_Hyperbola*)_NativeInstance)->LastParameter();
    return _result;
}

bool RDC::OCC::Geom2d_Hyperbola::IsClosed()
{
    bool _result = ((::Geom2d_Hyperbola*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::Geom2d_Hyperbola::IsPeriodic()
{
    bool _result = ((::Geom2d_Hyperbola*)_NativeInstance)->IsPeriodic();
    return _result;
}

RDC::OCC::Ax2d RDC::OCC::Geom2d_Hyperbola::Asymptote1()
{
    ::gp_Ax2d _nativeResult = ((::Geom2d_Hyperbola*)_NativeInstance)->Asymptote1();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::Geom2d_Hyperbola::Asymptote2()
{
    ::gp_Ax2d _nativeResult = ((::Geom2d_Hyperbola*)_NativeInstance)->Asymptote2();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::Geom2d_Hyperbola::ConjugateBranch1()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::Geom2d_Hyperbola*)_NativeInstance)->ConjugateBranch1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::Geom2d_Hyperbola::ConjugateBranch2()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::Geom2d_Hyperbola*)_NativeInstance)->ConjugateBranch2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

RDC::OCC::Ax2d RDC::OCC::Geom2d_Hyperbola::Directrix1()
{
    ::gp_Ax2d _nativeResult = ((::Geom2d_Hyperbola*)_NativeInstance)->Directrix1();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::Ax2d RDC::OCC::Geom2d_Hyperbola::Directrix2()
{
    ::gp_Ax2d _nativeResult = ((::Geom2d_Hyperbola*)_NativeInstance)->Directrix2();
    return RDC::OCC::Ax2d(_nativeResult);
}

double RDC::OCC::Geom2d_Hyperbola::Eccentricity()
{
    double _result = ((::Geom2d_Hyperbola*)_NativeInstance)->Eccentricity();
    return _result;
}

double RDC::OCC::Geom2d_Hyperbola::Focal()
{
    double _result = ((::Geom2d_Hyperbola*)_NativeInstance)->Focal();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_Hyperbola::Focus1()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_Hyperbola*)_NativeInstance)->Focus1();
    return RDC::OCC::Pnt2d(_nativeResult);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_Hyperbola::Focus2()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_Hyperbola*)_NativeInstance)->Focus2();
    return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::Geom2d_Hyperbola::MajorRadius()
{
    double _result = ((::Geom2d_Hyperbola*)_NativeInstance)->MajorRadius();
    return _result;
}

double RDC::OCC::Geom2d_Hyperbola::MinorRadius()
{
    double _result = ((::Geom2d_Hyperbola*)_NativeInstance)->MinorRadius();
    return _result;
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::Geom2d_Hyperbola::OtherBranch()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::Geom2d_Hyperbola*)_NativeInstance)->OtherBranch();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

double RDC::OCC::Geom2d_Hyperbola::Parameter()
{
    double _result = ((::Geom2d_Hyperbola*)_NativeInstance)->Parameter();
    return _result;
}

void RDC::OCC::Geom2d_Hyperbola::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Hyperbola*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_Hyperbola::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ((::Geom2d_Hyperbola*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::Geom2d_Hyperbola::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::Geom2d_Hyperbola*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::Geom2d_Hyperbola::D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::Geom2d_Hyperbola*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::Geom2d_Hyperbola::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::Geom2d_Hyperbola*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::Geom2d_Hyperbola::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_Hyperbola*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Hyperbola::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Hyperbola*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_Hyperbola::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Hyperbola*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_Hyperbola::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Hyperbola*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_Hyperbola^ RDC::OCC::Geom2d_Hyperbola::CreateDowncasted(::Geom2d_Hyperbola* instance)
{
    return gcnew RDC::OCC::Geom2d_Hyperbola( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Line
//---------------------------------------------------------------------

RDC::OCC::Geom2d_Line::Geom2d_Line(RDC::OCC::Ax2d A)
    : RDC::OCC::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_A = &A;
    NativeInstance = new ::Geom2d_Line(*(gp_Ax2d*)pp_A);
}

RDC::OCC::Geom2d_Line::Geom2d_Line(RDC::OCC::gp_Lin2d^ L)
    : RDC::OCC::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_Line(*(::gp_Lin2d*)L->NativeInstance);
}

RDC::OCC::Geom2d_Line::Geom2d_Line(RDC::OCC::Pnt2d P, RDC::OCC::Dir2d V)
    : RDC::OCC::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Dir2d> pp_V = &V;
    NativeInstance = new ::Geom2d_Line(*(gp_Pnt2d*)pp_P, *(gp_Dir2d*)pp_V);
}

void RDC::OCC::Geom2d_Line::SetLin2d(RDC::OCC::gp_Lin2d^ L)
{
    ((::Geom2d_Line*)_NativeInstance)->SetLin2d(*(::gp_Lin2d*)L->NativeInstance);
}

void RDC::OCC::Geom2d_Line::SetDirection(RDC::OCC::Dir2d V)
{
    pin_ptr<RDC::OCC::Dir2d> pp_V = &V;
    ((::Geom2d_Line*)_NativeInstance)->SetDirection(*(gp_Dir2d*)pp_V);
}

RDC::OCC::Dir2d RDC::OCC::Geom2d_Line::Direction()
{
    ::gp_Dir2d _nativeResult = ((::Geom2d_Line*)_NativeInstance)->Direction();
    return RDC::OCC::Dir2d(_nativeResult);
}

void RDC::OCC::Geom2d_Line::SetLocation(RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Line*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_P);
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_Line::Location()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_Line*)_NativeInstance)->Location();
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::Geom2d_Line::SetPosition(RDC::OCC::Ax2d A)
{
    pin_ptr<RDC::OCC::Ax2d> pp_A = &A;
    ((::Geom2d_Line*)_NativeInstance)->SetPosition(*(gp_Ax2d*)pp_A);
}

RDC::OCC::Ax2d RDC::OCC::Geom2d_Line::Position()
{
    ::gp_Ax2d _nativeResult = ((::Geom2d_Line*)_NativeInstance)->Position();
    return RDC::OCC::Ax2d(_nativeResult);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::Geom2d_Line::Lin2d()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::Geom2d_Line*)_NativeInstance)->Lin2d();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

void RDC::OCC::Geom2d_Line::Reverse()
{
    ((::Geom2d_Line*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom2d_Line::ReversedParameter(double U)
{
    double _result = ((::Geom2d_Line*)_NativeInstance)->ReversedParameter(U);
    return _result;
}

double RDC::OCC::Geom2d_Line::FirstParameter()
{
    double _result = ((::Geom2d_Line*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::Geom2d_Line::LastParameter()
{
    double _result = ((::Geom2d_Line*)_NativeInstance)->LastParameter();
    return _result;
}

bool RDC::OCC::Geom2d_Line::IsClosed()
{
    bool _result = ((::Geom2d_Line*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::Geom2d_Line::IsPeriodic()
{
    bool _result = ((::Geom2d_Line*)_NativeInstance)->IsPeriodic();
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom2d_Line::Continuity()
{
    ::GeomAbs_Shape _result = ((::Geom2d_Line*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

double RDC::OCC::Geom2d_Line::Distance(RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    double _result = ((::Geom2d_Line*)_NativeInstance)->Distance(*(gp_Pnt2d*)pp_P);
    return _result;
}

bool RDC::OCC::Geom2d_Line::IsCN(int N)
{
    bool _result = ((::Geom2d_Line*)_NativeInstance)->IsCN(N);
    return _result;
}

void RDC::OCC::Geom2d_Line::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Line*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_Line::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ((::Geom2d_Line*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::Geom2d_Line::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::Geom2d_Line*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::Geom2d_Line::D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::Geom2d_Line*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::Geom2d_Line::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::Geom2d_Line*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::Geom2d_Line::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_Line*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

double RDC::OCC::Geom2d_Line::TransformedParameter(double U, RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    double _result = ((::Geom2d_Line*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf2d*)pp_T);
    return _result;
}

double RDC::OCC::Geom2d_Line::ParametricTransformation(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    double _result = ((::Geom2d_Line*)_NativeInstance)->ParametricTransformation(*(gp_Trsf2d*)pp_T);
    return _result;
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Line::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Line*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_Line::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Line*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_Line::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Line*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_Line^ RDC::OCC::Geom2d_Line::CreateDowncasted(::Geom2d_Line* instance)
{
    return gcnew RDC::OCC::Geom2d_Line( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_OffsetCurve
//---------------------------------------------------------------------

RDC::OCC::Geom2d_OffsetCurve::Geom2d_OffsetCurve(RDC::OCC::Geom2d_Curve^ C, double Offset, bool isNotCheckC0)
    : RDC::OCC::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_OffsetCurve(Handle(::Geom2d_Curve)(C->NativeInstance), Offset, isNotCheckC0);
}

RDC::OCC::Geom2d_OffsetCurve::Geom2d_OffsetCurve(RDC::OCC::Geom2d_Curve^ C, double Offset)
    : RDC::OCC::Geom2d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_OffsetCurve(Handle(::Geom2d_Curve)(C->NativeInstance), Offset, false);
}

void RDC::OCC::Geom2d_OffsetCurve::Reverse()
{
    ((::Geom2d_OffsetCurve*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom2d_OffsetCurve::ReversedParameter(double U)
{
    double _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->ReversedParameter(U);
    return _result;
}

void RDC::OCC::Geom2d_OffsetCurve::SetBasisCurve(RDC::OCC::Geom2d_Curve^ C, bool isNotCheckC0)
{
    ((::Geom2d_OffsetCurve*)_NativeInstance)->SetBasisCurve(Handle(::Geom2d_Curve)(C->NativeInstance), isNotCheckC0);
}

void RDC::OCC::Geom2d_OffsetCurve::SetBasisCurve(RDC::OCC::Geom2d_Curve^ C)
{
    ((::Geom2d_OffsetCurve*)_NativeInstance)->SetBasisCurve(Handle(::Geom2d_Curve)(C->NativeInstance), false);
}

void RDC::OCC::Geom2d_OffsetCurve::SetOffsetValue(double D)
{
    ((::Geom2d_OffsetCurve*)_NativeInstance)->SetOffsetValue(D);
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::Geom2d_OffsetCurve::BasisCurve()
{
    Handle(::Geom2d_Curve) _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->BasisCurve();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom2d_OffsetCurve::Continuity()
{
    ::GeomAbs_Shape _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

void RDC::OCC::Geom2d_OffsetCurve::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_OffsetCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_OffsetCurve::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ((::Geom2d_OffsetCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::Geom2d_OffsetCurve::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::Geom2d_OffsetCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::Geom2d_OffsetCurve::D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::Geom2d_OffsetCurve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::Geom2d_OffsetCurve::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::Geom2d_OffsetCurve*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

double RDC::OCC::Geom2d_OffsetCurve::FirstParameter()
{
    double _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::Geom2d_OffsetCurve::LastParameter()
{
    double _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->LastParameter();
    return _result;
}

double RDC::OCC::Geom2d_OffsetCurve::Offset()
{
    double _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->Offset();
    return _result;
}

bool RDC::OCC::Geom2d_OffsetCurve::IsClosed()
{
    bool _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::Geom2d_OffsetCurve::IsCN(int N)
{
    bool _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->IsCN(N);
    return _result;
}

bool RDC::OCC::Geom2d_OffsetCurve::IsPeriodic()
{
    bool _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double RDC::OCC::Geom2d_OffsetCurve::Period()
{
    double _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->Period();
    return _result;
}

void RDC::OCC::Geom2d_OffsetCurve::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_OffsetCurve*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

double RDC::OCC::Geom2d_OffsetCurve::TransformedParameter(double U, RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    double _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf2d*)pp_T);
    return _result;
}

double RDC::OCC::Geom2d_OffsetCurve::ParametricTransformation(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    double _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->ParametricTransformation(*(gp_Trsf2d*)pp_T);
    return _result;
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_OffsetCurve::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom2d_OffsetCurve::GetBasisCurveContinuity()
{
    ::GeomAbs_Shape _result = ((::Geom2d_OffsetCurve*)_NativeInstance)->GetBasisCurveContinuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

void RDC::OCC::Geom2d_OffsetCurve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_OffsetCurve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_OffsetCurve::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_OffsetCurve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_OffsetCurve^ RDC::OCC::Geom2d_OffsetCurve::CreateDowncasted(::Geom2d_OffsetCurve* instance)
{
    return gcnew RDC::OCC::Geom2d_OffsetCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Parabola
//---------------------------------------------------------------------

RDC::OCC::Geom2d_Parabola::Geom2d_Parabola(RDC::OCC::gp_Parab2d^ Prb)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_Parabola(*(::gp_Parab2d*)Prb->NativeInstance);
}

RDC::OCC::Geom2d_Parabola::Geom2d_Parabola(RDC::OCC::Ax2d MirrorAxis, double Focal, bool Sense)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_MirrorAxis = &MirrorAxis;
    NativeInstance = new ::Geom2d_Parabola(*(gp_Ax2d*)pp_MirrorAxis, Focal, Sense);
}

RDC::OCC::Geom2d_Parabola::Geom2d_Parabola(RDC::OCC::Ax2d MirrorAxis, double Focal)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_MirrorAxis = &MirrorAxis;
    NativeInstance = new ::Geom2d_Parabola(*(gp_Ax2d*)pp_MirrorAxis, Focal, true);
}

RDC::OCC::Geom2d_Parabola::Geom2d_Parabola(RDC::OCC::Ax22d Axis, double Focal)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Axis = &Axis;
    NativeInstance = new ::Geom2d_Parabola(*(gp_Ax22d*)pp_Axis, Focal);
}

RDC::OCC::Geom2d_Parabola::Geom2d_Parabola(RDC::OCC::Ax2d D, RDC::OCC::Pnt2d F)
    : RDC::OCC::Geom2d_Conic(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_D = &D;
    pin_ptr<RDC::OCC::Pnt2d> pp_F = &F;
    NativeInstance = new ::Geom2d_Parabola(*(gp_Ax2d*)pp_D, *(gp_Pnt2d*)pp_F);
}

void RDC::OCC::Geom2d_Parabola::SetFocal(double Focal)
{
    ((::Geom2d_Parabola*)_NativeInstance)->SetFocal(Focal);
}

void RDC::OCC::Geom2d_Parabola::SetParab2d(RDC::OCC::gp_Parab2d^ Prb)
{
    ((::Geom2d_Parabola*)_NativeInstance)->SetParab2d(*(::gp_Parab2d*)Prb->NativeInstance);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::Geom2d_Parabola::Parab2d()
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    *_result = ((::Geom2d_Parabola*)_NativeInstance)->Parab2d();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

double RDC::OCC::Geom2d_Parabola::ReversedParameter(double U)
{
    double _result = ((::Geom2d_Parabola*)_NativeInstance)->ReversedParameter(U);
    return _result;
}

double RDC::OCC::Geom2d_Parabola::FirstParameter()
{
    double _result = ((::Geom2d_Parabola*)_NativeInstance)->FirstParameter();
    return _result;
}

double RDC::OCC::Geom2d_Parabola::LastParameter()
{
    double _result = ((::Geom2d_Parabola*)_NativeInstance)->LastParameter();
    return _result;
}

bool RDC::OCC::Geom2d_Parabola::IsClosed()
{
    bool _result = ((::Geom2d_Parabola*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::Geom2d_Parabola::IsPeriodic()
{
    bool _result = ((::Geom2d_Parabola*)_NativeInstance)->IsPeriodic();
    return _result;
}

RDC::OCC::Ax2d RDC::OCC::Geom2d_Parabola::Directrix()
{
    ::gp_Ax2d _nativeResult = ((::Geom2d_Parabola*)_NativeInstance)->Directrix();
    return RDC::OCC::Ax2d(_nativeResult);
}

double RDC::OCC::Geom2d_Parabola::Eccentricity()
{
    double _result = ((::Geom2d_Parabola*)_NativeInstance)->Eccentricity();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_Parabola::Focus()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_Parabola*)_NativeInstance)->Focus();
    return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::Geom2d_Parabola::Focal()
{
    double _result = ((::Geom2d_Parabola*)_NativeInstance)->Focal();
    return _result;
}

double RDC::OCC::Geom2d_Parabola::Parameter()
{
    double _result = ((::Geom2d_Parabola*)_NativeInstance)->Parameter();
    return _result;
}

void RDC::OCC::Geom2d_Parabola::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Parabola*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_Parabola::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ((::Geom2d_Parabola*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::Geom2d_Parabola::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::Geom2d_Parabola*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::Geom2d_Parabola::D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::Geom2d_Parabola*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::Geom2d_Parabola::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::Geom2d_Parabola*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::Geom2d_Parabola::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_Parabola*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

double RDC::OCC::Geom2d_Parabola::TransformedParameter(double U, RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    double _result = ((::Geom2d_Parabola*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf2d*)pp_T);
    return _result;
}

double RDC::OCC::Geom2d_Parabola::ParametricTransformation(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    double _result = ((::Geom2d_Parabola*)_NativeInstance)->ParametricTransformation(*(gp_Trsf2d*)pp_T);
    return _result;
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_Parabola::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_Parabola*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_Parabola::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Parabola*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_Parabola::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_Parabola*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_Parabola^ RDC::OCC::Geom2d_Parabola::CreateDowncasted(::Geom2d_Parabola* instance)
{
    return gcnew RDC::OCC::Geom2d_Parabola( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_Transformation
//---------------------------------------------------------------------

RDC::OCC::Geom2d_Transformation::Geom2d_Transformation()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_Transformation();
}

RDC::OCC::Geom2d_Transformation::Geom2d_Transformation(RDC::OCC::Trsf2d T)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    NativeInstance = new ::Geom2d_Transformation(*(gp_Trsf2d*)pp_T);
}

void RDC::OCC::Geom2d_Transformation::SetMirror(RDC::OCC::Pnt2d P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Transformation*)_NativeInstance)->SetMirror(*(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_Transformation::SetMirror(RDC::OCC::Ax2d A)
{
    pin_ptr<RDC::OCC::Ax2d> pp_A = &A;
    ((::Geom2d_Transformation*)_NativeInstance)->SetMirror(*(gp_Ax2d*)pp_A);
}

void RDC::OCC::Geom2d_Transformation::SetRotation(RDC::OCC::Pnt2d P, double Ang)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Transformation*)_NativeInstance)->SetRotation(*(gp_Pnt2d*)pp_P, Ang);
}

void RDC::OCC::Geom2d_Transformation::SetScale(RDC::OCC::Pnt2d P, double S)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_Transformation*)_NativeInstance)->SetScale(*(gp_Pnt2d*)pp_P, S);
}

void RDC::OCC::Geom2d_Transformation::SetTransformation(RDC::OCC::Ax2d FromSystem1, RDC::OCC::Ax2d ToSystem2)
{
    pin_ptr<RDC::OCC::Ax2d> pp_FromSystem1 = &FromSystem1;
    pin_ptr<RDC::OCC::Ax2d> pp_ToSystem2 = &ToSystem2;
    ((::Geom2d_Transformation*)_NativeInstance)->SetTransformation(*(gp_Ax2d*)pp_FromSystem1, *(gp_Ax2d*)pp_ToSystem2);
}

void RDC::OCC::Geom2d_Transformation::SetTransformation(RDC::OCC::Ax2d ToSystem)
{
    pin_ptr<RDC::OCC::Ax2d> pp_ToSystem = &ToSystem;
    ((::Geom2d_Transformation*)_NativeInstance)->SetTransformation(*(gp_Ax2d*)pp_ToSystem);
}

void RDC::OCC::Geom2d_Transformation::SetTranslation(RDC::OCC::Vec2d V)
{
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    ((::Geom2d_Transformation*)_NativeInstance)->SetTranslation(*(gp_Vec2d*)pp_V);
}

void RDC::OCC::Geom2d_Transformation::SetTranslation(RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    ((::Geom2d_Transformation*)_NativeInstance)->SetTranslation(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void RDC::OCC::Geom2d_Transformation::SetTrsf2d(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_Transformation*)_NativeInstance)->SetTrsf2d(*(gp_Trsf2d*)pp_T);
}

bool RDC::OCC::Geom2d_Transformation::IsNegative()
{
    bool _result = ((::Geom2d_Transformation*)_NativeInstance)->IsNegative();
    return _result;
}

RDC::OCC::TrsfForm RDC::OCC::Geom2d_Transformation::Form()
{
    ::gp_TrsfForm _result = ((::Geom2d_Transformation*)_NativeInstance)->Form();
    return (RDC::OCC::TrsfForm)_result;
}

double RDC::OCC::Geom2d_Transformation::ScaleFactor()
{
    double _result = ((::Geom2d_Transformation*)_NativeInstance)->ScaleFactor();
    return _result;
}

RDC::OCC::Trsf2d RDC::OCC::Geom2d_Transformation::Trsf2d()
{
    ::gp_Trsf2d _nativeResult = ((::Geom2d_Transformation*)_NativeInstance)->Trsf2d();
    return RDC::OCC::Trsf2d(_nativeResult);
}

double RDC::OCC::Geom2d_Transformation::Value(int Row, int Col)
{
    double _result = ((::Geom2d_Transformation*)_NativeInstance)->Value(Row, Col);
    return _result;
}

void RDC::OCC::Geom2d_Transformation::Invert()
{
    ((::Geom2d_Transformation*)_NativeInstance)->Invert();
}

RDC::OCC::Geom2d_Transformation^ RDC::OCC::Geom2d_Transformation::Inverted()
{
    Handle(::Geom2d_Transformation) _result = ((::Geom2d_Transformation*)_NativeInstance)->Inverted();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Transformation::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Transformation^ RDC::OCC::Geom2d_Transformation::Multiplied(RDC::OCC::Geom2d_Transformation^ Other)
{
    Handle(::Geom2d_Transformation) _result = ((::Geom2d_Transformation*)_NativeInstance)->Multiplied(Handle(::Geom2d_Transformation)(Other->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Transformation::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_Transformation::Multiply(RDC::OCC::Geom2d_Transformation^ Other)
{
    ((::Geom2d_Transformation*)_NativeInstance)->Multiply(Handle(::Geom2d_Transformation)(Other->NativeInstance));
}

void RDC::OCC::Geom2d_Transformation::Power(int N)
{
    ((::Geom2d_Transformation*)_NativeInstance)->Power(N);
}

RDC::OCC::Geom2d_Transformation^ RDC::OCC::Geom2d_Transformation::Powered(int N)
{
    Handle(::Geom2d_Transformation) _result = ((::Geom2d_Transformation*)_NativeInstance)->Powered(N);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Transformation::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_Transformation::PreMultiply(RDC::OCC::Geom2d_Transformation^ Other)
{
    ((::Geom2d_Transformation*)_NativeInstance)->PreMultiply(Handle(::Geom2d_Transformation)(Other->NativeInstance));
}

void RDC::OCC::Geom2d_Transformation::Transforms(double% X, double% Y)
{
    pin_ptr<double> pp_X = &X;
    pin_ptr<double> pp_Y = &Y;
    ((::Geom2d_Transformation*)_NativeInstance)->Transforms(*(double*)pp_X, *(double*)pp_Y);
}

RDC::OCC::Geom2d_Transformation^ RDC::OCC::Geom2d_Transformation::Copy()
{
    Handle(::Geom2d_Transformation) _result = ((::Geom2d_Transformation*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Transformation::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Transformation^ RDC::OCC::Geom2d_Transformation::CreateDowncasted(::Geom2d_Transformation* instance)
{
    return gcnew RDC::OCC::Geom2d_Transformation( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_TrimmedCurve
//---------------------------------------------------------------------

RDC::OCC::Geom2d_TrimmedCurve::Geom2d_TrimmedCurve(RDC::OCC::Geom2d_Curve^ C, double U1, double U2, bool Sense, bool theAdjustPeriodic)
    : RDC::OCC::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_TrimmedCurve(Handle(::Geom2d_Curve)(C->NativeInstance), U1, U2, Sense, theAdjustPeriodic);
}

RDC::OCC::Geom2d_TrimmedCurve::Geom2d_TrimmedCurve(RDC::OCC::Geom2d_Curve^ C, double U1, double U2, bool Sense)
    : RDC::OCC::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_TrimmedCurve(Handle(::Geom2d_Curve)(C->NativeInstance), U1, U2, Sense, true);
}

RDC::OCC::Geom2d_TrimmedCurve::Geom2d_TrimmedCurve(RDC::OCC::Geom2d_Curve^ C, double U1, double U2)
    : RDC::OCC::Geom2d_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_TrimmedCurve(Handle(::Geom2d_Curve)(C->NativeInstance), U1, U2, true, true);
}

void RDC::OCC::Geom2d_TrimmedCurve::Reverse()
{
    ((::Geom2d_TrimmedCurve*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom2d_TrimmedCurve::ReversedParameter(double U)
{
    double _result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->ReversedParameter(U);
    return _result;
}

void RDC::OCC::Geom2d_TrimmedCurve::SetTrim(double U1, double U2, bool Sense, bool theAdjustPeriodic)
{
    ((::Geom2d_TrimmedCurve*)_NativeInstance)->SetTrim(U1, U2, Sense, theAdjustPeriodic);
}

void RDC::OCC::Geom2d_TrimmedCurve::SetTrim(double U1, double U2, bool Sense)
{
    ((::Geom2d_TrimmedCurve*)_NativeInstance)->SetTrim(U1, U2, Sense, true);
}

void RDC::OCC::Geom2d_TrimmedCurve::SetTrim(double U1, double U2)
{
    ((::Geom2d_TrimmedCurve*)_NativeInstance)->SetTrim(U1, U2, true, true);
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::Geom2d_TrimmedCurve::BasisCurve()
{
    Handle(::Geom2d_Curve) _result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->BasisCurve();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom2d_TrimmedCurve::Continuity()
{
    ::GeomAbs_Shape _result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->Continuity();
    return (RDC::OCC::GeomAbs_Shape)_result;
}

bool RDC::OCC::Geom2d_TrimmedCurve::IsCN(int N)
{
    bool _result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->IsCN(N);
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_TrimmedCurve::EndPoint()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_TrimmedCurve*)_NativeInstance)->EndPoint();
    return RDC::OCC::Pnt2d(_nativeResult);
}

double RDC::OCC::Geom2d_TrimmedCurve::FirstParameter()
{
    double _result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->FirstParameter();
    return _result;
}

bool RDC::OCC::Geom2d_TrimmedCurve::IsClosed()
{
    bool _result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->IsClosed();
    return _result;
}

bool RDC::OCC::Geom2d_TrimmedCurve::IsPeriodic()
{
    bool _result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double RDC::OCC::Geom2d_TrimmedCurve::Period()
{
    double _result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->Period();
    return _result;
}

double RDC::OCC::Geom2d_TrimmedCurve::LastParameter()
{
    double _result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->LastParameter();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::Geom2d_TrimmedCurve::StartPoint()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2d_TrimmedCurve*)_NativeInstance)->StartPoint();
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::Geom2d_TrimmedCurve::D0(double U, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ((::Geom2d_TrimmedCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::Geom2d_TrimmedCurve::D1(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    ((::Geom2d_TrimmedCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void RDC::OCC::Geom2d_TrimmedCurve::D2(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ((::Geom2d_TrimmedCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::Geom2d_TrimmedCurve::D3(double U, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ((::Geom2d_TrimmedCurve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

RDC::OCC::Vec2d RDC::OCC::Geom2d_TrimmedCurve::DN(double U, int N)
{
    ::gp_Vec2d _nativeResult = ((::Geom2d_TrimmedCurve*)_NativeInstance)->DN(U, N);
    return RDC::OCC::Vec2d(_nativeResult);
}

void RDC::OCC::Geom2d_TrimmedCurve::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_TrimmedCurve*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

double RDC::OCC::Geom2d_TrimmedCurve::TransformedParameter(double U, RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    double _result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf2d*)pp_T);
    return _result;
}

double RDC::OCC::Geom2d_TrimmedCurve::ParametricTransformation(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    double _result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->ParametricTransformation(*(gp_Trsf2d*)pp_T);
    return _result;
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_TrimmedCurve::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_TrimmedCurve*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_TrimmedCurve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_TrimmedCurve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom2d_TrimmedCurve::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Geom2d_TrimmedCurve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom2d_TrimmedCurve^ RDC::OCC::Geom2d_TrimmedCurve::CreateDowncasted(::Geom2d_TrimmedCurve* instance)
{
    return gcnew RDC::OCC::Geom2d_TrimmedCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_UndefinedDerivative
//---------------------------------------------------------------------

RDC::OCC::Geom2d_UndefinedDerivative::Geom2d_UndefinedDerivative()
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_UndefinedDerivative();
}

RDC::OCC::Geom2d_UndefinedDerivative::Geom2d_UndefinedDerivative(System::String^ theMessage)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Geom2d_UndefinedDerivative(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Geom2d_UndefinedDerivative::Geom2d_UndefinedDerivative(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Geom2d_UndefinedDerivative(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Geom2d_UndefinedDerivative::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Geom2d_UndefinedDerivative::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Geom2d_UndefinedDerivative::Raise()
{
    ::Geom2d_UndefinedDerivative::Raise("");
}

RDC::OCC::Geom2d_UndefinedDerivative^ RDC::OCC::Geom2d_UndefinedDerivative::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Geom2d_UndefinedDerivative) _result = ::Geom2d_UndefinedDerivative::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_UndefinedDerivative::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_UndefinedDerivative^ RDC::OCC::Geom2d_UndefinedDerivative::NewInstance()
{
    Handle(::Geom2d_UndefinedDerivative) _result = ::Geom2d_UndefinedDerivative::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_UndefinedDerivative::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_UndefinedDerivative^ RDC::OCC::Geom2d_UndefinedDerivative::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Geom2d_UndefinedDerivative) _result = ::Geom2d_UndefinedDerivative::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_UndefinedDerivative::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_UndefinedDerivative^ RDC::OCC::Geom2d_UndefinedDerivative::CreateDowncasted(::Geom2d_UndefinedDerivative* instance)
{
    return gcnew RDC::OCC::Geom2d_UndefinedDerivative( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_UndefinedValue
//---------------------------------------------------------------------

RDC::OCC::Geom2d_UndefinedValue::Geom2d_UndefinedValue()
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_UndefinedValue();
}

RDC::OCC::Geom2d_UndefinedValue::Geom2d_UndefinedValue(System::String^ theMessage)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Geom2d_UndefinedValue(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Geom2d_UndefinedValue::Geom2d_UndefinedValue(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Geom2d_UndefinedValue(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Geom2d_UndefinedValue::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Geom2d_UndefinedValue::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Geom2d_UndefinedValue::Raise()
{
    ::Geom2d_UndefinedValue::Raise("");
}

RDC::OCC::Geom2d_UndefinedValue^ RDC::OCC::Geom2d_UndefinedValue::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Geom2d_UndefinedValue) _result = ::Geom2d_UndefinedValue::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_UndefinedValue::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_UndefinedValue^ RDC::OCC::Geom2d_UndefinedValue::NewInstance()
{
    Handle(::Geom2d_UndefinedValue) _result = ::Geom2d_UndefinedValue::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_UndefinedValue::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_UndefinedValue^ RDC::OCC::Geom2d_UndefinedValue::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Geom2d_UndefinedValue) _result = ::Geom2d_UndefinedValue::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_UndefinedValue::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_UndefinedValue^ RDC::OCC::Geom2d_UndefinedValue::CreateDowncasted(::Geom2d_UndefinedValue* instance)
{
    return gcnew RDC::OCC::Geom2d_UndefinedValue( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2d_VectorWithMagnitude
//---------------------------------------------------------------------

RDC::OCC::Geom2d_VectorWithMagnitude::Geom2d_VectorWithMagnitude(RDC::OCC::Vec2d V)
    : RDC::OCC::Geom2d_Vector(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    NativeInstance = new ::Geom2d_VectorWithMagnitude(*(gp_Vec2d*)pp_V);
}

RDC::OCC::Geom2d_VectorWithMagnitude::Geom2d_VectorWithMagnitude(double X, double Y)
    : RDC::OCC::Geom2d_Vector(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2d_VectorWithMagnitude(X, Y);
}

RDC::OCC::Geom2d_VectorWithMagnitude::Geom2d_VectorWithMagnitude(RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::Geom2d_Vector(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    NativeInstance = new ::Geom2d_VectorWithMagnitude(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void RDC::OCC::Geom2d_VectorWithMagnitude::SetCoord(double X, double Y)
{
    ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->SetCoord(X, Y);
}

void RDC::OCC::Geom2d_VectorWithMagnitude::SetVec2d(RDC::OCC::Vec2d V)
{
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->SetVec2d(*(gp_Vec2d*)pp_V);
}

void RDC::OCC::Geom2d_VectorWithMagnitude::SetX(double X)
{
    ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->SetX(X);
}

void RDC::OCC::Geom2d_VectorWithMagnitude::SetY(double Y)
{
    ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->SetY(Y);
}

double RDC::OCC::Geom2d_VectorWithMagnitude::Magnitude()
{
    double _result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Magnitude();
    return _result;
}

double RDC::OCC::Geom2d_VectorWithMagnitude::SquareMagnitude()
{
    double _result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->SquareMagnitude();
    return _result;
}

void RDC::OCC::Geom2d_VectorWithMagnitude::Add(RDC::OCC::Geom2d_Vector^ Other)
{
    ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Add(Handle(::Geom2d_Vector)(Other->NativeInstance));
}

RDC::OCC::Geom2d_VectorWithMagnitude^ RDC::OCC::Geom2d_VectorWithMagnitude::Added(RDC::OCC::Geom2d_Vector^ Other)
{
    Handle(::Geom2d_VectorWithMagnitude) _result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Added(Handle(::Geom2d_Vector)(Other->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_VectorWithMagnitude::CreateDowncasted(_result.get());
}

double RDC::OCC::Geom2d_VectorWithMagnitude::Crossed(RDC::OCC::Geom2d_Vector^ Other)
{
    double _result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Crossed(Handle(::Geom2d_Vector)(Other->NativeInstance));
    return _result;
}

void RDC::OCC::Geom2d_VectorWithMagnitude::Divide(double Scalar)
{
    ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Divide(Scalar);
}

RDC::OCC::Geom2d_VectorWithMagnitude^ RDC::OCC::Geom2d_VectorWithMagnitude::Divided(double Scalar)
{
    Handle(::Geom2d_VectorWithMagnitude) _result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Divided(Scalar);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_VectorWithMagnitude::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_VectorWithMagnitude^ RDC::OCC::Geom2d_VectorWithMagnitude::Multiplied(double Scalar)
{
    Handle(::Geom2d_VectorWithMagnitude) _result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Multiplied(Scalar);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_VectorWithMagnitude::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_VectorWithMagnitude::Multiply(double Scalar)
{
    ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Multiply(Scalar);
}

void RDC::OCC::Geom2d_VectorWithMagnitude::Normalize()
{
    ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Normalize();
}

RDC::OCC::Geom2d_VectorWithMagnitude^ RDC::OCC::Geom2d_VectorWithMagnitude::Normalized()
{
    Handle(::Geom2d_VectorWithMagnitude) _result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Normalized();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_VectorWithMagnitude::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_VectorWithMagnitude::Subtract(RDC::OCC::Geom2d_Vector^ Other)
{
    ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Subtract(Handle(::Geom2d_Vector)(Other->NativeInstance));
}

RDC::OCC::Geom2d_VectorWithMagnitude^ RDC::OCC::Geom2d_VectorWithMagnitude::Subtracted(RDC::OCC::Geom2d_Vector^ Other)
{
    Handle(::Geom2d_VectorWithMagnitude) _result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Subtracted(Handle(::Geom2d_Vector)(Other->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_VectorWithMagnitude::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom2d_VectorWithMagnitude::Transform(RDC::OCC::Trsf2d T)
{
    pin_ptr<RDC::OCC::Trsf2d> pp_T = &T;
    ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

RDC::OCC::Geom2d_Geometry^ RDC::OCC::Geom2d_VectorWithMagnitude::Copy()
{
    Handle(::Geom2d_Geometry) _result = ((::Geom2d_VectorWithMagnitude*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_VectorWithMagnitude^ RDC::OCC::Geom2d_VectorWithMagnitude::CreateDowncasted(::Geom2d_VectorWithMagnitude* instance)
{
    return gcnew RDC::OCC::Geom2d_VectorWithMagnitude( instance );
}



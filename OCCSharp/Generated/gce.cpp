// Generated wrapper code for package gce

#include "OcctPCH.h"
#include "gce.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"


//---------------------------------------------------------------------
//  Class  gce_Root
//---------------------------------------------------------------------

RDC::OCC::gce_Root::gce_Root()
    : RDC::OCC::BaseClass<::gce_Root>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_Root();
}

bool RDC::OCC::gce_Root::IsDone()
{
    bool _result = ((::gce_Root*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::gce_ErrorType RDC::OCC::gce_Root::Status()
{
    ::gce_ErrorType _result = ((::gce_Root*)_NativeInstance)->Status();
    return (RDC::OCC::gce_ErrorType)_result;
}



//---------------------------------------------------------------------
//  Class  gce_MakeCirc
//---------------------------------------------------------------------

RDC::OCC::gce_MakeCirc::gce_MakeCirc(RDC::OCC::Ax2 A2, double Radius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakeCirc(*(gp_Ax2*)pp_A2, Radius);
}

RDC::OCC::gce_MakeCirc::gce_MakeCirc(RDC::OCC::gp_Circ^ Circ, double Dist)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeCirc(*(::gp_Circ*)Circ->NativeInstance, Dist);
}

RDC::OCC::gce_MakeCirc::gce_MakeCirc(RDC::OCC::gp_Circ^ Circ, RDC::OCC::Pnt Point)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeCirc(*(::gp_Circ*)Circ->NativeInstance, *(gp_Pnt*)pp_Point);
}

RDC::OCC::gce_MakeCirc::gce_MakeCirc(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Pnt P3)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt> pp_P3 = &P3;
    _NativeInstance = new ::gce_MakeCirc(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3);
}

RDC::OCC::gce_MakeCirc::gce_MakeCirc(RDC::OCC::Pnt Center, RDC::OCC::Dir Norm, double Radius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Center = &Center;
    pin_ptr<RDC::OCC::Dir> pp_Norm = &Norm;
    _NativeInstance = new ::gce_MakeCirc(*(gp_Pnt*)pp_Center, *(gp_Dir*)pp_Norm, Radius);
}

RDC::OCC::gce_MakeCirc::gce_MakeCirc(RDC::OCC::Pnt Center, RDC::OCC::Pln Plane, double Radius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Center = &Center;
    pin_ptr<RDC::OCC::Pln> pp_Plane = &Plane;
    _NativeInstance = new ::gce_MakeCirc(*(gp_Pnt*)pp_Center, *(gp_Pln*)pp_Plane, Radius);
}

RDC::OCC::gce_MakeCirc::gce_MakeCirc(RDC::OCC::Pnt Center, RDC::OCC::Pnt Ptaxis, double Radius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Center = &Center;
    pin_ptr<RDC::OCC::Pnt> pp_Ptaxis = &Ptaxis;
    _NativeInstance = new ::gce_MakeCirc(*(gp_Pnt*)pp_Center, *(gp_Pnt*)pp_Ptaxis, Radius);
}

RDC::OCC::gce_MakeCirc::gce_MakeCirc(RDC::OCC::Ax1 Axis, double Radius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakeCirc(*(gp_Ax1*)pp_Axis, Radius);
}

RDC::OCC::gp_Circ^ RDC::OCC::gce_MakeCirc::Value()
{
    ::gp_Circ* _result = new ::gp_Circ();
    *_result = (::gp_Circ)((::gce_MakeCirc*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

RDC::OCC::gp_Circ^ RDC::OCC::gce_MakeCirc::Operator()
{
    ::gp_Circ* _result = new ::gp_Circ();
    *_result = (::gp_Circ)((::gce_MakeCirc*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeCirc2d
//---------------------------------------------------------------------

RDC::OCC::gce_MakeCirc2d::gce_MakeCirc2d(RDC::OCC::Ax2d XAxis, double Radius, bool Sense)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_XAxis = &XAxis;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Ax2d*)pp_XAxis, Radius, Sense);
}

RDC::OCC::gce_MakeCirc2d::gce_MakeCirc2d(RDC::OCC::Ax2d XAxis, double Radius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_XAxis = &XAxis;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Ax2d*)pp_XAxis, Radius, true);
}

RDC::OCC::gce_MakeCirc2d::gce_MakeCirc2d(RDC::OCC::Ax22d Axis, double Radius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax22d> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Ax22d*)pp_Axis, Radius);
}

RDC::OCC::gce_MakeCirc2d::gce_MakeCirc2d(RDC::OCC::gp_Circ2d^ Circ, double Dist)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeCirc2d(*(::gp_Circ2d*)Circ->NativeInstance, Dist);
}

RDC::OCC::gce_MakeCirc2d::gce_MakeCirc2d(RDC::OCC::gp_Circ2d^ Circ, RDC::OCC::Pnt2d Point)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeCirc2d(*(::gp_Circ2d*)Circ->NativeInstance, *(gp_Pnt2d*)pp_Point);
}

RDC::OCC::gce_MakeCirc2d::gce_MakeCirc2d(RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2, RDC::OCC::Pnt2d P3)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt2d> pp_P3 = &P3;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, *(gp_Pnt2d*)pp_P3);
}

RDC::OCC::gce_MakeCirc2d::gce_MakeCirc2d(RDC::OCC::Pnt2d Center, double Radius, bool Sense)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Pnt2d*)pp_Center, Radius, Sense);
}

RDC::OCC::gce_MakeCirc2d::gce_MakeCirc2d(RDC::OCC::Pnt2d Center, double Radius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Pnt2d*)pp_Center, Radius, true);
}

RDC::OCC::gce_MakeCirc2d::gce_MakeCirc2d(RDC::OCC::Pnt2d Center, RDC::OCC::Pnt2d Point, bool Sense)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Center = &Center;
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Pnt2d*)pp_Center, *(gp_Pnt2d*)pp_Point, Sense);
}

RDC::OCC::gce_MakeCirc2d::gce_MakeCirc2d(RDC::OCC::Pnt2d Center, RDC::OCC::Pnt2d Point)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Center = &Center;
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeCirc2d(*(gp_Pnt2d*)pp_Center, *(gp_Pnt2d*)pp_Point, true);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::gce_MakeCirc2d::Value()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::gce_MakeCirc2d*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}

RDC::OCC::gp_Circ2d^ RDC::OCC::gce_MakeCirc2d::Operator()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = (::gp_Circ2d)((::gce_MakeCirc2d*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Circ2d(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeCone
//---------------------------------------------------------------------

RDC::OCC::gce_MakeCone::gce_MakeCone(RDC::OCC::Ax2 A2, double Ang, double Radius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakeCone(*(gp_Ax2*)pp_A2, Ang, Radius);
}

RDC::OCC::gce_MakeCone::gce_MakeCone(RDC::OCC::gp_Cone^ Cone, RDC::OCC::Pnt Point)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeCone(*(::gp_Cone*)Cone->NativeInstance, *(gp_Pnt*)pp_Point);
}

RDC::OCC::gce_MakeCone::gce_MakeCone(RDC::OCC::gp_Cone^ Cone, double Dist)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeCone(*(::gp_Cone*)Cone->NativeInstance, Dist);
}

RDC::OCC::gce_MakeCone::gce_MakeCone(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Pnt P3, RDC::OCC::Pnt P4)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt> pp_P3 = &P3;
    pin_ptr<RDC::OCC::Pnt> pp_P4 = &P4;
    _NativeInstance = new ::gce_MakeCone(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, *(gp_Pnt*)pp_P4);
}

RDC::OCC::gce_MakeCone::gce_MakeCone(RDC::OCC::Ax1 Axis, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_Axis = &Axis;
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeCone(*(gp_Ax1*)pp_Axis, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::gce_MakeCone::gce_MakeCone(RDC::OCC::gp_Lin^ Axis, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeCone(*(::gp_Lin*)Axis->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::gce_MakeCone::gce_MakeCone(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, double R1, double R2)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeCone(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, R1, R2);
}

RDC::OCC::gp_Cone^ RDC::OCC::gce_MakeCone::Value()
{
    ::gp_Cone* _result = new ::gp_Cone();
    *_result = (::gp_Cone)((::gce_MakeCone*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

RDC::OCC::gp_Cone^ RDC::OCC::gce_MakeCone::Operator()
{
    ::gp_Cone* _result = new ::gp_Cone();
    *_result = (::gp_Cone)((::gce_MakeCone*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeCylinder
//---------------------------------------------------------------------

RDC::OCC::gce_MakeCylinder::gce_MakeCylinder(RDC::OCC::Ax2 A2, double Radius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakeCylinder(*(gp_Ax2*)pp_A2, Radius);
}

RDC::OCC::gce_MakeCylinder::gce_MakeCylinder(RDC::OCC::gp_Cylinder^ Cyl, RDC::OCC::Pnt Point)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeCylinder(*(::gp_Cylinder*)Cyl->NativeInstance, *(gp_Pnt*)pp_Point);
}

RDC::OCC::gce_MakeCylinder::gce_MakeCylinder(RDC::OCC::gp_Cylinder^ Cyl, double Dist)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeCylinder(*(::gp_Cylinder*)Cyl->NativeInstance, Dist);
}

RDC::OCC::gce_MakeCylinder::gce_MakeCylinder(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Pnt P3)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt> pp_P3 = &P3;
    _NativeInstance = new ::gce_MakeCylinder(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3);
}

RDC::OCC::gce_MakeCylinder::gce_MakeCylinder(RDC::OCC::Ax1 Axis, double Radius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakeCylinder(*(gp_Ax1*)pp_Axis, Radius);
}

RDC::OCC::gce_MakeCylinder::gce_MakeCylinder(RDC::OCC::gp_Circ^ Circ)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeCylinder(*(::gp_Circ*)Circ->NativeInstance);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::gce_MakeCylinder::Value()
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    *_result = (::gp_Cylinder)((::gce_MakeCylinder*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::gce_MakeCylinder::Operator()
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    *_result = (::gp_Cylinder)((::gce_MakeCylinder*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeDir
//---------------------------------------------------------------------

RDC::OCC::gce_MakeDir::gce_MakeDir(RDC::OCC::Vec V)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec> pp_V = &V;
    _NativeInstance = new ::gce_MakeDir(*(gp_Vec*)pp_V);
}

RDC::OCC::gce_MakeDir::gce_MakeDir(RDC::OCC::XYZ Coord)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XYZ> pp_Coord = &Coord;
    _NativeInstance = new ::gce_MakeDir(*(gp_XYZ*)pp_Coord);
}

RDC::OCC::gce_MakeDir::gce_MakeDir(double Xv, double Yv, double Zv)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeDir(Xv, Yv, Zv);
}

RDC::OCC::gce_MakeDir::gce_MakeDir(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeDir(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::Dir RDC::OCC::gce_MakeDir::Value()
{
    ::gp_Dir _nativeResult = ((::gce_MakeDir*)_NativeInstance)->Value();
    return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::gce_MakeDir::Operator()
{
    ::gp_Dir _nativeResult = ((::gce_MakeDir*)_NativeInstance)->Operator();
    return RDC::OCC::Dir(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeDir2d
//---------------------------------------------------------------------

RDC::OCC::gce_MakeDir2d::gce_MakeDir2d(RDC::OCC::Vec2d V)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    _NativeInstance = new ::gce_MakeDir2d(*(gp_Vec2d*)pp_V);
}

RDC::OCC::gce_MakeDir2d::gce_MakeDir2d(RDC::OCC::XY Coord)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::XY> pp_Coord = &Coord;
    _NativeInstance = new ::gce_MakeDir2d(*(gp_XY*)pp_Coord);
}

RDC::OCC::gce_MakeDir2d::gce_MakeDir2d(double Xv, double Yv)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeDir2d(Xv, Yv);
}

RDC::OCC::gce_MakeDir2d::gce_MakeDir2d(RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeDir2d(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::Dir2d RDC::OCC::gce_MakeDir2d::Value()
{
    ::gp_Dir2d _nativeResult = ((::gce_MakeDir2d*)_NativeInstance)->Value();
    return RDC::OCC::Dir2d(_nativeResult);
}

RDC::OCC::Dir2d RDC::OCC::gce_MakeDir2d::Operator()
{
    ::gp_Dir2d _nativeResult = ((::gce_MakeDir2d*)_NativeInstance)->Operator();
    return RDC::OCC::Dir2d(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeElips
//---------------------------------------------------------------------

RDC::OCC::gce_MakeElips::gce_MakeElips(RDC::OCC::Ax2 A2, double MajorRadius, double MinorRadius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakeElips(*(gp_Ax2*)pp_A2, MajorRadius, MinorRadius);
}

RDC::OCC::gce_MakeElips::gce_MakeElips(RDC::OCC::Pnt S1, RDC::OCC::Pnt S2, RDC::OCC::Pnt Center)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_S1 = &S1;
    pin_ptr<RDC::OCC::Pnt> pp_S2 = &S2;
    pin_ptr<RDC::OCC::Pnt> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeElips(*(gp_Pnt*)pp_S1, *(gp_Pnt*)pp_S2, *(gp_Pnt*)pp_Center);
}

RDC::OCC::gp_Elips^ RDC::OCC::gce_MakeElips::Value()
{
    ::gp_Elips* _result = new ::gp_Elips();
    *_result = (::gp_Elips)((::gce_MakeElips*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

RDC::OCC::gp_Elips^ RDC::OCC::gce_MakeElips::Operator()
{
    ::gp_Elips* _result = new ::gp_Elips();
    *_result = (::gp_Elips)((::gce_MakeElips*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeElips2d
//---------------------------------------------------------------------

RDC::OCC::gce_MakeElips2d::gce_MakeElips2d(RDC::OCC::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_MajorAxis = &MajorAxis;
    _NativeInstance = new ::gce_MakeElips2d(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, Sense);
}

RDC::OCC::gce_MakeElips2d::gce_MakeElips2d(RDC::OCC::Ax2d MajorAxis, double MajorRadius, double MinorRadius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_MajorAxis = &MajorAxis;
    _NativeInstance = new ::gce_MakeElips2d(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, true);
}

RDC::OCC::gce_MakeElips2d::gce_MakeElips2d(RDC::OCC::Ax22d A, double MajorRadius, double MinorRadius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax22d> pp_A = &A;
    _NativeInstance = new ::gce_MakeElips2d(*(gp_Ax22d*)pp_A, MajorRadius, MinorRadius);
}

RDC::OCC::gce_MakeElips2d::gce_MakeElips2d(RDC::OCC::Pnt2d S1, RDC::OCC::Pnt2d S2, RDC::OCC::Pnt2d Center)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_S1 = &S1;
    pin_ptr<RDC::OCC::Pnt2d> pp_S2 = &S2;
    pin_ptr<RDC::OCC::Pnt2d> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeElips2d(*(gp_Pnt2d*)pp_S1, *(gp_Pnt2d*)pp_S2, *(gp_Pnt2d*)pp_Center);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::gce_MakeElips2d::Value()
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    *_result = (::gp_Elips2d)((::gce_MakeElips2d*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}

RDC::OCC::gp_Elips2d^ RDC::OCC::gce_MakeElips2d::Operator()
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    *_result = (::gp_Elips2d)((::gce_MakeElips2d*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Elips2d(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeHypr
//---------------------------------------------------------------------

RDC::OCC::gce_MakeHypr::gce_MakeHypr(RDC::OCC::Ax2 A2, double MajorRadius, double MinorRadius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakeHypr(*(gp_Ax2*)pp_A2, MajorRadius, MinorRadius);
}

RDC::OCC::gce_MakeHypr::gce_MakeHypr(RDC::OCC::Pnt S1, RDC::OCC::Pnt S2, RDC::OCC::Pnt Center)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_S1 = &S1;
    pin_ptr<RDC::OCC::Pnt> pp_S2 = &S2;
    pin_ptr<RDC::OCC::Pnt> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeHypr(*(gp_Pnt*)pp_S1, *(gp_Pnt*)pp_S2, *(gp_Pnt*)pp_Center);
}

RDC::OCC::gp_Hypr^ RDC::OCC::gce_MakeHypr::Value()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = (::gp_Hypr)((::gce_MakeHypr*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

RDC::OCC::gp_Hypr^ RDC::OCC::gce_MakeHypr::Operator()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = (::gp_Hypr)((::gce_MakeHypr*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeHypr2d
//---------------------------------------------------------------------

RDC::OCC::gce_MakeHypr2d::gce_MakeHypr2d(RDC::OCC::Pnt2d S1, RDC::OCC::Pnt2d S2, RDC::OCC::Pnt2d Center)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_S1 = &S1;
    pin_ptr<RDC::OCC::Pnt2d> pp_S2 = &S2;
    pin_ptr<RDC::OCC::Pnt2d> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeHypr2d(*(gp_Pnt2d*)pp_S1, *(gp_Pnt2d*)pp_S2, *(gp_Pnt2d*)pp_Center);
}

RDC::OCC::gce_MakeHypr2d::gce_MakeHypr2d(RDC::OCC::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_MajorAxis = &MajorAxis;
    _NativeInstance = new ::gce_MakeHypr2d(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, Sense);
}

RDC::OCC::gce_MakeHypr2d::gce_MakeHypr2d(RDC::OCC::Ax22d A, double MajorRadius, double MinorRadius)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax22d> pp_A = &A;
    _NativeInstance = new ::gce_MakeHypr2d(*(gp_Ax22d*)pp_A, MajorRadius, MinorRadius);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gce_MakeHypr2d::Value()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = (::gp_Hypr2d)((::gce_MakeHypr2d*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}

RDC::OCC::gp_Hypr2d^ RDC::OCC::gce_MakeHypr2d::Operator()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = (::gp_Hypr2d)((::gce_MakeHypr2d*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr2d(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeLin
//---------------------------------------------------------------------

RDC::OCC::gce_MakeLin::gce_MakeLin(RDC::OCC::Ax1 A1)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_A1 = &A1;
    _NativeInstance = new ::gce_MakeLin(*(gp_Ax1*)pp_A1);
}

RDC::OCC::gce_MakeLin::gce_MakeLin(RDC::OCC::Pnt P, RDC::OCC::Dir V)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Dir> pp_V = &V;
    _NativeInstance = new ::gce_MakeLin(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_V);
}

RDC::OCC::gce_MakeLin::gce_MakeLin(RDC::OCC::gp_Lin^ Lin, RDC::OCC::Pnt Point)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeLin(*(::gp_Lin*)Lin->NativeInstance, *(gp_Pnt*)pp_Point);
}

RDC::OCC::gce_MakeLin::gce_MakeLin(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeLin(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::gp_Lin^ RDC::OCC::gce_MakeLin::Value()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = (::gp_Lin)((::gce_MakeLin*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::gp_Lin^ RDC::OCC::gce_MakeLin::Operator()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = (::gp_Lin)((::gce_MakeLin*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeLin2d
//---------------------------------------------------------------------

RDC::OCC::gce_MakeLin2d::gce_MakeLin2d(RDC::OCC::Ax2d A)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_A = &A;
    _NativeInstance = new ::gce_MakeLin2d(*(gp_Ax2d*)pp_A);
}

RDC::OCC::gce_MakeLin2d::gce_MakeLin2d(RDC::OCC::Pnt2d P, RDC::OCC::Dir2d V)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Dir2d> pp_V = &V;
    _NativeInstance = new ::gce_MakeLin2d(*(gp_Pnt2d*)pp_P, *(gp_Dir2d*)pp_V);
}

RDC::OCC::gce_MakeLin2d::gce_MakeLin2d(double A, double B, double C)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeLin2d(A, B, C);
}

RDC::OCC::gce_MakeLin2d::gce_MakeLin2d(RDC::OCC::gp_Lin2d^ Lin, double Dist)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeLin2d(*(::gp_Lin2d*)Lin->NativeInstance, Dist);
}

RDC::OCC::gce_MakeLin2d::gce_MakeLin2d(RDC::OCC::gp_Lin2d^ Lin, RDC::OCC::Pnt2d Point)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeLin2d(*(::gp_Lin2d*)Lin->NativeInstance, *(gp_Pnt2d*)pp_Point);
}

RDC::OCC::gce_MakeLin2d::gce_MakeLin2d(RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakeLin2d(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::gce_MakeLin2d::Value()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::gce_MakeLin2d*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}

RDC::OCC::gp_Lin2d^ RDC::OCC::gce_MakeLin2d::Operator()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::gce_MakeLin2d*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Lin2d(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeMirror
//---------------------------------------------------------------------

RDC::OCC::gce_MakeMirror::gce_MakeMirror(RDC::OCC::Pnt Point)
    : RDC::OCC::BaseClass<::gce_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeMirror(*(gp_Pnt*)pp_Point);
}

RDC::OCC::gce_MakeMirror::gce_MakeMirror(RDC::OCC::Ax1 Axis)
    : RDC::OCC::BaseClass<::gce_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakeMirror(*(gp_Ax1*)pp_Axis);
}

RDC::OCC::gce_MakeMirror::gce_MakeMirror(RDC::OCC::gp_Lin^ Line)
    : RDC::OCC::BaseClass<::gce_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeMirror(*(::gp_Lin*)Line->NativeInstance);
}

RDC::OCC::gce_MakeMirror::gce_MakeMirror(RDC::OCC::Pnt Point, RDC::OCC::Dir Direc)
    : RDC::OCC::BaseClass<::gce_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<RDC::OCC::Dir> pp_Direc = &Direc;
    _NativeInstance = new ::gce_MakeMirror(*(gp_Pnt*)pp_Point, *(gp_Dir*)pp_Direc);
}

RDC::OCC::gce_MakeMirror::gce_MakeMirror(RDC::OCC::Pln Plane)
    : RDC::OCC::BaseClass<::gce_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Plane = &Plane;
    _NativeInstance = new ::gce_MakeMirror(*(gp_Pln*)pp_Plane);
}

RDC::OCC::gce_MakeMirror::gce_MakeMirror(RDC::OCC::Ax2 Plane)
    : RDC::OCC::BaseClass<::gce_MakeMirror>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Plane = &Plane;
    _NativeInstance = new ::gce_MakeMirror(*(gp_Ax2*)pp_Plane);
}

RDC::OCC::Trsf RDC::OCC::gce_MakeMirror::Value()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeMirror*)_NativeInstance)->Value();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::Trsf RDC::OCC::gce_MakeMirror::Operator()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeMirror*)_NativeInstance)->Operator();
    return RDC::OCC::Trsf(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeMirror2d
//---------------------------------------------------------------------

RDC::OCC::gce_MakeMirror2d::gce_MakeMirror2d(RDC::OCC::Pnt2d Point)
    : RDC::OCC::BaseClass<::gce_MakeMirror2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeMirror2d(*(gp_Pnt2d*)pp_Point);
}

RDC::OCC::gce_MakeMirror2d::gce_MakeMirror2d(RDC::OCC::Ax2d Axis)
    : RDC::OCC::BaseClass<::gce_MakeMirror2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakeMirror2d(*(gp_Ax2d*)pp_Axis);
}

RDC::OCC::gce_MakeMirror2d::gce_MakeMirror2d(RDC::OCC::gp_Lin2d^ Line)
    : RDC::OCC::BaseClass<::gce_MakeMirror2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeMirror2d(*(::gp_Lin2d*)Line->NativeInstance);
}

RDC::OCC::gce_MakeMirror2d::gce_MakeMirror2d(RDC::OCC::Pnt2d Point, RDC::OCC::Dir2d Direc)
    : RDC::OCC::BaseClass<::gce_MakeMirror2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    pin_ptr<RDC::OCC::Dir2d> pp_Direc = &Direc;
    _NativeInstance = new ::gce_MakeMirror2d(*(gp_Pnt2d*)pp_Point, *(gp_Dir2d*)pp_Direc);
}

RDC::OCC::Trsf2d RDC::OCC::gce_MakeMirror2d::Value()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeMirror2d*)_NativeInstance)->Value();
    return RDC::OCC::Trsf2d(_nativeResult);
}

RDC::OCC::Trsf2d RDC::OCC::gce_MakeMirror2d::Operator()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeMirror2d*)_NativeInstance)->Operator();
    return RDC::OCC::Trsf2d(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeParab
//---------------------------------------------------------------------

RDC::OCC::gce_MakeParab::gce_MakeParab(RDC::OCC::Ax2 A2, double Focal)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakeParab(*(gp_Ax2*)pp_A2, Focal);
}

RDC::OCC::gce_MakeParab::gce_MakeParab(RDC::OCC::Ax1 D, RDC::OCC::Pnt F)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_D = &D;
    pin_ptr<RDC::OCC::Pnt> pp_F = &F;
    _NativeInstance = new ::gce_MakeParab(*(gp_Ax1*)pp_D, *(gp_Pnt*)pp_F);
}

RDC::OCC::gp_Parab^ RDC::OCC::gce_MakeParab::Value()
{
    ::gp_Parab* _result = new ::gp_Parab();
    *_result = (::gp_Parab)((::gce_MakeParab*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

RDC::OCC::gp_Parab^ RDC::OCC::gce_MakeParab::Operator()
{
    ::gp_Parab* _result = new ::gp_Parab();
    *_result = (::gp_Parab)((::gce_MakeParab*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakeParab2d
//---------------------------------------------------------------------

RDC::OCC::gce_MakeParab2d::gce_MakeParab2d(RDC::OCC::Ax2d MirrorAxis, double Focal, bool Sense)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_MirrorAxis = &MirrorAxis;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Ax2d*)pp_MirrorAxis, Focal, Sense);
}

RDC::OCC::gce_MakeParab2d::gce_MakeParab2d(RDC::OCC::Ax2d MirrorAxis, double Focal)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_MirrorAxis = &MirrorAxis;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Ax2d*)pp_MirrorAxis, Focal, true);
}

RDC::OCC::gce_MakeParab2d::gce_MakeParab2d(RDC::OCC::Ax22d A, double Focal)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax22d> pp_A = &A;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Ax22d*)pp_A, Focal);
}

RDC::OCC::gce_MakeParab2d::gce_MakeParab2d(RDC::OCC::Ax2d D, RDC::OCC::Pnt2d F, bool Sense)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_D = &D;
    pin_ptr<RDC::OCC::Pnt2d> pp_F = &F;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Ax2d*)pp_D, *(gp_Pnt2d*)pp_F, Sense);
}

RDC::OCC::gce_MakeParab2d::gce_MakeParab2d(RDC::OCC::Ax2d D, RDC::OCC::Pnt2d F)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2d> pp_D = &D;
    pin_ptr<RDC::OCC::Pnt2d> pp_F = &F;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Ax2d*)pp_D, *(gp_Pnt2d*)pp_F, true);
}

RDC::OCC::gce_MakeParab2d::gce_MakeParab2d(RDC::OCC::Pnt2d S1, RDC::OCC::Pnt2d Center, bool Sense)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_S1 = &S1;
    pin_ptr<RDC::OCC::Pnt2d> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Pnt2d*)pp_S1, *(gp_Pnt2d*)pp_Center, Sense);
}

RDC::OCC::gce_MakeParab2d::gce_MakeParab2d(RDC::OCC::Pnt2d S1, RDC::OCC::Pnt2d Center)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_S1 = &S1;
    pin_ptr<RDC::OCC::Pnt2d> pp_Center = &Center;
    _NativeInstance = new ::gce_MakeParab2d(*(gp_Pnt2d*)pp_S1, *(gp_Pnt2d*)pp_Center, true);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::gce_MakeParab2d::Value()
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    *_result = (::gp_Parab2d)((::gce_MakeParab2d*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}

RDC::OCC::gp_Parab2d^ RDC::OCC::gce_MakeParab2d::Operator()
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    *_result = (::gp_Parab2d)((::gce_MakeParab2d*)_NativeInstance)->Operator();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Parab2d(_result);
}



//---------------------------------------------------------------------
//  Class  gce_MakePln
//---------------------------------------------------------------------

RDC::OCC::gce_MakePln::gce_MakePln(RDC::OCC::Ax2 A2)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
    _NativeInstance = new ::gce_MakePln(*(gp_Ax2*)pp_A2);
}

RDC::OCC::gce_MakePln::gce_MakePln(RDC::OCC::Pnt P, RDC::OCC::Dir V)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Dir> pp_V = &V;
    _NativeInstance = new ::gce_MakePln(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_V);
}

RDC::OCC::gce_MakePln::gce_MakePln(double A, double B, double C, double D)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakePln(A, B, C, D);
}

RDC::OCC::gce_MakePln::gce_MakePln(RDC::OCC::Pln Pln, RDC::OCC::Pnt Point)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Pln = &Pln;
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakePln(*(gp_Pln*)pp_Pln, *(gp_Pnt*)pp_Point);
}

RDC::OCC::gce_MakePln::gce_MakePln(RDC::OCC::Pln Pln, double Dist)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_Pln = &Pln;
    _NativeInstance = new ::gce_MakePln(*(gp_Pln*)pp_Pln, Dist);
}

RDC::OCC::gce_MakePln::gce_MakePln(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Pnt P3)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt> pp_P3 = &P3;
    _NativeInstance = new ::gce_MakePln(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3);
}

RDC::OCC::gce_MakePln::gce_MakePln(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::gce_MakePln(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::gce_MakePln::gce_MakePln(RDC::OCC::Ax1 Axis)
    : RDC::OCC::gce_Root(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakePln(*(gp_Ax1*)pp_Axis);
}

RDC::OCC::Pln RDC::OCC::gce_MakePln::Value()
{
    ::gp_Pln _nativeResult = ((::gce_MakePln*)_NativeInstance)->Value();
    return RDC::OCC::Pln(_nativeResult);
}

RDC::OCC::Pln RDC::OCC::gce_MakePln::Operator()
{
    ::gp_Pln _nativeResult = ((::gce_MakePln*)_NativeInstance)->Operator();
    return RDC::OCC::Pln(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeRotation
//---------------------------------------------------------------------

RDC::OCC::gce_MakeRotation::gce_MakeRotation(RDC::OCC::gp_Lin^ Line, double Angle)
    : RDC::OCC::BaseClass<::gce_MakeRotation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gce_MakeRotation(*(::gp_Lin*)Line->NativeInstance, Angle);
}

RDC::OCC::gce_MakeRotation::gce_MakeRotation(RDC::OCC::Ax1 Axis, double Angle)
    : RDC::OCC::BaseClass<::gce_MakeRotation>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_Axis = &Axis;
    _NativeInstance = new ::gce_MakeRotation(*(gp_Ax1*)pp_Axis, Angle);
}

RDC::OCC::gce_MakeRotation::gce_MakeRotation(RDC::OCC::Pnt Point, RDC::OCC::Dir Direc, double Angle)
    : RDC::OCC::BaseClass<::gce_MakeRotation>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<RDC::OCC::Dir> pp_Direc = &Direc;
    _NativeInstance = new ::gce_MakeRotation(*(gp_Pnt*)pp_Point, *(gp_Dir*)pp_Direc, Angle);
}

RDC::OCC::Trsf RDC::OCC::gce_MakeRotation::Value()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeRotation*)_NativeInstance)->Value();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::Trsf RDC::OCC::gce_MakeRotation::Operator()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeRotation*)_NativeInstance)->Operator();
    return RDC::OCC::Trsf(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeRotation2d
//---------------------------------------------------------------------

RDC::OCC::gce_MakeRotation2d::gce_MakeRotation2d(RDC::OCC::Pnt2d Point, double Angle)
    : RDC::OCC::BaseClass<::gce_MakeRotation2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeRotation2d(*(gp_Pnt2d*)pp_Point, Angle);
}

RDC::OCC::Trsf2d RDC::OCC::gce_MakeRotation2d::Value()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeRotation2d*)_NativeInstance)->Value();
    return RDC::OCC::Trsf2d(_nativeResult);
}

RDC::OCC::Trsf2d RDC::OCC::gce_MakeRotation2d::Operator()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeRotation2d*)_NativeInstance)->Operator();
    return RDC::OCC::Trsf2d(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeScale
//---------------------------------------------------------------------

RDC::OCC::gce_MakeScale::gce_MakeScale(RDC::OCC::Pnt Point, double Scale)
    : RDC::OCC::BaseClass<::gce_MakeScale>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeScale(*(gp_Pnt*)pp_Point, Scale);
}

RDC::OCC::Trsf RDC::OCC::gce_MakeScale::Value()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeScale*)_NativeInstance)->Value();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::Trsf RDC::OCC::gce_MakeScale::Operator()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeScale*)_NativeInstance)->Operator();
    return RDC::OCC::Trsf(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeScale2d
//---------------------------------------------------------------------

RDC::OCC::gce_MakeScale2d::gce_MakeScale2d(RDC::OCC::Pnt2d Point, double Scale)
    : RDC::OCC::BaseClass<::gce_MakeScale2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    _NativeInstance = new ::gce_MakeScale2d(*(gp_Pnt2d*)pp_Point, Scale);
}

RDC::OCC::Trsf2d RDC::OCC::gce_MakeScale2d::Value()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeScale2d*)_NativeInstance)->Value();
    return RDC::OCC::Trsf2d(_nativeResult);
}

RDC::OCC::Trsf2d RDC::OCC::gce_MakeScale2d::Operator()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeScale2d*)_NativeInstance)->Operator();
    return RDC::OCC::Trsf2d(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeTranslation
//---------------------------------------------------------------------

RDC::OCC::gce_MakeTranslation::gce_MakeTranslation(RDC::OCC::Vec Vect)
    : RDC::OCC::BaseClass<::gce_MakeTranslation>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec> pp_Vect = &Vect;
    _NativeInstance = new ::gce_MakeTranslation(*(gp_Vec*)pp_Vect);
}

RDC::OCC::gce_MakeTranslation::gce_MakeTranslation(RDC::OCC::Pnt Point1, RDC::OCC::Pnt Point2)
    : RDC::OCC::BaseClass<::gce_MakeTranslation>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point1 = &Point1;
    pin_ptr<RDC::OCC::Pnt> pp_Point2 = &Point2;
    _NativeInstance = new ::gce_MakeTranslation(*(gp_Pnt*)pp_Point1, *(gp_Pnt*)pp_Point2);
}

RDC::OCC::Trsf RDC::OCC::gce_MakeTranslation::Value()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeTranslation*)_NativeInstance)->Value();
    return RDC::OCC::Trsf(_nativeResult);
}

RDC::OCC::Trsf RDC::OCC::gce_MakeTranslation::Operator()
{
    ::gp_Trsf _nativeResult = ((::gce_MakeTranslation*)_NativeInstance)->Operator();
    return RDC::OCC::Trsf(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gce_MakeTranslation2d
//---------------------------------------------------------------------

RDC::OCC::gce_MakeTranslation2d::gce_MakeTranslation2d(RDC::OCC::Vec2d Vect)
    : RDC::OCC::BaseClass<::gce_MakeTranslation2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec2d> pp_Vect = &Vect;
    _NativeInstance = new ::gce_MakeTranslation2d(*(gp_Vec2d*)pp_Vect);
}

RDC::OCC::gce_MakeTranslation2d::gce_MakeTranslation2d(RDC::OCC::Pnt2d Point1, RDC::OCC::Pnt2d Point2)
    : RDC::OCC::BaseClass<::gce_MakeTranslation2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point1 = &Point1;
    pin_ptr<RDC::OCC::Pnt2d> pp_Point2 = &Point2;
    _NativeInstance = new ::gce_MakeTranslation2d(*(gp_Pnt2d*)pp_Point1, *(gp_Pnt2d*)pp_Point2);
}

RDC::OCC::Trsf2d RDC::OCC::gce_MakeTranslation2d::Value()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeTranslation2d*)_NativeInstance)->Value();
    return RDC::OCC::Trsf2d(_nativeResult);
}

RDC::OCC::Trsf2d RDC::OCC::gce_MakeTranslation2d::Operator()
{
    ::gp_Trsf2d _nativeResult = ((::gce_MakeTranslation2d*)_NativeInstance)->Operator();
    return RDC::OCC::Trsf2d(_nativeResult);
}



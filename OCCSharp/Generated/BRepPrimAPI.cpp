// Generated wrapper code for package BRepPrimAPI

#include "OcctPCH.h"
#include "BRepPrimAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "Message.h"
#include "TopoDS.h"
#include "BRepOffsetAPI.h"
#include "TopTools.h"
#include "Geom.h"


//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeBox
//---------------------------------------------------------------------

RDC::OCC::BRepPrimAPI_MakeBox::BRepPrimAPI_MakeBox()
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeBox();
}

RDC::OCC::BRepPrimAPI_MakeBox::BRepPrimAPI_MakeBox(double dx, double dy, double dz)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeBox(dx, dy, dz);
}

RDC::OCC::BRepPrimAPI_MakeBox::BRepPrimAPI_MakeBox(RDC::OCC::Pnt P, double dx, double dy, double dz)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::BRepPrimAPI_MakeBox(*(gp_Pnt*)pp_P, dx, dy, dz);
}

RDC::OCC::BRepPrimAPI_MakeBox::BRepPrimAPI_MakeBox(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepPrimAPI_MakeBox(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepPrimAPI_MakeBox::BRepPrimAPI_MakeBox(RDC::OCC::Ax2 Axes, double dx, double dy, double dz)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeBox(*(gp_Ax2*)pp_Axes, dx, dy, dz);
}

void RDC::OCC::BRepPrimAPI_MakeBox::Init(double theDX, double theDY, double theDZ)
{
    ((::BRepPrimAPI_MakeBox*)_NativeInstance)->Init(theDX, theDY, theDZ);
}

void RDC::OCC::BRepPrimAPI_MakeBox::Init(RDC::OCC::Pnt thePnt, double theDX, double theDY, double theDZ)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
    ((::BRepPrimAPI_MakeBox*)_NativeInstance)->Init(*(gp_Pnt*)pp_thePnt, theDX, theDY, theDZ);
}

void RDC::OCC::BRepPrimAPI_MakeBox::Init(RDC::OCC::Pnt thePnt1, RDC::OCC::Pnt thePnt2)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt1 = &thePnt1;
    pin_ptr<RDC::OCC::Pnt> pp_thePnt2 = &thePnt2;
    ((::BRepPrimAPI_MakeBox*)_NativeInstance)->Init(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2);
}

void RDC::OCC::BRepPrimAPI_MakeBox::Init(RDC::OCC::Ax2 theAxes, double theDX, double theDY, double theDZ)
{
    pin_ptr<RDC::OCC::Ax2> pp_theAxes = &theAxes;
    ((::BRepPrimAPI_MakeBox*)_NativeInstance)->Init(*(gp_Ax2*)pp_theAxes, theDX, theDY, theDZ);
}

void RDC::OCC::BRepPrimAPI_MakeBox::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BRepPrimAPI_MakeBox*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepPrimAPI_MakeBox::Build()
{
    ((::BRepPrimAPI_MakeBox*)_NativeInstance)->Build(::Message_ProgressRange());
}

RDC::OCC::TopoDS_Shell^ RDC::OCC::BRepPrimAPI_MakeBox::Shell()
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = (::TopoDS_Shell)((::BRepPrimAPI_MakeBox*)_NativeInstance)->Shell();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shell(_result);
}

RDC::OCC::TopoDS_Solid^ RDC::OCC::BRepPrimAPI_MakeBox::Solid()
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = (::TopoDS_Solid)((::BRepPrimAPI_MakeBox*)_NativeInstance)->Solid();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Solid(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepPrimAPI_MakeBox::BottomFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeBox*)_NativeInstance)->BottomFace();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepPrimAPI_MakeBox::BackFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeBox*)_NativeInstance)->BackFace();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepPrimAPI_MakeBox::FrontFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeBox*)_NativeInstance)->FrontFace();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepPrimAPI_MakeBox::LeftFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeBox*)_NativeInstance)->LeftFace();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepPrimAPI_MakeBox::RightFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeBox*)_NativeInstance)->RightFace();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepPrimAPI_MakeBox::TopFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeBox*)_NativeInstance)->TopFace();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeOneAxis
//---------------------------------------------------------------------

RDC::OCC::BRepPrimAPI_MakeOneAxis::BRepPrimAPI_MakeOneAxis()
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

System::IntPtr RDC::OCC::BRepPrimAPI_MakeOneAxis::OneAxis()
{
    void* _result = ((::BRepPrimAPI_MakeOneAxis*)_NativeInstance)->OneAxis();
    return System::IntPtr(_result);
}

void RDC::OCC::BRepPrimAPI_MakeOneAxis::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BRepPrimAPI_MakeOneAxis*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepPrimAPI_MakeOneAxis::Build()
{
    ((::BRepPrimAPI_MakeOneAxis*)_NativeInstance)->Build(::Message_ProgressRange());
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepPrimAPI_MakeOneAxis::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepPrimAPI_MakeOneAxis*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::TopoDS_Shell^ RDC::OCC::BRepPrimAPI_MakeOneAxis::Shell()
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = (::TopoDS_Shell)((::BRepPrimAPI_MakeOneAxis*)_NativeInstance)->Shell();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shell(_result);
}

RDC::OCC::TopoDS_Solid^ RDC::OCC::BRepPrimAPI_MakeOneAxis::Solid()
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = (::TopoDS_Solid)((::BRepPrimAPI_MakeOneAxis*)_NativeInstance)->Solid();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Solid(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeCone
//---------------------------------------------------------------------

RDC::OCC::BRepPrimAPI_MakeCone::BRepPrimAPI_MakeCone(double R1, double R2, double H)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeCone(R1, R2, H);
}

RDC::OCC::BRepPrimAPI_MakeCone::BRepPrimAPI_MakeCone(double R1, double R2, double H, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeCone(R1, R2, H, angle);
}

RDC::OCC::BRepPrimAPI_MakeCone::BRepPrimAPI_MakeCone(RDC::OCC::Ax2 Axes, double R1, double R2, double H)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeCone(*(gp_Ax2*)pp_Axes, R1, R2, H);
}

RDC::OCC::BRepPrimAPI_MakeCone::BRepPrimAPI_MakeCone(RDC::OCC::Ax2 Axes, double R1, double R2, double H, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeCone(*(gp_Ax2*)pp_Axes, R1, R2, H, angle);
}

System::IntPtr RDC::OCC::BRepPrimAPI_MakeCone::OneAxis()
{
    void* _result = ((::BRepPrimAPI_MakeCone*)_NativeInstance)->OneAxis();
    return System::IntPtr(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeCylinder
//---------------------------------------------------------------------

RDC::OCC::BRepPrimAPI_MakeCylinder::BRepPrimAPI_MakeCylinder(double R, double H)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeCylinder(R, H);
}

RDC::OCC::BRepPrimAPI_MakeCylinder::BRepPrimAPI_MakeCylinder(double R, double H, double Angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeCylinder(R, H, Angle);
}

RDC::OCC::BRepPrimAPI_MakeCylinder::BRepPrimAPI_MakeCylinder(RDC::OCC::Ax2 Axes, double R, double H)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeCylinder(*(gp_Ax2*)pp_Axes, R, H);
}

RDC::OCC::BRepPrimAPI_MakeCylinder::BRepPrimAPI_MakeCylinder(RDC::OCC::Ax2 Axes, double R, double H, double Angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeCylinder(*(gp_Ax2*)pp_Axes, R, H, Angle);
}

System::IntPtr RDC::OCC::BRepPrimAPI_MakeCylinder::OneAxis()
{
    void* _result = ((::BRepPrimAPI_MakeCylinder*)_NativeInstance)->OneAxis();
    return System::IntPtr(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeHalfSpace
//---------------------------------------------------------------------

RDC::OCC::BRepPrimAPI_MakeHalfSpace::BRepPrimAPI_MakeHalfSpace(RDC::OCC::TopoDS_Face^ Face, RDC::OCC::Pnt RefPnt)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_RefPnt = &RefPnt;
    _NativeInstance = new ::BRepPrimAPI_MakeHalfSpace(*(::TopoDS_Face*)Face->NativeInstance, *(gp_Pnt*)pp_RefPnt);
}

RDC::OCC::BRepPrimAPI_MakeHalfSpace::BRepPrimAPI_MakeHalfSpace(RDC::OCC::TopoDS_Shell^ Shell, RDC::OCC::Pnt RefPnt)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_RefPnt = &RefPnt;
    _NativeInstance = new ::BRepPrimAPI_MakeHalfSpace(*(::TopoDS_Shell*)Shell->NativeInstance, *(gp_Pnt*)pp_RefPnt);
}

RDC::OCC::TopoDS_Solid^ RDC::OCC::BRepPrimAPI_MakeHalfSpace::Solid()
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = (::TopoDS_Solid)((::BRepPrimAPI_MakeHalfSpace*)_NativeInstance)->Solid();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Solid(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeSweep
//---------------------------------------------------------------------

RDC::OCC::BRepPrimAPI_MakeSweep::BRepPrimAPI_MakeSweep()
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepPrimAPI_MakeSweep::FirstShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakeSweep*)_NativeInstance)->FirstShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepPrimAPI_MakeSweep::LastShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakeSweep*)_NativeInstance)->LastShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakePrism
//---------------------------------------------------------------------

RDC::OCC::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Vec V, bool Copy, bool Canonize)
    : RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec> pp_V = &V;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Vec*)pp_V, Copy, Canonize);
}

RDC::OCC::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Vec V, bool Copy)
    : RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec> pp_V = &V;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Vec*)pp_V, Copy, true);
}

RDC::OCC::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Vec V)
    : RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Vec> pp_V = &V;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Vec*)pp_V, false, true);
}

RDC::OCC::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Dir D, bool Inf, bool Copy, bool Canonize)
    : RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_D = &D;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Dir*)pp_D, Inf, Copy, Canonize);
}

RDC::OCC::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Dir D, bool Inf, bool Copy)
    : RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_D = &D;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Dir*)pp_D, Inf, Copy, true);
}

RDC::OCC::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Dir D, bool Inf)
    : RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_D = &D;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Dir*)pp_D, Inf, false, true);
}

RDC::OCC::BRepPrimAPI_MakePrism::BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Dir D)
    : RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Dir> pp_D = &D;
    _NativeInstance = new ::BRepPrimAPI_MakePrism(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Dir*)pp_D, true, false, true);
}

void RDC::OCC::BRepPrimAPI_MakePrism::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BRepPrimAPI_MakePrism*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepPrimAPI_MakePrism::Build()
{
    ((::BRepPrimAPI_MakePrism*)_NativeInstance)->Build(::Message_ProgressRange());
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepPrimAPI_MakePrism::FirstShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakePrism*)_NativeInstance)->FirstShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepPrimAPI_MakePrism::LastShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakePrism*)_NativeInstance)->LastShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepPrimAPI_MakePrism::Generated(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepPrimAPI_MakePrism*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

bool RDC::OCC::BRepPrimAPI_MakePrism::IsDeleted(RDC::OCC::TopoDS_Shape^ S)
{
    bool _result = ((::BRepPrimAPI_MakePrism*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepPrimAPI_MakePrism::FirstShape(RDC::OCC::TopoDS_Shape^ theShape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakePrism*)_NativeInstance)->FirstShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepPrimAPI_MakePrism::LastShape(RDC::OCC::TopoDS_Shape^ theShape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakePrism*)_NativeInstance)->LastShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeRevol
//---------------------------------------------------------------------

RDC::OCC::BRepPrimAPI_MakeRevol::BRepPrimAPI_MakeRevol(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Ax1 A, double D, bool Copy)
    : RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_A = &A;
    _NativeInstance = new ::BRepPrimAPI_MakeRevol(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Ax1*)pp_A, D, Copy);
}

RDC::OCC::BRepPrimAPI_MakeRevol::BRepPrimAPI_MakeRevol(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Ax1 A, double D)
    : RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_A = &A;
    _NativeInstance = new ::BRepPrimAPI_MakeRevol(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Ax1*)pp_A, D, false);
}

RDC::OCC::BRepPrimAPI_MakeRevol::BRepPrimAPI_MakeRevol(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Ax1 A, bool Copy)
    : RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_A = &A;
    _NativeInstance = new ::BRepPrimAPI_MakeRevol(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Ax1*)pp_A, Copy);
}

RDC::OCC::BRepPrimAPI_MakeRevol::BRepPrimAPI_MakeRevol(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Ax1 A)
    : RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax1> pp_A = &A;
    _NativeInstance = new ::BRepPrimAPI_MakeRevol(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Ax1*)pp_A, false);
}

void RDC::OCC::BRepPrimAPI_MakeRevol::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepPrimAPI_MakeRevol::Build()
{
    ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->Build(::Message_ProgressRange());
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepPrimAPI_MakeRevol::FirstShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->FirstShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepPrimAPI_MakeRevol::LastShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->LastShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepPrimAPI_MakeRevol::Generated(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepPrimAPI_MakeRevol*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

bool RDC::OCC::BRepPrimAPI_MakeRevol::IsDeleted(RDC::OCC::TopoDS_Shape^ S)
{
    bool _result = ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepPrimAPI_MakeRevol::FirstShape(RDC::OCC::TopoDS_Shape^ theShape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->FirstShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepPrimAPI_MakeRevol::LastShape(RDC::OCC::TopoDS_Shape^ theShape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->LastShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::BRepPrimAPI_MakeRevol::HasDegenerated()
{
    bool _result = ((::BRepPrimAPI_MakeRevol*)_NativeInstance)->HasDegenerated();
    return _result;
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepPrimAPI_MakeRevol::Degenerated()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepPrimAPI_MakeRevol*)_NativeInstance)->Degenerated();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeRevolution
//---------------------------------------------------------------------

RDC::OCC::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(RDC::OCC::Geom_Curve^ Meridian)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(Handle(::Geom_Curve)(Meridian->NativeInstance));
}

RDC::OCC::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(RDC::OCC::Geom_Curve^ Meridian, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(Handle(::Geom_Curve)(Meridian->NativeInstance), angle);
}

RDC::OCC::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(RDC::OCC::Geom_Curve^ Meridian, double VMin, double VMax)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(Handle(::Geom_Curve)(Meridian->NativeInstance), VMin, VMax);
}

RDC::OCC::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(RDC::OCC::Geom_Curve^ Meridian, double VMin, double VMax, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(Handle(::Geom_Curve)(Meridian->NativeInstance), VMin, VMax, angle);
}

RDC::OCC::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(RDC::OCC::Ax2 Axes, RDC::OCC::Geom_Curve^ Meridian)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(*(gp_Ax2*)pp_Axes, Handle(::Geom_Curve)(Meridian->NativeInstance));
}

RDC::OCC::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(RDC::OCC::Ax2 Axes, RDC::OCC::Geom_Curve^ Meridian, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(*(gp_Ax2*)pp_Axes, Handle(::Geom_Curve)(Meridian->NativeInstance), angle);
}

RDC::OCC::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(RDC::OCC::Ax2 Axes, RDC::OCC::Geom_Curve^ Meridian, double VMin, double VMax)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(*(gp_Ax2*)pp_Axes, Handle(::Geom_Curve)(Meridian->NativeInstance), VMin, VMax);
}

RDC::OCC::BRepPrimAPI_MakeRevolution::BRepPrimAPI_MakeRevolution(RDC::OCC::Ax2 Axes, RDC::OCC::Geom_Curve^ Meridian, double VMin, double VMax, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeRevolution(*(gp_Ax2*)pp_Axes, Handle(::Geom_Curve)(Meridian->NativeInstance), VMin, VMax, angle);
}

System::IntPtr RDC::OCC::BRepPrimAPI_MakeRevolution::OneAxis()
{
    void* _result = ((::BRepPrimAPI_MakeRevolution*)_NativeInstance)->OneAxis();
    return System::IntPtr(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeSphere
//---------------------------------------------------------------------

RDC::OCC::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(double R)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(R);
}

RDC::OCC::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(double R, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(R, angle);
}

RDC::OCC::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(double R, double angle1, double angle2)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(R, angle1, angle2);
}

RDC::OCC::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(double R, double angle1, double angle2, double angle3)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(R, angle1, angle2, angle3);
}

RDC::OCC::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(RDC::OCC::Pnt Center, double R)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Center = &Center;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Pnt*)pp_Center, R);
}

RDC::OCC::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(RDC::OCC::Pnt Center, double R, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Center = &Center;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Pnt*)pp_Center, R, angle);
}

RDC::OCC::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(RDC::OCC::Pnt Center, double R, double angle1, double angle2)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Center = &Center;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Pnt*)pp_Center, R, angle1, angle2);
}

RDC::OCC::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(RDC::OCC::Pnt Center, double R, double angle1, double angle2, double angle3)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_Center = &Center;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Pnt*)pp_Center, R, angle1, angle2, angle3);
}

RDC::OCC::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(RDC::OCC::Ax2 Axis, double R)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axis = &Axis;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Ax2*)pp_Axis, R);
}

RDC::OCC::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(RDC::OCC::Ax2 Axis, double R, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axis = &Axis;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Ax2*)pp_Axis, R, angle);
}

RDC::OCC::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(RDC::OCC::Ax2 Axis, double R, double angle1, double angle2)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axis = &Axis;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Ax2*)pp_Axis, R, angle1, angle2);
}

RDC::OCC::BRepPrimAPI_MakeSphere::BRepPrimAPI_MakeSphere(RDC::OCC::Ax2 Axis, double R, double angle1, double angle2, double angle3)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axis = &Axis;
    _NativeInstance = new ::BRepPrimAPI_MakeSphere(*(gp_Ax2*)pp_Axis, R, angle1, angle2, angle3);
}

System::IntPtr RDC::OCC::BRepPrimAPI_MakeSphere::OneAxis()
{
    void* _result = ((::BRepPrimAPI_MakeSphere*)_NativeInstance)->OneAxis();
    return System::IntPtr(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeTorus
//---------------------------------------------------------------------

RDC::OCC::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(double R1, double R2)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(R1, R2);
}

RDC::OCC::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(double R1, double R2, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(R1, R2, angle);
}

RDC::OCC::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(double R1, double R2, double angle1, double angle2)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(R1, R2, angle1, angle2);
}

RDC::OCC::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(double R1, double R2, double angle1, double angle2, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(R1, R2, angle1, angle2, angle);
}

RDC::OCC::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(RDC::OCC::Ax2 Axes, double R1, double R2)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(*(gp_Ax2*)pp_Axes, R1, R2);
}

RDC::OCC::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(RDC::OCC::Ax2 Axes, double R1, double R2, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(*(gp_Ax2*)pp_Axes, R1, R2, angle);
}

RDC::OCC::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(RDC::OCC::Ax2 Axes, double R1, double R2, double angle1, double angle2)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(*(gp_Ax2*)pp_Axes, R1, R2, angle1, angle2);
}

RDC::OCC::BRepPrimAPI_MakeTorus::BRepPrimAPI_MakeTorus(RDC::OCC::Ax2 Axes, double R1, double R2, double angle1, double angle2, double angle)
    : RDC::OCC::BRepPrimAPI_MakeOneAxis(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeTorus(*(gp_Ax2*)pp_Axes, R1, R2, angle1, angle2, angle);
}

System::IntPtr RDC::OCC::BRepPrimAPI_MakeTorus::OneAxis()
{
    void* _result = ((::BRepPrimAPI_MakeTorus*)_NativeInstance)->OneAxis();
    return System::IntPtr(_result);
}



//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeWedge
//---------------------------------------------------------------------

RDC::OCC::BRepPrimAPI_MakeWedge::BRepPrimAPI_MakeWedge(double dx, double dy, double dz, double ltx)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeWedge(dx, dy, dz, ltx);
}

RDC::OCC::BRepPrimAPI_MakeWedge::BRepPrimAPI_MakeWedge(RDC::OCC::Ax2 Axes, double dx, double dy, double dz, double ltx)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeWedge(*(gp_Ax2*)pp_Axes, dx, dy, dz, ltx);
}

RDC::OCC::BRepPrimAPI_MakeWedge::BRepPrimAPI_MakeWedge(double dx, double dy, double dz, double xmin, double zmin, double xmax, double zmax)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepPrimAPI_MakeWedge(dx, dy, dz, xmin, zmin, xmax, zmax);
}

RDC::OCC::BRepPrimAPI_MakeWedge::BRepPrimAPI_MakeWedge(RDC::OCC::Ax2 Axes, double dx, double dy, double dz, double xmin, double zmin, double xmax, double zmax)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Ax2> pp_Axes = &Axes;
    _NativeInstance = new ::BRepPrimAPI_MakeWedge(*(gp_Ax2*)pp_Axes, dx, dy, dz, xmin, zmin, xmax, zmax);
}

void RDC::OCC::BRepPrimAPI_MakeWedge::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BRepPrimAPI_MakeWedge*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepPrimAPI_MakeWedge::Build()
{
    ((::BRepPrimAPI_MakeWedge*)_NativeInstance)->Build(::Message_ProgressRange());
}

RDC::OCC::TopoDS_Shell^ RDC::OCC::BRepPrimAPI_MakeWedge::Shell()
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = (::TopoDS_Shell)((::BRepPrimAPI_MakeWedge*)_NativeInstance)->Shell();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shell(_result);
}

RDC::OCC::TopoDS_Solid^ RDC::OCC::BRepPrimAPI_MakeWedge::Solid()
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = (::TopoDS_Solid)((::BRepPrimAPI_MakeWedge*)_NativeInstance)->Solid();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Solid(_result);
}



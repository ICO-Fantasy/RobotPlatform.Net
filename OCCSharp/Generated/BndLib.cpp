// Generated wrapper code for package BndLib

#include "OcctPCH.h"
#include "BndLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "Bnd.h"
#include "Adaptor2d.h"
#include "Geom2d.h"
#include "Adaptor3d.h"


//---------------------------------------------------------------------
//  Class  BndLib
//---------------------------------------------------------------------

RDC::OCC::BndLib::BndLib()
    : RDC::OCC::BaseClass<::BndLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BndLib();
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Lin^ L, double P1, double P2, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Lin*)L->NativeInstance, P1, P2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Lin2d^ L, double P1, double P2, double Tol, RDC::OCC::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Lin2d*)L->NativeInstance, P1, P2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Circ^ C, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Circ*)C->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Circ^ C, double P1, double P2, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Circ*)C->NativeInstance, P1, P2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Circ2d^ C, double Tol, RDC::OCC::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Circ2d*)C->NativeInstance, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Circ2d^ C, double P1, double P2, double Tol, RDC::OCC::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Circ2d*)C->NativeInstance, P1, P2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Elips^ C, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Elips*)C->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Elips^ C, double P1, double P2, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Elips*)C->NativeInstance, P1, P2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Elips2d^ C, double Tol, RDC::OCC::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Elips2d*)C->NativeInstance, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Elips2d^ C, double P1, double P2, double Tol, RDC::OCC::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Elips2d*)C->NativeInstance, P1, P2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Parab^ P, double P1, double P2, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Parab*)P->NativeInstance, P1, P2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Parab2d^ P, double P1, double P2, double Tol, RDC::OCC::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Parab2d*)P->NativeInstance, P1, P2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Hypr^ H, double P1, double P2, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Hypr*)H->NativeInstance, P1, P2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Hypr2d^ H, double P1, double P2, double Tol, RDC::OCC::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Hypr2d*)H->NativeInstance, P1, P2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Cylinder^ S, double UMin, double UMax, double VMin, double VMax, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Cylinder*)S->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Cylinder^ S, double VMin, double VMax, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Cylinder*)S->NativeInstance, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Cone^ S, double UMin, double UMax, double VMin, double VMax, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Cone*)S->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Cone^ S, double VMin, double VMax, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Cone*)S->NativeInstance, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Sphere^ S, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Sphere*)S->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Sphere^ S, double UMin, double UMax, double VMin, double VMax, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Sphere*)S->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Torus^ P, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Torus*)P->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib::Add(RDC::OCC::gp_Torus^ P, double UMin, double UMax, double VMin, double VMax, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Torus*)P->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BndLib_Add2dCurve
//---------------------------------------------------------------------

RDC::OCC::BndLib_Add2dCurve::BndLib_Add2dCurve()
    : RDC::OCC::BaseClass<::BndLib_Add2dCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BndLib_Add2dCurve();
}

void RDC::OCC::BndLib_Add2dCurve::Add(RDC::OCC::Adaptor2d_Curve2d^ C, double Tol, RDC::OCC::Bnd_Box2d^ B)
{
    ::BndLib_Add2dCurve::Add(*(::Adaptor2d_Curve2d*)C->NativeInstance, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BndLib_Add2dCurve::Add(RDC::OCC::Adaptor2d_Curve2d^ C, double U1, double U2, double Tol, RDC::OCC::Bnd_Box2d^ B)
{
    ::BndLib_Add2dCurve::Add(*(::Adaptor2d_Curve2d*)C->NativeInstance, U1, U2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BndLib_Add2dCurve::Add(RDC::OCC::Geom2d_Curve^ C, double Tol, RDC::OCC::Bnd_Box2d^ Box)
{
    ::BndLib_Add2dCurve::Add(Handle(::Geom2d_Curve)(C->NativeInstance), Tol, *(::Bnd_Box2d*)Box->NativeInstance);
}

void RDC::OCC::BndLib_Add2dCurve::Add(RDC::OCC::Geom2d_Curve^ C, double U1, double U2, double Tol, RDC::OCC::Bnd_Box2d^ B)
{
    ::BndLib_Add2dCurve::Add(Handle(::Geom2d_Curve)(C->NativeInstance), U1, U2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BndLib_Add2dCurve::AddOptimal(RDC::OCC::Geom2d_Curve^ C, double U1, double U2, double Tol, RDC::OCC::Bnd_Box2d^ B)
{
    ::BndLib_Add2dCurve::AddOptimal(Handle(::Geom2d_Curve)(C->NativeInstance), U1, U2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BndLib_Add3dCurve
//---------------------------------------------------------------------

RDC::OCC::BndLib_Add3dCurve::BndLib_Add3dCurve()
    : RDC::OCC::BaseClass<::BndLib_Add3dCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BndLib_Add3dCurve();
}

void RDC::OCC::BndLib_Add3dCurve::Add(RDC::OCC::Adaptor3d_Curve^ C, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib_Add3dCurve::Add(*(::Adaptor3d_Curve*)C->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib_Add3dCurve::Add(RDC::OCC::Adaptor3d_Curve^ C, double U1, double U2, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib_Add3dCurve::Add(*(::Adaptor3d_Curve*)C->NativeInstance, U1, U2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib_Add3dCurve::AddOptimal(RDC::OCC::Adaptor3d_Curve^ C, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib_Add3dCurve::AddOptimal(*(::Adaptor3d_Curve*)C->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib_Add3dCurve::AddOptimal(RDC::OCC::Adaptor3d_Curve^ C, double U1, double U2, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib_Add3dCurve::AddOptimal(*(::Adaptor3d_Curve*)C->NativeInstance, U1, U2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib_Add3dCurve::AddGenCurv(RDC::OCC::Adaptor3d_Curve^ C, double UMin, double UMax, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib_Add3dCurve::AddGenCurv(*(::Adaptor3d_Curve*)C->NativeInstance, UMin, UMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BndLib_AddSurface
//---------------------------------------------------------------------

RDC::OCC::BndLib_AddSurface::BndLib_AddSurface()
    : RDC::OCC::BaseClass<::BndLib_AddSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BndLib_AddSurface();
}

void RDC::OCC::BndLib_AddSurface::Add(RDC::OCC::Adaptor3d_Surface^ S, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib_AddSurface::Add(*(::Adaptor3d_Surface*)S->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib_AddSurface::Add(RDC::OCC::Adaptor3d_Surface^ S, double UMin, double UMax, double VMin, double VMax, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib_AddSurface::Add(*(::Adaptor3d_Surface*)S->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib_AddSurface::AddOptimal(RDC::OCC::Adaptor3d_Surface^ S, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib_AddSurface::AddOptimal(*(::Adaptor3d_Surface*)S->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib_AddSurface::AddOptimal(RDC::OCC::Adaptor3d_Surface^ S, double UMin, double UMax, double VMin, double VMax, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib_AddSurface::AddOptimal(*(::Adaptor3d_Surface*)S->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BndLib_AddSurface::AddGenSurf(RDC::OCC::Adaptor3d_Surface^ S, double UMin, double UMax, double VMin, double VMax, double Tol, RDC::OCC::Bnd_Box^ B)
{
    ::BndLib_AddSurface::AddGenSurf(*(::Adaptor3d_Surface*)S->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}



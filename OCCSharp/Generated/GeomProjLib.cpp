// Generated wrapper code for package GeomProjLib

#include "OcctPCH.h"
#include "GeomProjLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "Geom.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  GeomProjLib
//---------------------------------------------------------------------

RDC::OCC::GeomProjLib::GeomProjLib()
    : RDC::OCC::BaseClass<::GeomProjLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomProjLib();
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::GeomProjLib::Curve2d(RDC::OCC::Geom_Curve^ C, double First, double Last, RDC::OCC::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double% Tolerance)
{
    pin_ptr<double> pp_Tolerance = &Tolerance;
    Handle(::Geom2d_Curve) _result = ::GeomProjLib::Curve2d(Handle(::Geom_Curve)(C->NativeInstance), First, Last, Handle(::Geom_Surface)(S->NativeInstance), UFirst, ULast, VFirst, VLast, *(double*)pp_Tolerance);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::GeomProjLib::Curve2d(RDC::OCC::Geom_Curve^ C, double First, double Last, RDC::OCC::Geom_Surface^ S, double% Tolerance)
{
    pin_ptr<double> pp_Tolerance = &Tolerance;
    Handle(::Geom2d_Curve) _result = ::GeomProjLib::Curve2d(Handle(::Geom_Curve)(C->NativeInstance), First, Last, Handle(::Geom_Surface)(S->NativeInstance), *(double*)pp_Tolerance);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::GeomProjLib::Curve2d(RDC::OCC::Geom_Curve^ C, double First, double Last, RDC::OCC::Geom_Surface^ S)
{
    Handle(::Geom2d_Curve) _result = ::GeomProjLib::Curve2d(Handle(::Geom_Curve)(C->NativeInstance), First, Last, Handle(::Geom_Surface)(S->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::GeomProjLib::Curve2d(RDC::OCC::Geom_Curve^ C, RDC::OCC::Geom_Surface^ S)
{
    Handle(::Geom2d_Curve) _result = ::GeomProjLib::Curve2d(Handle(::Geom_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::GeomProjLib::Curve2d(RDC::OCC::Geom_Curve^ C, RDC::OCC::Geom_Surface^ S, double UDeb, double UFin, double VDeb, double VFin)
{
    Handle(::Geom2d_Curve) _result = ::GeomProjLib::Curve2d(Handle(::Geom_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), UDeb, UFin, VDeb, VFin);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom2d_Curve^ RDC::OCC::GeomProjLib::Curve2d(RDC::OCC::Geom_Curve^ C, RDC::OCC::Geom_Surface^ S, double UDeb, double UFin, double VDeb, double VFin, double% Tolerance)
{
    pin_ptr<double> pp_Tolerance = &Tolerance;
    Handle(::Geom2d_Curve) _result = ::GeomProjLib::Curve2d(Handle(::Geom_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), UDeb, UFin, VDeb, VFin, *(double*)pp_Tolerance);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom2d_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::GeomProjLib::Project(RDC::OCC::Geom_Curve^ C, RDC::OCC::Geom_Surface^ S)
{
    Handle(::Geom_Curve) _result = ::GeomProjLib::Project(Handle(::Geom_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::GeomProjLib::ProjectOnPlane(RDC::OCC::Geom_Curve^ Curve, RDC::OCC::Geom_Plane^ Plane, RDC::OCC::Dir Dir, bool KeepParametrization)
{
    pin_ptr<RDC::OCC::Dir> pp_Dir = &Dir;
    Handle(::Geom_Curve) _result = ::GeomProjLib::ProjectOnPlane(Handle(::Geom_Curve)(Curve->NativeInstance), Handle(::Geom_Plane)(Plane->NativeInstance), *(gp_Dir*)pp_Dir, KeepParametrization);
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}



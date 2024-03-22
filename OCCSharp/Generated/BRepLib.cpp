// Generated wrapper code for package BRepLib

#include "OcctPCH.h"
#include "BRepLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "TopoDS.h"
#include "GeomAbs.h"
#include "Geom2d.h"
#include "BRepTools.h"
#include "TopTools.h"
#include "gp.h"
#include "Adaptor3d.h"
#include "TopLoc.h"


//---------------------------------------------------------------------
//  Class  BRepLib
//---------------------------------------------------------------------

RDC::OCC::BRepLib::BRepLib()
    : RDC::OCC::BaseClass<::BRepLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib();
}

void RDC::OCC::BRepLib::Precision(double P)
{
    ::BRepLib::Precision(P);
}

double RDC::OCC::BRepLib::Precision()
{
    double _result = ::BRepLib::Precision();
    return _result;
}

void RDC::OCC::BRepLib::Plane(RDC::OCC::Geom_Plane^ P)
{
    ::BRepLib::Plane(Handle(::Geom_Plane)(P->NativeInstance));
}

RDC::OCC::Geom_Plane^ RDC::OCC::BRepLib::Plane()
{
    Handle(::Geom_Plane) _result = ::BRepLib::Plane();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Plane::CreateDowncasted(_result.get());
}

bool RDC::OCC::BRepLib::CheckSameRange(RDC::OCC::TopoDS_Edge^ E, double Confusion)
{
    bool _result = ::BRepLib::CheckSameRange(*(::TopoDS_Edge*)E->NativeInstance, Confusion);
    return _result;
}

bool RDC::OCC::BRepLib::CheckSameRange(RDC::OCC::TopoDS_Edge^ E)
{
    bool _result = ::BRepLib::CheckSameRange(*(::TopoDS_Edge*)E->NativeInstance, 9.9999999999999998E-13);
    return _result;
}

void RDC::OCC::BRepLib::SameRange(RDC::OCC::TopoDS_Edge^ E, double Tolerance)
{
    ::BRepLib::SameRange(*(::TopoDS_Edge*)E->NativeInstance, Tolerance);
}

void RDC::OCC::BRepLib::SameRange(RDC::OCC::TopoDS_Edge^ E)
{
    ::BRepLib::SameRange(*(::TopoDS_Edge*)E->NativeInstance, 1.0000000000000001E-5);
}

bool RDC::OCC::BRepLib::BuildCurve3d(RDC::OCC::TopoDS_Edge^ E, double Tolerance, RDC::OCC::GeomAbs_Shape Continuity, int MaxDegree, int MaxSegment)
{
    bool _result = ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, MaxDegree, MaxSegment);
    return _result;
}

bool RDC::OCC::BRepLib::BuildCurve3d(RDC::OCC::TopoDS_Edge^ E, double Tolerance, RDC::OCC::GeomAbs_Shape Continuity, int MaxDegree)
{
    bool _result = ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, MaxDegree, 0);
    return _result;
}

bool RDC::OCC::BRepLib::BuildCurve3d(RDC::OCC::TopoDS_Edge^ E, double Tolerance, RDC::OCC::GeomAbs_Shape Continuity)
{
    bool _result = ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, 14, 0);
    return _result;
}

bool RDC::OCC::BRepLib::BuildCurve3d(RDC::OCC::TopoDS_Edge^ E, double Tolerance)
{
    bool _result = ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, Tolerance, GeomAbs_C1, 14, 0);
    return _result;
}

bool RDC::OCC::BRepLib::BuildCurve3d(RDC::OCC::TopoDS_Edge^ E)
{
    bool _result = ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, 1.0000000000000001E-5, GeomAbs_C1, 14, 0);
    return _result;
}

bool RDC::OCC::BRepLib::BuildCurves3d(RDC::OCC::TopoDS_Shape^ S, double Tolerance, RDC::OCC::GeomAbs_Shape Continuity, int MaxDegree, int MaxSegment)
{
    bool _result = ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, MaxDegree, MaxSegment);
    return _result;
}

bool RDC::OCC::BRepLib::BuildCurves3d(RDC::OCC::TopoDS_Shape^ S, double Tolerance, RDC::OCC::GeomAbs_Shape Continuity, int MaxDegree)
{
    bool _result = ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, MaxDegree, 0);
    return _result;
}

bool RDC::OCC::BRepLib::BuildCurves3d(RDC::OCC::TopoDS_Shape^ S, double Tolerance, RDC::OCC::GeomAbs_Shape Continuity)
{
    bool _result = ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, 14, 0);
    return _result;
}

bool RDC::OCC::BRepLib::BuildCurves3d(RDC::OCC::TopoDS_Shape^ S, double Tolerance)
{
    bool _result = ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, GeomAbs_C1, 14, 0);
    return _result;
}

bool RDC::OCC::BRepLib::BuildCurves3d(RDC::OCC::TopoDS_Shape^ S)
{
    bool _result = ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

void RDC::OCC::BRepLib::BuildPCurveForEdgeOnPlane(RDC::OCC::TopoDS_Edge^ theE, RDC::OCC::TopoDS_Face^ theF)
{
    ::BRepLib::BuildPCurveForEdgeOnPlane(*(::TopoDS_Edge*)theE->NativeInstance, *(::TopoDS_Face*)theF->NativeInstance);
}

void RDC::OCC::BRepLib::BuildPCurveForEdgeOnPlane(RDC::OCC::TopoDS_Edge^ theE, RDC::OCC::TopoDS_Face^ theF, RDC::OCC::Geom2d_Curve^ aC2D, bool% bToUpdate)
{
    Handle(::Geom2d_Curve) h_aC2D = aC2D->NativeInstance;
    pin_ptr<bool> pp_bToUpdate = &bToUpdate;
    ::BRepLib::BuildPCurveForEdgeOnPlane(*(::TopoDS_Edge*)theE->NativeInstance, *(::TopoDS_Face*)theF->NativeInstance, h_aC2D, *(bool*)pp_bToUpdate);
    aC2D->NativeInstance = h_aC2D.get();
}

bool RDC::OCC::BRepLib::UpdateEdgeTol(RDC::OCC::TopoDS_Edge^ E, double MinToleranceRequest, double MaxToleranceToCheck)
{
    bool _result = ::BRepLib::UpdateEdgeTol(*(::TopoDS_Edge*)E->NativeInstance, MinToleranceRequest, MaxToleranceToCheck);
    return _result;
}

bool RDC::OCC::BRepLib::UpdateEdgeTolerance(RDC::OCC::TopoDS_Shape^ S, double MinToleranceRequest, double MaxToleranceToCheck)
{
    bool _result = ::BRepLib::UpdateEdgeTolerance(*(::TopoDS_Shape*)S->NativeInstance, MinToleranceRequest, MaxToleranceToCheck);
    return _result;
}

void RDC::OCC::BRepLib::SameParameter(RDC::OCC::TopoDS_Edge^ theEdge, double Tolerance)
{
    ::BRepLib::SameParameter(*(::TopoDS_Edge*)theEdge->NativeInstance, Tolerance);
}

void RDC::OCC::BRepLib::SameParameter(RDC::OCC::TopoDS_Edge^ theEdge)
{
    ::BRepLib::SameParameter(*(::TopoDS_Edge*)theEdge->NativeInstance, 1.0000000000000001E-5);
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepLib::SameParameter(RDC::OCC::TopoDS_Edge^ theEdge, double theTolerance, double% theNewTol, bool IsUseOldEdge)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    pin_ptr<double> pp_theNewTol = &theNewTol;
    *_result = ::BRepLib::SameParameter(*(::TopoDS_Edge*)theEdge->NativeInstance, theTolerance, *(double*)pp_theNewTol, IsUseOldEdge);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

void RDC::OCC::BRepLib::SameParameter(RDC::OCC::TopoDS_Shape^ S, double Tolerance, bool forced)
{
    ::BRepLib::SameParameter(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, forced);
}

void RDC::OCC::BRepLib::SameParameter(RDC::OCC::TopoDS_Shape^ S, double Tolerance)
{
    ::BRepLib::SameParameter(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, false);
}

void RDC::OCC::BRepLib::SameParameter(RDC::OCC::TopoDS_Shape^ S)
{
    ::BRepLib::SameParameter(*(::TopoDS_Shape*)S->NativeInstance, 1.0000000000000001E-5, false);
}

void RDC::OCC::BRepLib::SameParameter(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::BRepTools_ReShape^ theReshaper, double Tolerance, bool forced)
{
    ::BRepLib::SameParameter(*(::TopoDS_Shape*)S->NativeInstance, *(::BRepTools_ReShape*)theReshaper->NativeInstance, Tolerance, forced);
}

void RDC::OCC::BRepLib::SameParameter(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::BRepTools_ReShape^ theReshaper, double Tolerance)
{
    ::BRepLib::SameParameter(*(::TopoDS_Shape*)S->NativeInstance, *(::BRepTools_ReShape*)theReshaper->NativeInstance, Tolerance, false);
}

void RDC::OCC::BRepLib::SameParameter(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::BRepTools_ReShape^ theReshaper)
{
    ::BRepLib::SameParameter(*(::TopoDS_Shape*)S->NativeInstance, *(::BRepTools_ReShape*)theReshaper->NativeInstance, 1.0000000000000001E-5, false);
}

void RDC::OCC::BRepLib::UpdateTolerances(RDC::OCC::TopoDS_Shape^ S, bool verifyFaceTolerance)
{
    ::BRepLib::UpdateTolerances(*(::TopoDS_Shape*)S->NativeInstance, verifyFaceTolerance);
}

void RDC::OCC::BRepLib::UpdateTolerances(RDC::OCC::TopoDS_Shape^ S)
{
    ::BRepLib::UpdateTolerances(*(::TopoDS_Shape*)S->NativeInstance, false);
}

void RDC::OCC::BRepLib::UpdateTolerances(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::BRepTools_ReShape^ theReshaper, bool verifyFaceTolerance)
{
    ::BRepLib::UpdateTolerances(*(::TopoDS_Shape*)S->NativeInstance, *(::BRepTools_ReShape*)theReshaper->NativeInstance, verifyFaceTolerance);
}

void RDC::OCC::BRepLib::UpdateTolerances(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::BRepTools_ReShape^ theReshaper)
{
    ::BRepLib::UpdateTolerances(*(::TopoDS_Shape*)S->NativeInstance, *(::BRepTools_ReShape*)theReshaper->NativeInstance, false);
}

void RDC::OCC::BRepLib::UpdateInnerTolerances(RDC::OCC::TopoDS_Shape^ S)
{
    ::BRepLib::UpdateInnerTolerances(*(::TopoDS_Shape*)S->NativeInstance);
}

bool RDC::OCC::BRepLib::OrientClosedSolid(RDC::OCC::TopoDS_Solid^ solid)
{
    bool _result = ::BRepLib::OrientClosedSolid(*(::TopoDS_Solid*)solid->NativeInstance);
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepLib::ContinuityOfFaces(RDC::OCC::TopoDS_Edge^ theEdge, RDC::OCC::TopoDS_Face^ theFace1, RDC::OCC::TopoDS_Face^ theFace2, double theAngleTol)
{
    ::GeomAbs_Shape _result = ::BRepLib::ContinuityOfFaces(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace1->NativeInstance, *(::TopoDS_Face*)theFace2->NativeInstance, theAngleTol);
    return (RDC::OCC::GeomAbs_Shape)_result;
}

void RDC::OCC::BRepLib::EncodeRegularity(RDC::OCC::TopoDS_Shape^ S, double TolAng)
{
    ::BRepLib::EncodeRegularity(*(::TopoDS_Shape*)S->NativeInstance, TolAng);
}

void RDC::OCC::BRepLib::EncodeRegularity(RDC::OCC::TopoDS_Shape^ S)
{
    ::BRepLib::EncodeRegularity(*(::TopoDS_Shape*)S->NativeInstance, 1.0E-10);
}

void RDC::OCC::BRepLib::EncodeRegularity(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_ListOfShape^ LE, double TolAng)
{
    ::BRepLib::EncodeRegularity(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)LE->NativeInstance, TolAng);
}

void RDC::OCC::BRepLib::EncodeRegularity(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_ListOfShape^ LE)
{
    ::BRepLib::EncodeRegularity(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)LE->NativeInstance, 1.0E-10);
}

void RDC::OCC::BRepLib::EncodeRegularity(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F1, RDC::OCC::TopoDS_Face^ F2, double TolAng)
{
    ::BRepLib::EncodeRegularity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, TolAng);
}

void RDC::OCC::BRepLib::EncodeRegularity(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F1, RDC::OCC::TopoDS_Face^ F2)
{
    ::BRepLib::EncodeRegularity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, 1.0E-10);
}

void RDC::OCC::BRepLib::SortFaces(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_ListOfShape^ LF)
{
    ::BRepLib::SortFaces(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)LF->NativeInstance);
}

void RDC::OCC::BRepLib::ReverseSortFaces(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_ListOfShape^ LF)
{
    ::BRepLib::ReverseSortFaces(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)LF->NativeInstance);
}

bool RDC::OCC::BRepLib::EnsureNormalConsistency(RDC::OCC::TopoDS_Shape^ S, double theAngTol, bool ForceComputeNormals)
{
    bool _result = ::BRepLib::EnsureNormalConsistency(*(::TopoDS_Shape*)S->NativeInstance, theAngTol, ForceComputeNormals);
    return _result;
}

bool RDC::OCC::BRepLib::EnsureNormalConsistency(RDC::OCC::TopoDS_Shape^ S, double theAngTol)
{
    bool _result = ::BRepLib::EnsureNormalConsistency(*(::TopoDS_Shape*)S->NativeInstance, theAngTol, false);
    return _result;
}

bool RDC::OCC::BRepLib::EnsureNormalConsistency(RDC::OCC::TopoDS_Shape^ S)
{
    bool _result = ::BRepLib::EnsureNormalConsistency(*(::TopoDS_Shape*)S->NativeInstance, 0.001, false);
    return _result;
}

void RDC::OCC::BRepLib::UpdateDeflection(RDC::OCC::TopoDS_Shape^ S)
{
    ::BRepLib::UpdateDeflection(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepLib::BoundingVertex(RDC::OCC::TopoDS_ListOfShape^ theLV, RDC::OCC::Pnt% theNewCenter, double% theNewTol)
{
    pin_ptr<RDC::OCC::Pnt> pp_theNewCenter = &theNewCenter;
    pin_ptr<double> pp_theNewTol = &theNewTol;
    ::BRepLib::BoundingVertex(*(::TopoDS_ListOfShape*)theLV->NativeInstance, *(gp_Pnt*)pp_theNewCenter, *(double*)pp_theNewTol);
}

bool RDC::OCC::BRepLib::FindValidRange(RDC::OCC::Adaptor3d_Curve^ theCurve, double theTolE, double theParV1, RDC::OCC::Pnt thePntV1, double theTolV1, double theParV2, RDC::OCC::Pnt thePntV2, double theTolV2, double% theFirst, double% theLast)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePntV1 = &thePntV1;
    pin_ptr<RDC::OCC::Pnt> pp_thePntV2 = &thePntV2;
    pin_ptr<double> pp_theFirst = &theFirst;
    pin_ptr<double> pp_theLast = &theLast;
    bool _result = ::BRepLib::FindValidRange(*(::Adaptor3d_Curve*)theCurve->NativeInstance, theTolE, theParV1, *(gp_Pnt*)pp_thePntV1, theTolV1, theParV2, *(gp_Pnt*)pp_thePntV2, theTolV2, *(double*)pp_theFirst, *(double*)pp_theLast);
    return _result;
}

bool RDC::OCC::BRepLib::FindValidRange(RDC::OCC::TopoDS_Edge^ theEdge, double% theFirst, double% theLast)
{
    pin_ptr<double> pp_theFirst = &theFirst;
    pin_ptr<double> pp_theLast = &theLast;
    bool _result = ::BRepLib::FindValidRange(*(::TopoDS_Edge*)theEdge->NativeInstance, *(double*)pp_theFirst, *(double*)pp_theLast);
    return _result;
}

void RDC::OCC::BRepLib::ExtendFace(RDC::OCC::TopoDS_Face^ theF, double theExtVal, bool theExtUMin, bool theExtUMax, bool theExtVMin, bool theExtVMax, RDC::OCC::TopoDS_Face^ theFExtended)
{
    ::BRepLib::ExtendFace(*(::TopoDS_Face*)theF->NativeInstance, theExtVal, theExtUMin, theExtUMax, theExtVMin, theExtVMax, *(::TopoDS_Face*)theFExtended->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BRepLib_CheckCurveOnSurface
//---------------------------------------------------------------------

RDC::OCC::BRepLib_CheckCurveOnSurface::BRepLib_CheckCurveOnSurface()
    : RDC::OCC::BaseClass<::BRepLib_CheckCurveOnSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_CheckCurveOnSurface();
}

RDC::OCC::BRepLib_CheckCurveOnSurface::BRepLib_CheckCurveOnSurface(RDC::OCC::TopoDS_Edge^ theEdge, RDC::OCC::TopoDS_Face^ theFace)
    : RDC::OCC::BaseClass<::BRepLib_CheckCurveOnSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_CheckCurveOnSurface(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance);
}

void RDC::OCC::BRepLib_CheckCurveOnSurface::Init(RDC::OCC::TopoDS_Edge^ theEdge, RDC::OCC::TopoDS_Face^ theFace)
{
    ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->Init(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance);
}

void RDC::OCC::BRepLib_CheckCurveOnSurface::Perform()
{
    ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->Perform();
}

bool RDC::OCC::BRepLib_CheckCurveOnSurface::IsDone()
{
    bool _result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->IsDone();
    return _result;
}

void RDC::OCC::BRepLib_CheckCurveOnSurface::SetParallel(bool theIsParallel)
{
    ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->SetParallel(theIsParallel);
}

bool RDC::OCC::BRepLib_CheckCurveOnSurface::IsParallel()
{
    bool _result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->IsParallel();
    return _result;
}

int RDC::OCC::BRepLib_CheckCurveOnSurface::ErrorStatus()
{
    int _result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->ErrorStatus();
    return _result;
}

double RDC::OCC::BRepLib_CheckCurveOnSurface::MaxDistance()
{
    double _result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->MaxDistance();
    return _result;
}

double RDC::OCC::BRepLib_CheckCurveOnSurface::MaxParameter()
{
    double _result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->MaxParameter();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepLib_Command
//---------------------------------------------------------------------

bool RDC::OCC::BRepLib_Command::IsDone()
{
    bool _result = ((::BRepLib_Command*)_NativeInstance)->IsDone();
    return _result;
}

void RDC::OCC::BRepLib_Command::Check()
{
    ((::BRepLib_Command*)_NativeInstance)->Check();
}



//---------------------------------------------------------------------
//  Class  BRepLib_FindSurface
//---------------------------------------------------------------------

RDC::OCC::BRepLib_FindSurface::BRepLib_FindSurface()
    : RDC::OCC::BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FindSurface();
}

RDC::OCC::BRepLib_FindSurface::BRepLib_FindSurface(RDC::OCC::TopoDS_Shape^ S, double Tol, bool OnlyPlane, bool OnlyClosed)
    : RDC::OCC::BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FindSurface(*(::TopoDS_Shape*)S->NativeInstance, Tol, OnlyPlane, OnlyClosed);
}

RDC::OCC::BRepLib_FindSurface::BRepLib_FindSurface(RDC::OCC::TopoDS_Shape^ S, double Tol, bool OnlyPlane)
    : RDC::OCC::BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FindSurface(*(::TopoDS_Shape*)S->NativeInstance, Tol, OnlyPlane, false);
}

RDC::OCC::BRepLib_FindSurface::BRepLib_FindSurface(RDC::OCC::TopoDS_Shape^ S, double Tol)
    : RDC::OCC::BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FindSurface(*(::TopoDS_Shape*)S->NativeInstance, Tol, false, false);
}

RDC::OCC::BRepLib_FindSurface::BRepLib_FindSurface(RDC::OCC::TopoDS_Shape^ S)
    : RDC::OCC::BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FindSurface(*(::TopoDS_Shape*)S->NativeInstance, -1, false, false);
}

void RDC::OCC::BRepLib_FindSurface::Init(RDC::OCC::TopoDS_Shape^ S, double Tol, bool OnlyPlane, bool OnlyClosed)
{
    ((::BRepLib_FindSurface*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, Tol, OnlyPlane, OnlyClosed);
}

void RDC::OCC::BRepLib_FindSurface::Init(RDC::OCC::TopoDS_Shape^ S, double Tol, bool OnlyPlane)
{
    ((::BRepLib_FindSurface*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, Tol, OnlyPlane, false);
}

void RDC::OCC::BRepLib_FindSurface::Init(RDC::OCC::TopoDS_Shape^ S, double Tol)
{
    ((::BRepLib_FindSurface*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, Tol, false, false);
}

void RDC::OCC::BRepLib_FindSurface::Init(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepLib_FindSurface*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, -1, false, false);
}

bool RDC::OCC::BRepLib_FindSurface::Found()
{
    bool _result = ((::BRepLib_FindSurface*)_NativeInstance)->Found();
    return _result;
}

RDC::OCC::Geom_Surface^ RDC::OCC::BRepLib_FindSurface::Surface()
{
    Handle(::Geom_Surface) _result = ((::BRepLib_FindSurface*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}

double RDC::OCC::BRepLib_FindSurface::Tolerance()
{
    double _result = ((::BRepLib_FindSurface*)_NativeInstance)->Tolerance();
    return _result;
}

double RDC::OCC::BRepLib_FindSurface::ToleranceReached()
{
    double _result = ((::BRepLib_FindSurface*)_NativeInstance)->ToleranceReached();
    return _result;
}

bool RDC::OCC::BRepLib_FindSurface::Existed()
{
    bool _result = ((::BRepLib_FindSurface*)_NativeInstance)->Existed();
    return _result;
}

RDC::OCC::TopLoc_Location^ RDC::OCC::BRepLib_FindSurface::Location()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::BRepLib_FindSurface*)_NativeInstance)->Location();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_FuseEdges
//---------------------------------------------------------------------

RDC::OCC::BRepLib_FuseEdges::BRepLib_FuseEdges(RDC::OCC::TopoDS_Shape^ theShape, bool PerformNow)
    : RDC::OCC::BaseClass<::BRepLib_FuseEdges>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FuseEdges(*(::TopoDS_Shape*)theShape->NativeInstance, PerformNow);
}

RDC::OCC::BRepLib_FuseEdges::BRepLib_FuseEdges(RDC::OCC::TopoDS_Shape^ theShape)
    : RDC::OCC::BaseClass<::BRepLib_FuseEdges>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FuseEdges(*(::TopoDS_Shape*)theShape->NativeInstance, false);
}

void RDC::OCC::BRepLib_FuseEdges::AvoidEdges(RDC::OCC::TopTools_IndexedMapOfShape^ theMapEdg)
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->AvoidEdges(*(::TopTools_IndexedMapOfShape*)theMapEdg->NativeInstance);
}

void RDC::OCC::BRepLib_FuseEdges::SetConcatBSpl(bool theConcatBSpl)
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->SetConcatBSpl(theConcatBSpl);
}

void RDC::OCC::BRepLib_FuseEdges::SetConcatBSpl()
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->SetConcatBSpl(true);
}

void RDC::OCC::BRepLib_FuseEdges::Edges(RDC::OCC::TopTools_DataMapOfIntegerListOfShape^ theMapLstEdg)
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->Edges(*(::TopTools_DataMapOfIntegerListOfShape*)theMapLstEdg->NativeInstance);
}

void RDC::OCC::BRepLib_FuseEdges::ResultEdges(RDC::OCC::TopTools_DataMapOfIntegerShape^ theMapEdg)
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->ResultEdges(*(::TopTools_DataMapOfIntegerShape*)theMapEdg->NativeInstance);
}

void RDC::OCC::BRepLib_FuseEdges::Faces(RDC::OCC::TopTools_DataMapOfShapeShape^ theMapFac)
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->Faces(*(::TopTools_DataMapOfShapeShape*)theMapFac->NativeInstance);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepLib_FuseEdges::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepLib_FuseEdges*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

int RDC::OCC::BRepLib_FuseEdges::NbVertices()
{
    int _result = ((::BRepLib_FuseEdges*)_NativeInstance)->NbVertices();
    return _result;
}

void RDC::OCC::BRepLib_FuseEdges::Perform()
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->Perform();
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeShape
//---------------------------------------------------------------------

void RDC::OCC::BRepLib_MakeShape::Build()
{
    ((::BRepLib_MakeShape*)_NativeInstance)->Build();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepLib_MakeShape::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepLib_MakeShape*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::BRepLib_ShapeModification RDC::OCC::BRepLib_MakeShape::FaceStatus(RDC::OCC::TopoDS_Face^ F)
{
    ::BRepLib_ShapeModification _result = ((::BRepLib_MakeShape*)_NativeInstance)->FaceStatus(*(::TopoDS_Face*)F->NativeInstance);
    return (RDC::OCC::BRepLib_ShapeModification)_result;
}

bool RDC::OCC::BRepLib_MakeShape::HasDescendants(RDC::OCC::TopoDS_Face^ F)
{
    bool _result = ((::BRepLib_MakeShape*)_NativeInstance)->HasDescendants(*(::TopoDS_Face*)F->NativeInstance);
    return _result;
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepLib_MakeShape::DescendantFaces(RDC::OCC::TopoDS_Face^ F)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepLib_MakeShape*)_NativeInstance)->DescendantFaces(*(::TopoDS_Face*)F->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

int RDC::OCC::BRepLib_MakeShape::NbSurfaces()
{
    int _result = ((::BRepLib_MakeShape*)_NativeInstance)->NbSurfaces();
    return _result;
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepLib_MakeShape::NewFaces(int I)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepLib_MakeShape*)_NativeInstance)->NewFaces(I);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepLib_MakeShape::FacesFromEdges(RDC::OCC::TopoDS_Edge^ E)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepLib_MakeShape*)_NativeInstance)->FacesFromEdges(*(::TopoDS_Edge*)E->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeEdge
//---------------------------------------------------------------------

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge()
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge();
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Lin^ L)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Lin*)L->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Lin^ L, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Lin*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Lin^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Lin*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Lin^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Lin*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Circ^ L)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Circ*)L->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Circ^ L, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Circ*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Circ^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Circ*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Circ^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Circ*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Elips^ L)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Elips*)L->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Elips^ L, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Elips*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Elips^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Elips*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Elips^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Elips*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Hypr^ L)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Hypr*)L->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Hypr^ L, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Hypr*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Hypr^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Hypr*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Hypr^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Hypr*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Parab^ L)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Parab*)L->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Parab^ L, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Parab*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Parab^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Parab*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::gp_Parab^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Parab*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Geom_Curve^ L)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance));
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Geom_Curve^ L, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), p1, p2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Geom_Curve^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Geom_Curve^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Geom_Curve^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Geom_Curve^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Geom_Surface^ S)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Geom_Surface^ S, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), p1, p2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Geom_Surface^ S, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Geom_Surface^ S, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge::BRepLib_MakeEdge(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

void RDC::OCC::BRepLib_MakeEdge::Init(RDC::OCC::Geom_Curve^ C)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance));
}

void RDC::OCC::BRepLib_MakeEdge::Init(RDC::OCC::Geom_Curve^ C, double p1, double p2)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), p1, p2);
}

void RDC::OCC::BRepLib_MakeEdge::Init(RDC::OCC::Geom_Curve^ C, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void RDC::OCC::BRepLib_MakeEdge::Init(RDC::OCC::Geom_Curve^ C, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

void RDC::OCC::BRepLib_MakeEdge::Init(RDC::OCC::Geom_Curve^ C, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, double p1, double p2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
}

void RDC::OCC::BRepLib_MakeEdge::Init(RDC::OCC::Geom_Curve^ C, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double p1, double p2)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

void RDC::OCC::BRepLib_MakeEdge::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Geom_Surface^ S)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
}

void RDC::OCC::BRepLib_MakeEdge::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Geom_Surface^ S, double p1, double p2)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), p1, p2);
}

void RDC::OCC::BRepLib_MakeEdge::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Geom_Surface^ S, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void RDC::OCC::BRepLib_MakeEdge::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

void RDC::OCC::BRepLib_MakeEdge::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Geom_Surface^ S, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, double p1, double p2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
}

void RDC::OCC::BRepLib_MakeEdge::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double p1, double p2)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_EdgeError RDC::OCC::BRepLib_MakeEdge::Error()
{
    ::BRepLib_EdgeError _result = ((::BRepLib_MakeEdge*)_NativeInstance)->Error();
    return (RDC::OCC::BRepLib_EdgeError)_result;
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepLib_MakeEdge::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepLib_MakeEdge*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepLib_MakeEdge::Vertex1()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakeEdge*)_NativeInstance)->Vertex1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepLib_MakeEdge::Vertex2()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakeEdge*)_NativeInstance)->Vertex2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeEdge2d
//---------------------------------------------------------------------

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Lin2d^ L)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Lin2d^ L, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Lin2d^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Lin2d^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Circ2d^ L)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Circ2d^ L, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Circ2d^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Circ2d^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Elips2d^ L)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Elips2d^ L, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Elips2d^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Elips2d^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Hypr2d^ L)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Hypr2d^ L, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Hypr2d^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Hypr2d^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Parab2d^ L)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Parab2d^ L, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Parab2d^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::gp_Parab2d^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::Geom2d_Curve^ L)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance));
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::Geom2d_Curve^ L, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), p1, p2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, p1, p2);
}

RDC::OCC::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double p1, double p2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

void RDC::OCC::BRepLib_MakeEdge2d::Init(RDC::OCC::Geom2d_Curve^ C)
{
    ((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance));
}

void RDC::OCC::BRepLib_MakeEdge2d::Init(RDC::OCC::Geom2d_Curve^ C, double p1, double p2)
{
    ((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), p1, p2);
}

void RDC::OCC::BRepLib_MakeEdge2d::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    ((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void RDC::OCC::BRepLib_MakeEdge2d::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
{
    ((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

void RDC::OCC::BRepLib_MakeEdge2d::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2, double p1, double p2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    ((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, p1, p2);
}

void RDC::OCC::BRepLib_MakeEdge2d::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double p1, double p2)
{
    ((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

RDC::OCC::BRepLib_EdgeError RDC::OCC::BRepLib_MakeEdge2d::Error()
{
    ::BRepLib_EdgeError _result = ((::BRepLib_MakeEdge2d*)_NativeInstance)->Error();
    return (RDC::OCC::BRepLib_EdgeError)_result;
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepLib_MakeEdge2d::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepLib_MakeEdge2d*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepLib_MakeEdge2d::Vertex1()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakeEdge2d*)_NativeInstance)->Vertex1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepLib_MakeEdge2d::Vertex2()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakeEdge2d*)_NativeInstance)->Vertex2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeFace
//---------------------------------------------------------------------

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace()
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace();
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::TopoDS_Face^ F)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::TopoDS_Face*)F->NativeInstance);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::Pln P)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_P = &P;
    _NativeInstance = new ::BRepLib_MakeFace(*(gp_Pln*)pp_P);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Cylinder^ C)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cylinder*)C->NativeInstance);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Cone^ C)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cone*)C->NativeInstance);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Sphere^ S)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Sphere*)S->NativeInstance);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Torus^ C)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Torus*)C->NativeInstance);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::Geom_Surface^ S, double TolDegen)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(Handle(::Geom_Surface)(S->NativeInstance), TolDegen);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::Pln P, double UMin, double UMax, double VMin, double VMax)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_P = &P;
    _NativeInstance = new ::BRepLib_MakeFace(*(gp_Pln*)pp_P, UMin, UMax, VMin, VMax);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Cylinder^ C, double UMin, double UMax, double VMin, double VMax)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cylinder*)C->NativeInstance, UMin, UMax, VMin, VMax);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Cone^ C, double UMin, double UMax, double VMin, double VMax)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cone*)C->NativeInstance, UMin, UMax, VMin, VMax);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Sphere^ S, double UMin, double UMax, double VMin, double VMax)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Sphere*)S->NativeInstance, UMin, UMax, VMin, VMax);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Torus^ C, double UMin, double UMax, double VMin, double VMax)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Torus*)C->NativeInstance, UMin, UMax, VMin, VMax);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, TolDegen);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::TopoDS_Wire^ W, bool OnlyPlane)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::TopoDS_Wire*)W->NativeInstance, OnlyPlane);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::TopoDS_Wire*)W->NativeInstance, false);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::Pln P, RDC::OCC::TopoDS_Wire^ W, bool Inside)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_P = &P;
    _NativeInstance = new ::BRepLib_MakeFace(*(gp_Pln*)pp_P, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::Pln P, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_P = &P;
    _NativeInstance = new ::BRepLib_MakeFace(*(gp_Pln*)pp_P, *(::TopoDS_Wire*)W->NativeInstance, true);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Cylinder^ C, RDC::OCC::TopoDS_Wire^ W, bool Inside)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cylinder*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Cylinder^ C, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cylinder*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Cone^ C, RDC::OCC::TopoDS_Wire^ W, bool Inside)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cone*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Cone^ C, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cone*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Sphere^ S, RDC::OCC::TopoDS_Wire^ W, bool Inside)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Sphere*)S->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Sphere^ S, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Sphere*)S->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Torus^ C, RDC::OCC::TopoDS_Wire^ W, bool Inside)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Torus*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::gp_Torus^ C, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Torus*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::Geom_Surface^ S, RDC::OCC::TopoDS_Wire^ W, bool Inside)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::Geom_Surface^ S, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Wire*)W->NativeInstance, true);
}

RDC::OCC::BRepLib_MakeFace::BRepLib_MakeFace(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance);
}

void RDC::OCC::BRepLib_MakeFace::Init(RDC::OCC::TopoDS_Face^ F)
{
    ((::BRepLib_MakeFace*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepLib_MakeFace::Init(RDC::OCC::Geom_Surface^ S, bool Bound, double TolDegen)
{
    ((::BRepLib_MakeFace*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), Bound, TolDegen);
}

void RDC::OCC::BRepLib_MakeFace::Init(RDC::OCC::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen)
{
    ((::BRepLib_MakeFace*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, TolDegen);
}

void RDC::OCC::BRepLib_MakeFace::Add(RDC::OCC::TopoDS_Wire^ W)
{
    ((::BRepLib_MakeFace*)_NativeInstance)->Add(*(::TopoDS_Wire*)W->NativeInstance);
}

RDC::OCC::BRepLib_FaceError RDC::OCC::BRepLib_MakeFace::Error()
{
    ::BRepLib_FaceError _result = ((::BRepLib_MakeFace*)_NativeInstance)->Error();
    return (RDC::OCC::BRepLib_FaceError)_result;
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepLib_MakeFace::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepLib_MakeFace*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

bool RDC::OCC::BRepLib_MakeFace::IsDegenerated(RDC::OCC::Geom_Curve^ theCurve, double theMaxTol, double% theActTol)
{
    pin_ptr<double> pp_theActTol = &theActTol;
    bool _result = ::BRepLib_MakeFace::IsDegenerated(Handle(::Geom_Curve)(theCurve->NativeInstance), theMaxTol, *(double*)pp_theActTol);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakePolygon
//---------------------------------------------------------------------

RDC::OCC::BRepLib_MakePolygon::BRepLib_MakePolygon()
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakePolygon();
}

RDC::OCC::BRepLib_MakePolygon::BRepLib_MakePolygon(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepLib_MakePolygon::BRepLib_MakePolygon(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Pnt P3, bool Close)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt> pp_P3 = &P3;
    _NativeInstance = new ::BRepLib_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, Close);
}

RDC::OCC::BRepLib_MakePolygon::BRepLib_MakePolygon(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Pnt P3)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt> pp_P3 = &P3;
    _NativeInstance = new ::BRepLib_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, false);
}

RDC::OCC::BRepLib_MakePolygon::BRepLib_MakePolygon(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Pnt P3, RDC::OCC::Pnt P4, bool Close)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt> pp_P3 = &P3;
    pin_ptr<RDC::OCC::Pnt> pp_P4 = &P4;
    _NativeInstance = new ::BRepLib_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, *(gp_Pnt*)pp_P4, Close);
}

RDC::OCC::BRepLib_MakePolygon::BRepLib_MakePolygon(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Pnt P3, RDC::OCC::Pnt P4)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt> pp_P3 = &P3;
    pin_ptr<RDC::OCC::Pnt> pp_P4 = &P4;
    _NativeInstance = new ::BRepLib_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, *(gp_Pnt*)pp_P4, false);
}

RDC::OCC::BRepLib_MakePolygon::BRepLib_MakePolygon(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepLib_MakePolygon::BRepLib_MakePolygon(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, RDC::OCC::TopoDS_Vertex^ V3, bool Close)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, Close);
}

RDC::OCC::BRepLib_MakePolygon::BRepLib_MakePolygon(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, RDC::OCC::TopoDS_Vertex^ V3)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, false);
}

RDC::OCC::BRepLib_MakePolygon::BRepLib_MakePolygon(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, RDC::OCC::TopoDS_Vertex^ V3, RDC::OCC::TopoDS_Vertex^ V4, bool Close)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, *(::TopoDS_Vertex*)V4->NativeInstance, Close);
}

RDC::OCC::BRepLib_MakePolygon::BRepLib_MakePolygon(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, RDC::OCC::TopoDS_Vertex^ V3, RDC::OCC::TopoDS_Vertex^ V4)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, *(::TopoDS_Vertex*)V4->NativeInstance, false);
}

void RDC::OCC::BRepLib_MakePolygon::Add(RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::BRepLib_MakePolygon*)_NativeInstance)->Add(*(gp_Pnt*)pp_P);
}

void RDC::OCC::BRepLib_MakePolygon::Add(RDC::OCC::TopoDS_Vertex^ V)
{
    ((::BRepLib_MakePolygon*)_NativeInstance)->Add(*(::TopoDS_Vertex*)V->NativeInstance);
}

bool RDC::OCC::BRepLib_MakePolygon::Added()
{
    bool _result = ((::BRepLib_MakePolygon*)_NativeInstance)->Added();
    return _result;
}

void RDC::OCC::BRepLib_MakePolygon::Close()
{
    ((::BRepLib_MakePolygon*)_NativeInstance)->Close();
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepLib_MakePolygon::FirstVertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakePolygon*)_NativeInstance)->FirstVertex();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepLib_MakePolygon::LastVertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakePolygon*)_NativeInstance)->LastVertex();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepLib_MakePolygon::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepLib_MakePolygon*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Wire^ RDC::OCC::BRepLib_MakePolygon::Wire()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)((::BRepLib_MakePolygon*)_NativeInstance)->Wire();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Wire(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeShell
//---------------------------------------------------------------------

RDC::OCC::BRepLib_MakeShell::BRepLib_MakeShell()
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeShell();
}

RDC::OCC::BRepLib_MakeShell::BRepLib_MakeShell(RDC::OCC::Geom_Surface^ S, bool Segment)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeShell(Handle(::Geom_Surface)(S->NativeInstance), Segment);
}

RDC::OCC::BRepLib_MakeShell::BRepLib_MakeShell(RDC::OCC::Geom_Surface^ S)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeShell(Handle(::Geom_Surface)(S->NativeInstance), false);
}

RDC::OCC::BRepLib_MakeShell::BRepLib_MakeShell(RDC::OCC::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeShell(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, Segment);
}

RDC::OCC::BRepLib_MakeShell::BRepLib_MakeShell(RDC::OCC::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeShell(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, false);
}

void RDC::OCC::BRepLib_MakeShell::Init(RDC::OCC::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment)
{
    ((::BRepLib_MakeShell*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, Segment);
}

void RDC::OCC::BRepLib_MakeShell::Init(RDC::OCC::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax)
{
    ((::BRepLib_MakeShell*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, false);
}

RDC::OCC::BRepLib_ShellError RDC::OCC::BRepLib_MakeShell::Error()
{
    ::BRepLib_ShellError _result = ((::BRepLib_MakeShell*)_NativeInstance)->Error();
    return (RDC::OCC::BRepLib_ShellError)_result;
}

RDC::OCC::TopoDS_Shell^ RDC::OCC::BRepLib_MakeShell::Shell()
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = (::TopoDS_Shell)((::BRepLib_MakeShell*)_NativeInstance)->Shell();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shell(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeSolid
//---------------------------------------------------------------------

RDC::OCC::BRepLib_MakeSolid::BRepLib_MakeSolid()
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid();
}

RDC::OCC::BRepLib_MakeSolid::BRepLib_MakeSolid(RDC::OCC::TopoDS_CompSolid^ S)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid(*(::TopoDS_CompSolid*)S->NativeInstance);
}

RDC::OCC::BRepLib_MakeSolid::BRepLib_MakeSolid(RDC::OCC::TopoDS_Shell^ S)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid(*(::TopoDS_Shell*)S->NativeInstance);
}

RDC::OCC::BRepLib_MakeSolid::BRepLib_MakeSolid(RDC::OCC::TopoDS_Shell^ S1, RDC::OCC::TopoDS_Shell^ S2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid(*(::TopoDS_Shell*)S1->NativeInstance, *(::TopoDS_Shell*)S2->NativeInstance);
}

RDC::OCC::BRepLib_MakeSolid::BRepLib_MakeSolid(RDC::OCC::TopoDS_Shell^ S1, RDC::OCC::TopoDS_Shell^ S2, RDC::OCC::TopoDS_Shell^ S3)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid(*(::TopoDS_Shell*)S1->NativeInstance, *(::TopoDS_Shell*)S2->NativeInstance, *(::TopoDS_Shell*)S3->NativeInstance);
}

RDC::OCC::BRepLib_MakeSolid::BRepLib_MakeSolid(RDC::OCC::TopoDS_Solid^ So)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid(*(::TopoDS_Solid*)So->NativeInstance);
}

RDC::OCC::BRepLib_MakeSolid::BRepLib_MakeSolid(RDC::OCC::TopoDS_Solid^ So, RDC::OCC::TopoDS_Shell^ S)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid(*(::TopoDS_Solid*)So->NativeInstance, *(::TopoDS_Shell*)S->NativeInstance);
}

void RDC::OCC::BRepLib_MakeSolid::Add(RDC::OCC::TopoDS_Shell^ S)
{
    ((::BRepLib_MakeSolid*)_NativeInstance)->Add(*(::TopoDS_Shell*)S->NativeInstance);
}

RDC::OCC::TopoDS_Solid^ RDC::OCC::BRepLib_MakeSolid::Solid()
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = (::TopoDS_Solid)((::BRepLib_MakeSolid*)_NativeInstance)->Solid();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Solid(_result);
}

RDC::OCC::BRepLib_ShapeModification RDC::OCC::BRepLib_MakeSolid::FaceStatus(RDC::OCC::TopoDS_Face^ F)
{
    ::BRepLib_ShapeModification _result = ((::BRepLib_MakeSolid*)_NativeInstance)->FaceStatus(*(::TopoDS_Face*)F->NativeInstance);
    return (RDC::OCC::BRepLib_ShapeModification)_result;
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeVertex
//---------------------------------------------------------------------

RDC::OCC::BRepLib_MakeVertex::BRepLib_MakeVertex(RDC::OCC::Pnt P)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::BRepLib_MakeVertex(*(gp_Pnt*)pp_P);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepLib_MakeVertex::Vertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakeVertex*)_NativeInstance)->Vertex();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeWire
//---------------------------------------------------------------------

RDC::OCC::BRepLib_MakeWire::BRepLib_MakeWire()
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire();
}

RDC::OCC::BRepLib_MakeWire::BRepLib_MakeWire(RDC::OCC::TopoDS_Edge^ E)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire(*(::TopoDS_Edge*)E->NativeInstance);
}

RDC::OCC::BRepLib_MakeWire::BRepLib_MakeWire(RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
}

RDC::OCC::BRepLib_MakeWire::BRepLib_MakeWire(RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2, RDC::OCC::TopoDS_Edge^ E3)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Edge*)E3->NativeInstance);
}

RDC::OCC::BRepLib_MakeWire::BRepLib_MakeWire(RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2, RDC::OCC::TopoDS_Edge^ E3, RDC::OCC::TopoDS_Edge^ E4)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Edge*)E3->NativeInstance, *(::TopoDS_Edge*)E4->NativeInstance);
}

RDC::OCC::BRepLib_MakeWire::BRepLib_MakeWire(RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire(*(::TopoDS_Wire*)W->NativeInstance);
}

RDC::OCC::BRepLib_MakeWire::BRepLib_MakeWire(RDC::OCC::TopoDS_Wire^ W, RDC::OCC::TopoDS_Edge^ E)
    : RDC::OCC::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

void RDC::OCC::BRepLib_MakeWire::Add(RDC::OCC::TopoDS_Edge^ E)
{
    ((::BRepLib_MakeWire*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance);
}

void RDC::OCC::BRepLib_MakeWire::Add(RDC::OCC::TopoDS_Wire^ W)
{
    ((::BRepLib_MakeWire*)_NativeInstance)->Add(*(::TopoDS_Wire*)W->NativeInstance);
}

void RDC::OCC::BRepLib_MakeWire::Add(RDC::OCC::TopTools_ListOfShape^ L)
{
    ((::BRepLib_MakeWire*)_NativeInstance)->Add(*(::TopTools_ListOfShape*)L->NativeInstance);
}

RDC::OCC::BRepLib_WireError RDC::OCC::BRepLib_MakeWire::Error()
{
    ::BRepLib_WireError _result = ((::BRepLib_MakeWire*)_NativeInstance)->Error();
    return (RDC::OCC::BRepLib_WireError)_result;
}

RDC::OCC::TopoDS_Wire^ RDC::OCC::BRepLib_MakeWire::Wire()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)((::BRepLib_MakeWire*)_NativeInstance)->Wire();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Wire(_result);
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepLib_MakeWire::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepLib_MakeWire*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepLib_MakeWire::Vertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakeWire*)_NativeInstance)->Vertex();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_PointCloudShape
//---------------------------------------------------------------------

RDC::OCC::BRepLib_PointCloudShape::BRepLib_PointCloudShape(RDC::OCC::TopoDS_Shape^ theShape, double theTol)
    : RDC::OCC::BaseClass<::BRepLib_PointCloudShape>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::BRepLib_PointCloudShape::BRepLib_PointCloudShape(RDC::OCC::TopoDS_Shape^ theShape)
    : RDC::OCC::BaseClass<::BRepLib_PointCloudShape>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::BRepLib_PointCloudShape::BRepLib_PointCloudShape()
    : RDC::OCC::BaseClass<::BRepLib_PointCloudShape>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepLib_PointCloudShape::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepLib_PointCloudShape*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::BRepLib_PointCloudShape::SetShape(RDC::OCC::TopoDS_Shape^ theShape)
{
    ((::BRepLib_PointCloudShape*)_NativeInstance)->SetShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

double RDC::OCC::BRepLib_PointCloudShape::Tolerance()
{
    double _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->Tolerance();
    return _result;
}

void RDC::OCC::BRepLib_PointCloudShape::SetTolerance(double theTol)
{
    ((::BRepLib_PointCloudShape*)_NativeInstance)->SetTolerance(theTol);
}

double RDC::OCC::BRepLib_PointCloudShape::GetDistance()
{
    double _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->GetDistance();
    return _result;
}

void RDC::OCC::BRepLib_PointCloudShape::SetDistance(double theDist)
{
    ((::BRepLib_PointCloudShape*)_NativeInstance)->SetDistance(theDist);
}

int RDC::OCC::BRepLib_PointCloudShape::NbPointsByDensity(double theDensity)
{
    int _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->NbPointsByDensity(theDensity);
    return _result;
}

int RDC::OCC::BRepLib_PointCloudShape::NbPointsByDensity()
{
    int _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->NbPointsByDensity(0.);
    return _result;
}

int RDC::OCC::BRepLib_PointCloudShape::NbPointsByTriangulation()
{
    int _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->NbPointsByTriangulation();
    return _result;
}

bool RDC::OCC::BRepLib_PointCloudShape::GeneratePointsByDensity(double theDensity)
{
    bool _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->GeneratePointsByDensity(theDensity);
    return _result;
}

bool RDC::OCC::BRepLib_PointCloudShape::GeneratePointsByDensity()
{
    bool _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->GeneratePointsByDensity(0.);
    return _result;
}

bool RDC::OCC::BRepLib_PointCloudShape::GeneratePointsByTriangulation()
{
    bool _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->GeneratePointsByTriangulation();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepLib_ToolTriangulatedShape
//---------------------------------------------------------------------

RDC::OCC::BRepLib_ToolTriangulatedShape::BRepLib_ToolTriangulatedShape()
    : RDC::OCC::BaseClass<::BRepLib_ToolTriangulatedShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_ToolTriangulatedShape();
}



//---------------------------------------------------------------------
//  Class  BRepLib_ValidateEdge
//---------------------------------------------------------------------

RDC::OCC::BRepLib_ValidateEdge::BRepLib_ValidateEdge(RDC::OCC::Adaptor3d_Curve^ theReferenceCurve, RDC::OCC::Adaptor3d_CurveOnSurface^ theOtherCurve, bool theSameParameter)
    : RDC::OCC::BaseClass<::BRepLib_ValidateEdge>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_ValidateEdge(Handle(::Adaptor3d_Curve)(theReferenceCurve->NativeInstance), Handle(::Adaptor3d_CurveOnSurface)(theOtherCurve->NativeInstance), theSameParameter);
}

void RDC::OCC::BRepLib_ValidateEdge::SetExactMethod(bool theIsExact)
{
    ((::BRepLib_ValidateEdge*)_NativeInstance)->SetExactMethod(theIsExact);
}

bool RDC::OCC::BRepLib_ValidateEdge::IsExactMethod()
{
    bool _result = ((::BRepLib_ValidateEdge*)_NativeInstance)->IsExactMethod();
    return _result;
}

void RDC::OCC::BRepLib_ValidateEdge::SetParallel(bool theIsMultiThread)
{
    ((::BRepLib_ValidateEdge*)_NativeInstance)->SetParallel(theIsMultiThread);
}

bool RDC::OCC::BRepLib_ValidateEdge::IsParallel()
{
    bool _result = ((::BRepLib_ValidateEdge*)_NativeInstance)->IsParallel();
    return _result;
}

void RDC::OCC::BRepLib_ValidateEdge::SetControlPointsNumber(int theControlPointsNumber)
{
    ((::BRepLib_ValidateEdge*)_NativeInstance)->SetControlPointsNumber(theControlPointsNumber);
}

void RDC::OCC::BRepLib_ValidateEdge::Process()
{
    ((::BRepLib_ValidateEdge*)_NativeInstance)->Process();
}

bool RDC::OCC::BRepLib_ValidateEdge::IsDone()
{
    bool _result = ((::BRepLib_ValidateEdge*)_NativeInstance)->IsDone();
    return _result;
}

bool RDC::OCC::BRepLib_ValidateEdge::CheckTolerance(double theToleranceToCheck)
{
    bool _result = ((::BRepLib_ValidateEdge*)_NativeInstance)->CheckTolerance(theToleranceToCheck);
    return _result;
}

double RDC::OCC::BRepLib_ValidateEdge::GetMaxDistance()
{
    double _result = ((::BRepLib_ValidateEdge*)_NativeInstance)->GetMaxDistance();
    return _result;
}

void RDC::OCC::BRepLib_ValidateEdge::UpdateTolerance(double% theToleranceToUpdate)
{
    pin_ptr<double> pp_theToleranceToUpdate = &theToleranceToUpdate;
    ((::BRepLib_ValidateEdge*)_NativeInstance)->UpdateTolerance(*(double*)pp_theToleranceToUpdate);
}



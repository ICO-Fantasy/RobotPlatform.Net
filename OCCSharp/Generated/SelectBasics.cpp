// Generated wrapper code for package SelectBasics

#include "OcctPCH.h"
#include "SelectBasics.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "SelectMgr.h"
#include "Graphic3d.h"
#include "TColgp.h"


//---------------------------------------------------------------------
//  Class  SelectBasics_PickResult
//---------------------------------------------------------------------

RDC::OCC::SelectBasics_PickResult::SelectBasics_PickResult()
    : RDC::OCC::BaseClass<::SelectBasics_PickResult>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectBasics_PickResult();
}

RDC::OCC::SelectBasics_PickResult::SelectBasics_PickResult(double theDepth, double theDistToCenter, RDC::OCC::Pnt theObjPickedPnt)
    : RDC::OCC::BaseClass<::SelectBasics_PickResult>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_theObjPickedPnt = &theObjPickedPnt;
    _NativeInstance = new ::SelectBasics_PickResult(theDepth, theDistToCenter, *(gp_Pnt*)pp_theObjPickedPnt);
}

RDC::OCC::SelectBasics_PickResult^ RDC::OCC::SelectBasics_PickResult::Min(RDC::OCC::SelectBasics_PickResult^ thePickResult1, RDC::OCC::SelectBasics_PickResult^ thePickResult2)
{
    ::SelectBasics_PickResult* _result = new ::SelectBasics_PickResult();
    *_result = (::SelectBasics_PickResult)::SelectBasics_PickResult::Min(*(::SelectBasics_PickResult*)thePickResult1->NativeInstance, *(::SelectBasics_PickResult*)thePickResult2->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::SelectBasics_PickResult(_result);
}

bool RDC::OCC::SelectBasics_PickResult::IsValid()
{
    bool _result = ((::SelectBasics_PickResult*)_NativeInstance)->IsValid();
    return _result;
}

void RDC::OCC::SelectBasics_PickResult::Invalidate()
{
    ((::SelectBasics_PickResult*)_NativeInstance)->Invalidate();
}

double RDC::OCC::SelectBasics_PickResult::Depth()
{
    double _result = ((::SelectBasics_PickResult*)_NativeInstance)->Depth();
    return _result;
}

void RDC::OCC::SelectBasics_PickResult::SetDepth(double theDepth)
{
    ((::SelectBasics_PickResult*)_NativeInstance)->SetDepth(theDepth);
}

bool RDC::OCC::SelectBasics_PickResult::HasPickedPoint()
{
    bool _result = ((::SelectBasics_PickResult*)_NativeInstance)->HasPickedPoint();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::SelectBasics_PickResult::PickedPoint()
{
    ::gp_Pnt _nativeResult = ((::SelectBasics_PickResult*)_NativeInstance)->PickedPoint();
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::SelectBasics_PickResult::SetPickedPoint(RDC::OCC::Pnt theObjPickedPnt)
{
    pin_ptr<RDC::OCC::Pnt> pp_theObjPickedPnt = &theObjPickedPnt;
    ((::SelectBasics_PickResult*)_NativeInstance)->SetPickedPoint(*(gp_Pnt*)pp_theObjPickedPnt);
}

double RDC::OCC::SelectBasics_PickResult::DistToGeomCenter()
{
    double _result = ((::SelectBasics_PickResult*)_NativeInstance)->DistToGeomCenter();
    return _result;
}

void RDC::OCC::SelectBasics_PickResult::SetDistToGeomCenter(double theDistToCenter)
{
    ((::SelectBasics_PickResult*)_NativeInstance)->SetDistToGeomCenter(theDistToCenter);
}

RDC::OCC::gp_Vec3f^ RDC::OCC::SelectBasics_PickResult::SurfaceNormal()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::SelectBasics_PickResult*)_NativeInstance)->SurfaceNormal();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_Vec3f(_result);
}

void RDC::OCC::SelectBasics_PickResult::SetSurfaceNormal(RDC::OCC::gp_Vec3f^ theNormal)
{
    ((::SelectBasics_PickResult*)_NativeInstance)->SetSurfaceNormal(*(::gp_Vec3f*)theNormal->NativeInstance);
}

void RDC::OCC::SelectBasics_PickResult::SetSurfaceNormal(RDC::OCC::Vec theNormal)
{
    pin_ptr<RDC::OCC::Vec> pp_theNormal = &theNormal;
    ((::SelectBasics_PickResult*)_NativeInstance)->SetSurfaceNormal(*(gp_Vec*)pp_theNormal);
}



//---------------------------------------------------------------------
//  Class  SelectBasics
//---------------------------------------------------------------------

RDC::OCC::SelectBasics::SelectBasics()
    : RDC::OCC::BaseClass<::SelectBasics>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectBasics();
}

int RDC::OCC::SelectBasics::MaxOwnerPriority()
{
    int _result = ::SelectBasics::MaxOwnerPriority();
    return _result;
}

int RDC::OCC::SelectBasics::MinOwnerPriority()
{
    int _result = ::SelectBasics::MinOwnerPriority();
    return _result;
}



//---------------------------------------------------------------------
//  Class  SelectBasics_SelectingVolumeManager
//---------------------------------------------------------------------

RDC::OCC::SelectBasics_SelectingVolumeManager::SelectBasics_SelectingVolumeManager()
    : RDC::OCC::BaseClass<::SelectBasics_SelectingVolumeManager>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

int RDC::OCC::SelectBasics_SelectingVolumeManager::GetActiveSelectionType()
{
    int _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetActiveSelectionType();
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsBox(RDC::OCC::Graphic3d_Vec3d^ theBoxMin, RDC::OCC::Graphic3d_Vec3d^ theBoxMax, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsBox(*(::Graphic3d_Vec3d*)theBoxMin->NativeInstance, *(::Graphic3d_Vec3d*)theBoxMax->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsBox(RDC::OCC::Graphic3d_Vec3d^ theBoxMin, RDC::OCC::Graphic3d_Vec3d^ theBoxMax, bool% theInside)
{
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsBox(*(::Graphic3d_Vec3d*)theBoxMin->NativeInstance, *(::Graphic3d_Vec3d*)theBoxMax->NativeInstance, (bool*)pp_theInside);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsBox(RDC::OCC::Graphic3d_Vec3d^ theBoxMin, RDC::OCC::Graphic3d_Vec3d^ theBoxMax)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsBox(*(::Graphic3d_Vec3d*)theBoxMin->NativeInstance, *(::Graphic3d_Vec3d*)theBoxMax->NativeInstance, nullptr);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsPoint(RDC::OCC::Pnt thePnt, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsPoint(RDC::OCC::Pnt thePnt)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsPolygon(RDC::OCC::TColgp_Array1OfPnt^ theArrayOfPts, int theSensType, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsPolygon(*(::TColgp_Array1OfPnt*)theArrayOfPts->NativeInstance, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsSegment(RDC::OCC::Pnt thePt1, RDC::OCC::Pnt thePt2, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePt1 = &thePt1;
    pin_ptr<RDC::OCC::Pnt> pp_thePt2 = &thePt2;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsSegment(*(gp_Pnt*)pp_thePt1, *(gp_Pnt*)pp_thePt2, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsTriangle(RDC::OCC::Pnt thePt1, RDC::OCC::Pnt thePt2, RDC::OCC::Pnt thePt3, int theSensType, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePt1 = &thePt1;
    pin_ptr<RDC::OCC::Pnt> pp_thePt2 = &thePt2;
    pin_ptr<RDC::OCC::Pnt> pp_thePt3 = &thePt3;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsTriangle(*(gp_Pnt*)pp_thePt1, *(gp_Pnt*)pp_thePt2, *(gp_Pnt*)pp_thePt3, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<RDC::OCC::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, bool% theInside)
{
    pin_ptr<RDC::OCC::Pnt> pp_theCenter = &theCenter;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, (bool*)pp_theInside);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius)
{
    pin_ptr<RDC::OCC::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, nullptr);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, bool% theInside)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, (bool*)pp_theInside);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, nullptr);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsCircle(double theRadius, RDC::OCC::Trsf theTrsf, bool theIsFilled, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsCircle(theRadius, *(gp_Trsf*)pp_theTrsf, theIsFilled, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsCircle(double theRadius, RDC::OCC::Trsf theTrsf, bool theIsFilled, bool% theInside)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsCircle(theRadius, *(gp_Trsf*)pp_theTrsf, theIsFilled, (bool*)pp_theInside);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::OverlapsCircle(double theRadius, RDC::OCC::Trsf theTrsf, bool theIsFilled)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsCircle(theRadius, *(gp_Trsf*)pp_theTrsf, theIsFilled, nullptr);
    return _result;
}

double RDC::OCC::SelectBasics_SelectingVolumeManager::DistToGeometryCenter(RDC::OCC::Pnt theCOG)
{
    pin_ptr<RDC::OCC::Pnt> pp_theCOG = &theCOG;
    double _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->DistToGeometryCenter(*(gp_Pnt*)pp_theCOG);
    return _result;
}

RDC::OCC::Pnt RDC::OCC::SelectBasics_SelectingVolumeManager::DetectedPoint(double theDepth)
{
    ::gp_Pnt _nativeResult = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->DetectedPoint(theDepth);
    return RDC::OCC::Pnt(_nativeResult);
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::IsOverlapAllowed()
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->IsOverlapAllowed();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::SelectBasics_SelectingVolumeManager::GetNearPickedPnt()
{
    ::gp_Pnt _nativeResult = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetNearPickedPnt();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::SelectBasics_SelectingVolumeManager::GetFarPickedPnt()
{
    ::gp_Pnt _nativeResult = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetFarPickedPnt();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::SelectBasics_SelectingVolumeManager::GetViewRayDirection()
{
    ::gp_Dir _nativeResult = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetViewRayDirection();
    return RDC::OCC::Dir(_nativeResult);
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::IsScalableActiveVolume()
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->IsScalableActiveVolume();
    return _result;
}

RDC::OCC::Pnt2d RDC::OCC::SelectBasics_SelectingVolumeManager::GetMousePosition()
{
    ::gp_Pnt2d _nativeResult = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetMousePosition();
    return RDC::OCC::Pnt2d(_nativeResult);
}

void RDC::OCC::SelectBasics_SelectingVolumeManager::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::SelectBasics_SelectingVolumeManager::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::Overlaps(RDC::OCC::Graphic3d_Vec3d^ theBoxMin, RDC::OCC::Graphic3d_Vec3d^ theBoxMax, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(::Graphic3d_Vec3d*)theBoxMin->NativeInstance, *(::Graphic3d_Vec3d*)theBoxMax->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::Overlaps(RDC::OCC::Graphic3d_Vec3d^ theBoxMin, RDC::OCC::Graphic3d_Vec3d^ theBoxMax, bool% theInside)
{
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(::Graphic3d_Vec3d*)theBoxMin->NativeInstance, *(::Graphic3d_Vec3d*)theBoxMax->NativeInstance, (bool*)pp_theInside);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::Overlaps(RDC::OCC::Graphic3d_Vec3d^ theBoxMin, RDC::OCC::Graphic3d_Vec3d^ theBoxMax)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(::Graphic3d_Vec3d*)theBoxMin->NativeInstance, *(::Graphic3d_Vec3d*)theBoxMax->NativeInstance, nullptr);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::Overlaps(RDC::OCC::Pnt thePnt, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(gp_Pnt*)pp_thePnt, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::Overlaps(RDC::OCC::Pnt thePnt)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(gp_Pnt*)pp_thePnt);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::Overlaps(RDC::OCC::TColgp_HArray1OfPnt^ theArrayOfPts, int theSensType, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(Handle(::TColgp_HArray1OfPnt)(theArrayOfPts->NativeInstance), theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::Overlaps(RDC::OCC::TColgp_Array1OfPnt^ theArrayOfPts, int theSensType, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(::TColgp_Array1OfPnt*)theArrayOfPts->NativeInstance, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::Overlaps(RDC::OCC::Pnt thePnt1, RDC::OCC::Pnt thePnt2, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt1 = &thePnt1;
    pin_ptr<RDC::OCC::Pnt> pp_thePnt2 = &thePnt2;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool RDC::OCC::SelectBasics_SelectingVolumeManager::Overlaps(RDC::OCC::Pnt thePnt1, RDC::OCC::Pnt thePnt2, RDC::OCC::Pnt thePnt3, int theSensType, RDC::OCC::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt1 = &thePnt1;
    pin_ptr<RDC::OCC::Pnt> pp_thePnt2 = &thePnt2;
    pin_ptr<RDC::OCC::Pnt> pp_thePnt3 = &thePnt3;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2, *(gp_Pnt*)pp_thePnt3, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}



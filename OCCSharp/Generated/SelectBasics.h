// Generated wrapper code for package SelectBasics

#pragma once


namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Class  SelectBasics_PickResult
//---------------------------------------------------------------------
/// <summary>
/// This structure provides unified access to the results of Matches() method in all sensitive entities,
/// so that it defines a Depth (distance to the entity along picking ray) and a closest Point on entity.
/// </summary>
public ref class SelectBasics_PickResult sealed
    : public RDC::OCC::BaseClass<::SelectBasics_PickResult>
{

#ifdef Include_SelectBasics_PickResult_h
public:
    Include_SelectBasics_PickResult_h
#endif

public:
    SelectBasics_PickResult(::SelectBasics_PickResult* nativeInstance)
        : RDC::OCC::BaseClass<::SelectBasics_PickResult>( nativeInstance, true )
    {}

    SelectBasics_PickResult(::SelectBasics_PickResult& nativeInstance)
        : RDC::OCC::BaseClass<::SelectBasics_PickResult>( &nativeInstance, false )
    {}

    property ::SelectBasics_PickResult* NativeInstance
    {
        ::SelectBasics_PickResult* get()
        {
            return static_cast<::SelectBasics_PickResult*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor defining an invalid result.
    /// </summary>
    SelectBasics_PickResult();
    /// <summary>
    /// Constructor with initialization.
    /// </summary>
    SelectBasics_PickResult(double theDepth, double theDistToCenter, RDC::OCC::Pnt theObjPickedPnt);
    /// <summary>
    /// Return closest result between two Pick Results according to Depth value.
    /// </summary>
    static RDC::OCC::SelectBasics_PickResult^ Min(RDC::OCC::SelectBasics_PickResult^ thePickResult1, RDC::OCC::SelectBasics_PickResult^ thePickResult2);
    /// <summary>
    /// Return TRUE if result was been defined.
    /// </summary>
    bool IsValid();
    /// <summary>
    /// Reset depth value.
    /// </summary>
    void Invalidate();
    /// <summary>
    /// Return depth along picking ray.
    /// </summary>
    double Depth();
    /// <summary>
    /// Set depth along picking ray.
    /// </summary>
    void SetDepth(double theDepth);
    /// <summary>
    /// Return TRUE if Picked Point lying on detected entity was set.
    /// </summary>
    bool HasPickedPoint();
    /// <summary>
    /// Return picked point lying on detected entity.
    /// WARNING! Point is defined in local coordinate system and should be translated into World System before usage!
    /// </summary>
    RDC::OCC::Pnt PickedPoint();
    /// <summary>
    /// Set picked point.
    /// </summary>
    void SetPickedPoint(RDC::OCC::Pnt theObjPickedPnt);
    /// <summary>
    /// Return distance to geometry center (auxiliary value for comparing results).
    /// </summary>
    double DistToGeomCenter();
    /// <summary>
    /// Set distance to geometry center.
    /// </summary>
    void SetDistToGeomCenter(double theDistToCenter);
    /// <summary>
    /// Return (unnormalized) surface normal at picked point or zero vector if undefined.
    /// WARNING! Normal is defined in local coordinate system and should be translated into World System before usage!
    /// </summary>
    RDC::OCC::gp_Vec3f^ SurfaceNormal();
    /// <summary>
    /// Set surface normal at picked point.
    /// </summary>
    void SetSurfaceNormal(RDC::OCC::gp_Vec3f^ theNormal);
    /// <summary>
    /// Set surface normal at picked point.
    /// </summary>
    void SetSurfaceNormal(RDC::OCC::Vec theNormal);
}; // class SelectBasics_PickResult

//---------------------------------------------------------------------
//  Class  SelectBasics
//---------------------------------------------------------------------
/// <summary>
/// interface class for dynamic selection
/// </summary>
public ref class SelectBasics sealed
    : public RDC::OCC::BaseClass<::SelectBasics>
{

#ifdef Include_SelectBasics_h
public:
    Include_SelectBasics_h
#endif

public:
    SelectBasics(::SelectBasics* nativeInstance)
        : RDC::OCC::BaseClass<::SelectBasics>( nativeInstance, true )
    {}

    SelectBasics(::SelectBasics& nativeInstance)
        : RDC::OCC::BaseClass<::SelectBasics>( &nativeInstance, false )
    {}

    property ::SelectBasics* NativeInstance
    {
        ::SelectBasics* get()
        {
            return static_cast<::SelectBasics*>(_NativeInstance);
        }
    }

public:
    SelectBasics();
    /// <summary>
    /// Structure to provide all-in-one result of selection of sensitive for "Matches" method of Select3D_SensitiveEntity.
    /// </summary>
    static int MaxOwnerPriority();
    static int MinOwnerPriority();
}; // class SelectBasics

//---------------------------------------------------------------------
//  Class  SelectBasics_SelectingVolumeManager
//---------------------------------------------------------------------
/// <summary>
/// This class provides an interface for selecting volume manager,
/// which is responsible for all overlap detection methods and
/// calculation of minimum depth, distance to center of geometry
/// and detected closest point on entity.
/// </summary>
public ref class SelectBasics_SelectingVolumeManager
    : public RDC::OCC::BaseClass<::SelectBasics_SelectingVolumeManager>
{

#ifdef Include_SelectBasics_SelectingVolumeManager_h
public:
    Include_SelectBasics_SelectingVolumeManager_h
#endif

protected:
    SelectBasics_SelectingVolumeManager(InitMode init)
        : RDC::OCC::BaseClass<::SelectBasics_SelectingVolumeManager>( init )
    {}

public:
    SelectBasics_SelectingVolumeManager(::SelectBasics_SelectingVolumeManager* nativeInstance)
        : RDC::OCC::BaseClass<::SelectBasics_SelectingVolumeManager>( nativeInstance, true )
    {}

    SelectBasics_SelectingVolumeManager(::SelectBasics_SelectingVolumeManager& nativeInstance)
        : RDC::OCC::BaseClass<::SelectBasics_SelectingVolumeManager>( &nativeInstance, false )
    {}

    property ::SelectBasics_SelectingVolumeManager* NativeInstance
    {
        ::SelectBasics_SelectingVolumeManager* get()
        {
            return static_cast<::SelectBasics_SelectingVolumeManager*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    SelectBasics_SelectingVolumeManager();
    /// <summary>
    /// Return selection type.
    /// </summary>
    int GetActiveSelectionType();
    /// <summary>
    /// Returns true if selecting volume is overlapped by box theBox
    /// </summary>
    bool OverlapsBox(RDC::OCC::Graphic3d_Vec3d^ theBoxMin, RDC::OCC::Graphic3d_Vec3d^ theBoxMax, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by axis-aligned bounding box with minimum
    /// corner at point theMinPt and maximum at point theMaxPt
    /// </summary>
    bool OverlapsBox(RDC::OCC::Graphic3d_Vec3d^ theBoxMin, RDC::OCC::Graphic3d_Vec3d^ theBoxMax, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by axis-aligned bounding box with minimum
    /// corner at point theMinPt and maximum at point theMaxPt
    /// </summary>
    bool OverlapsBox(RDC::OCC::Graphic3d_Vec3d^ theBoxMin, RDC::OCC::Graphic3d_Vec3d^ theBoxMax);
    /// <summary>
    /// Returns true if selecting volume is overlapped by point thePnt
    /// </summary>
    bool OverlapsPoint(RDC::OCC::Pnt thePnt, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by point thePnt.
    /// Does not perform depth calculation, so this method is defined as
    /// helper function for inclusion test.
    /// </summary>
    bool OverlapsPoint(RDC::OCC::Pnt thePnt);
    /// <summary>
    /// Returns true if selecting volume is overlapped by planar convex polygon, which points
    /// are stored in theArrayOfPts, taking into account sensitivity type theSensType
    /// </summary>
    bool OverlapsPolygon(RDC::OCC::TColgp_Array1OfPnt^ theArrayOfPts, int theSensType, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by line segment with start point at thePt1
    /// and end point at thePt2
    /// </summary>
    bool OverlapsSegment(RDC::OCC::Pnt thePt1, RDC::OCC::Pnt thePt2, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by triangle with vertices thePt1,
    /// thePt2 and thePt3, taking into account sensitivity type theSensType
    /// </summary>
    bool OverlapsTriangle(RDC::OCC::Pnt thePt1, RDC::OCC::Pnt thePt2, RDC::OCC::Pnt thePt3, int theSensType, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by sphere with center theCenter
    /// and radius theRadius
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by sphere with center theCenter
    /// and radius theRadius
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by sphere with center theCenter
    /// and radius theRadius
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight, the boolean theIsHollow and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight, the boolean theIsHollow and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight, the boolean theIsHollow and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// the boolean theIsFilled, and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theRadius, RDC::OCC::Trsf theTrsf, bool theIsFilled, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// the boolean theIsFilled, and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theRadius, RDC::OCC::Trsf theTrsf, bool theIsFilled, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// the boolean theIsFilled, and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theRadius, RDC::OCC::Trsf theTrsf, bool theIsFilled);
    /// <summary>
    /// Calculates distance from 3d projection of user-defined selection point
    /// to the given point theCOG
    /// </summary>
    double DistToGeometryCenter(RDC::OCC::Pnt theCOG);
    /// <summary>
    /// Return 3D point corresponding to specified depth within picking ray.
    /// </summary>
    RDC::OCC::Pnt DetectedPoint(double theDepth);
    /// <summary>
    /// Returns flag indicating if partial overlapping of entities is allowed or should be rejected.
    /// </summary>
    bool IsOverlapAllowed();
    /// <summary>
    /// Valid only for point and rectangular selection.
    /// Returns projection of 2d mouse picked point or projection
    /// of center of 2d rectangle (for point and rectangular selection
    /// correspondingly) onto near view frustum plane
    /// </summary>
    RDC::OCC::Pnt GetNearPickedPnt();
    /// <summary>
    /// Valid only for point and rectangular selection.
    /// Returns projection of 2d mouse picked point or projection
    /// of center of 2d rectangle (for point and rectangular selection
    /// correspondingly) onto far view frustum plane
    /// </summary>
    RDC::OCC::Pnt GetFarPickedPnt();
    /// <summary>
    /// Valid only for point and rectangular selection.
    /// Returns view ray direction
    /// </summary>
    RDC::OCC::Dir GetViewRayDirection();
    /// <summary>
    /// Checks if it is possible to scale current active selecting volume
    /// </summary>
    bool IsScalableActiveVolume();
    /// <summary>
    /// Returns mouse coordinates for Point selection mode.
    /// </summary>
    /// <returns>
    /// infinite point in case of unsupport of mouse position for this active selection volume.
    /// </returns>
    RDC::OCC::Pnt2d GetMousePosition();
    /* Method skipped due to unknown mapping: void GetPlanes(NCollection_DynamicArray<NCollection_Vec4<double>> thePlaneEquations, ) */
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    bool Overlaps(RDC::OCC::Graphic3d_Vec3d^ theBoxMin, RDC::OCC::Graphic3d_Vec3d^ theBoxMax, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    bool Overlaps(RDC::OCC::Graphic3d_Vec3d^ theBoxMin, RDC::OCC::Graphic3d_Vec3d^ theBoxMax, bool% theInside);
    bool Overlaps(RDC::OCC::Graphic3d_Vec3d^ theBoxMin, RDC::OCC::Graphic3d_Vec3d^ theBoxMax);
    bool Overlaps(RDC::OCC::Pnt thePnt, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    bool Overlaps(RDC::OCC::Pnt thePnt);
    bool Overlaps(RDC::OCC::TColgp_HArray1OfPnt^ theArrayOfPts, int theSensType, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    bool Overlaps(RDC::OCC::TColgp_Array1OfPnt^ theArrayOfPts, int theSensType, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    bool Overlaps(RDC::OCC::Pnt thePnt1, RDC::OCC::Pnt thePnt2, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    bool Overlaps(RDC::OCC::Pnt thePnt1, RDC::OCC::Pnt thePnt2, RDC::OCC::Pnt thePnt3, int theSensType, RDC::OCC::SelectBasics_PickResult^ thePickResult);
}; // class SelectBasics_SelectingVolumeManager

}; // namespace OCC
}; // namespace RDC

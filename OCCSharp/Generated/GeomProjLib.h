// Generated wrapper code for package GeomProjLib

#pragma once


namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Class  GeomProjLib
//---------------------------------------------------------------------
/// <summary>
/// Projection of a curve on a surface.
/// </summary>
public ref class GeomProjLib sealed
    : public RDC::OCC::BaseClass<::GeomProjLib>
{

#ifdef Include_GeomProjLib_h
public:
    Include_GeomProjLib_h
#endif

public:
    GeomProjLib(::GeomProjLib* nativeInstance)
        : RDC::OCC::BaseClass<::GeomProjLib>( nativeInstance, true )
    {}

    GeomProjLib(::GeomProjLib& nativeInstance)
        : RDC::OCC::BaseClass<::GeomProjLib>( &nativeInstance, false )
    {}

    property ::GeomProjLib* NativeInstance
    {
        ::GeomProjLib* get()
        {
            return static_cast<::GeomProjLib*>(_NativeInstance);
        }
    }

public:
    GeomProjLib();
    /// <summary>
    /// gives  the 2d-curve   of  a 3d-curve  lying on   a
    /// surface (  uses GeomProjLib_ProjectedCurve   )
    /// The 3dCurve is taken between the parametrization
    /// range [First, Last]
    /// <Tolerance> is used as input if the projection needs
    /// an approximation. In this case, the reached
    /// tolerance is set in <Tolerance> as output.
    /// WARNING :  if   the projection has  failed,   this
    /// method returns a null Handle.
    /// </summary>
    static RDC::OCC::Geom2d_Curve^ Curve2d(RDC::OCC::Geom_Curve^ C, double First, double Last, RDC::OCC::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double% Tolerance);
    /// <summary>
    /// gives  the 2d-curve   of  a 3d-curve  lying on   a
    /// surface (  uses GeomProjLib_ProjectedCurve   )
    /// The 3dCurve is taken between the parametrization
    /// range [First, Last]
    /// <Tolerance> is used as input if the projection needs
    /// an approximation. In this case, the reached
    /// tolerance is set in <Tolerance> as output.
    /// WARNING :  if   the projection has  failed,   this
    /// method returns a null Handle.
    /// </summary>
    static RDC::OCC::Geom2d_Curve^ Curve2d(RDC::OCC::Geom_Curve^ C, double First, double Last, RDC::OCC::Geom_Surface^ S, double% Tolerance);
    /// <summary>
    /// gives  the 2d-curve   of  a 3d-curve  lying on   a
    /// surface (  uses GeomProjLib_ProjectedCurve   )
    /// The 3dCurve is taken between the parametrization
    /// range [First, Last]
    /// If the projection needs an approximation,
    /// Precision::PApproximation() is used.
    /// WARNING :  if   the projection has  failed,   this
    /// method returns a null Handle.
    /// </summary>
    static RDC::OCC::Geom2d_Curve^ Curve2d(RDC::OCC::Geom_Curve^ C, double First, double Last, RDC::OCC::Geom_Surface^ S);
    /// <summary>
    /// gives  the  2d-curve  of  a  3d-curve lying   on a
    /// surface   ( uses   GeomProjLib_ProjectedCurve ).
    /// If the projection needs an approximation,
    /// Precision::PApproximation() is used.
    /// WARNING  :  if the   projection has  failed,  this
    /// method returns a null Handle.
    /// </summary>
    static RDC::OCC::Geom2d_Curve^ Curve2d(RDC::OCC::Geom_Curve^ C, RDC::OCC::Geom_Surface^ S);
    /// <summary>
    /// gives  the  2d-curve  of  a  3d-curve lying   on a
    /// surface   ( uses   GeomProjLib_ProjectedCurve ).
    /// If the projection needs an approximation,
    /// Precision::PApproximation() is used.
    /// WARNING  :  if the   projection has  failed,  this
    /// method returns a null Handle.
    /// can expand a little the bounds of surface
    /// </summary>
    static RDC::OCC::Geom2d_Curve^ Curve2d(RDC::OCC::Geom_Curve^ C, RDC::OCC::Geom_Surface^ S, double UDeb, double UFin, double VDeb, double VFin);
    /// <summary>
    /// gives  the  2d-curve  of  a  3d-curve lying   on a
    /// surface   ( uses   GeomProjLib_ProjectedCurve ).
    /// If the projection needs an approximation,
    /// Precision::PApproximation() is used.
    /// WARNING  :  if the   projection has  failed,  this
    /// method returns a null Handle.
    /// can expand a little the bounds of surface
    /// </summary>
    static RDC::OCC::Geom2d_Curve^ Curve2d(RDC::OCC::Geom_Curve^ C, RDC::OCC::Geom_Surface^ S, double UDeb, double UFin, double VDeb, double VFin, double% Tolerance);
    /// <summary>
    /// Constructs   the  3d-curve  from the normal
    /// projection  of the  Curve <C> on  the surface <S>.
    /// WARNING : if the  projection has failed, returns  a
    /// null Handle.
    /// </summary>
    static RDC::OCC::Geom_Curve^ Project(RDC::OCC::Geom_Curve^ C, RDC::OCC::Geom_Surface^ S);
    /// <summary>
    /// Constructs  the 3d-curves from the projection
    /// of the  curve  <Curve> on the  plane <Plane> along
    /// the direction <Dir>.
    /// If <KeepParametrization> is true, the parametrization
    /// of the Projected Curve <PC> will be  the same as  the
    /// parametrization of the initial curve <C>.
    /// It means: proj(C(u)) = PC(u) for each u.
    /// Otherwise, the parametrization may change.
    /// </summary>
    static RDC::OCC::Geom_Curve^ ProjectOnPlane(RDC::OCC::Geom_Curve^ Curve, RDC::OCC::Geom_Plane^ Plane, RDC::OCC::Dir Dir, bool KeepParametrization);
}; // class GeomProjLib

}; // namespace OCC
}; // namespace RDC

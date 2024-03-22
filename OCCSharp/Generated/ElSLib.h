// Generated wrapper code for package ElSLib

#pragma once


namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Class  ElSLib
//---------------------------------------------------------------------
/// <summary>
/// Provides functions for basic geometric computation on
/// elementary surfaces.
/// This includes:
/// -   calculation of a point or derived vector on a surface
/// where the surface is provided by the gp package, or
/// defined in canonical form (as in the gp package), and
/// the point is defined with a parameter,
/// -   evaluation of the parameters corresponding to a
/// point on an elementary surface from gp,
/// -   calculation of isoparametric curves on an elementary
/// surface defined in canonical form (as in the gp package).
/// Notes:
/// -   ElSLib stands for Elementary Surfaces Library.
/// -   If the surfaces provided by the gp package are not
/// explicitly parameterized, they still have an implicit
/// parameterization, similar to that which they infer on
/// the equivalent Geom surfaces.
/// Note: ElSLib stands for Elementary Surfaces Library.
/// </summary>
public ref class ElSLib sealed
    : public RDC::OCC::BaseClass<::ElSLib>
{

#ifdef Include_ElSLib_h
public:
    Include_ElSLib_h
#endif

public:
    ElSLib(::ElSLib* nativeInstance)
        : RDC::OCC::BaseClass<::ElSLib>( nativeInstance, true )
    {}

    ElSLib(::ElSLib& nativeInstance)
        : RDC::OCC::BaseClass<::ElSLib>( &nativeInstance, false )
    {}

    property ::ElSLib* NativeInstance
    {
        ::ElSLib* get()
        {
            return static_cast<::ElSLib*>(_NativeInstance);
        }
    }

public:
    ElSLib();
    /// <summary>
    /// For elementary surfaces from the gp package (planes,
    /// cones, cylinders, spheres and tori), computes the point
    /// of parameters (U, V).
    /// </summary>
    static RDC::OCC::Pnt Value(double U, double V, RDC::OCC::Pln Pl);
    static RDC::OCC::Pnt Value(double U, double V, RDC::OCC::gp_Cone^ C);
    static RDC::OCC::Pnt Value(double U, double V, RDC::OCC::gp_Cylinder^ C);
    static RDC::OCC::Pnt Value(double U, double V, RDC::OCC::gp_Sphere^ S);
    static RDC::OCC::Pnt Value(double U, double V, RDC::OCC::gp_Torus^ T);
    /// <summary>
    /// For elementary surfaces from the gp package (planes,
    /// cones, cylinders, spheres and tori), computes the
    /// derivative vector of order Nu and Nv in the u and v
    /// parametric directions respectively, at the point of
    /// parameters (U, V).
    /// </summary>
    static RDC::OCC::Vec DN(double U, double V, RDC::OCC::Pln Pl, int Nu, int Nv);
    static RDC::OCC::Vec DN(double U, double V, RDC::OCC::gp_Cone^ C, int Nu, int Nv);
    static RDC::OCC::Vec DN(double U, double V, RDC::OCC::gp_Cylinder^ C, int Nu, int Nv);
    static RDC::OCC::Vec DN(double U, double V, RDC::OCC::gp_Sphere^ S, int Nu, int Nv);
    static RDC::OCC::Vec DN(double U, double V, RDC::OCC::gp_Torus^ T, int Nu, int Nv);
    /// <summary>
    /// For elementary surfaces from the gp package (planes,
    /// cones, cylinders, spheres and tori), computes the point P
    /// of parameters (U, V).inline
    /// </summary>
    static void D0(double U, double V, RDC::OCC::Pln Pl, RDC::OCC::Pnt% P);
    static void D0(double U, double V, RDC::OCC::gp_Cone^ C, RDC::OCC::Pnt% P);
    static void D0(double U, double V, RDC::OCC::gp_Cylinder^ C, RDC::OCC::Pnt% P);
    static void D0(double U, double V, RDC::OCC::gp_Sphere^ S, RDC::OCC::Pnt% P);
    static void D0(double U, double V, RDC::OCC::gp_Torus^ T, RDC::OCC::Pnt% P);
    /// <summary>
    /// For elementary surfaces from the gp package (planes,
    /// cones, cylinders, spheres and tori), computes:
    /// -   the point P of parameters (U, V), and
    /// -   the first derivative vectors Vu and Vv at this point in
    /// the u and v parametric directions respectively.
    /// </summary>
    static void D1(double U, double V, RDC::OCC::Pln Pl, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv);
    static void D1(double U, double V, RDC::OCC::gp_Cone^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv);
    static void D1(double U, double V, RDC::OCC::gp_Cylinder^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv);
    static void D1(double U, double V, RDC::OCC::gp_Sphere^ S, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv);
    static void D1(double U, double V, RDC::OCC::gp_Torus^ T, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv);
    /// <summary>
    /// For elementary surfaces from the gp package (cones,
    /// cylinders, spheres and tori), computes:
    /// -   the point P of parameters (U, V), and
    /// -   the first derivative vectors Vu and Vv at this point in
    /// the u and v parametric directions respectively, and
    /// -   the second derivative vectors Vuu, Vvv and Vuv at this point.
    /// </summary>
    static void D2(double U, double V, RDC::OCC::gp_Cone^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv);
    static void D2(double U, double V, RDC::OCC::gp_Cylinder^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv);
    static void D2(double U, double V, RDC::OCC::gp_Sphere^ S, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv);
    static void D2(double U, double V, RDC::OCC::gp_Torus^ T, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv);
    /// <summary>
    /// For elementary surfaces from the gp package (cones,
    /// cylinders, spheres and tori), computes:
    /// -   the point P of parameters (U,V), and
    /// -   the first derivative vectors Vu and Vv at this point in
    /// the u and v parametric directions respectively, and
    /// -   the second derivative vectors Vuu, Vvv and Vuv at
    /// this point, and
    /// -   the third derivative vectors Vuuu, Vvvv, Vuuv and
    /// Vuvv at this point.
    /// </summary>
    static void D3(double U, double V, RDC::OCC::gp_Cone^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv);
    static void D3(double U, double V, RDC::OCC::gp_Cylinder^ C, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv);
    static void D3(double U, double V, RDC::OCC::gp_Sphere^ S, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv);
    /// <summary>
    /// Surface evaluation
    /// The following functions compute the point and the
    /// derivatives on elementary surfaces defined with their
    /// geometric characteristics.
    /// You don't need to create the surface to use these functions.
    /// These functions are called by the previous  ones.
    /// Example :
    /// A cylinder is defined with its position and its radius.
    /// </summary>
    static void D3(double U, double V, RDC::OCC::gp_Torus^ T, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv);
    static RDC::OCC::Pnt PlaneValue(double U, double V, RDC::OCC::Ax3 Pos);
    static RDC::OCC::Pnt CylinderValue(double U, double V, RDC::OCC::Ax3 Pos, double Radius);
    static RDC::OCC::Pnt ConeValue(double U, double V, RDC::OCC::Ax3 Pos, double Radius, double SAngle);
    static RDC::OCC::Pnt SphereValue(double U, double V, RDC::OCC::Ax3 Pos, double Radius);
    static RDC::OCC::Pnt TorusValue(double U, double V, RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius);
    static RDC::OCC::Vec PlaneDN(double U, double V, RDC::OCC::Ax3 Pos, int Nu, int Nv);
    static RDC::OCC::Vec CylinderDN(double U, double V, RDC::OCC::Ax3 Pos, double Radius, int Nu, int Nv);
    static RDC::OCC::Vec ConeDN(double U, double V, RDC::OCC::Ax3 Pos, double Radius, double SAngle, int Nu, int Nv);
    static RDC::OCC::Vec SphereDN(double U, double V, RDC::OCC::Ax3 Pos, double Radius, int Nu, int Nv);
    static RDC::OCC::Vec TorusDN(double U, double V, RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, int Nu, int Nv);
    static void PlaneD0(double U, double V, RDC::OCC::Ax3 Pos, RDC::OCC::Pnt% P);
    static void ConeD0(double U, double V, RDC::OCC::Ax3 Pos, double Radius, double SAngle, RDC::OCC::Pnt% P);
    static void CylinderD0(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P);
    static void SphereD0(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P);
    static void TorusD0(double U, double V, RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P);
    static void PlaneD1(double U, double V, RDC::OCC::Ax3 Pos, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv);
    static void ConeD1(double U, double V, RDC::OCC::Ax3 Pos, double Radius, double SAngle, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv);
    static void CylinderD1(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv);
    static void SphereD1(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv);
    static void TorusD1(double U, double V, RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv);
    static void ConeD2(double U, double V, RDC::OCC::Ax3 Pos, double Radius, double SAngle, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv);
    static void CylinderD2(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv);
    static void SphereD2(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv);
    static void TorusD2(double U, double V, RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv);
    static void ConeD3(double U, double V, RDC::OCC::Ax3 Pos, double Radius, double SAngle, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv);
    static void CylinderD3(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv);
    static void SphereD3(double U, double V, RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv);
    /// <summary>
    /// The following functions compute the parametric values
    /// corresponding to a given point on a elementary surface.
    /// The point should be on the surface.
    /// </summary>
    static void TorusD3(double U, double V, RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv);
    /// <summary>
    /// parametrization
    /// P (U, V) =
    /// Pl.Location() + U * Pl.XDirection() + V * Pl.YDirection()
    /// </summary>
    static void Parameters(RDC::OCC::Pln Pl, RDC::OCC::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) = Location + V * ZDirection +
    /// Radius * (Cos(U) * XDirection + Sin (U) * YDirection)
    /// </summary>
    static void Parameters(RDC::OCC::gp_Cylinder^ C, RDC::OCC::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) =  Location + V * ZDirection +
    /// (Radius + V * Tan (SemiAngle)) *
    /// (Cos(U) * XDirection + Sin(U) * YDirection)
    /// </summary>
    static void Parameters(RDC::OCC::gp_Cone^ C, RDC::OCC::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) = Location +
    /// Radius * Cos (V) * (Cos (U) * XDirection + Sin (U) * YDirection) +
    /// Radius * Sin (V) * ZDirection
    /// </summary>
    static void Parameters(RDC::OCC::gp_Sphere^ S, RDC::OCC::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) = Location +
    /// (MajorRadius + MinorRadius * Cos(U)) *
    /// (Cos(V) * XDirection - Sin(V) * YDirection) +
    /// MinorRadius * Sin(U) * ZDirection
    /// </summary>
    static void Parameters(RDC::OCC::gp_Torus^ T, RDC::OCC::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) =
    /// Pl.Location() + U * Pl.XDirection() + V * Pl.YDirection()
    /// </summary>
    static void PlaneParameters(RDC::OCC::Ax3 Pos, RDC::OCC::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) = Location + V * ZDirection +
    /// Radius * (Cos(U) * XDirection + Sin (U) * YDirection)
    /// </summary>
    static void CylinderParameters(RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) =  Location + V * ZDirection +
    /// (Radius + V * Tan (SemiAngle)) *
    /// (Cos(U) * XDirection + Sin(U) * YDirection)
    /// </summary>
    static void ConeParameters(RDC::OCC::Ax3 Pos, double Radius, double SAngle, RDC::OCC::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) = Location +
    /// Radius * Cos (V) * (Cos (U) * XDirection + Sin (U) * YDirection) +
    /// Radius * Sin (V) * ZDirection
    /// </summary>
    static void SphereParameters(RDC::OCC::Ax3 Pos, double Radius, RDC::OCC::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) = Location +
    /// (MajorRadius + MinorRadius * Cos(U)) *
    /// (Cos(V) * XDirection - Sin(V) * YDirection) +
    /// MinorRadius * Sin(U) * ZDirection
    /// </summary>
    static void TorusParameters(RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, RDC::OCC::Pnt P, double% U, double% V);
    /// <summary>
    /// compute the U Isoparametric gp_Lin of the plane.
    /// </summary>
    static RDC::OCC::gp_Lin^ PlaneUIso(RDC::OCC::Ax3 Pos, double U);
    /// <summary>
    /// compute the U Isoparametric gp_Lin of the cylinder.
    /// </summary>
    static RDC::OCC::gp_Lin^ CylinderUIso(RDC::OCC::Ax3 Pos, double Radius, double U);
    /// <summary>
    /// compute the U Isoparametric gp_Lin of the cone.
    /// </summary>
    static RDC::OCC::gp_Lin^ ConeUIso(RDC::OCC::Ax3 Pos, double Radius, double SAngle, double U);
    /// <summary>
    /// compute the U Isoparametric gp_Circ of the sphere,
    /// (the meridian is not trimmed).
    /// </summary>
    static RDC::OCC::gp_Circ^ SphereUIso(RDC::OCC::Ax3 Pos, double Radius, double U);
    /// <summary>
    /// compute the U Isoparametric gp_Circ of the torus.
    /// </summary>
    static RDC::OCC::gp_Circ^ TorusUIso(RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, double U);
    /// <summary>
    /// compute the V Isoparametric gp_Lin of the plane.
    /// </summary>
    static RDC::OCC::gp_Lin^ PlaneVIso(RDC::OCC::Ax3 Pos, double V);
    /// <summary>
    /// compute the V Isoparametric gp_Circ of the cylinder.
    /// </summary>
    static RDC::OCC::gp_Circ^ CylinderVIso(RDC::OCC::Ax3 Pos, double Radius, double V);
    /// <summary>
    /// compute the V Isoparametric gp_Circ of the cone.
    /// </summary>
    static RDC::OCC::gp_Circ^ ConeVIso(RDC::OCC::Ax3 Pos, double Radius, double SAngle, double V);
    /// <summary>
    /// compute the V Isoparametric gp_Circ of the sphere,
    /// (the meridian is not trimmed).
    /// </summary>
    static RDC::OCC::gp_Circ^ SphereVIso(RDC::OCC::Ax3 Pos, double Radius, double V);
    /// <summary>
    /// compute the V Isoparametric gp_Circ of the torus.
    /// </summary>
    static RDC::OCC::gp_Circ^ TorusVIso(RDC::OCC::Ax3 Pos, double MajorRadius, double MinorRadius, double V);
}; // class ElSLib

}; // namespace OCC
}; // namespace RDC

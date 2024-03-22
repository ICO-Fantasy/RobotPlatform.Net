// Generated wrapper code for package Adaptor3d

#pragma once


namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Class  Adaptor3d_Curve
//---------------------------------------------------------------------
/// <summary>
/// Root class for 3D curves on which geometric
/// algorithms work.
/// An adapted curve is an interface between the
/// services provided by a curve and those required of
/// the curve by algorithms which use it.
/// Two derived concrete classes are provided:
/// - GeomAdaptor_Curve for a curve from the Geom package
/// - Adaptor3d_CurveOnSurface for a curve lying on
/// a surface from the Geom package.
/// 
/// Polynomial coefficients of BSpline curves used for their evaluation are
/// cached for better performance. Therefore these evaluations are not
/// thread-safe and parallel evaluations need to be prevented.
/// </summary>
public ref class Adaptor3d_Curve
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_Adaptor3d_Curve_h
public:
    Include_Adaptor3d_Curve_h
#endif

protected:
    Adaptor3d_Curve(InitMode init)
        : RDC::OCC::Standard_Transient( init )
    {}

public:
    Adaptor3d_Curve(::Adaptor3d_Curve* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    Adaptor3d_Curve(::Adaptor3d_Curve& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::Adaptor3d_Curve* NativeInstance
    {
        ::Adaptor3d_Curve* get()
        {
            return static_cast<::Adaptor3d_Curve*>(_NativeInstance);
        }
    }

public:
    Adaptor3d_Curve();
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    RDC::OCC::Adaptor3d_Curve^ ShallowCopy();
    double FirstParameter();
    double LastParameter();
    RDC::OCC::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns  the number  of  intervals for  continuity
    /// <S>. May be one if Continuity(me) >= <S>
    /// </summary>
    int NbIntervals(RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals
    /// of continuity <S>.
    /// 
    /// The array must provide  enough room to  accommodate
    /// for the parameters. i.e. T.Length() > NbIntervals()
    /// </summary>
    void Intervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Returns    a  curve equivalent   of  <me>  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    RDC::OCC::Adaptor3d_Curve^ Trim(double First, double Last, double Tol);
    bool IsClosed();
    bool IsPeriodic();
    double Period();
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    RDC::OCC::Pnt Value(double U);
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    void D0(double U, RDC::OCC::Pnt% P);
    /// <summary>
    /// Computes the point of parameter U on the curve with its
    /// first derivative.
    /// Raised if the continuity of the current interval
    /// is not C1.
    /// </summary>
    void D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// Raised if the continuity of the current interval
    /// is not C2.
    /// </summary>
    void D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first, the second
    /// and the third derivative.
    /// Raised if the continuity of the current interval
    /// is not C3.
    /// </summary>
    void D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Raised if the continuity of the current interval
    /// is not CN.
    /// Raised if N < 1.
    /// </summary>
    RDC::OCC::Vec DN(double U, int N);
    /// <summary>
    /// Returns the parametric  resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double Resolution(double R3d);
    /// <summary>
    /// Returns  the  type of the   curve  in the  current
    /// interval :   Line,   Circle,   Ellipse, Hyperbola,
    /// Parabola, BezierCurve, BSplineCurve, OtherCurve.
    /// </summary>
    RDC::OCC::GeomAbs_CurveType GetCurveType();
    RDC::OCC::gp_Lin^ Line();
    RDC::OCC::gp_Circ^ Circle();
    RDC::OCC::gp_Elips^ Ellipse();
    RDC::OCC::gp_Hypr^ Hyperbola();
    RDC::OCC::gp_Parab^ Parabola();
    int Degree();
    bool IsRational();
    int NbPoles();
    int NbKnots();
    RDC::OCC::Geom_BezierCurve^ Bezier();
    RDC::OCC::Geom_BSplineCurve^ BSpline();
    RDC::OCC::Geom_OffsetCurve^ OffsetCurve();
    static RDC::OCC::Adaptor3d_Curve^ CreateDowncasted(::Adaptor3d_Curve* instance);
}; // class Adaptor3d_Curve

//---------------------------------------------------------------------
//  Class  Adaptor3d_Surface
//---------------------------------------------------------------------
/// <summary>
/// Root class for surfaces on which geometric algorithms work.
/// An adapted surface is an interface between the
/// services provided by a surface and those required of
/// the surface by algorithms which use it.
/// A derived concrete class is provided:
/// GeomAdaptor_Surface for a surface from the Geom package.
/// The  Surface class describes  the standard behaviour
/// of a surface for generic algorithms.
/// 
/// The Surface can  be decomposed in intervals of any
/// continuity in U and V using the method NbIntervals.
/// A current interval can be set.
/// Most of the methods apply to the current interval.
/// Warning: All the methods are virtual and implemented with a
/// raise to allow to redefined only the methods really used.
/// 
/// Polynomial coefficients of BSpline surfaces used for their evaluation are cached for better performance.
/// Therefore these evaluations are not thread-safe and parallel evaluations need to be prevented.
/// </summary>
public ref class Adaptor3d_Surface
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_Adaptor3d_Surface_h
public:
    Include_Adaptor3d_Surface_h
#endif

protected:
    Adaptor3d_Surface(InitMode init)
        : RDC::OCC::Standard_Transient( init )
    {}

public:
    Adaptor3d_Surface(::Adaptor3d_Surface* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    Adaptor3d_Surface(::Adaptor3d_Surface& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::Adaptor3d_Surface* NativeInstance
    {
        ::Adaptor3d_Surface* get()
        {
            return static_cast<::Adaptor3d_Surface*>(_NativeInstance);
        }
    }

public:
    Adaptor3d_Surface();
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    RDC::OCC::Adaptor3d_Surface^ ShallowCopy();
    double FirstUParameter();
    double LastUParameter();
    double FirstVParameter();
    double LastVParameter();
    RDC::OCC::GeomAbs_Shape UContinuity();
    RDC::OCC::GeomAbs_Shape VContinuity();
    /// <summary>
    /// Returns the number of U intervals for  continuity
    /// <S>. May be one if UContinuity(me) >= <S>
    /// </summary>
    int NbUIntervals(RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Returns the number of V intervals for  continuity
    /// <S>. May be one if VContinuity(me) >= <S>
    /// </summary>
    int NbVIntervals(RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Returns the  intervals with the requested continuity
    /// in the U direction.
    /// </summary>
    void UIntervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Returns the  intervals with the requested continuity
    /// in the V direction.
    /// </summary>
    void VIntervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Returns    a  surface trimmed in the U direction
    /// equivalent   of  <me>  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    RDC::OCC::Adaptor3d_Surface^ UTrim(double First, double Last, double Tol);
    /// <summary>
    /// Returns    a  surface trimmed in the V direction  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    RDC::OCC::Adaptor3d_Surface^ VTrim(double First, double Last, double Tol);
    bool IsUClosed();
    bool IsVClosed();
    bool IsUPeriodic();
    double UPeriod();
    bool IsVPeriodic();
    double VPeriod();
    /// <summary>
    /// Computes the point of parameters U,V on the surface.
    /// Tip: use GeomLib::NormEstim() to calculate surface normal at specified (U, V) point.
    /// </summary>
    RDC::OCC::Pnt Value(double U, double V);
    /// <summary>
    /// Computes the point of parameters U,V on the surface.
    /// </summary>
    void D0(double U, double V, RDC::OCC::Pnt% P);
    /// <summary>
    /// Computes the point  and the first derivatives on the surface.
    /// Raised if the continuity of the current intervals is not C1.
    /// 
    /// Tip: use GeomLib::NormEstim() to calculate surface normal at specified (U, V) point.
    /// </summary>
    void D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V);
    /// <summary>
    /// Computes   the point,  the  first  and  second
    /// derivatives on the surface.
    /// Raised  if   the   continuity   of the current
    /// intervals is not C2.
    /// </summary>
    void D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV);
    /// <summary>
    /// Computes the point,  the first, second and third
    /// derivatives on the surface.
    /// Raised  if   the   continuity   of the current
    /// intervals is not C3.
    /// </summary>
    void D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the direction U and Nv
    /// in the direction V at the point P(U, V).
    /// Raised if the current U  interval is not not CNu
    /// and the current V interval is not CNv.
    /// Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// </summary>
    RDC::OCC::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Returns the parametric U  resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double UResolution(double R3d);
    /// <summary>
    /// Returns the parametric V  resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double VResolution(double R3d);
    /// <summary>
    /// Returns the type of the surface : Plane, Cylinder,
    /// Cone,      Sphere,        Torus,    BezierSurface,
    /// BSplineSurface,               SurfaceOfRevolution,
    /// SurfaceOfExtrusion, OtherSurface
    /// </summary>
    RDC::OCC::GeomAbs_SurfaceType GetSurfaceType();
    RDC::OCC::Pln Plane();
    RDC::OCC::gp_Cylinder^ Cylinder();
    RDC::OCC::gp_Cone^ Cone();
    RDC::OCC::gp_Sphere^ Sphere();
    RDC::OCC::gp_Torus^ Torus();
    int UDegree();
    int NbUPoles();
    int VDegree();
    int NbVPoles();
    int NbUKnots();
    int NbVKnots();
    bool IsURational();
    bool IsVRational();
    RDC::OCC::Geom_BezierSurface^ Bezier();
    RDC::OCC::Geom_BSplineSurface^ BSpline();
    RDC::OCC::Ax1 AxeOfRevolution();
    RDC::OCC::Dir Direction();
    RDC::OCC::Adaptor3d_Curve^ BasisCurve();
    RDC::OCC::Adaptor3d_Surface^ BasisSurface();
    double OffsetValue();
    static RDC::OCC::Adaptor3d_Surface^ CreateDowncasted(::Adaptor3d_Surface* instance);
}; // class Adaptor3d_Surface

//---------------------------------------------------------------------
//  Class  Adaptor3d_CurveOnSurface
//---------------------------------------------------------------------
/// <summary>
/// An interface between the services provided by a curve
/// lying on a surface from the package Geom and those
/// required of the curve by algorithms which use it. The
/// curve is defined as a 2D curve from the Geom2d
/// package, in the parametric space of the surface.
/// </summary>
public ref class Adaptor3d_CurveOnSurface sealed
    : public RDC::OCC::Adaptor3d_Curve
{

#ifdef Include_Adaptor3d_CurveOnSurface_h
public:
    Include_Adaptor3d_CurveOnSurface_h
#endif

public:
    Adaptor3d_CurveOnSurface(::Adaptor3d_CurveOnSurface* nativeInstance)
        : RDC::OCC::Adaptor3d_Curve( nativeInstance )
    {}

    Adaptor3d_CurveOnSurface(::Adaptor3d_CurveOnSurface& nativeInstance)
        : RDC::OCC::Adaptor3d_Curve( nativeInstance )
    {}

    property ::Adaptor3d_CurveOnSurface* NativeInstance
    {
        ::Adaptor3d_CurveOnSurface* get()
        {
            return static_cast<::Adaptor3d_CurveOnSurface*>(_NativeInstance);
        }
    }

public:
    Adaptor3d_CurveOnSurface();
    Adaptor3d_CurveOnSurface(RDC::OCC::Adaptor3d_Surface^ S);
    /// <summary>
    /// Creates a CurveOnSurface from the 2d curve <C> and
    /// the surface <S>.
    /// </summary>
    Adaptor3d_CurveOnSurface(RDC::OCC::Adaptor2d_Curve2d^ C, RDC::OCC::Adaptor3d_Surface^ S);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    RDC::OCC::Adaptor3d_Curve^ ShallowCopy();
    /// <summary>
    /// Changes the surface.
    /// </summary>
    void Load(RDC::OCC::Adaptor3d_Surface^ S);
    /// <summary>
    /// Changes the 2d curve.
    /// </summary>
    void Load(RDC::OCC::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// Load both curve and surface.
    /// </summary>
    void Load(RDC::OCC::Adaptor2d_Curve2d^ C, RDC::OCC::Adaptor3d_Surface^ S);
    RDC::OCC::Adaptor2d_Curve2d^ GetCurve();
    RDC::OCC::Adaptor3d_Surface^ GetSurface();
    RDC::OCC::Adaptor2d_Curve2d^ ChangeCurve();
    RDC::OCC::Adaptor3d_Surface^ ChangeSurface();
    double FirstParameter();
    double LastParameter();
    RDC::OCC::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns  the number  of  intervals for  continuity
    /// <S>. May be one if Continuity(me) >= <S>
    /// </summary>
    int NbIntervals(RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals
    /// of continuity <S>.
    /// 
    /// The array must provide  enough room to  accommodate
    /// for the parameters. i.e. T.Length() > NbIntervals()
    /// </summary>
    void Intervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Returns    a  curve equivalent   of  <me>  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    RDC::OCC::Adaptor3d_Curve^ Trim(double First, double Last, double Tol);
    bool IsClosed();
    bool IsPeriodic();
    double Period();
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    RDC::OCC::Pnt Value(double U);
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    void D0(double U, RDC::OCC::Pnt% P);
    /// <summary>
    /// Computes the point of parameter U on the curve with its
    /// first derivative.
    /// Raised if the continuity of the current interval
    /// is not C1.
    /// </summary>
    void D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// Raised if the continuity of the current interval
    /// is not C2.
    /// </summary>
    void D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first, the second
    /// and the third derivative.
    /// Raised if the continuity of the current interval
    /// is not C3.
    /// </summary>
    void D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Raised if the continuity of the current interval
    /// is not CN.
    /// Raised if N < 1.
    /// </summary>
    RDC::OCC::Vec DN(double U, int N);
    /// <summary>
    /// Returns the parametric  resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double Resolution(double R3d);
    /// <summary>
    /// Returns  the  type of the   curve  in the  current
    /// interval :   Line,   Circle,   Ellipse, Hyperbola,
    /// Parabola, BezierCurve, BSplineCurve, OtherCurve.
    /// </summary>
    RDC::OCC::GeomAbs_CurveType GetCurveType();
    RDC::OCC::gp_Lin^ Line();
    RDC::OCC::gp_Circ^ Circle();
    RDC::OCC::gp_Elips^ Ellipse();
    RDC::OCC::gp_Hypr^ Hyperbola();
    RDC::OCC::gp_Parab^ Parabola();
    int Degree();
    bool IsRational();
    int NbPoles();
    int NbKnots();
    RDC::OCC::Geom_BezierCurve^ Bezier();
    RDC::OCC::Geom_BSplineCurve^ BSpline();
    static RDC::OCC::Adaptor3d_CurveOnSurface^ CreateDowncasted(::Adaptor3d_CurveOnSurface* instance);
}; // class Adaptor3d_CurveOnSurface

//---------------------------------------------------------------------
//  Class  Adaptor3d_HSurfaceTool
//---------------------------------------------------------------------
public ref class Adaptor3d_HSurfaceTool sealed
    : public RDC::OCC::BaseClass<::Adaptor3d_HSurfaceTool>
{

#ifdef Include_Adaptor3d_HSurfaceTool_h
public:
    Include_Adaptor3d_HSurfaceTool_h
#endif

public:
    Adaptor3d_HSurfaceTool(::Adaptor3d_HSurfaceTool* nativeInstance)
        : RDC::OCC::BaseClass<::Adaptor3d_HSurfaceTool>( nativeInstance, true )
    {}

    Adaptor3d_HSurfaceTool(::Adaptor3d_HSurfaceTool& nativeInstance)
        : RDC::OCC::BaseClass<::Adaptor3d_HSurfaceTool>( &nativeInstance, false )
    {}

    property ::Adaptor3d_HSurfaceTool* NativeInstance
    {
        ::Adaptor3d_HSurfaceTool* get()
        {
            return static_cast<::Adaptor3d_HSurfaceTool*>(_NativeInstance);
        }
    }

public:
    Adaptor3d_HSurfaceTool();
    static double FirstUParameter(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static double FirstVParameter(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static double LastUParameter(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static double LastVParameter(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static int NbUIntervals(RDC::OCC::Adaptor3d_Surface^ theSurf, RDC::OCC::GeomAbs_Shape theSh);
    static int NbVIntervals(RDC::OCC::Adaptor3d_Surface^ theSurf, RDC::OCC::GeomAbs_Shape theSh);
    static void UIntervals(RDC::OCC::Adaptor3d_Surface^ theSurf, RDC::OCC::TColStd_Array1OfReal^ theTab, RDC::OCC::GeomAbs_Shape theSh);
    static void VIntervals(RDC::OCC::Adaptor3d_Surface^ theSurf, RDC::OCC::TColStd_Array1OfReal^ theTab, RDC::OCC::GeomAbs_Shape theSh);
    /// <summary>
    /// If <First> >= <Last>
    /// </summary>
    static RDC::OCC::Adaptor3d_Surface^ UTrim(RDC::OCC::Adaptor3d_Surface^ theSurf, double theFirst, double theLast, double theTol);
    /// <summary>
    /// If <First> >= <Last>
    /// </summary>
    static RDC::OCC::Adaptor3d_Surface^ VTrim(RDC::OCC::Adaptor3d_Surface^ theSurf, double theFirst, double theLast, double theTol);
    static bool IsUClosed(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static bool IsVClosed(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static bool IsUPeriodic(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static double UPeriod(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static bool IsVPeriodic(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static double VPeriod(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static RDC::OCC::Pnt Value(RDC::OCC::Adaptor3d_Surface^ theSurf, double theU, double theV);
    static void D0(RDC::OCC::Adaptor3d_Surface^ theSurf, double theU, double theV, RDC::OCC::Pnt% thePnt);
    static void D1(RDC::OCC::Adaptor3d_Surface^ theSurf, double theU, double theV, RDC::OCC::Pnt% thePnt, RDC::OCC::Vec% theD1U, RDC::OCC::Vec% theD1V);
    static void D2(RDC::OCC::Adaptor3d_Surface^ theSurf, double theU, double theV, RDC::OCC::Pnt% thePnt, RDC::OCC::Vec% theD1U, RDC::OCC::Vec% theD1V, RDC::OCC::Vec% theD2U, RDC::OCC::Vec% theD2V, RDC::OCC::Vec% theD2UV);
    static void D3(RDC::OCC::Adaptor3d_Surface^ theSurf, double theU, double theV, RDC::OCC::Pnt% thePnt, RDC::OCC::Vec% theD1U, RDC::OCC::Vec% theD1V, RDC::OCC::Vec% theD2U, RDC::OCC::Vec% theD2V, RDC::OCC::Vec% theD2UV, RDC::OCC::Vec% theD3U, RDC::OCC::Vec% theD3V, RDC::OCC::Vec% theD3UUV, RDC::OCC::Vec% theD3UVV);
    static RDC::OCC::Vec DN(RDC::OCC::Adaptor3d_Surface^ theSurf, double theU, double theV, int theNU, int theNV);
    static double UResolution(RDC::OCC::Adaptor3d_Surface^ theSurf, double theR3d);
    static double VResolution(RDC::OCC::Adaptor3d_Surface^ theSurf, double theR3d);
    static RDC::OCC::GeomAbs_SurfaceType GetSurfaceType(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static RDC::OCC::Pln Plane(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static RDC::OCC::gp_Cylinder^ Cylinder(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static RDC::OCC::gp_Cone^ Cone(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static RDC::OCC::gp_Torus^ Torus(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static RDC::OCC::gp_Sphere^ Sphere(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static RDC::OCC::Geom_BezierSurface^ Bezier(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static RDC::OCC::Geom_BSplineSurface^ BSpline(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static RDC::OCC::Ax1 AxeOfRevolution(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static RDC::OCC::Dir Direction(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static RDC::OCC::Adaptor3d_Curve^ BasisCurve(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static RDC::OCC::Adaptor3d_Surface^ BasisSurface(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static double OffsetValue(RDC::OCC::Adaptor3d_Surface^ theSurf);
    static bool IsSurfG1(RDC::OCC::Adaptor3d_Surface^ theSurf, bool theAlongU, double theAngTol);
    static bool IsSurfG1(RDC::OCC::Adaptor3d_Surface^ theSurf, bool theAlongU);
    static int NbSamplesU(RDC::OCC::Adaptor3d_Surface^ S);
    static int NbSamplesV(RDC::OCC::Adaptor3d_Surface^ S);
    static int NbSamplesU(RDC::OCC::Adaptor3d_Surface^ S, double u1, double u2);
    static int NbSamplesV(RDC::OCC::Adaptor3d_Surface^ parameter1, double v1, double v2);
}; // class Adaptor3d_HSurfaceTool

//---------------------------------------------------------------------
//  Class  Adaptor3d_HVertex
//---------------------------------------------------------------------
public ref class Adaptor3d_HVertex sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_Adaptor3d_HVertex_h
public:
    Include_Adaptor3d_HVertex_h
#endif

public:
    Adaptor3d_HVertex(::Adaptor3d_HVertex* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    Adaptor3d_HVertex(::Adaptor3d_HVertex& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::Adaptor3d_HVertex* NativeInstance
    {
        ::Adaptor3d_HVertex* get()
        {
            return static_cast<::Adaptor3d_HVertex*>(_NativeInstance);
        }
    }

public:
    Adaptor3d_HVertex();
    Adaptor3d_HVertex(RDC::OCC::Pnt2d P, RDC::OCC::TopAbs_Orientation Ori, double Resolution);
    RDC::OCC::Pnt2d Value();
    double Parameter(RDC::OCC::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// Parametric resolution (2d).
    /// </summary>
    double Resolution(RDC::OCC::Adaptor2d_Curve2d^ C);
    RDC::OCC::TopAbs_Orientation Orientation();
    bool IsSame(RDC::OCC::Adaptor3d_HVertex^ Other);
    static RDC::OCC::Adaptor3d_HVertex^ CreateDowncasted(::Adaptor3d_HVertex* instance);
}; // class Adaptor3d_HVertex

//---------------------------------------------------------------------
//  Class  Adaptor3d_IsoCurve
//---------------------------------------------------------------------
/// <summary>
/// Defines an isoparametric curve on  a surface.  The
/// type  of isoparametric curve  (U  or V) is defined
/// with the   enumeration  IsoType from   GeomAbs  if
/// NoneIso is given an error is raised.
/// </summary>
public ref class Adaptor3d_IsoCurve sealed
    : public RDC::OCC::Adaptor3d_Curve
{

#ifdef Include_Adaptor3d_IsoCurve_h
public:
    Include_Adaptor3d_IsoCurve_h
#endif

public:
    Adaptor3d_IsoCurve(::Adaptor3d_IsoCurve* nativeInstance)
        : RDC::OCC::Adaptor3d_Curve( nativeInstance )
    {}

    Adaptor3d_IsoCurve(::Adaptor3d_IsoCurve& nativeInstance)
        : RDC::OCC::Adaptor3d_Curve( nativeInstance )
    {}

    property ::Adaptor3d_IsoCurve* NativeInstance
    {
        ::Adaptor3d_IsoCurve* get()
        {
            return static_cast<::Adaptor3d_IsoCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The iso is set to NoneIso.
    /// </summary>
    Adaptor3d_IsoCurve();
    /// <summary>
    /// The surface is loaded. The iso is set to NoneIso.
    /// </summary>
    Adaptor3d_IsoCurve(RDC::OCC::Adaptor3d_Surface^ S);
    /// <summary>
    /// Creates  an  IsoCurve curve.   Iso  defines the
    /// type (isoU or  isoU) Param defines the value of
    /// the iso. The bounds  of  the iso are the bounds
    /// of the surface.
    /// </summary>
    Adaptor3d_IsoCurve(RDC::OCC::Adaptor3d_Surface^ S, RDC::OCC::GeomAbs_IsoType Iso, double Param);
    /// <summary>
    /// Create an IsoCurve curve.  Iso defines the type
    /// (isoU or isov).  Param defines the value of the
    /// iso. WFirst,WLast define the bounds of the iso.
    /// </summary>
    Adaptor3d_IsoCurve(RDC::OCC::Adaptor3d_Surface^ S, RDC::OCC::GeomAbs_IsoType Iso, double Param, double WFirst, double WLast);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    RDC::OCC::Adaptor3d_Curve^ ShallowCopy();
    /// <summary>
    /// Changes  the surface.  The  iso  is  reset  to
    /// NoneIso.
    /// </summary>
    void Load(RDC::OCC::Adaptor3d_Surface^ S);
    /// <summary>
    /// Changes the iso on the current surface.
    /// </summary>
    void Load(RDC::OCC::GeomAbs_IsoType Iso, double Param);
    /// <summary>
    /// Changes the iso on the current surface.
    /// </summary>
    void Load(RDC::OCC::GeomAbs_IsoType Iso, double Param, double WFirst, double WLast);
    RDC::OCC::Adaptor3d_Surface^ Surface();
    RDC::OCC::GeomAbs_IsoType Iso();
    double Parameter();
    double FirstParameter();
    double LastParameter();
    RDC::OCC::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns  the number  of  intervals for  continuity
    /// <S>. May be one if Continuity(me) >= <S>
    /// </summary>
    int NbIntervals(RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals
    /// of continuity <S>.
    /// 
    /// The array must provide  enough room to  accommodate
    /// for the parameters. i.e. T.Length() > NbIntervals()
    /// </summary>
    void Intervals(RDC::OCC::TColStd_Array1OfReal^ T, RDC::OCC::GeomAbs_Shape S);
    /// <summary>
    /// Returns    a  curve equivalent   of  <me>  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    RDC::OCC::Adaptor3d_Curve^ Trim(double First, double Last, double Tol);
    bool IsClosed();
    bool IsPeriodic();
    double Period();
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    RDC::OCC::Pnt Value(double U);
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    void D0(double U, RDC::OCC::Pnt% P);
    /// <summary>
    /// Computes the point of parameter U on the curve with its
    /// first derivative.
    /// Raised if the continuity of the current interval
    /// is not C1.
    /// </summary>
    void D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// Raised if the continuity of the current interval
    /// is not C2.
    /// </summary>
    void D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first, the second
    /// and the third derivative.
    /// Raised if the continuity of the current interval
    /// is not C3.
    /// </summary>
    void D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Raised if the continuity of the current interval
    /// is not CN.
    /// Raised if N < 1.
    /// </summary>
    RDC::OCC::Vec DN(double U, int N);
    /// <summary>
    /// Returns the parametric  resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double Resolution(double R3d);
    /// <summary>
    /// Returns  the  type of the   curve  in the  current
    /// interval :   Line,   Circle,   Ellipse, Hyperbola,
    /// Parabola, BezierCurve, BSplineCurve, OtherCurve.
    /// </summary>
    RDC::OCC::GeomAbs_CurveType GetCurveType();
    RDC::OCC::gp_Lin^ Line();
    RDC::OCC::gp_Circ^ Circle();
    RDC::OCC::gp_Elips^ Ellipse();
    RDC::OCC::gp_Hypr^ Hyperbola();
    RDC::OCC::gp_Parab^ Parabola();
    int Degree();
    bool IsRational();
    int NbPoles();
    int NbKnots();
    RDC::OCC::Geom_BezierCurve^ Bezier();
    RDC::OCC::Geom_BSplineCurve^ BSpline();
    static RDC::OCC::Adaptor3d_IsoCurve^ CreateDowncasted(::Adaptor3d_IsoCurve* instance);
}; // class Adaptor3d_IsoCurve

//---------------------------------------------------------------------
//  Class  Adaptor3d_TopolTool
//---------------------------------------------------------------------
/// <summary>
/// This class provides a default topological tool,
/// based on the Umin,Vmin,Umax,Vmax of an HSurface from Adaptor3d.
/// All methods and fields may be redefined when inheriting from this class.
/// This class is used to instantiate algorithms as Intersection, outlines,...
/// </summary>
public ref class Adaptor3d_TopolTool sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_Adaptor3d_TopolTool_h
public:
    Include_Adaptor3d_TopolTool_h
#endif

public:
    Adaptor3d_TopolTool(::Adaptor3d_TopolTool* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    Adaptor3d_TopolTool(::Adaptor3d_TopolTool& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::Adaptor3d_TopolTool* NativeInstance
    {
        ::Adaptor3d_TopolTool* get()
        {
            return static_cast<::Adaptor3d_TopolTool*>(_NativeInstance);
        }
    }

public:
    Adaptor3d_TopolTool();
    Adaptor3d_TopolTool(RDC::OCC::Adaptor3d_Surface^ Surface);
    void Initialize();
    void Initialize(RDC::OCC::Adaptor3d_Surface^ S);
    void Initialize(RDC::OCC::Adaptor2d_Curve2d^ Curve);
    void Init();
    bool More();
    RDC::OCC::Adaptor2d_Curve2d^ Value();
    void Next();
    void InitVertexIterator();
    bool MoreVertex();
    RDC::OCC::Adaptor3d_HVertex^ Vertex();
    void NextVertex();
    RDC::OCC::TopAbs_State Classify(RDC::OCC::Pnt2d P, double Tol, bool ReacdreOnPeriodic);
    RDC::OCC::TopAbs_State Classify(RDC::OCC::Pnt2d P, double Tol);
    bool IsThePointOn(RDC::OCC::Pnt2d P, double Tol, bool ReacdreOnPeriodic);
    bool IsThePointOn(RDC::OCC::Pnt2d P, double Tol);
    /// <summary>
    /// If the function returns the orientation of the arc.
    /// If the orientation is FORWARD or REVERSED, the arc is
    /// a "real" limit of the surface.
    /// If the orientation is INTERNAL or EXTERNAL, the arc is
    /// considered as an arc on the surface.
    /// </summary>
    RDC::OCC::TopAbs_Orientation Orientation(RDC::OCC::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// Returns the orientation of the vertex V.
    /// The vertex has been found with an exploration on
    /// a given arc. The orientation is the orientation
    /// of the vertex on this arc.
    /// </summary>
    RDC::OCC::TopAbs_Orientation Orientation(RDC::OCC::Adaptor3d_HVertex^ V);
    /// <summary>
    /// Returns True if the vertices V1 and V2 are identical.
    /// This method does not take the orientation of the
    /// vertices in account.
    /// </summary>
    bool Identical(RDC::OCC::Adaptor3d_HVertex^ V1, RDC::OCC::Adaptor3d_HVertex^ V2);
    /// <summary>
    /// answers if arcs and vertices may have 3d representations,
    /// so that we could use Tol3d and Pnt methods.
    /// </summary>
    bool Has3d();
    /// <summary>
    /// returns 3d tolerance of the arc C
    /// </summary>
    double Tol3d(RDC::OCC::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// returns 3d tolerance of the vertex V
    /// </summary>
    double Tol3d(RDC::OCC::Adaptor3d_HVertex^ V);
    /// <summary>
    /// returns 3d point of the vertex V
    /// </summary>
    RDC::OCC::Pnt Pnt(RDC::OCC::Adaptor3d_HVertex^ V);
    void ComputeSamplePoints();
    /// <summary>
    /// compute the sample-points for the intersections algorithms
    /// </summary>
    int NbSamplesU();
    /// <summary>
    /// compute the sample-points for the intersections algorithms
    /// </summary>
    int NbSamplesV();
    /// <summary>
    /// compute the sample-points for the intersections algorithms
    /// </summary>
    int NbSamples();
    /// <summary>
    /// return the set of U parameters on the surface
    /// obtained by the method SamplePnts
    /// </summary>
    void UParameters(RDC::OCC::TColStd_Array1OfReal^ theArray);
    /// <summary>
    /// return the set of V parameters on the surface
    /// obtained by the method SamplePnts
    /// </summary>
    void VParameters(RDC::OCC::TColStd_Array1OfReal^ theArray);
    void SamplePoint(int Index, RDC::OCC::Pnt2d% P2d, RDC::OCC::Pnt% P3d);
    bool DomainIsInfinite();
    System::IntPtr Edge();
    /// <summary>
    /// Compute the sample-points for the intersections algorithms by adaptive algorithm for BSpline surfaces.
    /// For other surfaces algorithm is the same as in method ComputeSamplePoints(),
    /// but only fill arrays of U and V sample parameters;
    /// </summary>
    /// <param name="theDefl">
    ///  [in] a required deflection
    /// </param>
    /// <param name="theNUmin">
    /// [in] minimal nb points for U
    /// </param>
    /// <param name="theNVmin">
    /// [in] minimal nb points for V
    /// </param>
    void SamplePnts(double theDefl, int theNUmin, int theNVmin);
    /// <summary>
    /// Compute the sample-points for the intersections algorithms
    /// by adaptive algorithm for BSpline surfaces - is used in SamplePnts
    /// </summary>
    /// <param name="theDefl">
    ///  [in] required deflection
    /// </param>
    /// <param name="theNUmin">
    /// [in] minimal nb points for U
    /// </param>
    /// <param name="theNVmin">
    /// [in] minimal nb points for V
    /// </param>
    void BSplSamplePnts(double theDefl, int theNUmin, int theNVmin);
    /// <summary>
    /// Returns true if provide uniform sampling of points.
    /// </summary>
    bool IsUniformSampling();
    /// <summary>
    /// Computes the cone's apex parameters.
    /// </summary>
    /// <param name="in]">
    /// theC conical surface
    /// </param>
    /// <param name="in]">
    /// theU U parameter of cone's apex
    /// </param>
    /// <param name="in]">
    /// theV V parameter of cone's apex
    /// </param>
    static void GetConeApexParam(RDC::OCC::gp_Cone^ theC, double% theU, double% theV);
    static RDC::OCC::Adaptor3d_TopolTool^ CreateDowncasted(::Adaptor3d_TopolTool* instance);
}; // class Adaptor3d_TopolTool

}; // namespace OCC
}; // namespace RDC

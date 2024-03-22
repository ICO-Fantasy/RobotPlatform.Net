// Generated wrapper code for package BRepLProp

#pragma once


namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Class  BRepLProp
//---------------------------------------------------------------------
/// <summary>
/// These global functions compute the degree of
/// continuity of a curve built by concatenation of two
/// edges at their junction point.
/// </summary>
public ref class BRepLProp sealed
    : public RDC::OCC::BaseClass<::BRepLProp>
{

#ifdef Include_BRepLProp_h
public:
    Include_BRepLProp_h
#endif

public:
    BRepLProp(::BRepLProp* nativeInstance)
        : RDC::OCC::BaseClass<::BRepLProp>( nativeInstance, true )
    {}

    BRepLProp(::BRepLProp& nativeInstance)
        : RDC::OCC::BaseClass<::BRepLProp>( &nativeInstance, false )
    {}

    property ::BRepLProp* NativeInstance
    {
        ::BRepLProp* get()
        {
            return static_cast<::BRepLProp*>(_NativeInstance);
        }
    }

public:
    BRepLProp();
    /// <summary>
    /// Computes the regularity at the junction between C1 and
    /// C2. The point u1 on C1 and the point u2 on  C2 must be
    /// confused.   tl  and ta  are  the  linear  and  angular
    /// tolerance used two compare the derivative.
    /// </summary>
    static RDC::OCC::GeomAbs_Shape Continuity(RDC::OCC::BRepAdaptor_Curve^ C1, RDC::OCC::BRepAdaptor_Curve^ C2, double u1, double u2, double tl, double ta);
    /// <summary>
    /// The same as preceding but using the standard tolerances from package Precision.
    /// </summary>
    static RDC::OCC::GeomAbs_Shape Continuity(RDC::OCC::BRepAdaptor_Curve^ C1, RDC::OCC::BRepAdaptor_Curve^ C2, double u1, double u2);
}; // class BRepLProp

//---------------------------------------------------------------------
//  Class  BRepLProp_CurveTool
//---------------------------------------------------------------------
public ref class BRepLProp_CurveTool sealed
    : public RDC::OCC::BaseClass<::BRepLProp_CurveTool>
{

#ifdef Include_BRepLProp_CurveTool_h
public:
    Include_BRepLProp_CurveTool_h
#endif

public:
    BRepLProp_CurveTool(::BRepLProp_CurveTool* nativeInstance)
        : RDC::OCC::BaseClass<::BRepLProp_CurveTool>( nativeInstance, true )
    {}

    BRepLProp_CurveTool(::BRepLProp_CurveTool& nativeInstance)
        : RDC::OCC::BaseClass<::BRepLProp_CurveTool>( &nativeInstance, false )
    {}

    property ::BRepLProp_CurveTool* NativeInstance
    {
        ::BRepLProp_CurveTool* get()
        {
            return static_cast<::BRepLProp_CurveTool*>(_NativeInstance);
        }
    }

public:
    BRepLProp_CurveTool();
    /// <summary>
    /// Computes the point <P> of parameter <U> on the curve <C>.
    /// </summary>
    static void Value(RDC::OCC::BRepAdaptor_Curve^ C, double U, RDC::OCC::Pnt% P);
    /// <summary>
    /// Computes the point <P> and first derivative <V1> of
    /// parameter <U> on the curve <C>.
    /// </summary>
    static void D1(RDC::OCC::BRepAdaptor_Curve^ C, double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1);
    /// <summary>
    /// Computes the point <P>, the first derivative <V1> and second
    /// derivative <V2> of parameter <U> on the curve <C>.
    /// </summary>
    static void D2(RDC::OCC::BRepAdaptor_Curve^ C, double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2);
    /// <summary>
    /// Computes the point <P>, the first derivative <V1>, the
    /// second derivative <V2> and third derivative <V3> of
    /// parameter <U> on the curve <C>.
    /// </summary>
    static void D3(RDC::OCC::BRepAdaptor_Curve^ C, double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3);
    /// <summary>
    /// returns the order of continuity of the curve <C>.
    /// returns 1 : first derivative only is computable
    /// returns 2 : first and second derivative only are computable.
    /// returns 3 : first, second and third are computable.
    /// </summary>
    static int Continuity(RDC::OCC::BRepAdaptor_Curve^ C);
    /// <summary>
    /// returns the first parameter bound of the curve.
    /// </summary>
    static double FirstParameter(RDC::OCC::BRepAdaptor_Curve^ C);
    /// <summary>
    /// returns the last parameter bound of the curve.
    /// FirstParameter must be less than LastParamenter.
    /// </summary>
    static double LastParameter(RDC::OCC::BRepAdaptor_Curve^ C);
}; // class BRepLProp_CurveTool

//---------------------------------------------------------------------
//  Class  BRepLProp_CLProps
//---------------------------------------------------------------------
public ref class BRepLProp_CLProps sealed
    : public RDC::OCC::BaseClass<::BRepLProp_CLProps>
{

#ifdef Include_BRepLProp_CLProps_h
public:
    Include_BRepLProp_CLProps_h
#endif

public:
    BRepLProp_CLProps(::BRepLProp_CLProps* nativeInstance)
        : RDC::OCC::BaseClass<::BRepLProp_CLProps>( nativeInstance, true )
    {}

    BRepLProp_CLProps(::BRepLProp_CLProps& nativeInstance)
        : RDC::OCC::BaseClass<::BRepLProp_CLProps>( &nativeInstance, false )
    {}

    property ::BRepLProp_CLProps* NativeInstance
    {
        ::BRepLProp_CLProps* get()
        {
            return static_cast<::BRepLProp_CLProps*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the local properties of the curve <C>
    /// The current point and the derivatives are
    /// computed at the same time, which allows an
    /// optimization of the computation time.
    /// <N> indicates the maximum number of derivations to
    /// be done (0, 1, 2 or 3). For example, to compute
    /// only the tangent, N should be equal to 1.
    /// <Resolution> is the linear tolerance (it is used to test
    /// if a vector is null).
    /// </summary>
    BRepLProp_CLProps(RDC::OCC::BRepAdaptor_Curve^ C, int N, double Resolution);
    /// <summary>
    /// Same as previous constructor but here the parameter is
    /// set to the value <U>.
    /// All the computations done will be related to <C> and <U>.
    /// </summary>
    BRepLProp_CLProps(RDC::OCC::BRepAdaptor_Curve^ C, double U, int N, double Resolution);
    /// <summary>
    /// Same as previous constructor but here the parameter is
    /// set to the value <U> and the curve is set
    /// with SetCurve.
    /// the curve can have a empty constructor
    /// All the computations done will be related to <C> and <U>
    /// when the functions "set" will be done.
    /// </summary>
    BRepLProp_CLProps(int N, double Resolution);
    /// <summary>
    /// Initializes the local properties of the curve
    /// for the parameter value <U>.
    /// </summary>
    void SetParameter(double U);
    /// <summary>
    /// Initializes the local properties of the curve
    /// for the new curve.
    /// </summary>
    void SetCurve(RDC::OCC::BRepAdaptor_Curve^ C);
    /// <summary>
    /// Returns the Point.
    /// </summary>
    RDC::OCC::Pnt Value();
    /// <summary>
    /// Returns the first derivative.
    /// The derivative is computed if it has not been yet.
    /// </summary>
    RDC::OCC::Vec D1();
    /// <summary>
    /// Returns the second derivative.
    /// The derivative is computed if it has not been yet.
    /// </summary>
    RDC::OCC::Vec D2();
    /// <summary>
    /// Returns the third derivative.
    /// The derivative is computed if it has not been yet.
    /// </summary>
    RDC::OCC::Vec D3();
    /// <summary>
    /// Returns True if the tangent is defined.
    /// For example, the tangent is not defined if the
    /// three first derivatives are all null.
    /// </summary>
    bool IsTangentDefined();
    /// <summary>
    /// output  the tangent direction <D>
    /// </summary>
    void Tangent(RDC::OCC::Dir% D);
    /// <summary>
    /// Returns the curvature.
    /// </summary>
    double Curvature();
    /// <summary>
    /// Returns the normal direction <N>.
    /// </summary>
    void Normal(RDC::OCC::Dir% N);
    /// <summary>
    /// Returns the centre of curvature <P>.
    /// </summary>
    void CentreOfCurvature(RDC::OCC::Pnt% P);
}; // class BRepLProp_CLProps

//---------------------------------------------------------------------
//  Class  BRepLProp_SurfaceTool
//---------------------------------------------------------------------
public ref class BRepLProp_SurfaceTool sealed
    : public RDC::OCC::BaseClass<::BRepLProp_SurfaceTool>
{

#ifdef Include_BRepLProp_SurfaceTool_h
public:
    Include_BRepLProp_SurfaceTool_h
#endif

public:
    BRepLProp_SurfaceTool(::BRepLProp_SurfaceTool* nativeInstance)
        : RDC::OCC::BaseClass<::BRepLProp_SurfaceTool>( nativeInstance, true )
    {}

    BRepLProp_SurfaceTool(::BRepLProp_SurfaceTool& nativeInstance)
        : RDC::OCC::BaseClass<::BRepLProp_SurfaceTool>( &nativeInstance, false )
    {}

    property ::BRepLProp_SurfaceTool* NativeInstance
    {
        ::BRepLProp_SurfaceTool* get()
        {
            return static_cast<::BRepLProp_SurfaceTool*>(_NativeInstance);
        }
    }

public:
    BRepLProp_SurfaceTool();
    /// <summary>
    /// Computes the point <P> of parameter <U> and <V> on the
    /// Surface <S>.
    /// </summary>
    static void Value(RDC::OCC::BRepAdaptor_Surface^ S, double U, double V, RDC::OCC::Pnt% P);
    /// <summary>
    /// Computes the point <P> and first derivative <D1*> of
    /// parameter <U> and <V> on the Surface <S>.
    /// </summary>
    static void D1(RDC::OCC::BRepAdaptor_Surface^ S, double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V);
    /// <summary>
    /// Computes the point <P>, the first derivative <D1*> and second
    /// derivative <D2*> of parameter <U> and <V> on the Surface <S>.
    /// </summary>
    static void D2(RDC::OCC::BRepAdaptor_Surface^ S, double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% DUV);
    static RDC::OCC::Vec DN(RDC::OCC::BRepAdaptor_Surface^ S, double U, double V, int IU, int IV);
    /// <summary>
    /// returns the order of continuity of the Surface <S>.
    /// returns 1 : first derivative only is computable
    /// returns 2 : first and second derivative only are computable.
    /// </summary>
    static int Continuity(RDC::OCC::BRepAdaptor_Surface^ S);
    /// <summary>
    /// returns the bounds of the Surface.
    /// </summary>
    static void Bounds(RDC::OCC::BRepAdaptor_Surface^ S, double% U1, double% V1, double% U2, double% V2);
}; // class BRepLProp_SurfaceTool

//---------------------------------------------------------------------
//  Class  BRepLProp_SLProps
//---------------------------------------------------------------------
public ref class BRepLProp_SLProps sealed
    : public RDC::OCC::BaseClass<::BRepLProp_SLProps>
{

#ifdef Include_BRepLProp_SLProps_h
public:
    Include_BRepLProp_SLProps_h
#endif

public:
    BRepLProp_SLProps(::BRepLProp_SLProps* nativeInstance)
        : RDC::OCC::BaseClass<::BRepLProp_SLProps>( nativeInstance, true )
    {}

    BRepLProp_SLProps(::BRepLProp_SLProps& nativeInstance)
        : RDC::OCC::BaseClass<::BRepLProp_SLProps>( &nativeInstance, false )
    {}

    property ::BRepLProp_SLProps* NativeInstance
    {
        ::BRepLProp_SLProps* get()
        {
            return static_cast<::BRepLProp_SLProps*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the local properties of the surface <S>
    /// for the parameter values (<U>, <V>).
    /// The current point and the derivatives are
    /// computed at the same time, which allows an
    /// optimization of the computation time.
    /// <N> indicates the maximum number of derivations to
    /// be done (0, 1, or 2). For example, to compute
    /// only the tangent, N should be equal to 1.
    /// <Resolution> is the linear tolerance (it is used to test
    /// if a vector is null).
    /// </summary>
    BRepLProp_SLProps(RDC::OCC::BRepAdaptor_Surface^ S, double U, double V, int N, double Resolution);
    /// <summary>
    /// idem as previous constructor but without setting the value
    /// of parameters <U> and <V>.
    /// </summary>
    BRepLProp_SLProps(RDC::OCC::BRepAdaptor_Surface^ S, int N, double Resolution);
    /// <summary>
    /// idem as previous constructor but without setting the value
    /// of parameters <U> and <V> and the surface.
    /// the surface can have an empty constructor.
    /// </summary>
    BRepLProp_SLProps(int N, double Resolution);
    /// <summary>
    /// Initializes the local properties of the surface S
    /// for the new surface.
    /// </summary>
    void SetSurface(RDC::OCC::BRepAdaptor_Surface^ S);
    /// <summary>
    /// Initializes the local properties of the surface S
    /// for the new parameter values (<U>, <V>).
    /// </summary>
    void SetParameters(double U, double V);
    /// <summary>
    /// Returns the point.
    /// </summary>
    RDC::OCC::Pnt Value();
    /// <summary>
    /// Returns the first U derivative.
    /// The derivative is computed if it has not been yet.
    /// </summary>
    RDC::OCC::Vec D1U();
    /// <summary>
    /// Returns the first V derivative.
    /// The derivative is computed if it has not been yet.
    /// </summary>
    RDC::OCC::Vec D1V();
    /// <summary>
    /// Returns the second U derivatives
    /// The derivative is computed if it has not been yet.
    /// </summary>
    RDC::OCC::Vec D2U();
    /// <summary>
    /// Returns the second V derivative.
    /// The derivative is computed if it has not been yet.
    /// </summary>
    RDC::OCC::Vec D2V();
    /// <summary>
    /// Returns the second UV cross-derivative.
    /// The derivative is computed if it has not been yet.
    /// </summary>
    RDC::OCC::Vec DUV();
    /// <summary>
    /// returns True if the U tangent is defined.
    /// For example, the tangent is not defined if the
    /// two first U derivatives are null.
    /// </summary>
    bool IsTangentUDefined();
    /// <summary>
    /// Returns the tangent direction <D> on the iso-V.
    /// </summary>
    void TangentU(RDC::OCC::Dir% D);
    /// <summary>
    /// returns if the V tangent is defined.
    /// For example, the tangent is not defined if the
    /// two first V derivatives are null.
    /// </summary>
    bool IsTangentVDefined();
    /// <summary>
    /// Returns the tangent direction <D> on the iso-V.
    /// </summary>
    void TangentV(RDC::OCC::Dir% D);
    /// <summary>
    /// Tells if the normal is defined.
    /// </summary>
    bool IsNormalDefined();
    /// <summary>
    /// Returns the normal direction.
    /// </summary>
    RDC::OCC::Dir Normal();
    /// <summary>
    /// returns True if the curvature is defined.
    /// </summary>
    bool IsCurvatureDefined();
    /// <summary>
    /// returns True if the point is umbilic (i.e. if the
    /// curvature is constant).
    /// </summary>
    bool IsUmbilic();
    /// <summary>
    /// Returns the maximum curvature
    /// </summary>
    double MaxCurvature();
    /// <summary>
    /// Returns the minimum curvature
    /// </summary>
    double MinCurvature();
    /// <summary>
    /// Returns the direction of the maximum and minimum curvature
    /// <MaxD> and <MinD>
    /// </summary>
    void CurvatureDirections(RDC::OCC::Dir% MaxD, RDC::OCC::Dir% MinD);
    /// <summary>
    /// Returns the mean curvature.
    /// </summary>
    double MeanCurvature();
    /// <summary>
    /// Returns the Gaussian curvature
    /// </summary>
    double GaussianCurvature();
}; // class BRepLProp_SLProps

}; // namespace OCC
}; // namespace RDC

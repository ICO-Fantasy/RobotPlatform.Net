﻿// Generated wrapper code for package Extrema

#pragma once


namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Enum  Extrema_ExtAlgo
//---------------------------------------------------------------------
public enum class Extrema_ExtAlgo
{
    Grad = 0,
    Tree = 1
}; // enum  class Extrema_ExtAlgo

//---------------------------------------------------------------------
//  Enum  Extrema_ExtFlag
//---------------------------------------------------------------------
public enum class Extrema_ExtFlag
{
    MIN = 0,
    MAX = 1,
    MINMAX = 2
}; // enum  class Extrema_ExtFlag

//---------------------------------------------------------------------
//  Class  Extrema_POnCurv
//---------------------------------------------------------------------
public ref class Extrema_POnCurv sealed
    : public RDC::OCC::BaseClass<::Extrema_POnCurv>
{

#ifdef Include_Extrema_POnCurv_h
public:
    Include_Extrema_POnCurv_h
#endif

public:
    Extrema_POnCurv(::Extrema_POnCurv* nativeInstance)
        : RDC::OCC::BaseClass<::Extrema_POnCurv>( nativeInstance, true )
    {}

    Extrema_POnCurv(::Extrema_POnCurv& nativeInstance)
        : RDC::OCC::BaseClass<::Extrema_POnCurv>( &nativeInstance, false )
    {}

    property ::Extrema_POnCurv* NativeInstance
    {
        ::Extrema_POnCurv* get()
        {
            return static_cast<::Extrema_POnCurv*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creation of an indefinite point on curve.
    /// </summary>
    Extrema_POnCurv();
    /// <summary>
    /// Creation of a point on curve with a parameter
    /// value on the curve and a Pnt from gp.
    /// </summary>
    Extrema_POnCurv(double U, RDC::OCC::Pnt P);
    /// <summary>
    /// sets the point and parameter values.
    /// </summary>
    void SetValues(double U, RDC::OCC::Pnt P);
    /// <summary>
    /// Returns the point.
    /// </summary>
    RDC::OCC::Pnt Value();
    /// <summary>
    /// Returns the parameter on the curve.
    /// </summary>
    double Parameter();
}; // class Extrema_POnCurv

//---------------------------------------------------------------------
//  Class  Extrema_ExtPC
//---------------------------------------------------------------------
public ref class Extrema_ExtPC sealed
    : public RDC::OCC::BaseClass<::Extrema_ExtPC>
{

#ifdef Include_Extrema_ExtPC_h
public:
    Include_Extrema_ExtPC_h
#endif

public:
    Extrema_ExtPC(::Extrema_ExtPC* nativeInstance)
        : RDC::OCC::BaseClass<::Extrema_ExtPC>( nativeInstance, true )
    {}

    Extrema_ExtPC(::Extrema_ExtPC& nativeInstance)
        : RDC::OCC::BaseClass<::Extrema_ExtPC>( &nativeInstance, false )
    {}

    property ::Extrema_ExtPC* NativeInstance
    {
        ::Extrema_ExtPC* get()
        {
            return static_cast<::Extrema_ExtPC*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtPC();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Zeros are searched between uinf and usup.
    /// Tol  is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ExtPC(RDC::OCC::Pnt P, RDC::OCC::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Zeros are searched between uinf and usup.
    /// Tol  is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ExtPC(RDC::OCC::Pnt P, RDC::OCC::Adaptor3d_Curve^ C, double Uinf, double Usup);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Tol is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ExtPC(RDC::OCC::Pnt P, RDC::OCC::Adaptor3d_Curve^ C, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Tol is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ExtPC(RDC::OCC::Pnt P, RDC::OCC::Adaptor3d_Curve^ C);
    /// <summary>
    /// initializes the fields of the algorithm.
    /// </summary>
    void Initialize(RDC::OCC::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF);
    /// <summary>
    /// initializes the fields of the algorithm.
    /// </summary>
    void Initialize(RDC::OCC::Adaptor3d_Curve^ C, double Uinf, double Usup);
    /// <summary>
    /// An exception is raised if the fields have not been
    /// initialized.
    /// </summary>
    void Perform(RDC::OCC::Pnt P);
    /// <summary>
    /// True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the <N>th extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns True if the <N>th extremum distance is a
    /// minimum.
    /// </summary>
    bool IsMin(int N);
    /// <summary>
    /// Returns the point of the <N>th extremum distance.
    /// </summary>
    RDC::OCC::Extrema_POnCurv^ Point(int N);
    /// <summary>
    /// if the curve is a trimmed curve,
    /// dist1 is a square distance between <P> and the point
    /// of parameter FirstParameter <P1> and
    /// dist2 is a square distance between <P> and the point
    /// of parameter LastParameter <P2>.
    /// </summary>
    void TrimmedSquareDistances(double% dist1, double% dist2, RDC::OCC::Pnt% P1, RDC::OCC::Pnt% P2);
}; // class Extrema_ExtPC

}; // namespace OCC
}; // namespace RDC

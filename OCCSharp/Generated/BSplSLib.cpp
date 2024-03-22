// Generated wrapper code for package BSplSLib

#include "OcctPCH.h"
#include "BSplSLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TColgp.h"
#include "TColStd.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  BSplSLib_EvaluatorFunction
//---------------------------------------------------------------------

RDC::OCC::BSplSLib_EvaluatorFunction::BSplSLib_EvaluatorFunction()
    : RDC::OCC::BaseClass<::BSplSLib_EvaluatorFunction>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::BSplSLib_EvaluatorFunction::Evaluate(int theDerivativeRequest, double theUParameter, double theVParameter, double% theResult, int% theErrorCode)
{
    pin_ptr<double> pp_theResult = &theResult;
    pin_ptr<int> pp_theErrorCode = &theErrorCode;
    ((::BSplSLib_EvaluatorFunction*)_NativeInstance)->Evaluate(theDerivativeRequest, theUParameter, theVParameter, *(double*)pp_theResult, *(int*)pp_theErrorCode);
}



//---------------------------------------------------------------------
//  Class  BSplSLib
//---------------------------------------------------------------------

RDC::OCC::BSplSLib::BSplSLib()
    : RDC::OCC::BaseClass<::BSplSLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BSplSLib();
}

void RDC::OCC::BSplSLib::RationalDerivative(int UDeg, int VDeg, int N, int M, double% Ders, double% RDers, bool All)
{
    pin_ptr<double> pp_Ders = &Ders;
    pin_ptr<double> pp_RDers = &RDers;
    ::BSplSLib::RationalDerivative(UDeg, VDeg, N, M, *(double*)pp_Ders, *(double*)pp_RDers, All);
}

void RDC::OCC::BSplSLib::RationalDerivative(int UDeg, int VDeg, int N, int M, double% Ders, double% RDers)
{
    pin_ptr<double> pp_Ders = &Ders;
    pin_ptr<double> pp_RDers = &RDers;
    ::BSplSLib::RationalDerivative(UDeg, VDeg, N, M, *(double*)pp_Ders, *(double*)pp_RDers, true);
}

void RDC::OCC::BSplSLib::D0(double U, double V, int UIndex, int VIndex, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, RDC::OCC::Pnt% P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ::BSplSLib::D0(U, V, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, *(gp_Pnt*)pp_P);
}

void RDC::OCC::BSplSLib::D1(double U, double V, int UIndex, int VIndex, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int Degree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
    pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
    ::BSplSLib::D1(U, V, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, Degree, VDegree, URat, VRat, UPer, VPer, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void RDC::OCC::BSplSLib::D2(double U, double V, int UIndex, int VIndex, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
    pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
    pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
    pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
    pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
    ::BSplSLib::D2(U, V, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void RDC::OCC::BSplSLib::D3(double U, double V, int UIndex, int VIndex, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, RDC::OCC::Pnt% P, RDC::OCC::Vec% Vu, RDC::OCC::Vec% Vv, RDC::OCC::Vec% Vuu, RDC::OCC::Vec% Vvv, RDC::OCC::Vec% Vuv, RDC::OCC::Vec% Vuuu, RDC::OCC::Vec% Vvvv, RDC::OCC::Vec% Vuuv, RDC::OCC::Vec% Vuvv)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_Vu = &Vu;
    pin_ptr<RDC::OCC::Vec> pp_Vv = &Vv;
    pin_ptr<RDC::OCC::Vec> pp_Vuu = &Vuu;
    pin_ptr<RDC::OCC::Vec> pp_Vvv = &Vvv;
    pin_ptr<RDC::OCC::Vec> pp_Vuv = &Vuv;
    pin_ptr<RDC::OCC::Vec> pp_Vuuu = &Vuuu;
    pin_ptr<RDC::OCC::Vec> pp_Vvvv = &Vvvv;
    pin_ptr<RDC::OCC::Vec> pp_Vuuv = &Vuuv;
    pin_ptr<RDC::OCC::Vec> pp_Vuvv = &Vuvv;
    ::BSplSLib::D3(U, V, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void RDC::OCC::BSplSLib::DN(double U, double V, int Nu, int Nv, int UIndex, int VIndex, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, RDC::OCC::Vec% Vn)
{
    pin_ptr<RDC::OCC::Vec> pp_Vn = &Vn;
    ::BSplSLib::DN(U, V, Nu, Nv, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, *(gp_Vec*)pp_Vn);
}

void RDC::OCC::BSplSLib::Iso(double Param, bool IsU, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt^ CPoles, RDC::OCC::TColStd_Array1OfReal^ CWeights)
{
    ::BSplSLib::Iso(Param, IsU, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, Degree, Periodic, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance, (::TColStd_Array1OfReal*)CWeights->NativeInstance);
}

void RDC::OCC::BSplSLib::Reverse(RDC::OCC::TColgp_Array2OfPnt^ Poles, int Last, bool UDirection)
{
    ::BSplSLib::Reverse(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, Last, UDirection);
}

void RDC::OCC::BSplSLib::HomogeneousD0(double U, double V, int UIndex, int VIndex, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, double% W, RDC::OCC::Pnt% P)
{
    pin_ptr<double> pp_W = &W;
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ::BSplSLib::HomogeneousD0(U, V, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, *(double*)pp_W, *(gp_Pnt*)pp_P);
}

void RDC::OCC::BSplSLib::HomogeneousD1(double U, double V, int UIndex, int VIndex, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, RDC::OCC::Pnt% N, RDC::OCC::Vec% Nu, RDC::OCC::Vec% Nv, double% D, double% Du, double% Dv)
{
    pin_ptr<RDC::OCC::Pnt> pp_N = &N;
    pin_ptr<RDC::OCC::Vec> pp_Nu = &Nu;
    pin_ptr<RDC::OCC::Vec> pp_Nv = &Nv;
    pin_ptr<double> pp_D = &D;
    pin_ptr<double> pp_Du = &Du;
    pin_ptr<double> pp_Dv = &Dv;
    ::BSplSLib::HomogeneousD1(U, V, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, *(gp_Pnt*)pp_N, *(gp_Vec*)pp_Nu, *(gp_Vec*)pp_Nv, *(double*)pp_D, *(double*)pp_Du, *(double*)pp_Dv);
}

void RDC::OCC::BSplSLib::Reverse(RDC::OCC::TColStd_Array2OfReal^ Weights, int Last, bool UDirection)
{
    ::BSplSLib::Reverse(*(::TColStd_Array2OfReal*)Weights->NativeInstance, Last, UDirection);
}

bool RDC::OCC::BSplSLib::IsRational(RDC::OCC::TColStd_Array2OfReal^ Weights, int I1, int I2, int J1, int J2, double Epsilon)
{
    bool _result = ::BSplSLib::IsRational(*(::TColStd_Array2OfReal*)Weights->NativeInstance, I1, I2, J1, J2, Epsilon);
    return _result;
}

bool RDC::OCC::BSplSLib::IsRational(RDC::OCC::TColStd_Array2OfReal^ Weights, int I1, int I2, int J1, int J2)
{
    bool _result = ::BSplSLib::IsRational(*(::TColStd_Array2OfReal*)Weights->NativeInstance, I1, I2, J1, J2, 0.);
    return _result;
}

void RDC::OCC::BSplSLib::SetPoles(RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ FP, bool UDirection)
{
    ::BSplSLib::SetPoles(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)FP->NativeInstance, UDirection);
}

void RDC::OCC::BSplSLib::SetPoles(RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ FP, bool UDirection)
{
    ::BSplSLib::SetPoles(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)FP->NativeInstance, UDirection);
}

void RDC::OCC::BSplSLib::GetPoles(RDC::OCC::TColStd_Array1OfReal^ FP, RDC::OCC::TColgp_Array2OfPnt^ Poles, bool UDirection)
{
    ::BSplSLib::GetPoles(*(::TColStd_Array1OfReal*)FP->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, UDirection);
}

void RDC::OCC::BSplSLib::GetPoles(RDC::OCC::TColStd_Array1OfReal^ FP, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, bool UDirection)
{
    ::BSplSLib::GetPoles(*(::TColStd_Array1OfReal*)FP->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array2OfReal*)Weights->NativeInstance, UDirection);
}

void RDC::OCC::BSplSLib::MovePoint(double U, double V, RDC::OCC::Vec Displ, int UIndex1, int UIndex2, int VIndex1, int VIndex2, int UDegree, int VDegree, bool Rational, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UFlatKnots, RDC::OCC::TColStd_Array1OfReal^ VFlatKnots, int% UFirstIndex, int% ULastIndex, int% VFirstIndex, int% VLastIndex, RDC::OCC::TColgp_Array2OfPnt^ NewPoles)
{
    pin_ptr<RDC::OCC::Vec> pp_Displ = &Displ;
    pin_ptr<int> pp_UFirstIndex = &UFirstIndex;
    pin_ptr<int> pp_ULastIndex = &ULastIndex;
    pin_ptr<int> pp_VFirstIndex = &VFirstIndex;
    pin_ptr<int> pp_VLastIndex = &VLastIndex;
    ::BSplSLib::MovePoint(U, V, *(gp_Vec*)pp_Displ, UIndex1, UIndex2, VIndex1, VIndex2, UDegree, VDegree, Rational, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)VFlatKnots->NativeInstance, *(int*)pp_UFirstIndex, *(int*)pp_ULastIndex, *(int*)pp_VFirstIndex, *(int*)pp_VLastIndex, *(::TColgp_Array2OfPnt*)NewPoles->NativeInstance);
}

void RDC::OCC::BSplSLib::InsertKnots(bool UDirection, int Degree, bool Periodic, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ AddKnots, RDC::OCC::TColStd_Array1OfInteger^ AddMults, RDC::OCC::TColgp_Array2OfPnt^ NewPoles, RDC::OCC::TColStd_Array2OfReal^ NewWeights, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add)
{
    ::BSplSLib::InsertKnots(UDirection, Degree, Periodic, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)AddKnots->NativeInstance, (::TColStd_Array1OfInteger*)AddMults->NativeInstance, *(::TColgp_Array2OfPnt*)NewPoles->NativeInstance, (::TColStd_Array2OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Epsilon, Add);
}

void RDC::OCC::BSplSLib::InsertKnots(bool UDirection, int Degree, bool Periodic, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ AddKnots, RDC::OCC::TColStd_Array1OfInteger^ AddMults, RDC::OCC::TColgp_Array2OfPnt^ NewPoles, RDC::OCC::TColStd_Array2OfReal^ NewWeights, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, double Epsilon)
{
    ::BSplSLib::InsertKnots(UDirection, Degree, Periodic, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)AddKnots->NativeInstance, (::TColStd_Array1OfInteger*)AddMults->NativeInstance, *(::TColgp_Array2OfPnt*)NewPoles->NativeInstance, (::TColStd_Array2OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Epsilon, true);
}

bool RDC::OCC::BSplSLib::RemoveKnot(bool UDirection, int Index, int Mult, int Degree, bool Periodic, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColgp_Array2OfPnt^ NewPoles, RDC::OCC::TColStd_Array2OfReal^ NewWeights, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, double Tolerance)
{
    bool _result = ::BSplSLib::RemoveKnot(UDirection, Index, Mult, Degree, Periodic, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array2OfPnt*)NewPoles->NativeInstance, (::TColStd_Array2OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Tolerance);
    return _result;
}

void RDC::OCC::BSplSLib::IncreaseDegree(bool UDirection, int Degree, int NewDegree, bool Periodic, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColgp_Array2OfPnt^ NewPoles, RDC::OCC::TColStd_Array2OfReal^ NewWeights, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults)
{
    ::BSplSLib::IncreaseDegree(UDirection, Degree, NewDegree, Periodic, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array2OfPnt*)NewPoles->NativeInstance, (::TColStd_Array2OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance);
}

void RDC::OCC::BSplSLib::Unperiodize(bool UDirection, int Degree, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfInteger^ NewMults, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColgp_Array2OfPnt^ NewPoles, RDC::OCC::TColStd_Array2OfReal^ NewWeights)
{
    ::BSplSLib::Unperiodize(UDirection, Degree, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColgp_Array2OfPnt*)NewPoles->NativeInstance, (::TColStd_Array2OfReal*)NewWeights->NativeInstance);
}

RDC::OCC::TColStd_Array2OfReal^ RDC::OCC::BSplSLib::NoWeights()
{
    ::TColStd_Array2OfReal* _result = ::BSplSLib::NoWeights();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfReal(_result);
}

void RDC::OCC::BSplSLib::BuildCache(double U, double V, double USpanDomain, double VSpanDomain, bool UPeriodicFlag, bool VPeriodicFlag, int UDegree, int VDegree, int UIndex, int VIndex, RDC::OCC::TColStd_Array1OfReal^ UFlatKnots, RDC::OCC::TColStd_Array1OfReal^ VFlatKnots, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColgp_Array2OfPnt^ CachePoles, RDC::OCC::TColStd_Array2OfReal^ CacheWeights)
{
    ::BSplSLib::BuildCache(U, V, USpanDomain, VSpanDomain, UPeriodicFlag, VPeriodicFlag, UDegree, VDegree, UIndex, VIndex, *(::TColStd_Array1OfReal*)UFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)VFlatKnots->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColgp_Array2OfPnt*)CachePoles->NativeInstance, (::TColStd_Array2OfReal*)CacheWeights->NativeInstance);
}

void RDC::OCC::BSplSLib::BuildCache(double theU, double theV, double theUSpanDomain, double theVSpanDomain, bool theUPeriodic, bool theVPeriodic, int theUDegree, int theVDegree, int theUIndex, int theVIndex, RDC::OCC::TColStd_Array1OfReal^ theUFlatKnots, RDC::OCC::TColStd_Array1OfReal^ theVFlatKnots, RDC::OCC::TColgp_Array2OfPnt^ thePoles, RDC::OCC::TColStd_Array2OfReal^ theWeights, RDC::OCC::TColStd_Array2OfReal^ theCacheArray)
{
    ::BSplSLib::BuildCache(theU, theV, theUSpanDomain, theVSpanDomain, theUPeriodic, theVPeriodic, theUDegree, theVDegree, theUIndex, theVIndex, *(::TColStd_Array1OfReal*)theUFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)theVFlatKnots->NativeInstance, *(::TColgp_Array2OfPnt*)thePoles->NativeInstance, (::TColStd_Array2OfReal*)theWeights->NativeInstance, *(::TColStd_Array2OfReal*)theCacheArray->NativeInstance);
}

void RDC::OCC::BSplSLib::CacheD0(double U, double V, int UDegree, int VDegree, double UCacheParameter, double VCacheParameter, double USpanLenght, double VSpanLength, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::Pnt% Point)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    ::BSplSLib::CacheD0(U, V, UDegree, VDegree, UCacheParameter, VCacheParameter, USpanLenght, VSpanLength, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point);
}

void RDC::OCC::BSplSLib::CoefsD0(double U, double V, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::Pnt% Point)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    ::BSplSLib::CoefsD0(U, V, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point);
}

void RDC::OCC::BSplSLib::CacheD1(double U, double V, int UDegree, int VDegree, double UCacheParameter, double VCacheParameter, double USpanLenght, double VSpanLength, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::Pnt% Point, RDC::OCC::Vec% VecU, RDC::OCC::Vec% VecV)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec> pp_VecU = &VecU;
    pin_ptr<RDC::OCC::Vec> pp_VecV = &VecV;
    ::BSplSLib::CacheD1(U, V, UDegree, VDegree, UCacheParameter, VCacheParameter, USpanLenght, VSpanLength, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_VecU, *(gp_Vec*)pp_VecV);
}

void RDC::OCC::BSplSLib::CoefsD1(double U, double V, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::Pnt% Point, RDC::OCC::Vec% VecU, RDC::OCC::Vec% VecV)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec> pp_VecU = &VecU;
    pin_ptr<RDC::OCC::Vec> pp_VecV = &VecV;
    ::BSplSLib::CoefsD1(U, V, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_VecU, *(gp_Vec*)pp_VecV);
}

void RDC::OCC::BSplSLib::CacheD2(double U, double V, int UDegree, int VDegree, double UCacheParameter, double VCacheParameter, double USpanLenght, double VSpanLength, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::Pnt% Point, RDC::OCC::Vec% VecU, RDC::OCC::Vec% VecV, RDC::OCC::Vec% VecUU, RDC::OCC::Vec% VecUV, RDC::OCC::Vec% VecVV)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec> pp_VecU = &VecU;
    pin_ptr<RDC::OCC::Vec> pp_VecV = &VecV;
    pin_ptr<RDC::OCC::Vec> pp_VecUU = &VecUU;
    pin_ptr<RDC::OCC::Vec> pp_VecUV = &VecUV;
    pin_ptr<RDC::OCC::Vec> pp_VecVV = &VecVV;
    ::BSplSLib::CacheD2(U, V, UDegree, VDegree, UCacheParameter, VCacheParameter, USpanLenght, VSpanLength, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_VecU, *(gp_Vec*)pp_VecV, *(gp_Vec*)pp_VecUU, *(gp_Vec*)pp_VecUV, *(gp_Vec*)pp_VecVV);
}

void RDC::OCC::BSplSLib::CoefsD2(double U, double V, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::Pnt% Point, RDC::OCC::Vec% VecU, RDC::OCC::Vec% VecV, RDC::OCC::Vec% VecUU, RDC::OCC::Vec% VecUV, RDC::OCC::Vec% VecVV)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec> pp_VecU = &VecU;
    pin_ptr<RDC::OCC::Vec> pp_VecV = &VecV;
    pin_ptr<RDC::OCC::Vec> pp_VecUU = &VecUU;
    pin_ptr<RDC::OCC::Vec> pp_VecUV = &VecUV;
    pin_ptr<RDC::OCC::Vec> pp_VecVV = &VecVV;
    ::BSplSLib::CoefsD2(U, V, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_VecU, *(gp_Vec*)pp_VecV, *(gp_Vec*)pp_VecUU, *(gp_Vec*)pp_VecUV, *(gp_Vec*)pp_VecVV);
}

void RDC::OCC::BSplSLib::PolesCoefficients(RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColgp_Array2OfPnt^ CachePoles)
{
    ::BSplSLib::PolesCoefficients(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColgp_Array2OfPnt*)CachePoles->NativeInstance);
}

void RDC::OCC::BSplSLib::PolesCoefficients(RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColgp_Array2OfPnt^ CachePoles, RDC::OCC::TColStd_Array2OfReal^ CacheWeights)
{
    ::BSplSLib::PolesCoefficients(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColgp_Array2OfPnt*)CachePoles->NativeInstance, (::TColStd_Array2OfReal*)CacheWeights->NativeInstance);
}

void RDC::OCC::BSplSLib::Resolution(RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, double Tolerance3D, double% UTolerance, double% VTolerance)
{
    pin_ptr<double> pp_UTolerance = &UTolerance;
    pin_ptr<double> pp_VTolerance = &VTolerance;
    ::BSplSLib::Resolution(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, *(::TColStd_Array1OfInteger*)UMults->NativeInstance, *(::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, Tolerance3D, *(double*)pp_UTolerance, *(double*)pp_VTolerance);
}

void RDC::OCC::BSplSLib::Interpolate(int UDegree, int VDegree, RDC::OCC::TColStd_Array1OfReal^ UFlatKnots, RDC::OCC::TColStd_Array1OfReal^ VFlatKnots, RDC::OCC::TColStd_Array1OfReal^ UParameters, RDC::OCC::TColStd_Array1OfReal^ VParameters, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, int% InversionProblem)
{
    pin_ptr<int> pp_InversionProblem = &InversionProblem;
    ::BSplSLib::Interpolate(UDegree, VDegree, *(::TColStd_Array1OfReal*)UFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)VFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)UParameters->NativeInstance, *(::TColStd_Array1OfReal*)VParameters->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array2OfReal*)Weights->NativeInstance, *(int*)pp_InversionProblem);
}

void RDC::OCC::BSplSLib::Interpolate(int UDegree, int VDegree, RDC::OCC::TColStd_Array1OfReal^ UFlatKnots, RDC::OCC::TColStd_Array1OfReal^ VFlatKnots, RDC::OCC::TColStd_Array1OfReal^ UParameters, RDC::OCC::TColStd_Array1OfReal^ VParameters, RDC::OCC::TColgp_Array2OfPnt^ Poles, int% InversionProblem)
{
    pin_ptr<int> pp_InversionProblem = &InversionProblem;
    ::BSplSLib::Interpolate(UDegree, VDegree, *(::TColStd_Array1OfReal*)UFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)VFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)UParameters->NativeInstance, *(::TColStd_Array1OfReal*)VParameters->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(int*)pp_InversionProblem);
}

void RDC::OCC::BSplSLib::FunctionMultiply(RDC::OCC::BSplSLib_EvaluatorFunction^ Function, int UBSplineDegree, int VBSplineDegree, RDC::OCC::TColStd_Array1OfReal^ UBSplineKnots, RDC::OCC::TColStd_Array1OfReal^ VBSplineKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UFlatKnots, RDC::OCC::TColStd_Array1OfReal^ VFlatKnots, int UNewDegree, int VNewDegree, RDC::OCC::TColgp_Array2OfPnt^ NewNumerator, RDC::OCC::TColStd_Array2OfReal^ NewDenominator, int% theStatus)
{
    pin_ptr<int> pp_theStatus = &theStatus;
    ::BSplSLib::FunctionMultiply(*(::BSplSLib_EvaluatorFunction*)Function->NativeInstance, UBSplineDegree, VBSplineDegree, *(::TColStd_Array1OfReal*)UBSplineKnots->NativeInstance, *(::TColStd_Array1OfReal*)VBSplineKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)VFlatKnots->NativeInstance, UNewDegree, VNewDegree, *(::TColgp_Array2OfPnt*)NewNumerator->NativeInstance, *(::TColStd_Array2OfReal*)NewDenominator->NativeInstance, *(int*)pp_theStatus);
}



//---------------------------------------------------------------------
//  Class  BSplSLib_Cache
//---------------------------------------------------------------------

RDC::OCC::BSplSLib_Cache::BSplSLib_Cache(int theDegreeU, bool thePeriodicU, RDC::OCC::TColStd_Array1OfReal^ theFlatKnotsU, int theDegreeV, bool thePeriodicV, RDC::OCC::TColStd_Array1OfReal^ theFlatKnotsV, RDC::OCC::TColStd_Array2OfReal^ theWeights)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<int> pp_theDegreeU = &theDegreeU;
    pin_ptr<bool> pp_thePeriodicU = &thePeriodicU;
    pin_ptr<int> pp_theDegreeV = &theDegreeV;
    pin_ptr<bool> pp_thePeriodicV = &thePeriodicV;
    NativeInstance = new ::BSplSLib_Cache(*(int*)pp_theDegreeU, *(bool*)pp_thePeriodicU, *(::TColStd_Array1OfReal*)theFlatKnotsU->NativeInstance, *(int*)pp_theDegreeV, *(bool*)pp_thePeriodicV, *(::TColStd_Array1OfReal*)theFlatKnotsV->NativeInstance, (::TColStd_Array2OfReal*)theWeights->NativeInstance);
}

RDC::OCC::BSplSLib_Cache::BSplSLib_Cache(int theDegreeU, bool thePeriodicU, RDC::OCC::TColStd_Array1OfReal^ theFlatKnotsU, int theDegreeV, bool thePeriodicV, RDC::OCC::TColStd_Array1OfReal^ theFlatKnotsV)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<int> pp_theDegreeU = &theDegreeU;
    pin_ptr<bool> pp_thePeriodicU = &thePeriodicU;
    pin_ptr<int> pp_theDegreeV = &theDegreeV;
    pin_ptr<bool> pp_thePeriodicV = &thePeriodicV;
    NativeInstance = new ::BSplSLib_Cache(*(int*)pp_theDegreeU, *(bool*)pp_thePeriodicU, *(::TColStd_Array1OfReal*)theFlatKnotsU->NativeInstance, *(int*)pp_theDegreeV, *(bool*)pp_thePeriodicV, *(::TColStd_Array1OfReal*)theFlatKnotsV->NativeInstance, nullptr);
}

bool RDC::OCC::BSplSLib_Cache::IsCacheValid(double theParameterU, double theParameterV)
{
    bool _result = ((::BSplSLib_Cache*)_NativeInstance)->IsCacheValid(theParameterU, theParameterV);
    return _result;
}

void RDC::OCC::BSplSLib_Cache::BuildCache(double theParameterU, double theParameterV, RDC::OCC::TColStd_Array1OfReal^ theFlatKnotsU, RDC::OCC::TColStd_Array1OfReal^ theFlatKnotsV, RDC::OCC::TColgp_Array2OfPnt^ thePoles, RDC::OCC::TColStd_Array2OfReal^ theWeights)
{
    pin_ptr<double> pp_theParameterU = &theParameterU;
    pin_ptr<double> pp_theParameterV = &theParameterV;
    ((::BSplSLib_Cache*)_NativeInstance)->BuildCache(*(double*)pp_theParameterU, *(double*)pp_theParameterV, *(::TColStd_Array1OfReal*)theFlatKnotsU->NativeInstance, *(::TColStd_Array1OfReal*)theFlatKnotsV->NativeInstance, *(::TColgp_Array2OfPnt*)thePoles->NativeInstance, (::TColStd_Array2OfReal*)theWeights->NativeInstance);
}

void RDC::OCC::BSplSLib_Cache::BuildCache(double theParameterU, double theParameterV, RDC::OCC::TColStd_Array1OfReal^ theFlatKnotsU, RDC::OCC::TColStd_Array1OfReal^ theFlatKnotsV, RDC::OCC::TColgp_Array2OfPnt^ thePoles)
{
    pin_ptr<double> pp_theParameterU = &theParameterU;
    pin_ptr<double> pp_theParameterV = &theParameterV;
    ((::BSplSLib_Cache*)_NativeInstance)->BuildCache(*(double*)pp_theParameterU, *(double*)pp_theParameterV, *(::TColStd_Array1OfReal*)theFlatKnotsU->NativeInstance, *(::TColStd_Array1OfReal*)theFlatKnotsV->NativeInstance, *(::TColgp_Array2OfPnt*)thePoles->NativeInstance, nullptr);
}

void RDC::OCC::BSplSLib_Cache::D0(double theU, double theV, RDC::OCC::Pnt% thePoint)
{
    pin_ptr<double> pp_theU = &theU;
    pin_ptr<double> pp_theV = &theV;
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    ((::BSplSLib_Cache*)_NativeInstance)->D0(*(double*)pp_theU, *(double*)pp_theV, *(gp_Pnt*)pp_thePoint);
}

void RDC::OCC::BSplSLib_Cache::D1(double theU, double theV, RDC::OCC::Pnt% thePoint, RDC::OCC::Vec% theTangentU, RDC::OCC::Vec% theTangentV)
{
    pin_ptr<double> pp_theU = &theU;
    pin_ptr<double> pp_theV = &theV;
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Vec> pp_theTangentU = &theTangentU;
    pin_ptr<RDC::OCC::Vec> pp_theTangentV = &theTangentV;
    ((::BSplSLib_Cache*)_NativeInstance)->D1(*(double*)pp_theU, *(double*)pp_theV, *(gp_Pnt*)pp_thePoint, *(gp_Vec*)pp_theTangentU, *(gp_Vec*)pp_theTangentV);
}

void RDC::OCC::BSplSLib_Cache::D2(double theU, double theV, RDC::OCC::Pnt% thePoint, RDC::OCC::Vec% theTangentU, RDC::OCC::Vec% theTangentV, RDC::OCC::Vec% theCurvatureU, RDC::OCC::Vec% theCurvatureV, RDC::OCC::Vec% theCurvatureUV)
{
    pin_ptr<double> pp_theU = &theU;
    pin_ptr<double> pp_theV = &theV;
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Vec> pp_theTangentU = &theTangentU;
    pin_ptr<RDC::OCC::Vec> pp_theTangentV = &theTangentV;
    pin_ptr<RDC::OCC::Vec> pp_theCurvatureU = &theCurvatureU;
    pin_ptr<RDC::OCC::Vec> pp_theCurvatureV = &theCurvatureV;
    pin_ptr<RDC::OCC::Vec> pp_theCurvatureUV = &theCurvatureUV;
    ((::BSplSLib_Cache*)_NativeInstance)->D2(*(double*)pp_theU, *(double*)pp_theV, *(gp_Pnt*)pp_thePoint, *(gp_Vec*)pp_theTangentU, *(gp_Vec*)pp_theTangentV, *(gp_Vec*)pp_theCurvatureU, *(gp_Vec*)pp_theCurvatureV, *(gp_Vec*)pp_theCurvatureUV);
}

RDC::OCC::BSplSLib_Cache^ RDC::OCC::BSplSLib_Cache::CreateDowncasted(::BSplSLib_Cache* instance)
{
    return gcnew RDC::OCC::BSplSLib_Cache( instance );
}



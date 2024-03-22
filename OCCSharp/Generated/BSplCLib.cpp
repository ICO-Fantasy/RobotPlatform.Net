// Generated wrapper code for package BSplCLib

#include "OcctPCH.h"
#include "BSplCLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TColStd.h"
#include "GeomAbs.h"
#include "TColgp.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  BSplCLib_CacheParams
//---------------------------------------------------------------------

RDC::OCC::BSplCLib_CacheParams::BSplCLib_CacheParams(int theDegree, bool thePeriodic, RDC::OCC::TColStd_Array1OfReal^ theFlatKnots)
    : RDC::OCC::BaseClass<::BSplCLib_CacheParams>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BSplCLib_CacheParams(theDegree, thePeriodic, *(::TColStd_Array1OfReal*)theFlatKnots->NativeInstance);
}

double RDC::OCC::BSplCLib_CacheParams::PeriodicNormalization(double theParameter)
{
    double _result = ((::BSplCLib_CacheParams*)_NativeInstance)->PeriodicNormalization(theParameter);
    return _result;
}

bool RDC::OCC::BSplCLib_CacheParams::IsCacheValid(double theParameter)
{
    bool _result = ((::BSplCLib_CacheParams*)_NativeInstance)->IsCacheValid(theParameter);
    return _result;
}

void RDC::OCC::BSplCLib_CacheParams::LocateParameter(double% theParameter, RDC::OCC::TColStd_Array1OfReal^ theFlatKnots)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    ((::BSplCLib_CacheParams*)_NativeInstance)->LocateParameter(*(double*)pp_theParameter, *(::TColStd_Array1OfReal*)theFlatKnots->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BSplCLib_EvaluatorFunction
//---------------------------------------------------------------------

RDC::OCC::BSplCLib_EvaluatorFunction::BSplCLib_EvaluatorFunction()
    : RDC::OCC::BaseClass<::BSplCLib_EvaluatorFunction>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::BSplCLib_EvaluatorFunction::Evaluate(int theDerivativeRequest, double theStartEnd, double theParameter, double% theResult, int% theErrorCode)
{
    pin_ptr<double> pp_theStartEnd = &theStartEnd;
    pin_ptr<double> pp_theResult = &theResult;
    pin_ptr<int> pp_theErrorCode = &theErrorCode;
    ((::BSplCLib_EvaluatorFunction*)_NativeInstance)->Evaluate(theDerivativeRequest, (double*)pp_theStartEnd, theParameter, *(double*)pp_theResult, *(int*)pp_theErrorCode);
}



//---------------------------------------------------------------------
//  Class  BSplCLib
//---------------------------------------------------------------------

RDC::OCC::BSplCLib::BSplCLib()
    : RDC::OCC::BaseClass<::BSplCLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BSplCLib();
}

void RDC::OCC::BSplCLib::Hunt(RDC::OCC::TColStd_Array1OfReal^ theArray, double theX, int% theXPos)
{
    pin_ptr<int> pp_theXPos = &theXPos;
    ::BSplCLib::Hunt(*(::TColStd_Array1OfReal*)theArray->NativeInstance, theX, *(int*)pp_theXPos);
}

int RDC::OCC::BSplCLib::FirstUKnotIndex(int Degree, RDC::OCC::TColStd_Array1OfInteger^ Mults)
{
    int _result = ::BSplCLib::FirstUKnotIndex(Degree, *(::TColStd_Array1OfInteger*)Mults->NativeInstance);
    return _result;
}

int RDC::OCC::BSplCLib::LastUKnotIndex(int Degree, RDC::OCC::TColStd_Array1OfInteger^ Mults)
{
    int _result = ::BSplCLib::LastUKnotIndex(Degree, *(::TColStd_Array1OfInteger*)Mults->NativeInstance);
    return _result;
}

int RDC::OCC::BSplCLib::FlatIndex(int Degree, int Index, RDC::OCC::TColStd_Array1OfInteger^ Mults, bool Periodic)
{
    int _result = ::BSplCLib::FlatIndex(Degree, Index, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, Periodic);
    return _result;
}

void RDC::OCC::BSplCLib::LocateParameter(int Degree, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double U, bool IsPeriodic, int FromK1, int ToK2, int% KnotIndex, double% NewU)
{
    pin_ptr<int> pp_KnotIndex = &KnotIndex;
    pin_ptr<double> pp_NewU = &NewU;
    ::BSplCLib::LocateParameter(Degree, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, U, IsPeriodic, FromK1, ToK2, *(int*)pp_KnotIndex, *(double*)pp_NewU);
}

void RDC::OCC::BSplCLib::LocateParameter(int Degree, RDC::OCC::TColStd_Array1OfReal^ Knots, double U, bool IsPeriodic, int FromK1, int ToK2, int% KnotIndex, double% NewU)
{
    pin_ptr<int> pp_KnotIndex = &KnotIndex;
    pin_ptr<double> pp_NewU = &NewU;
    ::BSplCLib::LocateParameter(Degree, *(::TColStd_Array1OfReal*)Knots->NativeInstance, U, IsPeriodic, FromK1, ToK2, *(int*)pp_KnotIndex, *(double*)pp_NewU);
}

void RDC::OCC::BSplCLib::LocateParameter(int Degree, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double U, bool Periodic, int% Index, double% NewU)
{
    pin_ptr<int> pp_Index = &Index;
    pin_ptr<double> pp_NewU = &NewU;
    ::BSplCLib::LocateParameter(Degree, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, U, Periodic, *(int*)pp_Index, *(double*)pp_NewU);
}

int RDC::OCC::BSplCLib::MaxKnotMult(RDC::OCC::TColStd_Array1OfInteger^ Mults, int K1, int K2)
{
    int _result = ::BSplCLib::MaxKnotMult(*(::TColStd_Array1OfInteger*)Mults->NativeInstance, K1, K2);
    return _result;
}

int RDC::OCC::BSplCLib::MinKnotMult(RDC::OCC::TColStd_Array1OfInteger^ Mults, int K1, int K2)
{
    int _result = ::BSplCLib::MinKnotMult(*(::TColStd_Array1OfInteger*)Mults->NativeInstance, K1, K2);
    return _result;
}

int RDC::OCC::BSplCLib::NbPoles(int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfInteger^ Mults)
{
    int _result = ::BSplCLib::NbPoles(Degree, Periodic, *(::TColStd_Array1OfInteger*)Mults->NativeInstance);
    return _result;
}

int RDC::OCC::BSplCLib::KnotSequenceLength(RDC::OCC::TColStd_Array1OfInteger^ Mults, int Degree, bool Periodic)
{
    int _result = ::BSplCLib::KnotSequenceLength(*(::TColStd_Array1OfInteger*)Mults->NativeInstance, Degree, Periodic);
    return _result;
}

void RDC::OCC::BSplCLib::KnotSequence(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ KnotSeq, bool Periodic)
{
    ::BSplCLib::KnotSequence(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)KnotSeq->NativeInstance, Periodic);
}

void RDC::OCC::BSplCLib::KnotSequence(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ KnotSeq)
{
    ::BSplCLib::KnotSequence(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)KnotSeq->NativeInstance, false);
}

void RDC::OCC::BSplCLib::KnotSequence(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ KnotSeq)
{
    ::BSplCLib::KnotSequence(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, Degree, Periodic, *(::TColStd_Array1OfReal*)KnotSeq->NativeInstance);
}

int RDC::OCC::BSplCLib::KnotsLength(RDC::OCC::TColStd_Array1OfReal^ KnotSeq, bool Periodic)
{
    int _result = ::BSplCLib::KnotsLength(*(::TColStd_Array1OfReal*)KnotSeq->NativeInstance, Periodic);
    return _result;
}

int RDC::OCC::BSplCLib::KnotsLength(RDC::OCC::TColStd_Array1OfReal^ KnotSeq)
{
    int _result = ::BSplCLib::KnotsLength(*(::TColStd_Array1OfReal*)KnotSeq->NativeInstance, false);
    return _result;
}

void RDC::OCC::BSplCLib::Knots(RDC::OCC::TColStd_Array1OfReal^ KnotSeq, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, bool Periodic)
{
    ::BSplCLib::Knots(*(::TColStd_Array1OfReal*)KnotSeq->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, Periodic);
}

void RDC::OCC::BSplCLib::Knots(RDC::OCC::TColStd_Array1OfReal^ KnotSeq, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults)
{
    ::BSplCLib::Knots(*(::TColStd_Array1OfReal*)KnotSeq->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, false);
}

RDC::OCC::BSplCLib_KnotDistribution RDC::OCC::BSplCLib::KnotForm(RDC::OCC::TColStd_Array1OfReal^ Knots, int FromK1, int ToK2)
{
    ::BSplCLib_KnotDistribution _result = ::BSplCLib::KnotForm(*(::TColStd_Array1OfReal*)Knots->NativeInstance, FromK1, ToK2);
    return (RDC::OCC::BSplCLib_KnotDistribution)_result;
}

RDC::OCC::BSplCLib_MultDistribution RDC::OCC::BSplCLib::MultForm(RDC::OCC::TColStd_Array1OfInteger^ Mults, int FromK1, int ToK2)
{
    ::BSplCLib_MultDistribution _result = ::BSplCLib::MultForm(*(::TColStd_Array1OfInteger*)Mults->NativeInstance, FromK1, ToK2);
    return (RDC::OCC::BSplCLib_MultDistribution)_result;
}

void RDC::OCC::BSplCLib::KnotAnalysis(int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ CKnots, RDC::OCC::TColStd_Array1OfInteger^ CMults, RDC::OCC::GeomAbs_BSplKnotDistribution% KnotForm, int% MaxKnotMult)
{
    pin_ptr<RDC::OCC::GeomAbs_BSplKnotDistribution> pp_KnotForm = &KnotForm;
    pin_ptr<int> pp_MaxKnotMult = &MaxKnotMult;
    ::BSplCLib::KnotAnalysis(Degree, Periodic, *(::TColStd_Array1OfReal*)CKnots->NativeInstance, *(::TColStd_Array1OfInteger*)CMults->NativeInstance, *(::GeomAbs_BSplKnotDistribution*)pp_KnotForm, *(int*)pp_MaxKnotMult);
}

void RDC::OCC::BSplCLib::Reparametrize(double U1, double U2, RDC::OCC::TColStd_Array1OfReal^ Knots)
{
    ::BSplCLib::Reparametrize(U1, U2, *(::TColStd_Array1OfReal*)Knots->NativeInstance);
}

void RDC::OCC::BSplCLib::Reverse(RDC::OCC::TColStd_Array1OfReal^ Knots)
{
    ::BSplCLib::Reverse(*(::TColStd_Array1OfReal*)Knots->NativeInstance);
}

void RDC::OCC::BSplCLib::Reverse(RDC::OCC::TColStd_Array1OfInteger^ Mults)
{
    ::BSplCLib::Reverse(*(::TColStd_Array1OfInteger*)Mults->NativeInstance);
}

void RDC::OCC::BSplCLib::Reverse(RDC::OCC::TColgp_Array1OfPnt^ Poles, int Last)
{
    ::BSplCLib::Reverse(*(::TColgp_Array1OfPnt*)Poles->NativeInstance, Last);
}

void RDC::OCC::BSplCLib::Reverse(RDC::OCC::TColgp_Array1OfPnt2d^ Poles, int Last)
{
    ::BSplCLib::Reverse(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, Last);
}

void RDC::OCC::BSplCLib::Reverse(RDC::OCC::TColStd_Array1OfReal^ Weights, int Last)
{
    ::BSplCLib::Reverse(*(::TColStd_Array1OfReal*)Weights->NativeInstance, Last);
}

bool RDC::OCC::BSplCLib::IsRational(RDC::OCC::TColStd_Array1OfReal^ Weights, int I1, int I2, double Epsilon)
{
    bool _result = ::BSplCLib::IsRational(*(::TColStd_Array1OfReal*)Weights->NativeInstance, I1, I2, Epsilon);
    return _result;
}

bool RDC::OCC::BSplCLib::IsRational(RDC::OCC::TColStd_Array1OfReal^ Weights, int I1, int I2)
{
    bool _result = ::BSplCLib::IsRational(*(::TColStd_Array1OfReal*)Weights->NativeInstance, I1, I2, 0.);
    return _result;
}

int RDC::OCC::BSplCLib::MaxDegree()
{
    int _result = ::BSplCLib::MaxDegree();
    return _result;
}

void RDC::OCC::BSplCLib::Eval(double U, int Degree, double% Knots, int Dimension, double% Poles)
{
    pin_ptr<double> pp_Knots = &Knots;
    pin_ptr<double> pp_Poles = &Poles;
    ::BSplCLib::Eval(U, Degree, *(double*)pp_Knots, Dimension, *(double*)pp_Poles);
}

void RDC::OCC::BSplCLib::BoorScheme(double U, int Degree, double% Knots, int Dimension, double% Poles, int Depth, int Length)
{
    pin_ptr<double> pp_Knots = &Knots;
    pin_ptr<double> pp_Poles = &Poles;
    ::BSplCLib::BoorScheme(U, Degree, *(double*)pp_Knots, Dimension, *(double*)pp_Poles, Depth, Length);
}

bool RDC::OCC::BSplCLib::AntiBoorScheme(double U, int Degree, double% Knots, int Dimension, double% Poles, int Depth, int Length, double Tolerance)
{
    pin_ptr<double> pp_Knots = &Knots;
    pin_ptr<double> pp_Poles = &Poles;
    bool _result = ::BSplCLib::AntiBoorScheme(U, Degree, *(double*)pp_Knots, Dimension, *(double*)pp_Poles, Depth, Length, Tolerance);
    return _result;
}

void RDC::OCC::BSplCLib::Derivative(int Degree, double% Knots, int Dimension, int Length, int Order, double% Poles)
{
    pin_ptr<double> pp_Knots = &Knots;
    pin_ptr<double> pp_Poles = &Poles;
    ::BSplCLib::Derivative(Degree, *(double*)pp_Knots, Dimension, Length, Order, *(double*)pp_Poles);
}

void RDC::OCC::BSplCLib::Bohm(double U, int Degree, int N, double% Knots, int Dimension, double% Poles)
{
    pin_ptr<double> pp_Knots = &Knots;
    pin_ptr<double> pp_Poles = &Poles;
    ::BSplCLib::Bohm(U, Degree, N, *(double*)pp_Knots, Dimension, *(double*)pp_Poles);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::BSplCLib::NoWeights()
{
    ::TColStd_Array1OfReal* _result = ::BSplCLib::NoWeights();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

RDC::OCC::TColStd_Array1OfInteger^ RDC::OCC::BSplCLib::NoMults()
{
    ::TColStd_Array1OfInteger* _result = ::BSplCLib::NoMults();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfInteger(_result);
}

void RDC::OCC::BSplCLib::BuildKnots(int Degree, int Index, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double% LK)
{
    pin_ptr<double> pp_LK = &LK;
    ::BSplCLib::BuildKnots(Degree, Index, Periodic, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(double*)pp_LK);
}

int RDC::OCC::BSplCLib::PoleIndex(int Degree, int Index, bool Periodic, RDC::OCC::TColStd_Array1OfInteger^ Mults)
{
    int _result = ::BSplCLib::PoleIndex(Degree, Index, Periodic, *(::TColStd_Array1OfInteger*)Mults->NativeInstance);
    return _result;
}

void RDC::OCC::BSplCLib::BuildEval(int Degree, int Index, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, double% LP)
{
    pin_ptr<double> pp_LP = &LP;
    ::BSplCLib::BuildEval(Degree, Index, *(::TColStd_Array1OfReal*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(double*)pp_LP);
}

void RDC::OCC::BSplCLib::BuildEval(int Degree, int Index, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, double% LP)
{
    pin_ptr<double> pp_LP = &LP;
    ::BSplCLib::BuildEval(Degree, Index, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(double*)pp_LP);
}

void RDC::OCC::BSplCLib::BuildEval(int Degree, int Index, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, double% LP)
{
    pin_ptr<double> pp_LP = &LP;
    ::BSplCLib::BuildEval(Degree, Index, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(double*)pp_LP);
}

void RDC::OCC::BSplCLib::BuildBoor(int Index, int Length, int Dimension, RDC::OCC::TColStd_Array1OfReal^ Poles, double% LP)
{
    pin_ptr<double> pp_LP = &LP;
    ::BSplCLib::BuildBoor(Index, Length, Dimension, *(::TColStd_Array1OfReal*)Poles->NativeInstance, *(double*)pp_LP);
}

int RDC::OCC::BSplCLib::BoorIndex(int Index, int Length, int Depth)
{
    int _result = ::BSplCLib::BoorIndex(Index, Length, Depth);
    return _result;
}

void RDC::OCC::BSplCLib::GetPole(int Index, int Length, int Depth, int Dimension, double% LocPoles, int% Position, RDC::OCC::TColStd_Array1OfReal^ Pole)
{
    pin_ptr<double> pp_LocPoles = &LocPoles;
    pin_ptr<int> pp_Position = &Position;
    ::BSplCLib::GetPole(Index, Length, Depth, Dimension, *(double*)pp_LocPoles, *(int*)pp_Position, *(::TColStd_Array1OfReal*)Pole->NativeInstance);
}

bool RDC::OCC::BSplCLib::PrepareInsertKnots(int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ AddKnots, RDC::OCC::TColStd_Array1OfInteger^ AddMults, int% NbPoles, int% NbKnots, double Epsilon, bool Add)
{
    pin_ptr<int> pp_NbPoles = &NbPoles;
    pin_ptr<int> pp_NbKnots = &NbKnots;
    bool _result = ::BSplCLib::PrepareInsertKnots(Degree, Periodic, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)AddKnots->NativeInstance, (::TColStd_Array1OfInteger*)AddMults->NativeInstance, *(int*)pp_NbPoles, *(int*)pp_NbKnots, Epsilon, Add);
    return _result;
}

bool RDC::OCC::BSplCLib::PrepareInsertKnots(int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ AddKnots, RDC::OCC::TColStd_Array1OfInteger^ AddMults, int% NbPoles, int% NbKnots, double Epsilon)
{
    pin_ptr<int> pp_NbPoles = &NbPoles;
    pin_ptr<int> pp_NbKnots = &NbKnots;
    bool _result = ::BSplCLib::PrepareInsertKnots(Degree, Periodic, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)AddKnots->NativeInstance, (::TColStd_Array1OfInteger*)AddMults->NativeInstance, *(int*)pp_NbPoles, *(int*)pp_NbKnots, Epsilon, true);
    return _result;
}

void RDC::OCC::BSplCLib::InsertKnots(int Degree, bool Periodic, int Dimension, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ AddKnots, RDC::OCC::TColStd_Array1OfInteger^ AddMults, RDC::OCC::TColStd_Array1OfReal^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add)
{
    ::BSplCLib::InsertKnots(Degree, Periodic, Dimension, *(::TColStd_Array1OfReal*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)AddKnots->NativeInstance, (::TColStd_Array1OfInteger*)AddMults->NativeInstance, *(::TColStd_Array1OfReal*)NewPoles->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Epsilon, Add);
}

void RDC::OCC::BSplCLib::InsertKnots(int Degree, bool Periodic, int Dimension, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ AddKnots, RDC::OCC::TColStd_Array1OfInteger^ AddMults, RDC::OCC::TColStd_Array1OfReal^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, double Epsilon)
{
    ::BSplCLib::InsertKnots(Degree, Periodic, Dimension, *(::TColStd_Array1OfReal*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)AddKnots->NativeInstance, (::TColStd_Array1OfInteger*)AddMults->NativeInstance, *(::TColStd_Array1OfReal*)NewPoles->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Epsilon, true);
}

void RDC::OCC::BSplCLib::InsertKnots(int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ AddKnots, RDC::OCC::TColStd_Array1OfInteger^ AddMults, RDC::OCC::TColgp_Array1OfPnt^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add)
{
    ::BSplCLib::InsertKnots(Degree, Periodic, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)AddKnots->NativeInstance, (::TColStd_Array1OfInteger*)AddMults->NativeInstance, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Epsilon, Add);
}

void RDC::OCC::BSplCLib::InsertKnots(int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ AddKnots, RDC::OCC::TColStd_Array1OfInteger^ AddMults, RDC::OCC::TColgp_Array1OfPnt^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, double Epsilon)
{
    ::BSplCLib::InsertKnots(Degree, Periodic, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)AddKnots->NativeInstance, (::TColStd_Array1OfInteger*)AddMults->NativeInstance, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Epsilon, true);
}

void RDC::OCC::BSplCLib::InsertKnots(int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ AddKnots, RDC::OCC::TColStd_Array1OfInteger^ AddMults, RDC::OCC::TColgp_Array1OfPnt2d^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add)
{
    ::BSplCLib::InsertKnots(Degree, Periodic, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)AddKnots->NativeInstance, (::TColStd_Array1OfInteger*)AddMults->NativeInstance, *(::TColgp_Array1OfPnt2d*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Epsilon, Add);
}

void RDC::OCC::BSplCLib::InsertKnots(int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ AddKnots, RDC::OCC::TColStd_Array1OfInteger^ AddMults, RDC::OCC::TColgp_Array1OfPnt2d^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, double Epsilon)
{
    ::BSplCLib::InsertKnots(Degree, Periodic, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)AddKnots->NativeInstance, (::TColStd_Array1OfInteger*)AddMults->NativeInstance, *(::TColgp_Array1OfPnt2d*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Epsilon, true);
}

void RDC::OCC::BSplCLib::InsertKnot(int UIndex, double U, int UMult, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColgp_Array1OfPnt^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights)
{
    ::BSplCLib::InsertKnot(UIndex, U, UMult, Degree, Periodic, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance);
}

void RDC::OCC::BSplCLib::InsertKnot(int UIndex, double U, int UMult, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColgp_Array1OfPnt2d^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights)
{
    ::BSplCLib::InsertKnot(UIndex, U, UMult, Degree, Periodic, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array1OfPnt2d*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance);
}

void RDC::OCC::BSplCLib::RaiseMultiplicity(int KnotIndex, int Mult, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColgp_Array1OfPnt^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights)
{
    ::BSplCLib::RaiseMultiplicity(KnotIndex, Mult, Degree, Periodic, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance);
}

void RDC::OCC::BSplCLib::RaiseMultiplicity(int KnotIndex, int Mult, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColgp_Array1OfPnt2d^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights)
{
    ::BSplCLib::RaiseMultiplicity(KnotIndex, Mult, Degree, Periodic, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array1OfPnt2d*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance);
}

bool RDC::OCC::BSplCLib::RemoveKnot(int Index, int Mult, int Degree, bool Periodic, int Dimension, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, double Tolerance)
{
    bool _result = ::BSplCLib::RemoveKnot(Index, Mult, Degree, Periodic, Dimension, *(::TColStd_Array1OfReal*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)NewPoles->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Tolerance);
    return _result;
}

bool RDC::OCC::BSplCLib::RemoveKnot(int Index, int Mult, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColgp_Array1OfPnt^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, double Tolerance)
{
    bool _result = ::BSplCLib::RemoveKnot(Index, Mult, Degree, Periodic, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Tolerance);
    return _result;
}

bool RDC::OCC::BSplCLib::RemoveKnot(int Index, int Mult, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColgp_Array1OfPnt2d^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, double Tolerance)
{
    bool _result = ::BSplCLib::RemoveKnot(Index, Mult, Degree, Periodic, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array1OfPnt2d*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Tolerance);
    return _result;
}

int RDC::OCC::BSplCLib::IncreaseDegreeCountKnots(int Degree, int NewDegree, bool Periodic, RDC::OCC::TColStd_Array1OfInteger^ Mults)
{
    int _result = ::BSplCLib::IncreaseDegreeCountKnots(Degree, NewDegree, Periodic, *(::TColStd_Array1OfInteger*)Mults->NativeInstance);
    return _result;
}

void RDC::OCC::BSplCLib::IncreaseDegree(int Degree, int NewDegree, bool Periodic, int Dimension, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults)
{
    ::BSplCLib::IncreaseDegree(Degree, NewDegree, Periodic, Dimension, *(::TColStd_Array1OfReal*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)NewPoles->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance);
}

void RDC::OCC::BSplCLib::IncreaseDegree(int Degree, int NewDegree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColgp_Array1OfPnt^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults)
{
    ::BSplCLib::IncreaseDegree(Degree, NewDegree, Periodic, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance);
}

void RDC::OCC::BSplCLib::IncreaseDegree(int Degree, int NewDegree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColgp_Array1OfPnt2d^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults)
{
    ::BSplCLib::IncreaseDegree(Degree, NewDegree, Periodic, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array1OfPnt2d*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance);
}

void RDC::OCC::BSplCLib::IncreaseDegree(int NewDegree, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColgp_Array1OfPnt^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights)
{
    ::BSplCLib::IncreaseDegree(NewDegree, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance);
}

void RDC::OCC::BSplCLib::IncreaseDegree(int theNewDegree, RDC::OCC::TColgp_Array1OfPnt2d^ thePoles, RDC::OCC::TColStd_Array1OfReal^ theWeights, RDC::OCC::TColgp_Array1OfPnt2d^ theNewPoles, RDC::OCC::TColStd_Array1OfReal^ theNewWeights)
{
    ::BSplCLib::IncreaseDegree(theNewDegree, *(::TColgp_Array1OfPnt2d*)thePoles->NativeInstance, (::TColStd_Array1OfReal*)theWeights->NativeInstance, *(::TColgp_Array1OfPnt2d*)theNewPoles->NativeInstance, (::TColStd_Array1OfReal*)theNewWeights->NativeInstance);
}

void RDC::OCC::BSplCLib::PrepareUnperiodize(int Degree, RDC::OCC::TColStd_Array1OfInteger^ Mults, int% NbKnots, int% NbPoles)
{
    pin_ptr<int> pp_NbKnots = &NbKnots;
    pin_ptr<int> pp_NbPoles = &NbPoles;
    ::BSplCLib::PrepareUnperiodize(Degree, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(int*)pp_NbKnots, *(int*)pp_NbPoles);
}

void RDC::OCC::BSplCLib::Unperiodize(int Degree, int Dimension, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfInteger^ NewMults, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfReal^ NewPoles)
{
    ::BSplCLib::Unperiodize(Degree, Dimension, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfReal*)Poles->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfReal*)NewPoles->NativeInstance);
}

void RDC::OCC::BSplCLib::Unperiodize(int Degree, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfInteger^ NewMults, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColgp_Array1OfPnt^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights)
{
    ::BSplCLib::Unperiodize(Degree, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance);
}

void RDC::OCC::BSplCLib::Unperiodize(int Degree, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfInteger^ NewMults, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColgp_Array1OfPnt2d^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights)
{
    ::BSplCLib::Unperiodize(Degree, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColgp_Array1OfPnt2d*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance);
}

void RDC::OCC::BSplCLib::PrepareTrimming(int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double U1, double U2, int% NbKnots, int% NbPoles)
{
    pin_ptr<int> pp_NbKnots = &NbKnots;
    pin_ptr<int> pp_NbPoles = &NbPoles;
    ::BSplCLib::PrepareTrimming(Degree, Periodic, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, U1, U2, *(int*)pp_NbKnots, *(int*)pp_NbPoles);
}

void RDC::OCC::BSplCLib::Trimming(int Degree, bool Periodic, int Dimension, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColStd_Array1OfReal^ Poles, double U1, double U2, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, RDC::OCC::TColStd_Array1OfReal^ NewPoles)
{
    ::BSplCLib::Trimming(Degree, Periodic, Dimension, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)Poles->NativeInstance, U1, U2, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, *(::TColStd_Array1OfReal*)NewPoles->NativeInstance);
}

void RDC::OCC::BSplCLib::Trimming(int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, double U1, double U2, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, RDC::OCC::TColgp_Array1OfPnt^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights)
{
    ::BSplCLib::Trimming(Degree, Periodic, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, U1, U2, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance);
}

void RDC::OCC::BSplCLib::Trimming(int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, double U1, double U2, RDC::OCC::TColStd_Array1OfReal^ NewKnots, RDC::OCC::TColStd_Array1OfInteger^ NewMults, RDC::OCC::TColgp_Array1OfPnt2d^ NewPoles, RDC::OCC::TColStd_Array1OfReal^ NewWeights)
{
    ::BSplCLib::Trimming(Degree, Periodic, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, U1, U2, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, *(::TColgp_Array1OfPnt2d*)NewPoles->NativeInstance, (::TColStd_Array1OfReal*)NewWeights->NativeInstance);
}

void RDC::OCC::BSplCLib::D0(double U, int Index, int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double% P)
{
    pin_ptr<double> pp_P = &P;
    ::BSplCLib::D0(U, Index, Degree, Periodic, *(::TColStd_Array1OfReal*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(double*)pp_P);
}

void RDC::OCC::BSplCLib::D0(double U, int Index, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::Pnt% P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ::BSplCLib::D0(U, Index, Degree, Periodic, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(gp_Pnt*)pp_P);
}

void RDC::OCC::BSplCLib::D0(double U, int UIndex, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ::BSplCLib::D0(U, UIndex, Degree, Periodic, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::BSplCLib::D0(double U, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ::BSplCLib::D0(U, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_P);
}

void RDC::OCC::BSplCLib::D0(double U, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% P)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    ::BSplCLib::D0(U, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_P);
}

void RDC::OCC::BSplCLib::D1(double U, int Index, int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double% P, double% V)
{
    pin_ptr<double> pp_P = &P;
    pin_ptr<double> pp_V = &V;
    ::BSplCLib::D1(U, Index, Degree, Periodic, *(::TColStd_Array1OfReal*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(double*)pp_P, *(double*)pp_V);
}

void RDC::OCC::BSplCLib::D1(double U, int Index, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::Pnt% P, RDC::OCC::Vec% V)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V = &V;
    ::BSplCLib::D1(U, Index, Degree, Periodic, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void RDC::OCC::BSplCLib::D1(double U, int UIndex, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    ::BSplCLib::D1(U, UIndex, Degree, Periodic, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V);
}

void RDC::OCC::BSplCLib::D1(double U, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% P, RDC::OCC::Vec% V)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V = &V;
    ::BSplCLib::D1(U, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void RDC::OCC::BSplCLib::D1(double U, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    ::BSplCLib::D1(U, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V);
}

void RDC::OCC::BSplCLib::D2(double U, int Index, int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double% P, double% V1, double% V2)
{
    pin_ptr<double> pp_P = &P;
    pin_ptr<double> pp_V1 = &V1;
    pin_ptr<double> pp_V2 = &V2;
    ::BSplCLib::D2(U, Index, Degree, Periodic, *(::TColStd_Array1OfReal*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(double*)pp_P, *(double*)pp_V1, *(double*)pp_V2);
}

void RDC::OCC::BSplCLib::D2(double U, int Index, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ::BSplCLib::D2(U, Index, Degree, Periodic, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::BSplCLib::D2(double U, int UIndex, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ::BSplCLib::D2(U, UIndex, Degree, Periodic, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::BSplCLib::D2(double U, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    ::BSplCLib::D2(U, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::BSplCLib::D2(double U, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    ::BSplCLib::D2(U, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void RDC::OCC::BSplCLib::D3(double U, int Index, int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double% P, double% V1, double% V2, double% V3)
{
    pin_ptr<double> pp_P = &P;
    pin_ptr<double> pp_V1 = &V1;
    pin_ptr<double> pp_V2 = &V2;
    pin_ptr<double> pp_V3 = &V3;
    ::BSplCLib::D3(U, Index, Degree, Periodic, *(::TColStd_Array1OfReal*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(double*)pp_P, *(double*)pp_V1, *(double*)pp_V2, *(double*)pp_V3);
}

void RDC::OCC::BSplCLib::D3(double U, int Index, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ::BSplCLib::D3(U, Index, Degree, Periodic, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

void RDC::OCC::BSplCLib::D3(double U, int UIndex, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ::BSplCLib::D3(U, UIndex, Degree, Periodic, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

void RDC::OCC::BSplCLib::D3(double U, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
    ::BSplCLib::D3(U, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

void RDC::OCC::BSplCLib::D3(double U, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% P, RDC::OCC::Vec2d% V1, RDC::OCC::Vec2d% V2, RDC::OCC::Vec2d% V3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P = &P;
    pin_ptr<RDC::OCC::Vec2d> pp_V1 = &V1;
    pin_ptr<RDC::OCC::Vec2d> pp_V2 = &V2;
    pin_ptr<RDC::OCC::Vec2d> pp_V3 = &V3;
    ::BSplCLib::D3(U, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

void RDC::OCC::BSplCLib::DN(double U, int N, int Index, int Degree, bool Periodic, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double% VN)
{
    pin_ptr<double> pp_VN = &VN;
    ::BSplCLib::DN(U, N, Index, Degree, Periodic, *(::TColStd_Array1OfReal*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(double*)pp_VN);
}

void RDC::OCC::BSplCLib::DN(double U, int N, int Index, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::Vec% VN)
{
    pin_ptr<RDC::OCC::Vec> pp_VN = &VN;
    ::BSplCLib::DN(U, N, Index, Degree, Periodic, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(gp_Vec*)pp_VN);
}

void RDC::OCC::BSplCLib::DN(double U, int N, int UIndex, int Degree, bool Periodic, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, RDC::OCC::Vec2d% V)
{
    pin_ptr<RDC::OCC::Vec2d> pp_V = &V;
    ::BSplCLib::DN(U, N, UIndex, Degree, Periodic, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, *(gp_Vec2d*)pp_V);
}

void RDC::OCC::BSplCLib::MergeBSplineKnots(double Tolerance, double StartValue, double EndValue, int Degree1, RDC::OCC::TColStd_Array1OfReal^ Knots1, RDC::OCC::TColStd_Array1OfInteger^ Mults1, int Degree2, RDC::OCC::TColStd_Array1OfReal^ Knots2, RDC::OCC::TColStd_Array1OfInteger^ Mults2, int% NumPoles, RDC::OCC::TColStd_HArray1OfReal^ NewKnots, RDC::OCC::TColStd_HArray1OfInteger^ NewMults)
{
    pin_ptr<int> pp_NumPoles = &NumPoles;
    Handle(::TColStd_HArray1OfReal) h_NewKnots = NewKnots->NativeInstance;
    Handle(::TColStd_HArray1OfInteger) h_NewMults = NewMults->NativeInstance;
    ::BSplCLib::MergeBSplineKnots(Tolerance, StartValue, EndValue, Degree1, *(::TColStd_Array1OfReal*)Knots1->NativeInstance, *(::TColStd_Array1OfInteger*)Mults1->NativeInstance, Degree2, *(::TColStd_Array1OfReal*)Knots2->NativeInstance, *(::TColStd_Array1OfInteger*)Mults2->NativeInstance, *(int*)pp_NumPoles, h_NewKnots, h_NewMults);
    NewKnots->NativeInstance = h_NewKnots.get();
    NewMults->NativeInstance = h_NewMults.get();
}

void RDC::OCC::BSplCLib::FunctionReparameterise(RDC::OCC::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, RDC::OCC::TColStd_Array1OfReal^ BSplineFlatKnots, int PolesDimension, double% Poles, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int NewDegree, double% NewPoles, int% theStatus)
{
    pin_ptr<double> pp_Poles = &Poles;
    pin_ptr<double> pp_NewPoles = &NewPoles;
    pin_ptr<int> pp_theStatus = &theStatus;
    ::BSplCLib::FunctionReparameterise(*(::BSplCLib_EvaluatorFunction*)Function->NativeInstance, BSplineDegree, *(::TColStd_Array1OfReal*)BSplineFlatKnots->NativeInstance, PolesDimension, *(double*)pp_Poles, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, NewDegree, *(double*)pp_NewPoles, *(int*)pp_theStatus);
}

void RDC::OCC::BSplCLib::FunctionReparameterise(RDC::OCC::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, RDC::OCC::TColStd_Array1OfReal^ BSplineFlatKnots, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int NewDegree, RDC::OCC::TColStd_Array1OfReal^ NewPoles, int% theStatus)
{
    pin_ptr<int> pp_theStatus = &theStatus;
    ::BSplCLib::FunctionReparameterise(*(::BSplCLib_EvaluatorFunction*)Function->NativeInstance, BSplineDegree, *(::TColStd_Array1OfReal*)BSplineFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, NewDegree, *(::TColStd_Array1OfReal*)NewPoles->NativeInstance, *(int*)pp_theStatus);
}

void RDC::OCC::BSplCLib::FunctionReparameterise(RDC::OCC::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, RDC::OCC::TColStd_Array1OfReal^ BSplineFlatKnots, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int NewDegree, RDC::OCC::TColgp_Array1OfPnt^ NewPoles, int% theStatus)
{
    pin_ptr<int> pp_theStatus = &theStatus;
    ::BSplCLib::FunctionReparameterise(*(::BSplCLib_EvaluatorFunction*)Function->NativeInstance, BSplineDegree, *(::TColStd_Array1OfReal*)BSplineFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, NewDegree, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance, *(int*)pp_theStatus);
}

void RDC::OCC::BSplCLib::FunctionReparameterise(RDC::OCC::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, RDC::OCC::TColStd_Array1OfReal^ BSplineFlatKnots, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int NewDegree, RDC::OCC::TColgp_Array1OfPnt2d^ NewPoles, int% theStatus)
{
    pin_ptr<int> pp_theStatus = &theStatus;
    ::BSplCLib::FunctionReparameterise(*(::BSplCLib_EvaluatorFunction*)Function->NativeInstance, BSplineDegree, *(::TColStd_Array1OfReal*)BSplineFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, NewDegree, *(::TColgp_Array1OfPnt2d*)NewPoles->NativeInstance, *(int*)pp_theStatus);
}

void RDC::OCC::BSplCLib::FunctionMultiply(RDC::OCC::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, RDC::OCC::TColStd_Array1OfReal^ BSplineFlatKnots, int PolesDimension, double% Poles, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int NewDegree, double% NewPoles, int% theStatus)
{
    pin_ptr<double> pp_Poles = &Poles;
    pin_ptr<double> pp_NewPoles = &NewPoles;
    pin_ptr<int> pp_theStatus = &theStatus;
    ::BSplCLib::FunctionMultiply(*(::BSplCLib_EvaluatorFunction*)Function->NativeInstance, BSplineDegree, *(::TColStd_Array1OfReal*)BSplineFlatKnots->NativeInstance, PolesDimension, *(double*)pp_Poles, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, NewDegree, *(double*)pp_NewPoles, *(int*)pp_theStatus);
}

void RDC::OCC::BSplCLib::FunctionMultiply(RDC::OCC::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, RDC::OCC::TColStd_Array1OfReal^ BSplineFlatKnots, RDC::OCC::TColStd_Array1OfReal^ Poles, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int NewDegree, RDC::OCC::TColStd_Array1OfReal^ NewPoles, int% theStatus)
{
    pin_ptr<int> pp_theStatus = &theStatus;
    ::BSplCLib::FunctionMultiply(*(::BSplCLib_EvaluatorFunction*)Function->NativeInstance, BSplineDegree, *(::TColStd_Array1OfReal*)BSplineFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, NewDegree, *(::TColStd_Array1OfReal*)NewPoles->NativeInstance, *(int*)pp_theStatus);
}

void RDC::OCC::BSplCLib::FunctionMultiply(RDC::OCC::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, RDC::OCC::TColStd_Array1OfReal^ BSplineFlatKnots, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int NewDegree, RDC::OCC::TColgp_Array1OfPnt2d^ NewPoles, int% theStatus)
{
    pin_ptr<int> pp_theStatus = &theStatus;
    ::BSplCLib::FunctionMultiply(*(::BSplCLib_EvaluatorFunction*)Function->NativeInstance, BSplineDegree, *(::TColStd_Array1OfReal*)BSplineFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, NewDegree, *(::TColgp_Array1OfPnt2d*)NewPoles->NativeInstance, *(int*)pp_theStatus);
}

void RDC::OCC::BSplCLib::FunctionMultiply(RDC::OCC::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, RDC::OCC::TColStd_Array1OfReal^ BSplineFlatKnots, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int NewDegree, RDC::OCC::TColgp_Array1OfPnt^ NewPoles, int% theStatus)
{
    pin_ptr<int> pp_theStatus = &theStatus;
    ::BSplCLib::FunctionMultiply(*(::BSplCLib_EvaluatorFunction*)Function->NativeInstance, BSplineDegree, *(::TColStd_Array1OfReal*)BSplineFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, NewDegree, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance, *(int*)pp_theStatus);
}

void RDC::OCC::BSplCLib::Eval(double U, bool PeriodicFlag, int DerivativeRequest, int% ExtrapMode, int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int ArrayDimension, double% Poles, double% Result)
{
    pin_ptr<int> pp_ExtrapMode = &ExtrapMode;
    pin_ptr<double> pp_Poles = &Poles;
    pin_ptr<double> pp_Result = &Result;
    ::BSplCLib::Eval(U, PeriodicFlag, DerivativeRequest, *(int*)pp_ExtrapMode, Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, ArrayDimension, *(double*)pp_Poles, *(double*)pp_Result);
}

void RDC::OCC::BSplCLib::Eval(double U, bool PeriodicFlag, int DerivativeRequest, int% ExtrapMode, int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int ArrayDimension, double% Poles, double% Weights, double% PolesResult, double% WeightsResult)
{
    pin_ptr<int> pp_ExtrapMode = &ExtrapMode;
    pin_ptr<double> pp_Poles = &Poles;
    pin_ptr<double> pp_Weights = &Weights;
    pin_ptr<double> pp_PolesResult = &PolesResult;
    pin_ptr<double> pp_WeightsResult = &WeightsResult;
    ::BSplCLib::Eval(U, PeriodicFlag, DerivativeRequest, *(int*)pp_ExtrapMode, Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, ArrayDimension, *(double*)pp_Poles, *(double*)pp_Weights, *(double*)pp_PolesResult, *(double*)pp_WeightsResult);
}

void RDC::OCC::BSplCLib::Eval(double U, bool PeriodicFlag, bool HomogeneousFlag, int% ExtrapMode, int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% Point, double% Weight)
{
    pin_ptr<int> pp_ExtrapMode = &ExtrapMode;
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<double> pp_Weight = &Weight;
    ::BSplCLib::Eval(U, PeriodicFlag, HomogeneousFlag, *(int*)pp_ExtrapMode, Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(double*)pp_Weight);
}

void RDC::OCC::BSplCLib::Eval(double U, bool PeriodicFlag, bool HomogeneousFlag, int% ExtrapMode, int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% Point, double% Weight)
{
    pin_ptr<int> pp_ExtrapMode = &ExtrapMode;
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    pin_ptr<double> pp_Weight = &Weight;
    ::BSplCLib::Eval(U, PeriodicFlag, HomogeneousFlag, *(int*)pp_ExtrapMode, Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_Point, *(double*)pp_Weight);
}

void RDC::OCC::BSplCLib::TangExtendToConstraint(RDC::OCC::TColStd_Array1OfReal^ FlatKnots, double C1Coefficient, int NumPoles, double% Poles, int Dimension, int Degree, RDC::OCC::TColStd_Array1OfReal^ ConstraintPoint, int Continuity, bool After, int% NbPolesResult, int% NbKnotsRsult, double% KnotsResult, double% PolesResult)
{
    pin_ptr<double> pp_Poles = &Poles;
    pin_ptr<int> pp_NbPolesResult = &NbPolesResult;
    pin_ptr<int> pp_NbKnotsRsult = &NbKnotsRsult;
    pin_ptr<double> pp_KnotsResult = &KnotsResult;
    pin_ptr<double> pp_PolesResult = &PolesResult;
    ::BSplCLib::TangExtendToConstraint(*(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, C1Coefficient, NumPoles, *(double*)pp_Poles, Dimension, Degree, *(::TColStd_Array1OfReal*)ConstraintPoint->NativeInstance, Continuity, After, *(int*)pp_NbPolesResult, *(int*)pp_NbKnotsRsult, *(double*)pp_KnotsResult, *(double*)pp_PolesResult);
}

void RDC::OCC::BSplCLib::CacheD0(double U, int Degree, double CacheParameter, double SpanLenght, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% Point)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    ::BSplCLib::CacheD0(U, Degree, CacheParameter, SpanLenght, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point);
}

void RDC::OCC::BSplCLib::CacheD0(double U, int Degree, double CacheParameter, double SpanLenght, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% Point)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    ::BSplCLib::CacheD0(U, Degree, CacheParameter, SpanLenght, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_Point);
}

void RDC::OCC::BSplCLib::CoefsD0(double U, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% Point)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    ::BSplCLib::CoefsD0(U, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point);
}

void RDC::OCC::BSplCLib::CoefsD0(double U, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% Point)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    ::BSplCLib::CoefsD0(U, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_Point);
}

void RDC::OCC::BSplCLib::CacheD1(double U, int Degree, double CacheParameter, double SpanLenght, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% Point, RDC::OCC::Vec% Vec)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec> pp_Vec = &Vec;
    ::BSplCLib::CacheD1(U, Degree, CacheParameter, SpanLenght, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_Vec);
}

void RDC::OCC::BSplCLib::CacheD1(double U, int Degree, double CacheParameter, double SpanLenght, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% Point, RDC::OCC::Vec2d% Vec)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec2d> pp_Vec = &Vec;
    ::BSplCLib::CacheD1(U, Degree, CacheParameter, SpanLenght, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_Point, *(gp_Vec2d*)pp_Vec);
}

void RDC::OCC::BSplCLib::CoefsD1(double U, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% Point, RDC::OCC::Vec% Vec)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec> pp_Vec = &Vec;
    ::BSplCLib::CoefsD1(U, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_Vec);
}

void RDC::OCC::BSplCLib::CoefsD1(double U, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% Point, RDC::OCC::Vec2d% Vec)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec2d> pp_Vec = &Vec;
    ::BSplCLib::CoefsD1(U, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_Point, *(gp_Vec2d*)pp_Vec);
}

void RDC::OCC::BSplCLib::CacheD2(double U, int Degree, double CacheParameter, double SpanLenght, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% Point, RDC::OCC::Vec% Vec1, RDC::OCC::Vec% Vec2)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec> pp_Vec1 = &Vec1;
    pin_ptr<RDC::OCC::Vec> pp_Vec2 = &Vec2;
    ::BSplCLib::CacheD2(U, Degree, CacheParameter, SpanLenght, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_Vec1, *(gp_Vec*)pp_Vec2);
}

void RDC::OCC::BSplCLib::CacheD2(double U, int Degree, double CacheParameter, double SpanLenght, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% Point, RDC::OCC::Vec2d% Vec1, RDC::OCC::Vec2d% Vec2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec2d> pp_Vec1 = &Vec1;
    pin_ptr<RDC::OCC::Vec2d> pp_Vec2 = &Vec2;
    ::BSplCLib::CacheD2(U, Degree, CacheParameter, SpanLenght, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_Point, *(gp_Vec2d*)pp_Vec1, *(gp_Vec2d*)pp_Vec2);
}

void RDC::OCC::BSplCLib::CoefsD2(double U, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% Point, RDC::OCC::Vec% Vec1, RDC::OCC::Vec% Vec2)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec> pp_Vec1 = &Vec1;
    pin_ptr<RDC::OCC::Vec> pp_Vec2 = &Vec2;
    ::BSplCLib::CoefsD2(U, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_Vec1, *(gp_Vec*)pp_Vec2);
}

void RDC::OCC::BSplCLib::CoefsD2(double U, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% Point, RDC::OCC::Vec2d% Vec1, RDC::OCC::Vec2d% Vec2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec2d> pp_Vec1 = &Vec1;
    pin_ptr<RDC::OCC::Vec2d> pp_Vec2 = &Vec2;
    ::BSplCLib::CoefsD2(U, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_Point, *(gp_Vec2d*)pp_Vec1, *(gp_Vec2d*)pp_Vec2);
}

void RDC::OCC::BSplCLib::CacheD3(double U, int Degree, double CacheParameter, double SpanLenght, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% Point, RDC::OCC::Vec% Vec1, RDC::OCC::Vec% Vec2, RDC::OCC::Vec% Vec3)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec> pp_Vec1 = &Vec1;
    pin_ptr<RDC::OCC::Vec> pp_Vec2 = &Vec2;
    pin_ptr<RDC::OCC::Vec> pp_Vec3 = &Vec3;
    ::BSplCLib::CacheD3(U, Degree, CacheParameter, SpanLenght, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_Vec1, *(gp_Vec*)pp_Vec2, *(gp_Vec*)pp_Vec3);
}

void RDC::OCC::BSplCLib::CacheD3(double U, int Degree, double CacheParameter, double SpanLenght, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% Point, RDC::OCC::Vec2d% Vec1, RDC::OCC::Vec2d% Vec2, RDC::OCC::Vec2d% Vec3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec2d> pp_Vec1 = &Vec1;
    pin_ptr<RDC::OCC::Vec2d> pp_Vec2 = &Vec2;
    pin_ptr<RDC::OCC::Vec2d> pp_Vec3 = &Vec3;
    ::BSplCLib::CacheD3(U, Degree, CacheParameter, SpanLenght, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_Point, *(gp_Vec2d*)pp_Vec1, *(gp_Vec2d*)pp_Vec2, *(gp_Vec2d*)pp_Vec3);
}

void RDC::OCC::BSplCLib::CoefsD3(double U, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt% Point, RDC::OCC::Vec% Vec1, RDC::OCC::Vec% Vec2, RDC::OCC::Vec% Vec3)
{
    pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec> pp_Vec1 = &Vec1;
    pin_ptr<RDC::OCC::Vec> pp_Vec2 = &Vec2;
    pin_ptr<RDC::OCC::Vec> pp_Vec3 = &Vec3;
    ::BSplCLib::CoefsD3(U, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_Vec1, *(gp_Vec*)pp_Vec2, *(gp_Vec*)pp_Vec3);
}

void RDC::OCC::BSplCLib::CoefsD3(double U, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::Pnt2d% Point, RDC::OCC::Vec2d% Vec1, RDC::OCC::Vec2d% Vec2, RDC::OCC::Vec2d% Vec3)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_Point = &Point;
    pin_ptr<RDC::OCC::Vec2d> pp_Vec1 = &Vec1;
    pin_ptr<RDC::OCC::Vec2d> pp_Vec2 = &Vec2;
    pin_ptr<RDC::OCC::Vec2d> pp_Vec3 = &Vec3;
    ::BSplCLib::CoefsD3(U, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(gp_Pnt2d*)pp_Point, *(gp_Vec2d*)pp_Vec1, *(gp_Vec2d*)pp_Vec2, *(gp_Vec2d*)pp_Vec3);
}

void RDC::OCC::BSplCLib::BuildCache(double U, double InverseOfSpanDomain, bool PeriodicFlag, int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColgp_Array1OfPnt^ CachePoles, RDC::OCC::TColStd_Array1OfReal^ CacheWeights)
{
    ::BSplCLib::BuildCache(U, InverseOfSpanDomain, PeriodicFlag, Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColgp_Array1OfPnt*)CachePoles->NativeInstance, (::TColStd_Array1OfReal*)CacheWeights->NativeInstance);
}

void RDC::OCC::BSplCLib::BuildCache(double U, double InverseOfSpanDomain, bool PeriodicFlag, int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColgp_Array1OfPnt2d^ CachePoles, RDC::OCC::TColStd_Array1OfReal^ CacheWeights)
{
    ::BSplCLib::BuildCache(U, InverseOfSpanDomain, PeriodicFlag, Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColgp_Array1OfPnt2d*)CachePoles->NativeInstance, (::TColStd_Array1OfReal*)CacheWeights->NativeInstance);
}

void RDC::OCC::BSplCLib::BuildCache(double theParameter, double theSpanDomain, bool thePeriodicFlag, int theDegree, int theSpanIndex, RDC::OCC::TColStd_Array1OfReal^ theFlatKnots, RDC::OCC::TColgp_Array1OfPnt^ thePoles, RDC::OCC::TColStd_Array1OfReal^ theWeights, RDC::OCC::TColStd_Array2OfReal^ theCacheArray)
{
    ::BSplCLib::BuildCache(theParameter, theSpanDomain, thePeriodicFlag, theDegree, theSpanIndex, *(::TColStd_Array1OfReal*)theFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt*)thePoles->NativeInstance, (::TColStd_Array1OfReal*)theWeights->NativeInstance, *(::TColStd_Array2OfReal*)theCacheArray->NativeInstance);
}

void RDC::OCC::BSplCLib::BuildCache(double theParameter, double theSpanDomain, bool thePeriodicFlag, int theDegree, int theSpanIndex, RDC::OCC::TColStd_Array1OfReal^ theFlatKnots, RDC::OCC::TColgp_Array1OfPnt2d^ thePoles, RDC::OCC::TColStd_Array1OfReal^ theWeights, RDC::OCC::TColStd_Array2OfReal^ theCacheArray)
{
    ::BSplCLib::BuildCache(theParameter, theSpanDomain, thePeriodicFlag, theDegree, theSpanIndex, *(::TColStd_Array1OfReal*)theFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt2d*)thePoles->NativeInstance, (::TColStd_Array1OfReal*)theWeights->NativeInstance, *(::TColStd_Array2OfReal*)theCacheArray->NativeInstance);
}

void RDC::OCC::BSplCLib::PolesCoefficients(RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColgp_Array1OfPnt2d^ CachePoles)
{
    ::BSplCLib::PolesCoefficients(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColgp_Array1OfPnt2d*)CachePoles->NativeInstance);
}

void RDC::OCC::BSplCLib::PolesCoefficients(RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColgp_Array1OfPnt2d^ CachePoles, RDC::OCC::TColStd_Array1OfReal^ CacheWeights)
{
    ::BSplCLib::PolesCoefficients(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColgp_Array1OfPnt2d*)CachePoles->NativeInstance, (::TColStd_Array1OfReal*)CacheWeights->NativeInstance);
}

void RDC::OCC::BSplCLib::PolesCoefficients(RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColgp_Array1OfPnt^ CachePoles)
{
    ::BSplCLib::PolesCoefficients(*(::TColgp_Array1OfPnt*)Poles->NativeInstance, *(::TColgp_Array1OfPnt*)CachePoles->NativeInstance);
}

void RDC::OCC::BSplCLib::PolesCoefficients(RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColgp_Array1OfPnt^ CachePoles, RDC::OCC::TColStd_Array1OfReal^ CacheWeights)
{
    ::BSplCLib::PolesCoefficients(*(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColgp_Array1OfPnt*)CachePoles->NativeInstance, (::TColStd_Array1OfReal*)CacheWeights->NativeInstance);
}

double RDC::OCC::BSplCLib::FlatBezierKnots(int Degree)
{
    double _result = ::BSplCLib::FlatBezierKnots(Degree);
    return _result;
}

void RDC::OCC::BSplCLib::BuildSchoenbergPoints(int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColStd_Array1OfReal^ Parameters)
{
    ::BSplCLib::BuildSchoenbergPoints(Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance);
}

void RDC::OCC::BSplCLib::Interpolate(int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColStd_Array1OfReal^ Parameters, RDC::OCC::TColStd_Array1OfInteger^ ContactOrderArray, RDC::OCC::TColgp_Array1OfPnt^ Poles, int% InversionProblem)
{
    pin_ptr<int> pp_InversionProblem = &InversionProblem;
    ::BSplCLib::Interpolate(Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, *(::TColStd_Array1OfInteger*)ContactOrderArray->NativeInstance, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, *(int*)pp_InversionProblem);
}

void RDC::OCC::BSplCLib::Interpolate(int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColStd_Array1OfReal^ Parameters, RDC::OCC::TColStd_Array1OfInteger^ ContactOrderArray, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, int% InversionProblem)
{
    pin_ptr<int> pp_InversionProblem = &InversionProblem;
    ::BSplCLib::Interpolate(Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, *(::TColStd_Array1OfInteger*)ContactOrderArray->NativeInstance, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(int*)pp_InversionProblem);
}

void RDC::OCC::BSplCLib::Interpolate(int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColStd_Array1OfReal^ Parameters, RDC::OCC::TColStd_Array1OfInteger^ ContactOrderArray, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, int% InversionProblem)
{
    pin_ptr<int> pp_InversionProblem = &InversionProblem;
    ::BSplCLib::Interpolate(Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, *(::TColStd_Array1OfInteger*)ContactOrderArray->NativeInstance, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Weights->NativeInstance, *(int*)pp_InversionProblem);
}

void RDC::OCC::BSplCLib::Interpolate(int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColStd_Array1OfReal^ Parameters, RDC::OCC::TColStd_Array1OfInteger^ ContactOrderArray, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, int% InversionProblem)
{
    pin_ptr<int> pp_InversionProblem = &InversionProblem;
    ::BSplCLib::Interpolate(Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, *(::TColStd_Array1OfInteger*)ContactOrderArray->NativeInstance, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Weights->NativeInstance, *(int*)pp_InversionProblem);
}

void RDC::OCC::BSplCLib::Interpolate(int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColStd_Array1OfReal^ Parameters, RDC::OCC::TColStd_Array1OfInteger^ ContactOrderArray, int ArrayDimension, double% Poles, int% InversionProblem)
{
    pin_ptr<double> pp_Poles = &Poles;
    pin_ptr<int> pp_InversionProblem = &InversionProblem;
    ::BSplCLib::Interpolate(Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, *(::TColStd_Array1OfInteger*)ContactOrderArray->NativeInstance, ArrayDimension, *(double*)pp_Poles, *(int*)pp_InversionProblem);
}

void RDC::OCC::BSplCLib::Interpolate(int Degree, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColStd_Array1OfReal^ Parameters, RDC::OCC::TColStd_Array1OfInteger^ ContactOrderArray, int ArrayDimension, double% Poles, double% Weights, int% InversionProblem)
{
    pin_ptr<double> pp_Poles = &Poles;
    pin_ptr<double> pp_Weights = &Weights;
    pin_ptr<int> pp_InversionProblem = &InversionProblem;
    ::BSplCLib::Interpolate(Degree, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, *(::TColStd_Array1OfInteger*)ContactOrderArray->NativeInstance, ArrayDimension, *(double*)pp_Poles, *(double*)pp_Weights, *(int*)pp_InversionProblem);
}

void RDC::OCC::BSplCLib::MovePoint(double U, RDC::OCC::Vec2d Displ, int Index1, int Index2, int Degree, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int% FirstIndex, int% LastIndex, RDC::OCC::TColgp_Array1OfPnt2d^ NewPoles)
{
    pin_ptr<RDC::OCC::Vec2d> pp_Displ = &Displ;
    pin_ptr<int> pp_FirstIndex = &FirstIndex;
    pin_ptr<int> pp_LastIndex = &LastIndex;
    ::BSplCLib::MovePoint(U, *(gp_Vec2d*)pp_Displ, Index1, Index2, Degree, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(int*)pp_FirstIndex, *(int*)pp_LastIndex, *(::TColgp_Array1OfPnt2d*)NewPoles->NativeInstance);
}

void RDC::OCC::BSplCLib::MovePoint(double U, RDC::OCC::Vec Displ, int Index1, int Index2, int Degree, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int% FirstIndex, int% LastIndex, RDC::OCC::TColgp_Array1OfPnt^ NewPoles)
{
    pin_ptr<RDC::OCC::Vec> pp_Displ = &Displ;
    pin_ptr<int> pp_FirstIndex = &FirstIndex;
    pin_ptr<int> pp_LastIndex = &LastIndex;
    ::BSplCLib::MovePoint(U, *(gp_Vec*)pp_Displ, Index1, Index2, Degree, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(int*)pp_FirstIndex, *(int*)pp_LastIndex, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance);
}

void RDC::OCC::BSplCLib::MovePointAndTangent(double U, int ArrayDimension, double% Delta, double% DeltaDerivative, double Tolerance, int Degree, int StartingCondition, int EndingCondition, double% Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, double% NewPoles, int% ErrorStatus)
{
    pin_ptr<double> pp_Delta = &Delta;
    pin_ptr<double> pp_DeltaDerivative = &DeltaDerivative;
    pin_ptr<double> pp_Poles = &Poles;
    pin_ptr<double> pp_NewPoles = &NewPoles;
    pin_ptr<int> pp_ErrorStatus = &ErrorStatus;
    ::BSplCLib::MovePointAndTangent(U, ArrayDimension, *(double*)pp_Delta, *(double*)pp_DeltaDerivative, Tolerance, Degree, StartingCondition, EndingCondition, *(double*)pp_Poles, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(double*)pp_NewPoles, *(int*)pp_ErrorStatus);
}

void RDC::OCC::BSplCLib::MovePointAndTangent(double U, RDC::OCC::Vec Delta, RDC::OCC::Vec DeltaDerivative, double Tolerance, int Degree, int StartingCondition, int EndingCondition, RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColgp_Array1OfPnt^ NewPoles, int% ErrorStatus)
{
    pin_ptr<RDC::OCC::Vec> pp_Delta = &Delta;
    pin_ptr<RDC::OCC::Vec> pp_DeltaDerivative = &DeltaDerivative;
    pin_ptr<int> pp_ErrorStatus = &ErrorStatus;
    ::BSplCLib::MovePointAndTangent(U, *(gp_Vec*)pp_Delta, *(gp_Vec*)pp_DeltaDerivative, Tolerance, Degree, StartingCondition, EndingCondition, *(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColgp_Array1OfPnt*)NewPoles->NativeInstance, *(int*)pp_ErrorStatus);
}

void RDC::OCC::BSplCLib::MovePointAndTangent(double U, RDC::OCC::Vec2d Delta, RDC::OCC::Vec2d DeltaDerivative, double Tolerance, int Degree, int StartingCondition, int EndingCondition, RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, RDC::OCC::TColgp_Array1OfPnt2d^ NewPoles, int% ErrorStatus)
{
    pin_ptr<RDC::OCC::Vec2d> pp_Delta = &Delta;
    pin_ptr<RDC::OCC::Vec2d> pp_DeltaDerivative = &DeltaDerivative;
    pin_ptr<int> pp_ErrorStatus = &ErrorStatus;
    ::BSplCLib::MovePointAndTangent(U, *(gp_Vec2d*)pp_Delta, *(gp_Vec2d*)pp_DeltaDerivative, Tolerance, Degree, StartingCondition, EndingCondition, *(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, *(::TColgp_Array1OfPnt2d*)NewPoles->NativeInstance, *(int*)pp_ErrorStatus);
}

void RDC::OCC::BSplCLib::Resolution(double% PolesArray, int ArrayDimension, int NumPoles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int Degree, double Tolerance3D, double% UTolerance)
{
    pin_ptr<double> pp_PolesArray = &PolesArray;
    pin_ptr<double> pp_UTolerance = &UTolerance;
    ::BSplCLib::Resolution(*(double*)pp_PolesArray, ArrayDimension, NumPoles, (::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, Degree, Tolerance3D, *(double*)pp_UTolerance);
}

void RDC::OCC::BSplCLib::Resolution(RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, int NumPoles, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int Degree, double Tolerance3D, double% UTolerance)
{
    pin_ptr<double> pp_UTolerance = &UTolerance;
    ::BSplCLib::Resolution(*(::TColgp_Array1OfPnt*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, NumPoles, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, Degree, Tolerance3D, *(double*)pp_UTolerance);
}

void RDC::OCC::BSplCLib::Resolution(RDC::OCC::TColgp_Array1OfPnt2d^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, int NumPoles, RDC::OCC::TColStd_Array1OfReal^ FlatKnots, int Degree, double Tolerance3D, double% UTolerance)
{
    pin_ptr<double> pp_UTolerance = &UTolerance;
    ::BSplCLib::Resolution(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance, (::TColStd_Array1OfReal*)Weights->NativeInstance, NumPoles, *(::TColStd_Array1OfReal*)FlatKnots->NativeInstance, Degree, Tolerance3D, *(double*)pp_UTolerance);
}

int RDC::OCC::BSplCLib::Intervals(RDC::OCC::TColStd_Array1OfReal^ theKnots, RDC::OCC::TColStd_Array1OfInteger^ theMults, int theDegree, bool isPeriodic, int theContinuity, double theFirst, double theLast, double theTolerance, RDC::OCC::TColStd_Array1OfReal^ theIntervals)
{
    int _result = ::BSplCLib::Intervals(*(::TColStd_Array1OfReal*)theKnots->NativeInstance, *(::TColStd_Array1OfInteger*)theMults->NativeInstance, theDegree, isPeriodic, theContinuity, theFirst, theLast, theTolerance, (::TColStd_Array1OfReal*)theIntervals->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BSplCLib_Cache
//---------------------------------------------------------------------

RDC::OCC::BSplCLib_Cache::BSplCLib_Cache(int theDegree, bool thePeriodic, RDC::OCC::TColStd_Array1OfReal^ theFlatKnots, RDC::OCC::TColgp_Array1OfPnt2d^ thePoles2d, RDC::OCC::TColStd_Array1OfReal^ theWeights)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<int> pp_theDegree = &theDegree;
    pin_ptr<bool> pp_thePeriodic = &thePeriodic;
    NativeInstance = new ::BSplCLib_Cache(*(int*)pp_theDegree, *(bool*)pp_thePeriodic, *(::TColStd_Array1OfReal*)theFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt2d*)thePoles2d->NativeInstance, (::TColStd_Array1OfReal*)theWeights->NativeInstance);
}

RDC::OCC::BSplCLib_Cache::BSplCLib_Cache(int theDegree, bool thePeriodic, RDC::OCC::TColStd_Array1OfReal^ theFlatKnots, RDC::OCC::TColgp_Array1OfPnt2d^ thePoles2d)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<int> pp_theDegree = &theDegree;
    pin_ptr<bool> pp_thePeriodic = &thePeriodic;
    NativeInstance = new ::BSplCLib_Cache(*(int*)pp_theDegree, *(bool*)pp_thePeriodic, *(::TColStd_Array1OfReal*)theFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt2d*)thePoles2d->NativeInstance, nullptr);
}

RDC::OCC::BSplCLib_Cache::BSplCLib_Cache(int theDegree, bool thePeriodic, RDC::OCC::TColStd_Array1OfReal^ theFlatKnots, RDC::OCC::TColgp_Array1OfPnt^ thePoles, RDC::OCC::TColStd_Array1OfReal^ theWeights)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<int> pp_theDegree = &theDegree;
    pin_ptr<bool> pp_thePeriodic = &thePeriodic;
    NativeInstance = new ::BSplCLib_Cache(*(int*)pp_theDegree, *(bool*)pp_thePeriodic, *(::TColStd_Array1OfReal*)theFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt*)thePoles->NativeInstance, (::TColStd_Array1OfReal*)theWeights->NativeInstance);
}

RDC::OCC::BSplCLib_Cache::BSplCLib_Cache(int theDegree, bool thePeriodic, RDC::OCC::TColStd_Array1OfReal^ theFlatKnots, RDC::OCC::TColgp_Array1OfPnt^ thePoles)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<int> pp_theDegree = &theDegree;
    pin_ptr<bool> pp_thePeriodic = &thePeriodic;
    NativeInstance = new ::BSplCLib_Cache(*(int*)pp_theDegree, *(bool*)pp_thePeriodic, *(::TColStd_Array1OfReal*)theFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt*)thePoles->NativeInstance, nullptr);
}

bool RDC::OCC::BSplCLib_Cache::IsCacheValid(double theParameter)
{
    bool _result = ((::BSplCLib_Cache*)_NativeInstance)->IsCacheValid(theParameter);
    return _result;
}

void RDC::OCC::BSplCLib_Cache::BuildCache(double theParameter, RDC::OCC::TColStd_Array1OfReal^ theFlatKnots, RDC::OCC::TColgp_Array1OfPnt2d^ thePoles2d, RDC::OCC::TColStd_Array1OfReal^ theWeights)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    ((::BSplCLib_Cache*)_NativeInstance)->BuildCache(*(double*)pp_theParameter, *(::TColStd_Array1OfReal*)theFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt2d*)thePoles2d->NativeInstance, (::TColStd_Array1OfReal*)theWeights->NativeInstance);
}

void RDC::OCC::BSplCLib_Cache::BuildCache(double theParameter, RDC::OCC::TColStd_Array1OfReal^ theFlatKnots, RDC::OCC::TColgp_Array1OfPnt^ thePoles, RDC::OCC::TColStd_Array1OfReal^ theWeights)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    ((::BSplCLib_Cache*)_NativeInstance)->BuildCache(*(double*)pp_theParameter, *(::TColStd_Array1OfReal*)theFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt*)thePoles->NativeInstance, (::TColStd_Array1OfReal*)theWeights->NativeInstance);
}

void RDC::OCC::BSplCLib_Cache::BuildCache(double theParameter, RDC::OCC::TColStd_Array1OfReal^ theFlatKnots, RDC::OCC::TColgp_Array1OfPnt^ thePoles)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    ((::BSplCLib_Cache*)_NativeInstance)->BuildCache(*(double*)pp_theParameter, *(::TColStd_Array1OfReal*)theFlatKnots->NativeInstance, *(::TColgp_Array1OfPnt*)thePoles->NativeInstance, nullptr);
}

void RDC::OCC::BSplCLib_Cache::D0(double theParameter, RDC::OCC::Pnt2d% thePoint)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    pin_ptr<RDC::OCC::Pnt2d> pp_thePoint = &thePoint;
    ((::BSplCLib_Cache*)_NativeInstance)->D0(*(double*)pp_theParameter, *(gp_Pnt2d*)pp_thePoint);
}

void RDC::OCC::BSplCLib_Cache::D0(double theParameter, RDC::OCC::Pnt% thePoint)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    ((::BSplCLib_Cache*)_NativeInstance)->D0(*(double*)pp_theParameter, *(gp_Pnt*)pp_thePoint);
}

void RDC::OCC::BSplCLib_Cache::D1(double theParameter, RDC::OCC::Pnt2d% thePoint, RDC::OCC::Vec2d% theTangent)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    pin_ptr<RDC::OCC::Pnt2d> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Vec2d> pp_theTangent = &theTangent;
    ((::BSplCLib_Cache*)_NativeInstance)->D1(*(double*)pp_theParameter, *(gp_Pnt2d*)pp_thePoint, *(gp_Vec2d*)pp_theTangent);
}

void RDC::OCC::BSplCLib_Cache::D1(double theParameter, RDC::OCC::Pnt% thePoint, RDC::OCC::Vec% theTangent)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Vec> pp_theTangent = &theTangent;
    ((::BSplCLib_Cache*)_NativeInstance)->D1(*(double*)pp_theParameter, *(gp_Pnt*)pp_thePoint, *(gp_Vec*)pp_theTangent);
}

void RDC::OCC::BSplCLib_Cache::D2(double theParameter, RDC::OCC::Pnt2d% thePoint, RDC::OCC::Vec2d% theTangent, RDC::OCC::Vec2d% theCurvature)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    pin_ptr<RDC::OCC::Pnt2d> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Vec2d> pp_theTangent = &theTangent;
    pin_ptr<RDC::OCC::Vec2d> pp_theCurvature = &theCurvature;
    ((::BSplCLib_Cache*)_NativeInstance)->D2(*(double*)pp_theParameter, *(gp_Pnt2d*)pp_thePoint, *(gp_Vec2d*)pp_theTangent, *(gp_Vec2d*)pp_theCurvature);
}

void RDC::OCC::BSplCLib_Cache::D2(double theParameter, RDC::OCC::Pnt% thePoint, RDC::OCC::Vec% theTangent, RDC::OCC::Vec% theCurvature)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Vec> pp_theTangent = &theTangent;
    pin_ptr<RDC::OCC::Vec> pp_theCurvature = &theCurvature;
    ((::BSplCLib_Cache*)_NativeInstance)->D2(*(double*)pp_theParameter, *(gp_Pnt*)pp_thePoint, *(gp_Vec*)pp_theTangent, *(gp_Vec*)pp_theCurvature);
}

void RDC::OCC::BSplCLib_Cache::D3(double theParameter, RDC::OCC::Pnt2d% thePoint, RDC::OCC::Vec2d% theTangent, RDC::OCC::Vec2d% theCurvature, RDC::OCC::Vec2d% theTorsion)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    pin_ptr<RDC::OCC::Pnt2d> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Vec2d> pp_theTangent = &theTangent;
    pin_ptr<RDC::OCC::Vec2d> pp_theCurvature = &theCurvature;
    pin_ptr<RDC::OCC::Vec2d> pp_theTorsion = &theTorsion;
    ((::BSplCLib_Cache*)_NativeInstance)->D3(*(double*)pp_theParameter, *(gp_Pnt2d*)pp_thePoint, *(gp_Vec2d*)pp_theTangent, *(gp_Vec2d*)pp_theCurvature, *(gp_Vec2d*)pp_theTorsion);
}

void RDC::OCC::BSplCLib_Cache::D3(double theParameter, RDC::OCC::Pnt% thePoint, RDC::OCC::Vec% theTangent, RDC::OCC::Vec% theCurvature, RDC::OCC::Vec% theTorsion)
{
    pin_ptr<double> pp_theParameter = &theParameter;
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    pin_ptr<RDC::OCC::Vec> pp_theTangent = &theTangent;
    pin_ptr<RDC::OCC::Vec> pp_theCurvature = &theCurvature;
    pin_ptr<RDC::OCC::Vec> pp_theTorsion = &theTorsion;
    ((::BSplCLib_Cache*)_NativeInstance)->D3(*(double*)pp_theParameter, *(gp_Pnt*)pp_thePoint, *(gp_Vec*)pp_theTangent, *(gp_Vec*)pp_theCurvature, *(gp_Vec*)pp_theTorsion);
}

RDC::OCC::BSplCLib_Cache^ RDC::OCC::BSplCLib_Cache::CreateDowncasted(::BSplCLib_Cache* instance)
{
    return gcnew RDC::OCC::BSplCLib_Cache( instance );
}



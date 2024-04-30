// Generated wrapper code for package BRepAlgoAPI

#include "OcctPCH.h"
#include "BRepAlgoAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "TopTools.h"
#include "BOPAlgo.h"
#include "Message.h"
#include "BRepTools.h"
#include "gp.h"
#include "Geom.h"


//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Algo
//---------------------------------------------------------------------

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepAlgoAPI_Algo::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepAlgoAPI_Algo*)_NativeInstance)->Shape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_BuilderAlgo
//---------------------------------------------------------------------

RDC::OCC::BRepAlgoAPI_BuilderAlgo::BRepAlgoAPI_BuilderAlgo()
	: RDC::OCC::BRepAlgoAPI_Algo(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_BuilderAlgo();
}

void RDC::OCC::BRepAlgoAPI_BuilderAlgo::SetArguments(RDC::OCC::TopTools_ListOfShape^ theLS)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetArguments(*(::TopTools_ListOfShape*)theLS->NativeInstance);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepAlgoAPI_BuilderAlgo::Arguments()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Arguments();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

void RDC::OCC::BRepAlgoAPI_BuilderAlgo::SetNonDestructive(bool theFlag)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetNonDestructive(theFlag);
}

bool RDC::OCC::BRepAlgoAPI_BuilderAlgo::NonDestructive()
{
	bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->NonDestructive();
	return _result;
}

void RDC::OCC::BRepAlgoAPI_BuilderAlgo::SetGlue(RDC::OCC::BOPAlgo_GlueEnum theGlue)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetGlue((::BOPAlgo_GlueEnum)theGlue);
}

RDC::OCC::BOPAlgo_GlueEnum RDC::OCC::BRepAlgoAPI_BuilderAlgo::Glue()
{
	::BOPAlgo_GlueEnum _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Glue();
	return (RDC::OCC::BOPAlgo_GlueEnum)_result;
}

void RDC::OCC::BRepAlgoAPI_BuilderAlgo::SetCheckInverted(bool theCheck)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetCheckInverted(theCheck);
}

bool RDC::OCC::BRepAlgoAPI_BuilderAlgo::CheckInverted()
{
	bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->CheckInverted();
	return _result;
}

void RDC::OCC::BRepAlgoAPI_BuilderAlgo::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepAlgoAPI_BuilderAlgo::Build()
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Build(::Message_ProgressRange());
}

void RDC::OCC::BRepAlgoAPI_BuilderAlgo::SimplifyResult(bool theUnifyEdges, bool theUnifyFaces, double theAngularTol)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SimplifyResult(theUnifyEdges, theUnifyFaces, theAngularTol);
}

void RDC::OCC::BRepAlgoAPI_BuilderAlgo::SimplifyResult(bool theUnifyEdges, bool theUnifyFaces)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SimplifyResult(theUnifyEdges, theUnifyFaces, ::Precision::Angular());
}

void RDC::OCC::BRepAlgoAPI_BuilderAlgo::SimplifyResult(bool theUnifyEdges)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SimplifyResult(theUnifyEdges, true, ::Precision::Angular());
}

void RDC::OCC::BRepAlgoAPI_BuilderAlgo::SimplifyResult()
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SimplifyResult(true, true, ::Precision::Angular());
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepAlgoAPI_BuilderAlgo::Modified(RDC::OCC::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theS->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepAlgoAPI_BuilderAlgo::Generated(RDC::OCC::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theS->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

bool RDC::OCC::BRepAlgoAPI_BuilderAlgo::IsDeleted(RDC::OCC::TopoDS_Shape^ aS)
{
	bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)aS->NativeInstance);
	return _result;
}

bool RDC::OCC::BRepAlgoAPI_BuilderAlgo::HasModified()
{
	bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->HasModified();
	return _result;
}

bool RDC::OCC::BRepAlgoAPI_BuilderAlgo::HasGenerated()
{
	bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->HasGenerated();
	return _result;
}

bool RDC::OCC::BRepAlgoAPI_BuilderAlgo::HasDeleted()
{
	bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->HasDeleted();
	return _result;
}

void RDC::OCC::BRepAlgoAPI_BuilderAlgo::SetToFillHistory(bool theHistFlag)
{
	((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SetToFillHistory(theHistFlag);
}

bool RDC::OCC::BRepAlgoAPI_BuilderAlgo::HasHistory()
{
	bool _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->HasHistory();
	return _result;
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepAlgoAPI_BuilderAlgo::SectionEdges()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->SectionEdges();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::BOPAlgo_Builder^ RDC::OCC::BRepAlgoAPI_BuilderAlgo::Builder()
{
	const ::BOPAlgo_Builder* _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->Builder();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::BOPAlgo_Builder((::BOPAlgo_Builder*)_result);
}

RDC::OCC::BRepTools_History^ RDC::OCC::BRepAlgoAPI_BuilderAlgo::History()
{
	Handle(::BRepTools_History) _result = ((::BRepAlgoAPI_BuilderAlgo*)_NativeInstance)->History();
	return _result.IsNull() ? nullptr : RDC::OCC::BRepTools_History::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_BooleanOperation
//---------------------------------------------------------------------

RDC::OCC::BRepAlgoAPI_BooleanOperation::BRepAlgoAPI_BooleanOperation()
	: RDC::OCC::BRepAlgoAPI_BuilderAlgo(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_BooleanOperation();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepAlgoAPI_BooleanOperation::Shape1()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Shape1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepAlgoAPI_BooleanOperation::Shape2()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Shape2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::BRepAlgoAPI_BooleanOperation::SetTools(RDC::OCC::TopTools_ListOfShape^ theLS)
{
	((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->SetTools(*(::TopTools_ListOfShape*)theLS->NativeInstance);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepAlgoAPI_BooleanOperation::Tools()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Tools();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

void RDC::OCC::BRepAlgoAPI_BooleanOperation::SetOperation(RDC::OCC::BOPAlgo_Operation theBOP)
{
	((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->SetOperation((::BOPAlgo_Operation)theBOP);
}

RDC::OCC::BOPAlgo_Operation RDC::OCC::BRepAlgoAPI_BooleanOperation::Operation()
{
	::BOPAlgo_Operation _result = ((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Operation();
	return (RDC::OCC::BOPAlgo_Operation)_result;
}

void RDC::OCC::BRepAlgoAPI_BooleanOperation::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepAlgoAPI_BooleanOperation::Build()
{
	((::BRepAlgoAPI_BooleanOperation*)_NativeInstance)->Build(::Message_ProgressRange());
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Check
//---------------------------------------------------------------------

RDC::OCC::BRepAlgoAPI_Check::BRepAlgoAPI_Check()
	: RDC::OCC::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check();
}

RDC::OCC::BRepAlgoAPI_Check::BRepAlgoAPI_Check(RDC::OCC::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI, RDC::OCC::Message_ProgressRange^ theRange)
	: RDC::OCC::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS->NativeInstance, bTestSE, bTestSI, *(::Message_ProgressRange*)theRange->NativeInstance);
}

RDC::OCC::BRepAlgoAPI_Check::BRepAlgoAPI_Check(RDC::OCC::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI)
	: RDC::OCC::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS->NativeInstance, bTestSE, bTestSI, ::Message_ProgressRange());
}

RDC::OCC::BRepAlgoAPI_Check::BRepAlgoAPI_Check(RDC::OCC::TopoDS_Shape^ theS, bool bTestSE)
	: RDC::OCC::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS->NativeInstance, bTestSE, true, ::Message_ProgressRange());
}

RDC::OCC::BRepAlgoAPI_Check::BRepAlgoAPI_Check(RDC::OCC::TopoDS_Shape^ theS)
	: RDC::OCC::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS->NativeInstance, true, true, ::Message_ProgressRange());
}

RDC::OCC::BRepAlgoAPI_Check::BRepAlgoAPI_Check(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2, RDC::OCC::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI, RDC::OCC::Message_ProgressRange^ theRange)
	: RDC::OCC::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, bTestSE, bTestSI, *(::Message_ProgressRange*)theRange->NativeInstance);
}

RDC::OCC::BRepAlgoAPI_Check::BRepAlgoAPI_Check(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2, RDC::OCC::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI)
	: RDC::OCC::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, bTestSE, bTestSI, ::Message_ProgressRange());
}

RDC::OCC::BRepAlgoAPI_Check::BRepAlgoAPI_Check(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2, RDC::OCC::BOPAlgo_Operation theOp, bool bTestSE)
	: RDC::OCC::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, bTestSE, true, ::Message_ProgressRange());
}

RDC::OCC::BRepAlgoAPI_Check::BRepAlgoAPI_Check(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2, RDC::OCC::BOPAlgo_Operation theOp)
	: RDC::OCC::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, true, true, ::Message_ProgressRange());
}

RDC::OCC::BRepAlgoAPI_Check::BRepAlgoAPI_Check(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2)
	: RDC::OCC::BOPAlgo_Options(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Check(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, BOPAlgo_UNKNOWN, true, true, ::Message_ProgressRange());
}

void RDC::OCC::BRepAlgoAPI_Check::SetData(RDC::OCC::TopoDS_Shape^ theS, bool bTestSE, bool bTestSI)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS->NativeInstance, bTestSE, bTestSI);
}

void RDC::OCC::BRepAlgoAPI_Check::SetData(RDC::OCC::TopoDS_Shape^ theS, bool bTestSE)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS->NativeInstance, bTestSE, true);
}

void RDC::OCC::BRepAlgoAPI_Check::SetData(RDC::OCC::TopoDS_Shape^ theS)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS->NativeInstance, true, true);
}

void RDC::OCC::BRepAlgoAPI_Check::SetData(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2, RDC::OCC::BOPAlgo_Operation theOp, bool bTestSE, bool bTestSI)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, bTestSE, bTestSI);
}

void RDC::OCC::BRepAlgoAPI_Check::SetData(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2, RDC::OCC::BOPAlgo_Operation theOp, bool bTestSE)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, bTestSE, true);
}

void RDC::OCC::BRepAlgoAPI_Check::SetData(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2, RDC::OCC::BOPAlgo_Operation theOp)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::BOPAlgo_Operation)theOp, true, true);
}

void RDC::OCC::BRepAlgoAPI_Check::SetData(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->SetData(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, BOPAlgo_UNKNOWN, true, true);
}

void RDC::OCC::BRepAlgoAPI_Check::Perform(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepAlgoAPI_Check::Perform()
{
	((::BRepAlgoAPI_Check*)_NativeInstance)->Perform(::Message_ProgressRange());
}

bool RDC::OCC::BRepAlgoAPI_Check::IsValid()
{
	bool _result = ((::BRepAlgoAPI_Check*)_NativeInstance)->IsValid();
	return _result;
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Common
//---------------------------------------------------------------------

RDC::OCC::BRepAlgoAPI_Common::BRepAlgoAPI_Common()
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Common();
}

RDC::OCC::BRepAlgoAPI_Common::BRepAlgoAPI_Common(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::TopoDS_Shape^ S2, RDC::OCC::Message_ProgressRange^ theRange)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Common(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, *(::Message_ProgressRange*)theRange->NativeInstance);
}

RDC::OCC::BRepAlgoAPI_Common::BRepAlgoAPI_Common(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::TopoDS_Shape^ S2)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Common(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, ::Message_ProgressRange());
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Cut
//---------------------------------------------------------------------

RDC::OCC::BRepAlgoAPI_Cut::BRepAlgoAPI_Cut()
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Cut();
}

RDC::OCC::BRepAlgoAPI_Cut::BRepAlgoAPI_Cut(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::TopoDS_Shape^ S2, RDC::OCC::Message_ProgressRange^ theRange)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Cut(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, *(::Message_ProgressRange*)theRange->NativeInstance);
}

RDC::OCC::BRepAlgoAPI_Cut::BRepAlgoAPI_Cut(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::TopoDS_Shape^ S2)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Cut(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, ::Message_ProgressRange());
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Defeaturing
//---------------------------------------------------------------------

RDC::OCC::BRepAlgoAPI_Defeaturing::BRepAlgoAPI_Defeaturing()
	: RDC::OCC::BRepAlgoAPI_Algo(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Defeaturing();
}

void RDC::OCC::BRepAlgoAPI_Defeaturing::SetShape(RDC::OCC::TopoDS_Shape^ theShape)
{
	((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->SetShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepAlgoAPI_Defeaturing::InputShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->InputShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::BRepAlgoAPI_Defeaturing::AddFaceToRemove(RDC::OCC::TopoDS_Shape^ theFace)
{
	((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->AddFaceToRemove(*(::TopoDS_Shape*)theFace->NativeInstance);
}

void RDC::OCC::BRepAlgoAPI_Defeaturing::AddFacesToRemove(RDC::OCC::TopTools_ListOfShape^ theFaces)
{
	((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->AddFacesToRemove(*(::TopTools_ListOfShape*)theFaces->NativeInstance);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepAlgoAPI_Defeaturing::FacesToRemove()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->FacesToRemove();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

void RDC::OCC::BRepAlgoAPI_Defeaturing::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepAlgoAPI_Defeaturing::Build()
{
	((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->Build(::Message_ProgressRange());
}

void RDC::OCC::BRepAlgoAPI_Defeaturing::SetToFillHistory(bool theFlag)
{
	((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->SetToFillHistory(theFlag);
}

bool RDC::OCC::BRepAlgoAPI_Defeaturing::HasHistory()
{
	bool _result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->HasHistory();
	return _result;
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepAlgoAPI_Defeaturing::Modified(RDC::OCC::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theS->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepAlgoAPI_Defeaturing::Generated(RDC::OCC::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theS->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

bool RDC::OCC::BRepAlgoAPI_Defeaturing::IsDeleted(RDC::OCC::TopoDS_Shape^ theS)
{
	bool _result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)theS->NativeInstance);
	return _result;
}

bool RDC::OCC::BRepAlgoAPI_Defeaturing::HasModified()
{
	bool _result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->HasModified();
	return _result;
}

bool RDC::OCC::BRepAlgoAPI_Defeaturing::HasGenerated()
{
	bool _result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->HasGenerated();
	return _result;
}

bool RDC::OCC::BRepAlgoAPI_Defeaturing::HasDeleted()
{
	bool _result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->HasDeleted();
	return _result;
}

RDC::OCC::BRepTools_History^ RDC::OCC::BRepAlgoAPI_Defeaturing::History()
{
	Handle(::BRepTools_History) _result = ((::BRepAlgoAPI_Defeaturing*)_NativeInstance)->History();
	return _result.IsNull() ? nullptr : RDC::OCC::BRepTools_History::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Fuse
//---------------------------------------------------------------------

RDC::OCC::BRepAlgoAPI_Fuse::BRepAlgoAPI_Fuse()
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Fuse();
}

RDC::OCC::BRepAlgoAPI_Fuse::BRepAlgoAPI_Fuse(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::TopoDS_Shape^ S2, RDC::OCC::Message_ProgressRange^ theRange)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Fuse(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, *(::Message_ProgressRange*)theRange->NativeInstance);
}

RDC::OCC::BRepAlgoAPI_Fuse::BRepAlgoAPI_Fuse(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::TopoDS_Shape^ S2)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Fuse(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, ::Message_ProgressRange());
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Section
//---------------------------------------------------------------------

RDC::OCC::BRepAlgoAPI_Section::BRepAlgoAPI_Section()
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section();
}

RDC::OCC::BRepAlgoAPI_Section::BRepAlgoAPI_Section(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::TopoDS_Shape^ S2, bool PerformNow)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, PerformNow);
}

RDC::OCC::BRepAlgoAPI_Section::BRepAlgoAPI_Section(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::TopoDS_Shape^ S2)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, true);
}

RDC::OCC::BRepAlgoAPI_Section::BRepAlgoAPI_Section(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::Pln Pl, bool PerformNow)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, *(gp_Pln*)pp_Pl, PerformNow);
}

RDC::OCC::BRepAlgoAPI_Section::BRepAlgoAPI_Section(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::Pln Pl)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, *(gp_Pln*)pp_Pl, true);
}

RDC::OCC::BRepAlgoAPI_Section::BRepAlgoAPI_Section(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::Geom_Surface^ Sf, bool PerformNow)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, Handle(::Geom_Surface)(Sf->NativeInstance), PerformNow);
}

RDC::OCC::BRepAlgoAPI_Section::BRepAlgoAPI_Section(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::Geom_Surface^ Sf)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section(*(::TopoDS_Shape*)S1->NativeInstance, Handle(::Geom_Surface)(Sf->NativeInstance), true);
}

RDC::OCC::BRepAlgoAPI_Section::BRepAlgoAPI_Section(RDC::OCC::Geom_Surface^ Sf, RDC::OCC::TopoDS_Shape^ S2, bool PerformNow)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section(Handle(::Geom_Surface)(Sf->NativeInstance), *(::TopoDS_Shape*)S2->NativeInstance, PerformNow);
}

RDC::OCC::BRepAlgoAPI_Section::BRepAlgoAPI_Section(RDC::OCC::Geom_Surface^ Sf, RDC::OCC::TopoDS_Shape^ S2)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section(Handle(::Geom_Surface)(Sf->NativeInstance), *(::TopoDS_Shape*)S2->NativeInstance, true);
}

RDC::OCC::BRepAlgoAPI_Section::BRepAlgoAPI_Section(RDC::OCC::Geom_Surface^ Sf1, RDC::OCC::Geom_Surface^ Sf2, bool PerformNow)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section(Handle(::Geom_Surface)(Sf1->NativeInstance), Handle(::Geom_Surface)(Sf2->NativeInstance), PerformNow);
}

RDC::OCC::BRepAlgoAPI_Section::BRepAlgoAPI_Section(RDC::OCC::Geom_Surface^ Sf1, RDC::OCC::Geom_Surface^ Sf2)
	: RDC::OCC::BRepAlgoAPI_BooleanOperation(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Section(Handle(::Geom_Surface)(Sf1->NativeInstance), Handle(::Geom_Surface)(Sf2->NativeInstance), true);
}

void RDC::OCC::BRepAlgoAPI_Section::Init1(RDC::OCC::TopoDS_Shape^ S1)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->Init1(*(::TopoDS_Shape*)S1->NativeInstance);
}

void RDC::OCC::BRepAlgoAPI_Section::Init1(RDC::OCC::Pln Pl)
{
	pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
	((::BRepAlgoAPI_Section*)_NativeInstance)->Init1(*(gp_Pln*)pp_Pl);
}

void RDC::OCC::BRepAlgoAPI_Section::Init1(RDC::OCC::Geom_Surface^ Sf)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->Init1(Handle(::Geom_Surface)(Sf->NativeInstance));
}

void RDC::OCC::BRepAlgoAPI_Section::Init2(RDC::OCC::TopoDS_Shape^ S2)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->Init2(*(::TopoDS_Shape*)S2->NativeInstance);
}

void RDC::OCC::BRepAlgoAPI_Section::Init2(RDC::OCC::Pln Pl)
{
	pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
	((::BRepAlgoAPI_Section*)_NativeInstance)->Init2(*(gp_Pln*)pp_Pl);
}

void RDC::OCC::BRepAlgoAPI_Section::Init2(RDC::OCC::Geom_Surface^ Sf)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->Init2(Handle(::Geom_Surface)(Sf->NativeInstance));
}

void RDC::OCC::BRepAlgoAPI_Section::Approximation(bool B)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->Approximation(B);
}

void RDC::OCC::BRepAlgoAPI_Section::ComputePCurveOn1(bool B)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->ComputePCurveOn1(B);
}

void RDC::OCC::BRepAlgoAPI_Section::ComputePCurveOn2(bool B)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->ComputePCurveOn2(B);
}

void RDC::OCC::BRepAlgoAPI_Section::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepAlgoAPI_Section::Build()
{
	((::BRepAlgoAPI_Section*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool RDC::OCC::BRepAlgoAPI_Section::HasAncestorFaceOn1(RDC::OCC::TopoDS_Shape^ E, RDC::OCC::TopoDS_Shape^ F)
{
	bool _result = ((::BRepAlgoAPI_Section*)_NativeInstance)->HasAncestorFaceOn1(*(::TopoDS_Shape*)E->NativeInstance, *(::TopoDS_Shape*)F->NativeInstance);
	return _result;
}

bool RDC::OCC::BRepAlgoAPI_Section::HasAncestorFaceOn2(RDC::OCC::TopoDS_Shape^ E, RDC::OCC::TopoDS_Shape^ F)
{
	bool _result = ((::BRepAlgoAPI_Section*)_NativeInstance)->HasAncestorFaceOn2(*(::TopoDS_Shape*)E->NativeInstance, *(::TopoDS_Shape*)F->NativeInstance);
	return _result;
}



//---------------------------------------------------------------------
//  Class  BRepAlgoAPI_Splitter
//---------------------------------------------------------------------

RDC::OCC::BRepAlgoAPI_Splitter::BRepAlgoAPI_Splitter()
	: RDC::OCC::BRepAlgoAPI_BuilderAlgo(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAlgoAPI_Splitter();
}

void RDC::OCC::BRepAlgoAPI_Splitter::SetTools(RDC::OCC::TopTools_ListOfShape^ theLS)
{
	((::BRepAlgoAPI_Splitter*)_NativeInstance)->SetTools(*(::TopTools_ListOfShape*)theLS->NativeInstance);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepAlgoAPI_Splitter::Tools()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepAlgoAPI_Splitter*)_NativeInstance)->Tools();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

void RDC::OCC::BRepAlgoAPI_Splitter::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepAlgoAPI_Splitter*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepAlgoAPI_Splitter::Build()
{
	((::BRepAlgoAPI_Splitter*)_NativeInstance)->Build(::Message_ProgressRange());
}



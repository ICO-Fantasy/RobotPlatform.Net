// Generated wrapper code for package BOPAlgo

#include "OcctPCH.h"
#include "BOPAlgo.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "BRepAlgoAPI.h"
#include "NCollection.h"
#include "Message.h"
#include "TopoDS.h"
#include "TopTools.h"
#include "BRepTools.h"
#include "TopAbs.h"
#include "BRepFeat.h"
#include "Bnd.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  BOPAlgo_Options
//---------------------------------------------------------------------

RDC::OCC::BOPAlgo_Options::BOPAlgo_Options()
    : RDC::OCC::BaseClass<::BOPAlgo_Options>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BOPAlgo_Options();
}

RDC::OCC::BOPAlgo_Options::BOPAlgo_Options(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::BOPAlgo_Options>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BOPAlgo_Options(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::NCollection_BaseAllocator^ RDC::OCC::BOPAlgo_Options::Allocator()
{
    Handle(::NCollection_BaseAllocator) _result = ((::BOPAlgo_Options*)_NativeInstance)->Allocator();
    return _result.IsNull() ? nullptr : RDC::OCC::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}

void RDC::OCC::BOPAlgo_Options::Clear()
{
    ((::BOPAlgo_Options*)_NativeInstance)->Clear();
}

bool RDC::OCC::BOPAlgo_Options::HasErrors()
{
    bool _result = ((::BOPAlgo_Options*)_NativeInstance)->HasErrors();
    return _result;
}

bool RDC::OCC::BOPAlgo_Options::HasWarnings()
{
    bool _result = ((::BOPAlgo_Options*)_NativeInstance)->HasWarnings();
    return _result;
}

RDC::OCC::Message_Report^ RDC::OCC::BOPAlgo_Options::GetReport()
{
    Handle(::Message_Report) _result = ((::BOPAlgo_Options*)_NativeInstance)->GetReport();
    return _result.IsNull() ? nullptr : RDC::OCC::Message_Report::CreateDowncasted(_result.get());
}

void RDC::OCC::BOPAlgo_Options::DumpErrors(System::IO::TextWriter^ theOS)
{
    std::ostringstream oss_theOS;
    ((::BOPAlgo_Options*)_NativeInstance)->DumpErrors(oss_theOS);
    theOS->Write(gcnew System::String(oss_theOS.str().c_str()));
}

void RDC::OCC::BOPAlgo_Options::DumpWarnings(System::IO::TextWriter^ theOS)
{
    std::ostringstream oss_theOS;
    ((::BOPAlgo_Options*)_NativeInstance)->DumpWarnings(oss_theOS);
    theOS->Write(gcnew System::String(oss_theOS.str().c_str()));
}

void RDC::OCC::BOPAlgo_Options::ClearWarnings()
{
    ((::BOPAlgo_Options*)_NativeInstance)->ClearWarnings();
}

bool RDC::OCC::BOPAlgo_Options::GetParallelMode()
{
    bool _result = ::BOPAlgo_Options::GetParallelMode();
    return _result;
}

void RDC::OCC::BOPAlgo_Options::SetParallelMode(bool theNewMode)
{
    ::BOPAlgo_Options::SetParallelMode(theNewMode);
}

void RDC::OCC::BOPAlgo_Options::SetRunParallel(bool theFlag)
{
    ((::BOPAlgo_Options*)_NativeInstance)->SetRunParallel(theFlag);
}

bool RDC::OCC::BOPAlgo_Options::RunParallel()
{
    bool _result = ((::BOPAlgo_Options*)_NativeInstance)->RunParallel();
    return _result;
}

void RDC::OCC::BOPAlgo_Options::SetFuzzyValue(double theFuzz)
{
    ((::BOPAlgo_Options*)_NativeInstance)->SetFuzzyValue(theFuzz);
}

double RDC::OCC::BOPAlgo_Options::FuzzyValue()
{
    double _result = ((::BOPAlgo_Options*)_NativeInstance)->FuzzyValue();
    return _result;
}

void RDC::OCC::BOPAlgo_Options::SetUseOBB(bool theUseOBB)
{
    ((::BOPAlgo_Options*)_NativeInstance)->SetUseOBB(theUseOBB);
}

bool RDC::OCC::BOPAlgo_Options::UseOBB()
{
    bool _result = ((::BOPAlgo_Options*)_NativeInstance)->UseOBB();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BOPAlgo_Algo
//---------------------------------------------------------------------

void RDC::OCC::BOPAlgo_Algo::Perform(RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BOPAlgo_Algo*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BOPAlgo_Algo::Perform()
{
    ((::BOPAlgo_Algo*)_NativeInstance)->Perform(::Message_ProgressRange());
}



//---------------------------------------------------------------------
//  Class  BOPAlgo_BuilderShape
//---------------------------------------------------------------------

RDC::OCC::TopoDS_Shape^ RDC::OCC::BOPAlgo_BuilderShape::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BOPAlgo_BuilderShape*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BOPAlgo_BuilderShape::Modified(RDC::OCC::TopoDS_Shape^ theS)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BOPAlgo_BuilderShape*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theS->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BOPAlgo_BuilderShape::Generated(RDC::OCC::TopoDS_Shape^ theS)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BOPAlgo_BuilderShape*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theS->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

bool RDC::OCC::BOPAlgo_BuilderShape::IsDeleted(RDC::OCC::TopoDS_Shape^ theS)
{
    bool _result = ((::BOPAlgo_BuilderShape*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)theS->NativeInstance);
    return _result;
}

bool RDC::OCC::BOPAlgo_BuilderShape::HasModified()
{
    bool _result = ((::BOPAlgo_BuilderShape*)_NativeInstance)->HasModified();
    return _result;
}

bool RDC::OCC::BOPAlgo_BuilderShape::HasGenerated()
{
    bool _result = ((::BOPAlgo_BuilderShape*)_NativeInstance)->HasGenerated();
    return _result;
}

bool RDC::OCC::BOPAlgo_BuilderShape::HasDeleted()
{
    bool _result = ((::BOPAlgo_BuilderShape*)_NativeInstance)->HasDeleted();
    return _result;
}

RDC::OCC::BRepTools_History^ RDC::OCC::BOPAlgo_BuilderShape::History()
{
    Handle(::BRepTools_History) _result = ((::BOPAlgo_BuilderShape*)_NativeInstance)->History();
    return _result.IsNull() ? nullptr : RDC::OCC::BRepTools_History::CreateDowncasted(_result.get());
}

void RDC::OCC::BOPAlgo_BuilderShape::SetToFillHistory(bool theHistFlag)
{
    ((::BOPAlgo_BuilderShape*)_NativeInstance)->SetToFillHistory(theHistFlag);
}

bool RDC::OCC::BOPAlgo_BuilderShape::HasHistory()
{
    bool _result = ((::BOPAlgo_BuilderShape*)_NativeInstance)->HasHistory();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BOPAlgo_Builder
//---------------------------------------------------------------------

RDC::OCC::BOPAlgo_Builder::BOPAlgo_Builder()
    : RDC::OCC::BOPAlgo_BuilderShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BOPAlgo_Builder();
}

RDC::OCC::BOPAlgo_Builder::BOPAlgo_Builder(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BOPAlgo_BuilderShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BOPAlgo_Builder(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::BOPAlgo_Builder::Clear()
{
    ((::BOPAlgo_Builder*)_NativeInstance)->Clear();
}

void RDC::OCC::BOPAlgo_Builder::AddArgument(RDC::OCC::TopoDS_Shape^ theShape)
{
    ((::BOPAlgo_Builder*)_NativeInstance)->AddArgument(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void RDC::OCC::BOPAlgo_Builder::SetArguments(RDC::OCC::TopTools_ListOfShape^ theLS)
{
    ((::BOPAlgo_Builder*)_NativeInstance)->SetArguments(*(::TopTools_ListOfShape*)theLS->NativeInstance);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BOPAlgo_Builder::Arguments()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BOPAlgo_Builder*)_NativeInstance)->Arguments();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

void RDC::OCC::BOPAlgo_Builder::SetNonDestructive(bool theFlag)
{
    ((::BOPAlgo_Builder*)_NativeInstance)->SetNonDestructive(theFlag);
}

bool RDC::OCC::BOPAlgo_Builder::NonDestructive()
{
    bool _result = ((::BOPAlgo_Builder*)_NativeInstance)->NonDestructive();
    return _result;
}

void RDC::OCC::BOPAlgo_Builder::SetGlue(RDC::OCC::BOPAlgo_GlueEnum theGlue)
{
    ((::BOPAlgo_Builder*)_NativeInstance)->SetGlue((::BOPAlgo_GlueEnum)theGlue);
}

RDC::OCC::BOPAlgo_GlueEnum RDC::OCC::BOPAlgo_Builder::Glue()
{
    ::BOPAlgo_GlueEnum _result = ((::BOPAlgo_Builder*)_NativeInstance)->Glue();
    return (RDC::OCC::BOPAlgo_GlueEnum)_result;
}

void RDC::OCC::BOPAlgo_Builder::SetCheckInverted(bool theCheck)
{
    ((::BOPAlgo_Builder*)_NativeInstance)->SetCheckInverted(theCheck);
}

bool RDC::OCC::BOPAlgo_Builder::CheckInverted()
{
    bool _result = ((::BOPAlgo_Builder*)_NativeInstance)->CheckInverted();
    return _result;
}

void RDC::OCC::BOPAlgo_Builder::Perform(RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BOPAlgo_Builder*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BOPAlgo_Builder::Perform()
{
    ((::BOPAlgo_Builder*)_NativeInstance)->Perform(::Message_ProgressRange());
}

void RDC::OCC::BOPAlgo_Builder::BuildBOP(RDC::OCC::TopTools_ListOfShape^ theObjects, RDC::OCC::TopAbs_State theObjState, RDC::OCC::TopTools_ListOfShape^ theTools, RDC::OCC::TopAbs_State theToolsState, RDC::OCC::Message_ProgressRange^ theRange, RDC::OCC::Message_Report^ theReport)
{
    ((::BOPAlgo_Builder*)_NativeInstance)->BuildBOP(*(::TopTools_ListOfShape*)theObjects->NativeInstance, (::TopAbs_State)theObjState, *(::TopTools_ListOfShape*)theTools->NativeInstance, (::TopAbs_State)theToolsState, *(::Message_ProgressRange*)theRange->NativeInstance, Handle(::Message_Report)(theReport->NativeInstance));
}

void RDC::OCC::BOPAlgo_Builder::BuildBOP(RDC::OCC::TopTools_ListOfShape^ theObjects, RDC::OCC::TopAbs_State theObjState, RDC::OCC::TopTools_ListOfShape^ theTools, RDC::OCC::TopAbs_State theToolsState, RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BOPAlgo_Builder*)_NativeInstance)->BuildBOP(*(::TopTools_ListOfShape*)theObjects->NativeInstance, (::TopAbs_State)theObjState, *(::TopTools_ListOfShape*)theTools->NativeInstance, (::TopAbs_State)theToolsState, *(::Message_ProgressRange*)theRange->NativeInstance, nullptr);
}

void RDC::OCC::BOPAlgo_Builder::BuildBOP(RDC::OCC::TopTools_ListOfShape^ theObjects, RDC::OCC::TopTools_ListOfShape^ theTools, RDC::OCC::BOPAlgo_Operation theOperation, RDC::OCC::Message_ProgressRange^ theRange, RDC::OCC::Message_Report^ theReport)
{
    ((::BOPAlgo_Builder*)_NativeInstance)->BuildBOP(*(::TopTools_ListOfShape*)theObjects->NativeInstance, *(::TopTools_ListOfShape*)theTools->NativeInstance, (::BOPAlgo_Operation)theOperation, *(::Message_ProgressRange*)theRange->NativeInstance, Handle(::Message_Report)(theReport->NativeInstance));
}

void RDC::OCC::BOPAlgo_Builder::BuildBOP(RDC::OCC::TopTools_ListOfShape^ theObjects, RDC::OCC::TopTools_ListOfShape^ theTools, RDC::OCC::BOPAlgo_Operation theOperation, RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BOPAlgo_Builder*)_NativeInstance)->BuildBOP(*(::TopTools_ListOfShape*)theObjects->NativeInstance, *(::TopTools_ListOfShape*)theTools->NativeInstance, (::BOPAlgo_Operation)theOperation, *(::Message_ProgressRange*)theRange->NativeInstance, nullptr);
}

RDC::OCC::TopTools_DataMapOfShapeListOfShape^ RDC::OCC::BOPAlgo_Builder::Images()
{
    ::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
    *_result = (::TopTools_DataMapOfShapeListOfShape)((::BOPAlgo_Builder*)_NativeInstance)->Images();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_DataMapOfShapeListOfShape(_result);
}

RDC::OCC::TopTools_DataMapOfShapeListOfShape^ RDC::OCC::BOPAlgo_Builder::Origins()
{
    ::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
    *_result = (::TopTools_DataMapOfShapeListOfShape)((::BOPAlgo_Builder*)_NativeInstance)->Origins();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_DataMapOfShapeListOfShape(_result);
}

RDC::OCC::TopTools_DataMapOfShapeShape^ RDC::OCC::BOPAlgo_Builder::ShapesSD()
{
    ::TopTools_DataMapOfShapeShape* _result = new ::TopTools_DataMapOfShapeShape();
    *_result = (::TopTools_DataMapOfShapeShape)((::BOPAlgo_Builder*)_NativeInstance)->ShapesSD();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_DataMapOfShapeShape(_result);
}



//---------------------------------------------------------------------
//  Class  BOPAlgo_ToolsProvider
//---------------------------------------------------------------------

RDC::OCC::BOPAlgo_ToolsProvider::BOPAlgo_ToolsProvider()
    : RDC::OCC::BOPAlgo_Builder(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BOPAlgo_ToolsProvider();
}

RDC::OCC::BOPAlgo_ToolsProvider::BOPAlgo_ToolsProvider(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BOPAlgo_Builder(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BOPAlgo_ToolsProvider(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::BOPAlgo_ToolsProvider::Clear()
{
    ((::BOPAlgo_ToolsProvider*)_NativeInstance)->Clear();
}

void RDC::OCC::BOPAlgo_ToolsProvider::AddTool(RDC::OCC::TopoDS_Shape^ theShape)
{
    ((::BOPAlgo_ToolsProvider*)_NativeInstance)->AddTool(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void RDC::OCC::BOPAlgo_ToolsProvider::SetTools(RDC::OCC::TopTools_ListOfShape^ theShapes)
{
    ((::BOPAlgo_ToolsProvider*)_NativeInstance)->SetTools(*(::TopTools_ListOfShape*)theShapes->NativeInstance);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BOPAlgo_ToolsProvider::Tools()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BOPAlgo_ToolsProvider*)_NativeInstance)->Tools();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BOPAlgo_BOP
//---------------------------------------------------------------------

RDC::OCC::BOPAlgo_BOP::BOPAlgo_BOP()
    : RDC::OCC::BOPAlgo_ToolsProvider(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BOPAlgo_BOP();
}

RDC::OCC::BOPAlgo_BOP::BOPAlgo_BOP(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BOPAlgo_ToolsProvider(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BOPAlgo_BOP(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::BOPAlgo_BOP::Clear()
{
    ((::BOPAlgo_BOP*)_NativeInstance)->Clear();
}

void RDC::OCC::BOPAlgo_BOP::SetOperation(RDC::OCC::BOPAlgo_Operation theOperation)
{
    ((::BOPAlgo_BOP*)_NativeInstance)->SetOperation((::BOPAlgo_Operation)theOperation);
}

RDC::OCC::BOPAlgo_Operation RDC::OCC::BOPAlgo_BOP::Operation()
{
    ::BOPAlgo_Operation _result = ((::BOPAlgo_BOP*)_NativeInstance)->Operation();
    return (RDC::OCC::BOPAlgo_Operation)_result;
}

void RDC::OCC::BOPAlgo_BOP::Perform(RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BOPAlgo_BOP*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BOPAlgo_BOP::Perform()
{
    ((::BOPAlgo_BOP*)_NativeInstance)->Perform(::Message_ProgressRange());
}



//---------------------------------------------------------------------
//  Class  BOPAlgo_Tools
//---------------------------------------------------------------------

RDC::OCC::BOPAlgo_Tools::BOPAlgo_Tools()
    : RDC::OCC::BaseClass<::BOPAlgo_Tools>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BOPAlgo_Tools();
}

int RDC::OCC::BOPAlgo_Tools::EdgesToWires(RDC::OCC::TopoDS_Shape^ theEdges, RDC::OCC::TopoDS_Shape^ theWires, bool theShared, double theAngTol)
{
    int _result = ::BOPAlgo_Tools::EdgesToWires(*(::TopoDS_Shape*)theEdges->NativeInstance, *(::TopoDS_Shape*)theWires->NativeInstance, theShared, theAngTol);
    return _result;
}

int RDC::OCC::BOPAlgo_Tools::EdgesToWires(RDC::OCC::TopoDS_Shape^ theEdges, RDC::OCC::TopoDS_Shape^ theWires, bool theShared)
{
    int _result = ::BOPAlgo_Tools::EdgesToWires(*(::TopoDS_Shape*)theEdges->NativeInstance, *(::TopoDS_Shape*)theWires->NativeInstance, theShared, 1.0E-8);
    return _result;
}

int RDC::OCC::BOPAlgo_Tools::EdgesToWires(RDC::OCC::TopoDS_Shape^ theEdges, RDC::OCC::TopoDS_Shape^ theWires)
{
    int _result = ::BOPAlgo_Tools::EdgesToWires(*(::TopoDS_Shape*)theEdges->NativeInstance, *(::TopoDS_Shape*)theWires->NativeInstance, false, 1.0E-8);
    return _result;
}

bool RDC::OCC::BOPAlgo_Tools::WiresToFaces(RDC::OCC::TopoDS_Shape^ theWires, RDC::OCC::TopoDS_Shape^ theFaces, double theAngTol)
{
    bool _result = ::BOPAlgo_Tools::WiresToFaces(*(::TopoDS_Shape*)theWires->NativeInstance, *(::TopoDS_Shape*)theFaces->NativeInstance, theAngTol);
    return _result;
}

bool RDC::OCC::BOPAlgo_Tools::WiresToFaces(RDC::OCC::TopoDS_Shape^ theWires, RDC::OCC::TopoDS_Shape^ theFaces)
{
    bool _result = ::BOPAlgo_Tools::WiresToFaces(*(::TopoDS_Shape*)theWires->NativeInstance, *(::TopoDS_Shape*)theFaces->NativeInstance, 1.0E-8);
    return _result;
}

void RDC::OCC::BOPAlgo_Tools::IntersectVertices(RDC::OCC::TopTools_IndexedDataMapOfShapeReal^ theVertices, double theFuzzyValue, RDC::OCC::TopTools_ListOfListOfShape^ theChains)
{
    ::BOPAlgo_Tools::IntersectVertices(*(::TopTools_IndexedDataMapOfShapeReal*)theVertices->NativeInstance, theFuzzyValue, *(::TopTools_ListOfListOfShape*)theChains->NativeInstance);
}

bool RDC::OCC::BOPAlgo_Tools::TrsfToPoint(RDC::OCC::Bnd_Box^ theBox1, RDC::OCC::Bnd_Box^ theBox2, RDC::OCC::Trsf% theTrsf, RDC::OCC::Pnt thePoint, double theCriteria)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    bool _result = ::BOPAlgo_Tools::TrsfToPoint(*(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, *(gp_Trsf*)pp_theTrsf, *(gp_Pnt*)pp_thePoint, theCriteria);
    return _result;
}

bool RDC::OCC::BOPAlgo_Tools::TrsfToPoint(RDC::OCC::Bnd_Box^ theBox1, RDC::OCC::Bnd_Box^ theBox2, RDC::OCC::Trsf% theTrsf, RDC::OCC::Pnt thePoint)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    bool _result = ::BOPAlgo_Tools::TrsfToPoint(*(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, *(gp_Trsf*)pp_theTrsf, *(gp_Pnt*)pp_thePoint, 1.0E+5);
    return _result;
}

bool RDC::OCC::BOPAlgo_Tools::TrsfToPoint(RDC::OCC::Bnd_Box^ theBox1, RDC::OCC::Bnd_Box^ theBox2, RDC::OCC::Trsf% theTrsf)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ::BOPAlgo_Tools::TrsfToPoint(*(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, *(gp_Trsf*)pp_theTrsf, ::gp_Pnt(0., 0., 0.), 1.0E+5);
    return _result;
}



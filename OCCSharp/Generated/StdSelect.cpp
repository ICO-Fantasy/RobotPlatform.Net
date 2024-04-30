// Generated wrapper code for package StdSelect

#include "OcctPCH.h"
#include "StdSelect.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "SelectMgr.h"
#include "Prs3d.h"
#include "TopoDS.h"
#include "PrsMgr.h"
#include "Graphic3d.h"
#include "TopLoc.h"
#include "V3d.h"
#include "TopAbs.h"
#include "TopTools.h"


//---------------------------------------------------------------------
//  Class  StdSelect
//---------------------------------------------------------------------

RDC::OCC::StdSelect::StdSelect()
	: RDC::OCC::BaseClass<::StdSelect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::StdSelect();
}

void RDC::OCC::StdSelect::SetDrawerForBRepOwner(RDC::OCC::SelectMgr_Selection^ aSelection, RDC::OCC::Prs3d_Drawer^ aDrawer)
{
	::StdSelect::SetDrawerForBRepOwner(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), Handle(::Prs3d_Drawer)(aDrawer->NativeInstance));
}



//---------------------------------------------------------------------
//  Class  StdSelect_Shape
//---------------------------------------------------------------------

RDC::OCC::StdSelect_Shape::StdSelect_Shape(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::Prs3d_Drawer^ theDrawer)
	: RDC::OCC::PrsMgr_PresentableObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_Shape(*(::TopoDS_Shape*)theShape->NativeInstance, Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

RDC::OCC::StdSelect_Shape::StdSelect_Shape(RDC::OCC::TopoDS_Shape^ theShape)
	: RDC::OCC::PrsMgr_PresentableObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_Shape(*(::TopoDS_Shape*)theShape->NativeInstance, ::opencascade::handle<::Prs3d_Drawer>());
}

void RDC::OCC::StdSelect_Shape::Compute(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, RDC::OCC::Graphic3d_Structure^ thePrs, int theMode)
{
	((::StdSelect_Shape*)_NativeInstance)->Compute(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Graphic3d_Structure)(thePrs->NativeInstance), theMode);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::StdSelect_Shape::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::StdSelect_Shape*)_NativeInstance)->Shape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::StdSelect_Shape::Shape(RDC::OCC::TopoDS_Shape^ theShape)
{
	((::StdSelect_Shape*)_NativeInstance)->Shape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void RDC::OCC::StdSelect_Shape::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::StdSelect_Shape*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::StdSelect_Shape::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::StdSelect_Shape*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::StdSelect_Shape^ RDC::OCC::StdSelect_Shape::CreateDowncasted(::StdSelect_Shape* instance)
{
	return gcnew RDC::OCC::StdSelect_Shape(instance);
}



//---------------------------------------------------------------------
//  Class  StdSelect_BRepOwner
//---------------------------------------------------------------------

RDC::OCC::StdSelect_BRepOwner::StdSelect_BRepOwner(int aPriority)
	: RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_BRepOwner(aPriority);
}

RDC::OCC::StdSelect_BRepOwner::StdSelect_BRepOwner(RDC::OCC::TopoDS_Shape^ aShape, int aPriority, bool ComesFromDecomposition)
	: RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, aPriority, ComesFromDecomposition);
}

RDC::OCC::StdSelect_BRepOwner::StdSelect_BRepOwner(RDC::OCC::TopoDS_Shape^ aShape, int aPriority)
	: RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, aPriority, false);
}

RDC::OCC::StdSelect_BRepOwner::StdSelect_BRepOwner(RDC::OCC::TopoDS_Shape^ aShape)
	: RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, 0, false);
}

RDC::OCC::StdSelect_BRepOwner::StdSelect_BRepOwner(RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::SelectMgr_SelectableObject^ theOrigin, int aPriority, bool FromDecomposition)
	: RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, Handle(::SelectMgr_SelectableObject)(theOrigin->NativeInstance), aPriority, FromDecomposition);
}

RDC::OCC::StdSelect_BRepOwner::StdSelect_BRepOwner(RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::SelectMgr_SelectableObject^ theOrigin, int aPriority)
	: RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, Handle(::SelectMgr_SelectableObject)(theOrigin->NativeInstance), aPriority, false);
}

RDC::OCC::StdSelect_BRepOwner::StdSelect_BRepOwner(RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::SelectMgr_SelectableObject^ theOrigin)
	: RDC::OCC::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, Handle(::SelectMgr_SelectableObject)(theOrigin->NativeInstance), 0, false);
}

bool RDC::OCC::StdSelect_BRepOwner::HasShape()
{
	bool _result = ((::StdSelect_BRepOwner*)_NativeInstance)->HasShape();
	return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::StdSelect_BRepOwner::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::StdSelect_BRepOwner*)_NativeInstance)->Shape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::StdSelect_BRepOwner::HasHilightMode()
{
	bool _result = ((::StdSelect_BRepOwner*)_NativeInstance)->HasHilightMode();
	return _result;
}

void RDC::OCC::StdSelect_BRepOwner::SetHilightMode(int theMode)
{
	((::StdSelect_BRepOwner*)_NativeInstance)->SetHilightMode(theMode);
}

void RDC::OCC::StdSelect_BRepOwner::ResetHilightMode()
{
	((::StdSelect_BRepOwner*)_NativeInstance)->ResetHilightMode();
}

int RDC::OCC::StdSelect_BRepOwner::HilightMode()
{
	int _result = ((::StdSelect_BRepOwner*)_NativeInstance)->HilightMode();
	return _result;
}

bool RDC::OCC::StdSelect_BRepOwner::IsHilighted(RDC::OCC::PrsMgr_PresentationManager^ aPM, int aMode)
{
	bool _result = ((::StdSelect_BRepOwner*)_NativeInstance)->IsHilighted(Handle(::PrsMgr_PresentationManager)(aPM->NativeInstance), aMode);
	return _result;
}

bool RDC::OCC::StdSelect_BRepOwner::IsHilighted(RDC::OCC::PrsMgr_PresentationManager^ aPM)
{
	bool _result = ((::StdSelect_BRepOwner*)_NativeInstance)->IsHilighted(Handle(::PrsMgr_PresentationManager)(aPM->NativeInstance), 0);
	return _result;
}

void RDC::OCC::StdSelect_BRepOwner::HilightWithColor(RDC::OCC::PrsMgr_PresentationManager^ thePM, RDC::OCC::Prs3d_Drawer^ theStyle, int theMode)
{
	((::StdSelect_BRepOwner*)_NativeInstance)->HilightWithColor(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode);
}

void RDC::OCC::StdSelect_BRepOwner::Unhilight(RDC::OCC::PrsMgr_PresentationManager^ aPM, int aMode)
{
	((::StdSelect_BRepOwner*)_NativeInstance)->Unhilight(Handle(::PrsMgr_PresentationManager)(aPM->NativeInstance), aMode);
}

void RDC::OCC::StdSelect_BRepOwner::Unhilight(RDC::OCC::PrsMgr_PresentationManager^ aPM)
{
	((::StdSelect_BRepOwner*)_NativeInstance)->Unhilight(Handle(::PrsMgr_PresentationManager)(aPM->NativeInstance), 0);
}

void RDC::OCC::StdSelect_BRepOwner::Clear(RDC::OCC::PrsMgr_PresentationManager^ aPM, int aMode)
{
	((::StdSelect_BRepOwner*)_NativeInstance)->Clear(Handle(::PrsMgr_PresentationManager)(aPM->NativeInstance), aMode);
}

void RDC::OCC::StdSelect_BRepOwner::Clear(RDC::OCC::PrsMgr_PresentationManager^ aPM)
{
	((::StdSelect_BRepOwner*)_NativeInstance)->Clear(Handle(::PrsMgr_PresentationManager)(aPM->NativeInstance), 0);
}

void RDC::OCC::StdSelect_BRepOwner::SetLocation(RDC::OCC::TopLoc_Location^ aLoc)
{
	((::StdSelect_BRepOwner*)_NativeInstance)->SetLocation(*(::TopLoc_Location*)aLoc->NativeInstance);
}

void RDC::OCC::StdSelect_BRepOwner::UpdateHighlightTrsf(RDC::OCC::V3d_Viewer^ theViewer, RDC::OCC::PrsMgr_PresentationManager^ theManager, int theDispMode)
{
	((::StdSelect_BRepOwner*)_NativeInstance)->UpdateHighlightTrsf(Handle(::V3d_Viewer)(theViewer->NativeInstance), Handle(::PrsMgr_PresentationManager)(theManager->NativeInstance), theDispMode);
}

void RDC::OCC::StdSelect_BRepOwner::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::StdSelect_BRepOwner*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::StdSelect_BRepOwner::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::StdSelect_BRepOwner*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::StdSelect_BRepOwner^ RDC::OCC::StdSelect_BRepOwner::CreateDowncasted(::StdSelect_BRepOwner* instance)
{
	return gcnew RDC::OCC::StdSelect_BRepOwner(instance);
}



//---------------------------------------------------------------------
//  Class  StdSelect_BRepSelectionTool
//---------------------------------------------------------------------

RDC::OCC::StdSelect_BRepSelectionTool::StdSelect_BRepSelectionTool()
	: RDC::OCC::BaseClass<::StdSelect_BRepSelectionTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::StdSelect_BRepSelectionTool();
}

void RDC::OCC::StdSelect_BRepSelectionTool::Load(RDC::OCC::SelectMgr_Selection^ aSelection, RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge, double MaximalParameter)
{
	::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, NbPOnEdge, MaximalParameter);
}

void RDC::OCC::StdSelect_BRepSelectionTool::Load(RDC::OCC::SelectMgr_Selection^ aSelection, RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge)
{
	::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, NbPOnEdge, 500);
}

void RDC::OCC::StdSelect_BRepSelectionTool::Load(RDC::OCC::SelectMgr_Selection^ aSelection, RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority)
{
	::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, 9, 500);
}

void RDC::OCC::StdSelect_BRepSelectionTool::Load(RDC::OCC::SelectMgr_Selection^ aSelection, RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation)
{
	::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, -1, 9, 500);
}

void RDC::OCC::StdSelect_BRepSelectionTool::Load(RDC::OCC::SelectMgr_Selection^ aSelection, RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle)
{
	::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, true, -1, 9, 500);
}

void RDC::OCC::StdSelect_BRepSelectionTool::Load(RDC::OCC::SelectMgr_Selection^ aSelection, RDC::OCC::SelectMgr_SelectableObject^ Origin, RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge, double MaximalParameter)
{
	::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), Handle(::SelectMgr_SelectableObject)(Origin->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, NbPOnEdge, MaximalParameter);
}

void RDC::OCC::StdSelect_BRepSelectionTool::Load(RDC::OCC::SelectMgr_Selection^ aSelection, RDC::OCC::SelectMgr_SelectableObject^ Origin, RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge)
{
	::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), Handle(::SelectMgr_SelectableObject)(Origin->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, NbPOnEdge, 500);
}

void RDC::OCC::StdSelect_BRepSelectionTool::Load(RDC::OCC::SelectMgr_Selection^ aSelection, RDC::OCC::SelectMgr_SelectableObject^ Origin, RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority)
{
	::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), Handle(::SelectMgr_SelectableObject)(Origin->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, 9, 500);
}

void RDC::OCC::StdSelect_BRepSelectionTool::Load(RDC::OCC::SelectMgr_Selection^ aSelection, RDC::OCC::SelectMgr_SelectableObject^ Origin, RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation)
{
	::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), Handle(::SelectMgr_SelectableObject)(Origin->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, -1, 9, 500);
}

void RDC::OCC::StdSelect_BRepSelectionTool::Load(RDC::OCC::SelectMgr_Selection^ aSelection, RDC::OCC::SelectMgr_SelectableObject^ Origin, RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle)
{
	::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), Handle(::SelectMgr_SelectableObject)(Origin->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, true, -1, 9, 500);
}

int RDC::OCC::StdSelect_BRepSelectionTool::GetStandardPriority(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::TopAbs_ShapeEnum theType)
{
	int _result = ::StdSelect_BRepSelectionTool::GetStandardPriority(*(::TopoDS_Shape*)theShape->NativeInstance, (::TopAbs_ShapeEnum)theType);
	return _result;
}

void RDC::OCC::StdSelect_BRepSelectionTool::ComputeSensitive(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::SelectMgr_EntityOwner^ theOwner, RDC::OCC::SelectMgr_Selection^ theSelection, double theDeflection, double theDeflAngle, int theNbPOnEdge, double theMaxiParam, bool theAutoTriang)
{
	::StdSelect_BRepSelectionTool::ComputeSensitive(*(::TopoDS_Shape*)theShape->NativeInstance, Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), Handle(::SelectMgr_Selection)(theSelection->NativeInstance), theDeflection, theDeflAngle, theNbPOnEdge, theMaxiParam, theAutoTriang);
}

void RDC::OCC::StdSelect_BRepSelectionTool::ComputeSensitive(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::SelectMgr_EntityOwner^ theOwner, RDC::OCC::SelectMgr_Selection^ theSelection, double theDeflection, double theDeflAngle, int theNbPOnEdge, double theMaxiParam)
{
	::StdSelect_BRepSelectionTool::ComputeSensitive(*(::TopoDS_Shape*)theShape->NativeInstance, Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), Handle(::SelectMgr_Selection)(theSelection->NativeInstance), theDeflection, theDeflAngle, theNbPOnEdge, theMaxiParam, true);
}

bool RDC::OCC::StdSelect_BRepSelectionTool::GetSensitiveForCylinder(RDC::OCC::TopTools_IndexedMapOfShape^ theSubfacesMap, RDC::OCC::SelectMgr_EntityOwner^ theOwner, RDC::OCC::SelectMgr_Selection^ theSelection)
{
	bool _result = ::StdSelect_BRepSelectionTool::GetSensitiveForCylinder(*(::TopTools_IndexedMapOfShape*)theSubfacesMap->NativeInstance, Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), Handle(::SelectMgr_Selection)(theSelection->NativeInstance));
	return _result;
}

void RDC::OCC::StdSelect_BRepSelectionTool::PreBuildBVH(RDC::OCC::SelectMgr_Selection^ theSelection)
{
	::StdSelect_BRepSelectionTool::PreBuildBVH(Handle(::SelectMgr_Selection)(theSelection->NativeInstance));
}



//---------------------------------------------------------------------
//  Class  StdSelect_EdgeFilter
//---------------------------------------------------------------------

RDC::OCC::StdSelect_EdgeFilter::StdSelect_EdgeFilter(RDC::OCC::StdSelect_TypeOfEdge Edge)
	: RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_EdgeFilter((::StdSelect_TypeOfEdge)Edge);
}

void RDC::OCC::StdSelect_EdgeFilter::SetType(RDC::OCC::StdSelect_TypeOfEdge aNewType)
{
	((::StdSelect_EdgeFilter*)_NativeInstance)->SetType((::StdSelect_TypeOfEdge)aNewType);
}

RDC::OCC::StdSelect_TypeOfEdge RDC::OCC::StdSelect_EdgeFilter::Type()
{
	::StdSelect_TypeOfEdge _result = ((::StdSelect_EdgeFilter*)_NativeInstance)->Type();
	return (RDC::OCC::StdSelect_TypeOfEdge)_result;
}

bool RDC::OCC::StdSelect_EdgeFilter::IsOk(RDC::OCC::SelectMgr_EntityOwner^ anobj)
{
	bool _result = ((::StdSelect_EdgeFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anobj->NativeInstance));
	return _result;
}

bool RDC::OCC::StdSelect_EdgeFilter::ActsOn(RDC::OCC::TopAbs_ShapeEnum aStandardMode)
{
	bool _result = ((::StdSelect_EdgeFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
	return _result;
}

RDC::OCC::StdSelect_EdgeFilter^ RDC::OCC::StdSelect_EdgeFilter::CreateDowncasted(::StdSelect_EdgeFilter* instance)
{
	return gcnew RDC::OCC::StdSelect_EdgeFilter(instance);
}



//---------------------------------------------------------------------
//  Class  StdSelect_FaceFilter
//---------------------------------------------------------------------

RDC::OCC::StdSelect_FaceFilter::StdSelect_FaceFilter(RDC::OCC::StdSelect_TypeOfFace aTypeOfFace)
	: RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_FaceFilter((::StdSelect_TypeOfFace)aTypeOfFace);
}

void RDC::OCC::StdSelect_FaceFilter::SetType(RDC::OCC::StdSelect_TypeOfFace aNewType)
{
	((::StdSelect_FaceFilter*)_NativeInstance)->SetType((::StdSelect_TypeOfFace)aNewType);
}

RDC::OCC::StdSelect_TypeOfFace RDC::OCC::StdSelect_FaceFilter::Type()
{
	::StdSelect_TypeOfFace _result = ((::StdSelect_FaceFilter*)_NativeInstance)->Type();
	return (RDC::OCC::StdSelect_TypeOfFace)_result;
}

bool RDC::OCC::StdSelect_FaceFilter::IsOk(RDC::OCC::SelectMgr_EntityOwner^ anobj)
{
	bool _result = ((::StdSelect_FaceFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anobj->NativeInstance));
	return _result;
}

bool RDC::OCC::StdSelect_FaceFilter::ActsOn(RDC::OCC::TopAbs_ShapeEnum aStandardMode)
{
	bool _result = ((::StdSelect_FaceFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
	return _result;
}

RDC::OCC::StdSelect_FaceFilter^ RDC::OCC::StdSelect_FaceFilter::CreateDowncasted(::StdSelect_FaceFilter* instance)
{
	return gcnew RDC::OCC::StdSelect_FaceFilter(instance);
}



//---------------------------------------------------------------------
//  Class  StdSelect_ShapeTypeFilter
//---------------------------------------------------------------------

RDC::OCC::StdSelect_ShapeTypeFilter::StdSelect_ShapeTypeFilter(RDC::OCC::TopAbs_ShapeEnum aType)
	: RDC::OCC::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_ShapeTypeFilter((::TopAbs_ShapeEnum)aType);
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::StdSelect_ShapeTypeFilter::Type()
{
	::TopAbs_ShapeEnum _result = ((::StdSelect_ShapeTypeFilter*)_NativeInstance)->Type();
	return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

bool RDC::OCC::StdSelect_ShapeTypeFilter::IsOk(RDC::OCC::SelectMgr_EntityOwner^ anobj)
{
	bool _result = ((::StdSelect_ShapeTypeFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anobj->NativeInstance));
	return _result;
}

bool RDC::OCC::StdSelect_ShapeTypeFilter::ActsOn(RDC::OCC::TopAbs_ShapeEnum aStandardMode)
{
	bool _result = ((::StdSelect_ShapeTypeFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
	return _result;
}

RDC::OCC::StdSelect_ShapeTypeFilter^ RDC::OCC::StdSelect_ShapeTypeFilter::CreateDowncasted(::StdSelect_ShapeTypeFilter* instance)
{
	return gcnew RDC::OCC::StdSelect_ShapeTypeFilter(instance);
}



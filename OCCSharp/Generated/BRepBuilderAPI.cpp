// Generated wrapper code for package BRepBuilderAPI

#include "OcctPCH.h"
#include "BRepBuilderAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Bnd.h"
#include "Geom.h"
#include "gp.h"
#include "TColStd.h"
#include "TopoDS.h"
#include "TopTools.h"
#include "BRepPrimAPI.h"
#include "BRepAlgoAPI.h"
#include "BRepFeat.h"
#include "ShapeConstruct.h"
#include "BRepFilletAPI.h"
#include "BRepOffsetAPI.h"
#include "Message.h"
#include "Geom2d.h"
#include "BRepTools.h"


//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_BndBoxTree
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_BndBoxTree::BRepBuilderAPI_BndBoxTree()
    : RDC::OCC::BaseClass<::BRepBuilderAPI_BndBoxTree>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_BndBoxTree();
}

RDC::OCC::BRepBuilderAPI_BndBoxTree::BRepBuilderAPI_BndBoxTree(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::BRepBuilderAPI_BndBoxTree>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_BndBoxTree(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

bool RDC::OCC::BRepBuilderAPI_BndBoxTree::Add(int theObj, RDC::OCC::Bnd_Box^ theBnd)
{
    pin_ptr<int> pp_theObj = &theObj;
    bool _result = ((::BRepBuilderAPI_BndBoxTree*)_NativeInstance)->Add(*(int*)pp_theObj, *(::Bnd_Box*)theBnd->NativeInstance);
    return _result;
}

void RDC::OCC::BRepBuilderAPI_BndBoxTree::Clear(RDC::OCC::NCollection_BaseAllocator^ aNewAlloc)
{
    ((::BRepBuilderAPI_BndBoxTree*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(aNewAlloc->NativeInstance));
}

void RDC::OCC::BRepBuilderAPI_BndBoxTree::Clear()
{
    ((::BRepBuilderAPI_BndBoxTree*)_NativeInstance)->Clear(0L);
}

bool RDC::OCC::BRepBuilderAPI_BndBoxTree::IsEmpty()
{
    bool _result = ((::BRepBuilderAPI_BndBoxTree*)_NativeInstance)->IsEmpty();
    return _result;
}

RDC::OCC::NCollection_BaseAllocator^ RDC::OCC::BRepBuilderAPI_BndBoxTree::Allocator()
{
    Handle(::NCollection_BaseAllocator) _result = ((::BRepBuilderAPI_BndBoxTree*)_NativeInstance)->Allocator();
    return _result.IsNull() ? nullptr : RDC::OCC::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI::BRepBuilderAPI()
    : RDC::OCC::BaseClass<::BRepBuilderAPI>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI();
}

void RDC::OCC::BRepBuilderAPI::Plane(RDC::OCC::Geom_Plane^ P)
{
    ::BRepBuilderAPI::Plane(Handle(::Geom_Plane)(P->NativeInstance));
}

RDC::OCC::Geom_Plane^ RDC::OCC::BRepBuilderAPI::Plane()
{
    Handle(::Geom_Plane) _result = ::BRepBuilderAPI::Plane();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Plane::CreateDowncasted(_result.get());
}

void RDC::OCC::BRepBuilderAPI::Precision(double P)
{
    ::BRepBuilderAPI::Precision(P);
}

double RDC::OCC::BRepBuilderAPI::Precision()
{
    double _result = ::BRepBuilderAPI::Precision();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_VertexInspector
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_VertexInspector::BRepBuilderAPI_VertexInspector(double theTol)
    : RDC::OCC::BaseClass<::BRepBuilderAPI_VertexInspector>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_VertexInspector(theTol);
}

void RDC::OCC::BRepBuilderAPI_VertexInspector::Add(RDC::OCC::XYZ thePnt)
{
    pin_ptr<RDC::OCC::XYZ> pp_thePnt = &thePnt;
    ((::BRepBuilderAPI_VertexInspector*)_NativeInstance)->Add(*(gp_XYZ*)pp_thePnt);
}

void RDC::OCC::BRepBuilderAPI_VertexInspector::ClearResList()
{
    ((::BRepBuilderAPI_VertexInspector*)_NativeInstance)->ClearResList();
}

void RDC::OCC::BRepBuilderAPI_VertexInspector::SetCurrent(RDC::OCC::XYZ theCurPnt)
{
    pin_ptr<RDC::OCC::XYZ> pp_theCurPnt = &theCurPnt;
    ((::BRepBuilderAPI_VertexInspector*)_NativeInstance)->SetCurrent(*(gp_XYZ*)pp_theCurPnt);
}

RDC::OCC::TColStd_ListOfInteger^ RDC::OCC::BRepBuilderAPI_VertexInspector::ResInd()
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    *_result = (::TColStd_ListOfInteger)((::BRepBuilderAPI_VertexInspector*)_NativeInstance)->ResInd();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_ListOfInteger(_result);
}

RDC::OCC::NCollection_CellFilter_Action RDC::OCC::BRepBuilderAPI_VertexInspector::Inspect(int theTarget)
{
    ::NCollection_CellFilter_Action _result = ((::BRepBuilderAPI_VertexInspector*)_NativeInstance)->Inspect(theTarget);
    return (RDC::OCC::NCollection_CellFilter_Action)_result;
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Command
//---------------------------------------------------------------------

bool RDC::OCC::BRepBuilderAPI_Command::IsDone()
{
    bool _result = ((::BRepBuilderAPI_Command*)_NativeInstance)->IsDone();
    return _result;
}

void RDC::OCC::BRepBuilderAPI_Command::Check()
{
    ((::BRepBuilderAPI_Command*)_NativeInstance)->Check();
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Collect
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_Collect::BRepBuilderAPI_Collect()
    : RDC::OCC::BaseClass<::BRepBuilderAPI_Collect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_Collect();
}

void RDC::OCC::BRepBuilderAPI_Collect::Add(RDC::OCC::TopoDS_Shape^ SI, RDC::OCC::BRepBuilderAPI_MakeShape^ MKS)
{
    ((::BRepBuilderAPI_Collect*)_NativeInstance)->Add(*(::TopoDS_Shape*)SI->NativeInstance, *(::BRepBuilderAPI_MakeShape*)MKS->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_Collect::AddGenerated(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopoDS_Shape^ Gen)
{
    ((::BRepBuilderAPI_Collect*)_NativeInstance)->AddGenerated(*(::TopoDS_Shape*)S->NativeInstance, *(::TopoDS_Shape*)Gen->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_Collect::AddModif(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopoDS_Shape^ Mod)
{
    ((::BRepBuilderAPI_Collect*)_NativeInstance)->AddModif(*(::TopoDS_Shape*)S->NativeInstance, *(::TopoDS_Shape*)Mod->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_Collect::Filter(RDC::OCC::TopoDS_Shape^ SF)
{
    ((::BRepBuilderAPI_Collect*)_NativeInstance)->Filter(*(::TopoDS_Shape*)SF->NativeInstance);
}

RDC::OCC::TopTools_DataMapOfShapeListOfShape^ RDC::OCC::BRepBuilderAPI_Collect::Modification()
{
    ::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
    *_result = (::TopTools_DataMapOfShapeListOfShape)((::BRepBuilderAPI_Collect*)_NativeInstance)->Modification();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_DataMapOfShapeListOfShape(_result);
}

RDC::OCC::TopTools_DataMapOfShapeListOfShape^ RDC::OCC::BRepBuilderAPI_Collect::Generated()
{
    ::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
    *_result = (::TopTools_DataMapOfShapeListOfShape)((::BRepBuilderAPI_Collect*)_NativeInstance)->Generated();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_DataMapOfShapeListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeShape
//---------------------------------------------------------------------

void RDC::OCC::BRepBuilderAPI_MakeShape::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BRepBuilderAPI_MakeShape*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_MakeShape::Build()
{
    ((::BRepBuilderAPI_MakeShape*)_NativeInstance)->Build(::Message_ProgressRange());
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepBuilderAPI_MakeShape::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepBuilderAPI_MakeShape*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepBuilderAPI_MakeShape::Generated(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepBuilderAPI_MakeShape*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepBuilderAPI_MakeShape::Modified(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepBuilderAPI_MakeShape*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

bool RDC::OCC::BRepBuilderAPI_MakeShape::IsDeleted(RDC::OCC::TopoDS_Shape^ S)
{
    bool _result = ((::BRepBuilderAPI_MakeShape*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_ModifyShape
//---------------------------------------------------------------------

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepBuilderAPI_ModifyShape::Modified(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepBuilderAPI_ModifyShape*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepBuilderAPI_ModifyShape::ModifiedShape(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepBuilderAPI_ModifyShape*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Copy
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_Copy::BRepBuilderAPI_Copy()
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_Copy();
}

RDC::OCC::BRepBuilderAPI_Copy::BRepBuilderAPI_Copy(RDC::OCC::TopoDS_Shape^ S, bool copyGeom, bool copyMesh)
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_Copy(*(::TopoDS_Shape*)S->NativeInstance, copyGeom, copyMesh);
}

RDC::OCC::BRepBuilderAPI_Copy::BRepBuilderAPI_Copy(RDC::OCC::TopoDS_Shape^ S, bool copyGeom)
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_Copy(*(::TopoDS_Shape*)S->NativeInstance, copyGeom, false);
}

RDC::OCC::BRepBuilderAPI_Copy::BRepBuilderAPI_Copy(RDC::OCC::TopoDS_Shape^ S)
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_Copy(*(::TopoDS_Shape*)S->NativeInstance, true, false);
}

void RDC::OCC::BRepBuilderAPI_Copy::Perform(RDC::OCC::TopoDS_Shape^ S, bool copyGeom, bool copyMesh)
{
    ((::BRepBuilderAPI_Copy*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, copyGeom, copyMesh);
}

void RDC::OCC::BRepBuilderAPI_Copy::Perform(RDC::OCC::TopoDS_Shape^ S, bool copyGeom)
{
    ((::BRepBuilderAPI_Copy*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, copyGeom, false);
}

void RDC::OCC::BRepBuilderAPI_Copy::Perform(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepBuilderAPI_Copy*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, true, false);
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_FastSewing
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_FastSewing::BRepBuilderAPI_FastSewing(double theTolerance)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepBuilderAPI_FastSewing(theTolerance);
}

RDC::OCC::BRepBuilderAPI_FastSewing::BRepBuilderAPI_FastSewing()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepBuilderAPI_FastSewing(9.9999999999999995E-7);
}

bool RDC::OCC::BRepBuilderAPI_FastSewing::Add(RDC::OCC::TopoDS_Shape^ theShape)
{
    bool _result = ((::BRepBuilderAPI_FastSewing*)_NativeInstance)->Add(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

bool RDC::OCC::BRepBuilderAPI_FastSewing::Add(RDC::OCC::Geom_Surface^ theSurface)
{
    bool _result = ((::BRepBuilderAPI_FastSewing*)_NativeInstance)->Add(Handle(::Geom_Surface)(theSurface->NativeInstance));
    return _result;
}

void RDC::OCC::BRepBuilderAPI_FastSewing::Perform()
{
    ((::BRepBuilderAPI_FastSewing*)_NativeInstance)->Perform();
}

void RDC::OCC::BRepBuilderAPI_FastSewing::SetTolerance(double theToler)
{
    ((::BRepBuilderAPI_FastSewing*)_NativeInstance)->SetTolerance(theToler);
}

double RDC::OCC::BRepBuilderAPI_FastSewing::GetTolerance()
{
    double _result = ((::BRepBuilderAPI_FastSewing*)_NativeInstance)->GetTolerance();
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepBuilderAPI_FastSewing::GetResult()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepBuilderAPI_FastSewing*)_NativeInstance)->GetResult();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

unsigned int RDC::OCC::BRepBuilderAPI_FastSewing::GetStatuses(System::IO::TextWriter^ theOS)
{
    std::ostringstream oss_theOS;
    unsigned int _result = ((::BRepBuilderAPI_FastSewing*)_NativeInstance)->GetStatuses(&oss_theOS);
    theOS->Write(gcnew System::String(oss_theOS.str().c_str()));
    return _result;
}

unsigned int RDC::OCC::BRepBuilderAPI_FastSewing::GetStatuses()
{
    unsigned int _result = ((::BRepBuilderAPI_FastSewing*)_NativeInstance)->GetStatuses(nullptr);
    return _result;
}

RDC::OCC::BRepBuilderAPI_FastSewing^ RDC::OCC::BRepBuilderAPI_FastSewing::CreateDowncasted(::BRepBuilderAPI_FastSewing* instance)
{
    return gcnew RDC::OCC::BRepBuilderAPI_FastSewing( instance );
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_FindPlane
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_FindPlane::BRepBuilderAPI_FindPlane()
    : RDC::OCC::BaseClass<::BRepBuilderAPI_FindPlane>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_FindPlane();
}

RDC::OCC::BRepBuilderAPI_FindPlane::BRepBuilderAPI_FindPlane(RDC::OCC::TopoDS_Shape^ S, double Tol)
    : RDC::OCC::BaseClass<::BRepBuilderAPI_FindPlane>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_FindPlane(*(::TopoDS_Shape*)S->NativeInstance, Tol);
}

RDC::OCC::BRepBuilderAPI_FindPlane::BRepBuilderAPI_FindPlane(RDC::OCC::TopoDS_Shape^ S)
    : RDC::OCC::BaseClass<::BRepBuilderAPI_FindPlane>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_FindPlane(*(::TopoDS_Shape*)S->NativeInstance, -1);
}

void RDC::OCC::BRepBuilderAPI_FindPlane::Init(RDC::OCC::TopoDS_Shape^ S, double Tol)
{
    ((::BRepBuilderAPI_FindPlane*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, Tol);
}

void RDC::OCC::BRepBuilderAPI_FindPlane::Init(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepBuilderAPI_FindPlane*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, -1);
}

bool RDC::OCC::BRepBuilderAPI_FindPlane::Found()
{
    bool _result = ((::BRepBuilderAPI_FindPlane*)_NativeInstance)->Found();
    return _result;
}

RDC::OCC::Geom_Plane^ RDC::OCC::BRepBuilderAPI_FindPlane::Plane()
{
    Handle(::Geom_Plane) _result = ((::BRepBuilderAPI_FindPlane*)_NativeInstance)->Plane();
    return _result.IsNull() ? nullptr : RDC::OCC::Geom_Plane::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_GTransform
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_GTransform::BRepBuilderAPI_GTransform(RDC::OCC::gp_GTrsf^ T)
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_GTransform(*(::gp_GTrsf*)T->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_GTransform::BRepBuilderAPI_GTransform(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::gp_GTrsf^ T, bool Copy)
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_GTransform(*(::TopoDS_Shape*)S->NativeInstance, *(::gp_GTrsf*)T->NativeInstance, Copy);
}

RDC::OCC::BRepBuilderAPI_GTransform::BRepBuilderAPI_GTransform(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::gp_GTrsf^ T)
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_GTransform(*(::TopoDS_Shape*)S->NativeInstance, *(::gp_GTrsf*)T->NativeInstance, false);
}

void RDC::OCC::BRepBuilderAPI_GTransform::Perform(RDC::OCC::TopoDS_Shape^ S, bool Copy)
{
    ((::BRepBuilderAPI_GTransform*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, Copy);
}

void RDC::OCC::BRepBuilderAPI_GTransform::Perform(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepBuilderAPI_GTransform*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, false);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepBuilderAPI_GTransform::Modified(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepBuilderAPI_GTransform*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepBuilderAPI_GTransform::ModifiedShape(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepBuilderAPI_GTransform*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeEdge
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge()
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge();
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Lin^ L)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Lin*)L->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Lin^ L, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Lin*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Lin^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Lin*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Lin^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Lin*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Circ^ L)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Circ*)L->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Circ^ L, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Circ*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Circ^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Circ*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Circ^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Circ*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Elips^ L)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Elips*)L->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Elips^ L, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Elips*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Elips^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Elips*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Elips^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Elips*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Hypr^ L)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Hypr*)L->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Hypr^ L, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Hypr*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Hypr^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Hypr*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Hypr^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Hypr*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Parab^ L)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Parab*)L->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Parab^ L, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Parab*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Parab^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Parab*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::gp_Parab^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Parab*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Geom_Curve^ L)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance));
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Geom_Curve^ L, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Geom_Curve^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Geom_Curve^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Geom_Curve^ L, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Geom_Curve^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Geom_Surface^ S)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Geom_Surface^ S, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Geom_Surface^ S, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Geom_Surface^ S, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge::Init(RDC::OCC::Geom_Curve^ C)
{
    ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance));
}

void RDC::OCC::BRepBuilderAPI_MakeEdge::Init(RDC::OCC::Geom_Curve^ C, double p1, double p2)
{
    ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), p1, p2);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge::Init(RDC::OCC::Geom_Curve^ C, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge::Init(RDC::OCC::Geom_Curve^ C, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
{
    ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge::Init(RDC::OCC::Geom_Curve^ C, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, double p1, double p2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge::Init(RDC::OCC::Geom_Curve^ C, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double p1, double p2)
{
    ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Geom_Surface^ S)
{
    ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
}

void RDC::OCC::BRepBuilderAPI_MakeEdge::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Geom_Surface^ S, double p1, double p2)
{
    ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), p1, p2);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Geom_Surface^ S, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
{
    ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Geom_Surface^ S, RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, double p1, double p2)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double p1, double p2)
{
    ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

bool RDC::OCC::BRepBuilderAPI_MakeEdge::IsDone()
{
    bool _result = ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::BRepBuilderAPI_EdgeError RDC::OCC::BRepBuilderAPI_MakeEdge::Error()
{
    ::BRepBuilderAPI_EdgeError _result = ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Error();
    return (RDC::OCC::BRepBuilderAPI_EdgeError)_result;
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepBuilderAPI_MakeEdge::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepBuilderAPI_MakeEdge::Vertex1()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Vertex1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepBuilderAPI_MakeEdge::Vertex2()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Vertex2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeEdge2d
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Lin2d^ L)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Lin2d^ L, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Lin2d^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Lin2d^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Circ2d^ L)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Circ2d^ L, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Circ2d^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Circ2d^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Elips2d^ L)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Elips2d^ L, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Elips2d^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Elips2d^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Hypr2d^ L)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Hypr2d^ L, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Hypr2d^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Hypr2d^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Parab2d^ L)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Parab2d^ L, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Parab2d^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::gp_Parab2d^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::Geom2d_Curve^ L)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance));
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::Geom2d_Curve^ L, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, p1, p2);
}

RDC::OCC::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(RDC::OCC::Geom2d_Curve^ L, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double p1, double p2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge2d::Init(RDC::OCC::Geom2d_Curve^ C)
{
    ((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance));
}

void RDC::OCC::BRepBuilderAPI_MakeEdge2d::Init(RDC::OCC::Geom2d_Curve^ C, double p1, double p2)
{
    ((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), p1, p2);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge2d::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    ((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge2d::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
{
    ((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge2d::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::Pnt2d P1, RDC::OCC::Pnt2d P2, double p1, double p2)
{
    pin_ptr<RDC::OCC::Pnt2d> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt2d> pp_P2 = &P2;
    ((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, p1, p2);
}

void RDC::OCC::BRepBuilderAPI_MakeEdge2d::Init(RDC::OCC::Geom2d_Curve^ C, RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, double p1, double p2)
{
    ((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

bool RDC::OCC::BRepBuilderAPI_MakeEdge2d::IsDone()
{
    bool _result = ((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::BRepBuilderAPI_EdgeError RDC::OCC::BRepBuilderAPI_MakeEdge2d::Error()
{
    ::BRepBuilderAPI_EdgeError _result = ((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Error();
    return (RDC::OCC::BRepBuilderAPI_EdgeError)_result;
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepBuilderAPI_MakeEdge2d::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepBuilderAPI_MakeEdge2d::Vertex1()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Vertex1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepBuilderAPI_MakeEdge2d::Vertex2()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Vertex2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeFace
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace()
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace();
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::TopoDS_Face^ F)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::TopoDS_Face*)F->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::Pln P)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_P = &P;
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(gp_Pln*)pp_P);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Cylinder^ C)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cylinder*)C->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Cone^ C)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cone*)C->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Sphere^ S)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Sphere*)S->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Torus^ C)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Torus*)C->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::Geom_Surface^ S, double TolDegen)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(Handle(::Geom_Surface)(S->NativeInstance), TolDegen);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::Pln P, double UMin, double UMax, double VMin, double VMax)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_P = &P;
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(gp_Pln*)pp_P, UMin, UMax, VMin, VMax);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Cylinder^ C, double UMin, double UMax, double VMin, double VMax)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cylinder*)C->NativeInstance, UMin, UMax, VMin, VMax);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Cone^ C, double UMin, double UMax, double VMin, double VMax)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cone*)C->NativeInstance, UMin, UMax, VMin, VMax);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Sphere^ S, double UMin, double UMax, double VMin, double VMax)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Sphere*)S->NativeInstance, UMin, UMax, VMin, VMax);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Torus^ C, double UMin, double UMax, double VMin, double VMax)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Torus*)C->NativeInstance, UMin, UMax, VMin, VMax);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, TolDegen);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::TopoDS_Wire^ W, bool OnlyPlane)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::TopoDS_Wire*)W->NativeInstance, OnlyPlane);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::TopoDS_Wire*)W->NativeInstance, false);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::Pln P, RDC::OCC::TopoDS_Wire^ W, bool Inside)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_P = &P;
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(gp_Pln*)pp_P, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::Pln P, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pln> pp_P = &P;
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(gp_Pln*)pp_P, *(::TopoDS_Wire*)W->NativeInstance, true);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Cylinder^ C, RDC::OCC::TopoDS_Wire^ W, bool Inside)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cylinder*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Cylinder^ C, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cylinder*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Cone^ C, RDC::OCC::TopoDS_Wire^ W, bool Inside)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cone*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Cone^ C, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cone*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Sphere^ S, RDC::OCC::TopoDS_Wire^ W, bool Inside)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Sphere*)S->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Sphere^ S, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Sphere*)S->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Torus^ C, RDC::OCC::TopoDS_Wire^ W, bool Inside)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Torus*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::gp_Torus^ C, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Torus*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::Geom_Surface^ S, RDC::OCC::TopoDS_Wire^ W, bool Inside)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::Geom_Surface^ S, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Wire*)W->NativeInstance, true);
}

RDC::OCC::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_MakeFace::Init(RDC::OCC::TopoDS_Face^ F)
{
    ((::BRepBuilderAPI_MakeFace*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_MakeFace::Init(RDC::OCC::Geom_Surface^ S, bool Bound, double TolDegen)
{
    ((::BRepBuilderAPI_MakeFace*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), Bound, TolDegen);
}

void RDC::OCC::BRepBuilderAPI_MakeFace::Init(RDC::OCC::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen)
{
    ((::BRepBuilderAPI_MakeFace*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, TolDegen);
}

void RDC::OCC::BRepBuilderAPI_MakeFace::Add(RDC::OCC::TopoDS_Wire^ W)
{
    ((::BRepBuilderAPI_MakeFace*)_NativeInstance)->Add(*(::TopoDS_Wire*)W->NativeInstance);
}

bool RDC::OCC::BRepBuilderAPI_MakeFace::IsDone()
{
    bool _result = ((::BRepBuilderAPI_MakeFace*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::BRepBuilderAPI_FaceError RDC::OCC::BRepBuilderAPI_MakeFace::Error()
{
    ::BRepBuilderAPI_FaceError _result = ((::BRepBuilderAPI_MakeFace*)_NativeInstance)->Error();
    return (RDC::OCC::BRepBuilderAPI_FaceError)_result;
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepBuilderAPI_MakeFace::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepBuilderAPI_MakeFace*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakePolygon
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon()
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakePolygon();
}

RDC::OCC::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

RDC::OCC::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Pnt P3, bool Close)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt> pp_P3 = &P3;
    _NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, Close);
}

RDC::OCC::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Pnt P3)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt> pp_P3 = &P3;
    _NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, false);
}

RDC::OCC::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Pnt P3, RDC::OCC::Pnt P4, bool Close)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt> pp_P3 = &P3;
    pin_ptr<RDC::OCC::Pnt> pp_P4 = &P4;
    _NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, *(gp_Pnt*)pp_P4, Close);
}

RDC::OCC::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2, RDC::OCC::Pnt P3, RDC::OCC::Pnt P4)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<RDC::OCC::Pnt> pp_P3 = &P3;
    pin_ptr<RDC::OCC::Pnt> pp_P4 = &P4;
    _NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, *(gp_Pnt*)pp_P4, false);
}

RDC::OCC::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, RDC::OCC::TopoDS_Vertex^ V3, bool Close)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, Close);
}

RDC::OCC::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, RDC::OCC::TopoDS_Vertex^ V3)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, false);
}

RDC::OCC::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, RDC::OCC::TopoDS_Vertex^ V3, RDC::OCC::TopoDS_Vertex^ V4, bool Close)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, *(::TopoDS_Vertex*)V4->NativeInstance, Close);
}

RDC::OCC::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2, RDC::OCC::TopoDS_Vertex^ V3, RDC::OCC::TopoDS_Vertex^ V4)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, *(::TopoDS_Vertex*)V4->NativeInstance, false);
}

void RDC::OCC::BRepBuilderAPI_MakePolygon::Add(RDC::OCC::Pnt P)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    ((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->Add(*(gp_Pnt*)pp_P);
}

void RDC::OCC::BRepBuilderAPI_MakePolygon::Add(RDC::OCC::TopoDS_Vertex^ V)
{
    ((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->Add(*(::TopoDS_Vertex*)V->NativeInstance);
}

bool RDC::OCC::BRepBuilderAPI_MakePolygon::Added()
{
    bool _result = ((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->Added();
    return _result;
}

void RDC::OCC::BRepBuilderAPI_MakePolygon::Close()
{
    ((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->Close();
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepBuilderAPI_MakePolygon::FirstVertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->FirstVertex();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepBuilderAPI_MakePolygon::LastVertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->LastVertex();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

bool RDC::OCC::BRepBuilderAPI_MakePolygon::IsDone()
{
    bool _result = ((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepBuilderAPI_MakePolygon::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Wire^ RDC::OCC::BRepBuilderAPI_MakePolygon::Wire()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->Wire();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Wire(_result);
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeShapeOnMesh
//---------------------------------------------------------------------

void RDC::OCC::BRepBuilderAPI_MakeShapeOnMesh::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
    ((::BRepBuilderAPI_MakeShapeOnMesh*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_MakeShapeOnMesh::Build()
{
    ((::BRepBuilderAPI_MakeShapeOnMesh*)_NativeInstance)->Build(::Message_ProgressRange());
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeShell
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_MakeShell::BRepBuilderAPI_MakeShell()
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeShell();
}

RDC::OCC::BRepBuilderAPI_MakeShell::BRepBuilderAPI_MakeShell(RDC::OCC::Geom_Surface^ S, bool Segment)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeShell(Handle(::Geom_Surface)(S->NativeInstance), Segment);
}

RDC::OCC::BRepBuilderAPI_MakeShell::BRepBuilderAPI_MakeShell(RDC::OCC::Geom_Surface^ S)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeShell(Handle(::Geom_Surface)(S->NativeInstance), false);
}

RDC::OCC::BRepBuilderAPI_MakeShell::BRepBuilderAPI_MakeShell(RDC::OCC::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeShell(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, Segment);
}

RDC::OCC::BRepBuilderAPI_MakeShell::BRepBuilderAPI_MakeShell(RDC::OCC::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeShell(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, false);
}

void RDC::OCC::BRepBuilderAPI_MakeShell::Init(RDC::OCC::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment)
{
    ((::BRepBuilderAPI_MakeShell*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, Segment);
}

void RDC::OCC::BRepBuilderAPI_MakeShell::Init(RDC::OCC::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax)
{
    ((::BRepBuilderAPI_MakeShell*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, false);
}

bool RDC::OCC::BRepBuilderAPI_MakeShell::IsDone()
{
    bool _result = ((::BRepBuilderAPI_MakeShell*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::BRepBuilderAPI_ShellError RDC::OCC::BRepBuilderAPI_MakeShell::Error()
{
    ::BRepBuilderAPI_ShellError _result = ((::BRepBuilderAPI_MakeShell*)_NativeInstance)->Error();
    return (RDC::OCC::BRepBuilderAPI_ShellError)_result;
}

RDC::OCC::TopoDS_Shell^ RDC::OCC::BRepBuilderAPI_MakeShell::Shell()
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = (::TopoDS_Shell)((::BRepBuilderAPI_MakeShell*)_NativeInstance)->Shell();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shell(_result);
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeSolid
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid()
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeSolid();
}

RDC::OCC::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(RDC::OCC::TopoDS_CompSolid^ S)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::TopoDS_CompSolid*)S->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(RDC::OCC::TopoDS_Shell^ S)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::TopoDS_Shell*)S->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(RDC::OCC::TopoDS_Shell^ S1, RDC::OCC::TopoDS_Shell^ S2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::TopoDS_Shell*)S1->NativeInstance, *(::TopoDS_Shell*)S2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(RDC::OCC::TopoDS_Shell^ S1, RDC::OCC::TopoDS_Shell^ S2, RDC::OCC::TopoDS_Shell^ S3)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::TopoDS_Shell*)S1->NativeInstance, *(::TopoDS_Shell*)S2->NativeInstance, *(::TopoDS_Shell*)S3->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(RDC::OCC::TopoDS_Solid^ So)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::TopoDS_Solid*)So->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(RDC::OCC::TopoDS_Solid^ So, RDC::OCC::TopoDS_Shell^ S)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::TopoDS_Solid*)So->NativeInstance, *(::TopoDS_Shell*)S->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_MakeSolid::Add(RDC::OCC::TopoDS_Shell^ S)
{
    ((::BRepBuilderAPI_MakeSolid*)_NativeInstance)->Add(*(::TopoDS_Shell*)S->NativeInstance);
}

bool RDC::OCC::BRepBuilderAPI_MakeSolid::IsDone()
{
    bool _result = ((::BRepBuilderAPI_MakeSolid*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::TopoDS_Solid^ RDC::OCC::BRepBuilderAPI_MakeSolid::Solid()
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = (::TopoDS_Solid)((::BRepBuilderAPI_MakeSolid*)_NativeInstance)->Solid();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Solid(_result);
}

bool RDC::OCC::BRepBuilderAPI_MakeSolid::IsDeleted(RDC::OCC::TopoDS_Shape^ S)
{
    bool _result = ((::BRepBuilderAPI_MakeSolid*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeVertex
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_MakeVertex::BRepBuilderAPI_MakeVertex(RDC::OCC::Pnt P)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    _NativeInstance = new ::BRepBuilderAPI_MakeVertex(*(gp_Pnt*)pp_P);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepBuilderAPI_MakeVertex::Vertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepBuilderAPI_MakeVertex*)_NativeInstance)->Vertex();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeWire
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire()
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeWire();
}

RDC::OCC::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(RDC::OCC::TopoDS_Edge^ E)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::TopoDS_Edge*)E->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2, RDC::OCC::TopoDS_Edge^ E3)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Edge*)E3->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2, RDC::OCC::TopoDS_Edge^ E3, RDC::OCC::TopoDS_Edge^ E4)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Edge*)E3->NativeInstance, *(::TopoDS_Edge*)E4->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::TopoDS_Wire*)W->NativeInstance);
}

RDC::OCC::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(RDC::OCC::TopoDS_Wire^ W, RDC::OCC::TopoDS_Edge^ E)
    : RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_MakeWire::Add(RDC::OCC::TopoDS_Edge^ E)
{
    ((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_MakeWire::Add(RDC::OCC::TopoDS_Wire^ W)
{
    ((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Add(*(::TopoDS_Wire*)W->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_MakeWire::Add(RDC::OCC::TopTools_ListOfShape^ L)
{
    ((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Add(*(::TopTools_ListOfShape*)L->NativeInstance);
}

bool RDC::OCC::BRepBuilderAPI_MakeWire::IsDone()
{
    bool _result = ((::BRepBuilderAPI_MakeWire*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::BRepBuilderAPI_WireError RDC::OCC::BRepBuilderAPI_MakeWire::Error()
{
    ::BRepBuilderAPI_WireError _result = ((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Error();
    return (RDC::OCC::BRepBuilderAPI_WireError)_result;
}

RDC::OCC::TopoDS_Wire^ RDC::OCC::BRepBuilderAPI_MakeWire::Wire()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Wire();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Wire(_result);
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepBuilderAPI_MakeWire::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepBuilderAPI_MakeWire::Vertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Vertex();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_NurbsConvert
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_NurbsConvert::BRepBuilderAPI_NurbsConvert()
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_NurbsConvert();
}

RDC::OCC::BRepBuilderAPI_NurbsConvert::BRepBuilderAPI_NurbsConvert(RDC::OCC::TopoDS_Shape^ S, bool Copy)
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_NurbsConvert(*(::TopoDS_Shape*)S->NativeInstance, Copy);
}

RDC::OCC::BRepBuilderAPI_NurbsConvert::BRepBuilderAPI_NurbsConvert(RDC::OCC::TopoDS_Shape^ S)
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepBuilderAPI_NurbsConvert(*(::TopoDS_Shape*)S->NativeInstance, false);
}

void RDC::OCC::BRepBuilderAPI_NurbsConvert::Perform(RDC::OCC::TopoDS_Shape^ S, bool Copy)
{
    ((::BRepBuilderAPI_NurbsConvert*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, Copy);
}

void RDC::OCC::BRepBuilderAPI_NurbsConvert::Perform(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepBuilderAPI_NurbsConvert*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, false);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepBuilderAPI_NurbsConvert::Modified(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepBuilderAPI_NurbsConvert*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepBuilderAPI_NurbsConvert::ModifiedShape(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepBuilderAPI_NurbsConvert*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Sewing
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_Sewing::BRepBuilderAPI_Sewing(double tolerance, bool option1, bool option2, bool option3, bool option4)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepBuilderAPI_Sewing(tolerance, option1, option2, option3, option4);
}

RDC::OCC::BRepBuilderAPI_Sewing::BRepBuilderAPI_Sewing(double tolerance, bool option1, bool option2, bool option3)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepBuilderAPI_Sewing(tolerance, option1, option2, option3, false);
}

RDC::OCC::BRepBuilderAPI_Sewing::BRepBuilderAPI_Sewing(double tolerance, bool option1, bool option2)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepBuilderAPI_Sewing(tolerance, option1, option2, true, false);
}

RDC::OCC::BRepBuilderAPI_Sewing::BRepBuilderAPI_Sewing(double tolerance, bool option1)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepBuilderAPI_Sewing(tolerance, option1, true, true, false);
}

RDC::OCC::BRepBuilderAPI_Sewing::BRepBuilderAPI_Sewing(double tolerance)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepBuilderAPI_Sewing(tolerance, true, true, true, false);
}

RDC::OCC::BRepBuilderAPI_Sewing::BRepBuilderAPI_Sewing()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepBuilderAPI_Sewing(9.9999999999999995E-7, true, true, true, false);
}

void RDC::OCC::BRepBuilderAPI_Sewing::Init(double tolerance, bool option1, bool option2, bool option3, bool option4)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Init(tolerance, option1, option2, option3, option4);
}

void RDC::OCC::BRepBuilderAPI_Sewing::Init(double tolerance, bool option1, bool option2, bool option3)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Init(tolerance, option1, option2, option3, false);
}

void RDC::OCC::BRepBuilderAPI_Sewing::Init(double tolerance, bool option1, bool option2)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Init(tolerance, option1, option2, true, false);
}

void RDC::OCC::BRepBuilderAPI_Sewing::Init(double tolerance, bool option1)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Init(tolerance, option1, true, true, false);
}

void RDC::OCC::BRepBuilderAPI_Sewing::Init(double tolerance)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Init(tolerance, true, true, true, false);
}

void RDC::OCC::BRepBuilderAPI_Sewing::Init()
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Init(9.9999999999999995E-7, true, true, true, false);
}

void RDC::OCC::BRepBuilderAPI_Sewing::Load(RDC::OCC::TopoDS_Shape^ shape)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Load(*(::TopoDS_Shape*)shape->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_Sewing::Add(RDC::OCC::TopoDS_Shape^ shape)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Add(*(::TopoDS_Shape*)shape->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_Sewing::Perform(RDC::OCC::Message_ProgressRange^ theProgress)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theProgress->NativeInstance);
}

void RDC::OCC::BRepBuilderAPI_Sewing::Perform()
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Perform(::Message_ProgressRange());
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepBuilderAPI_Sewing::SewedShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepBuilderAPI_Sewing*)_NativeInstance)->SewedShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::BRepBuilderAPI_Sewing::SetContext(RDC::OCC::BRepTools_ReShape^ theContext)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetContext(Handle(::BRepTools_ReShape)(theContext->NativeInstance));
}

RDC::OCC::BRepTools_ReShape^ RDC::OCC::BRepBuilderAPI_Sewing::GetContext()
{
    Handle(::BRepTools_ReShape) _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->GetContext();
    return _result.IsNull() ? nullptr : RDC::OCC::BRepTools_ReShape::CreateDowncasted(_result.get());
}

int RDC::OCC::BRepBuilderAPI_Sewing::NbFreeEdges()
{
    int _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->NbFreeEdges();
    return _result;
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepBuilderAPI_Sewing::FreeEdge(int index)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepBuilderAPI_Sewing*)_NativeInstance)->FreeEdge(index);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

int RDC::OCC::BRepBuilderAPI_Sewing::NbMultipleEdges()
{
    int _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->NbMultipleEdges();
    return _result;
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepBuilderAPI_Sewing::MultipleEdge(int index)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepBuilderAPI_Sewing*)_NativeInstance)->MultipleEdge(index);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

int RDC::OCC::BRepBuilderAPI_Sewing::NbContigousEdges()
{
    int _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->NbContigousEdges();
    return _result;
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepBuilderAPI_Sewing::ContigousEdge(int index)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepBuilderAPI_Sewing*)_NativeInstance)->ContigousEdge(index);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepBuilderAPI_Sewing::ContigousEdgeCouple(int index)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepBuilderAPI_Sewing*)_NativeInstance)->ContigousEdgeCouple(index);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

bool RDC::OCC::BRepBuilderAPI_Sewing::IsSectionBound(RDC::OCC::TopoDS_Edge^ section)
{
    bool _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->IsSectionBound(*(::TopoDS_Edge*)section->NativeInstance);
    return _result;
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepBuilderAPI_Sewing::SectionToBoundary(RDC::OCC::TopoDS_Edge^ section)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepBuilderAPI_Sewing*)_NativeInstance)->SectionToBoundary(*(::TopoDS_Edge*)section->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

int RDC::OCC::BRepBuilderAPI_Sewing::NbDegeneratedShapes()
{
    int _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->NbDegeneratedShapes();
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepBuilderAPI_Sewing::DegeneratedShape(int index)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepBuilderAPI_Sewing*)_NativeInstance)->DegeneratedShape(index);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::BRepBuilderAPI_Sewing::IsDegenerated(RDC::OCC::TopoDS_Shape^ shape)
{
    bool _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->IsDegenerated(*(::TopoDS_Shape*)shape->NativeInstance);
    return _result;
}

bool RDC::OCC::BRepBuilderAPI_Sewing::IsModified(RDC::OCC::TopoDS_Shape^ shape)
{
    bool _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->IsModified(*(::TopoDS_Shape*)shape->NativeInstance);
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepBuilderAPI_Sewing::Modified(RDC::OCC::TopoDS_Shape^ shape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepBuilderAPI_Sewing*)_NativeInstance)->Modified(*(::TopoDS_Shape*)shape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::BRepBuilderAPI_Sewing::IsModifiedSubShape(RDC::OCC::TopoDS_Shape^ shape)
{
    bool _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->IsModifiedSubShape(*(::TopoDS_Shape*)shape->NativeInstance);
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepBuilderAPI_Sewing::ModifiedSubShape(RDC::OCC::TopoDS_Shape^ shape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->ModifiedSubShape(*(::TopoDS_Shape*)shape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::BRepBuilderAPI_Sewing::Dump()
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Dump();
}

int RDC::OCC::BRepBuilderAPI_Sewing::NbDeletedFaces()
{
    int _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->NbDeletedFaces();
    return _result;
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepBuilderAPI_Sewing::DeletedFace(int index)
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepBuilderAPI_Sewing*)_NativeInstance)->DeletedFace(index);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepBuilderAPI_Sewing::WhichFace(RDC::OCC::TopoDS_Edge^ theEdg, int index)
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->WhichFace(*(::TopoDS_Edge*)theEdg->NativeInstance, index);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepBuilderAPI_Sewing::WhichFace(RDC::OCC::TopoDS_Edge^ theEdg)
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->WhichFace(*(::TopoDS_Edge*)theEdg->NativeInstance, 1);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

bool RDC::OCC::BRepBuilderAPI_Sewing::SameParameterMode()
{
    bool _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->SameParameterMode();
    return _result;
}

void RDC::OCC::BRepBuilderAPI_Sewing::SetSameParameterMode(bool SameParameterMode)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetSameParameterMode(SameParameterMode);
}

double RDC::OCC::BRepBuilderAPI_Sewing::Tolerance()
{
    double _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Tolerance();
    return _result;
}

void RDC::OCC::BRepBuilderAPI_Sewing::SetTolerance(double theToler)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetTolerance(theToler);
}

double RDC::OCC::BRepBuilderAPI_Sewing::MinTolerance()
{
    double _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->MinTolerance();
    return _result;
}

void RDC::OCC::BRepBuilderAPI_Sewing::SetMinTolerance(double theMinToler)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetMinTolerance(theMinToler);
}

double RDC::OCC::BRepBuilderAPI_Sewing::MaxTolerance()
{
    double _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->MaxTolerance();
    return _result;
}

void RDC::OCC::BRepBuilderAPI_Sewing::SetMaxTolerance(double theMaxToler)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetMaxTolerance(theMaxToler);
}

bool RDC::OCC::BRepBuilderAPI_Sewing::FaceMode()
{
    bool _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->FaceMode();
    return _result;
}

void RDC::OCC::BRepBuilderAPI_Sewing::SetFaceMode(bool theFaceMode)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetFaceMode(theFaceMode);
}

bool RDC::OCC::BRepBuilderAPI_Sewing::FloatingEdgesMode()
{
    bool _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->FloatingEdgesMode();
    return _result;
}

void RDC::OCC::BRepBuilderAPI_Sewing::SetFloatingEdgesMode(bool theFloatingEdgesMode)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetFloatingEdgesMode(theFloatingEdgesMode);
}

bool RDC::OCC::BRepBuilderAPI_Sewing::LocalTolerancesMode()
{
    bool _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->LocalTolerancesMode();
    return _result;
}

void RDC::OCC::BRepBuilderAPI_Sewing::SetLocalTolerancesMode(bool theLocalTolerancesMode)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetLocalTolerancesMode(theLocalTolerancesMode);
}

void RDC::OCC::BRepBuilderAPI_Sewing::SetNonManifoldMode(bool theNonManifoldMode)
{
    ((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetNonManifoldMode(theNonManifoldMode);
}

bool RDC::OCC::BRepBuilderAPI_Sewing::NonManifoldMode()
{
    bool _result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->NonManifoldMode();
    return _result;
}

RDC::OCC::BRepBuilderAPI_Sewing^ RDC::OCC::BRepBuilderAPI_Sewing::CreateDowncasted(::BRepBuilderAPI_Sewing* instance)
{
    return gcnew RDC::OCC::BRepBuilderAPI_Sewing( instance );
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Transform
//---------------------------------------------------------------------

RDC::OCC::BRepBuilderAPI_Transform::BRepBuilderAPI_Transform(RDC::OCC::Trsf T)
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Trsf> pp_T = &T;
    _NativeInstance = new ::BRepBuilderAPI_Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::BRepBuilderAPI_Transform::BRepBuilderAPI_Transform(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::Trsf theTrsf, bool theCopyGeom, bool theCopyMesh)
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    _NativeInstance = new ::BRepBuilderAPI_Transform(*(::TopoDS_Shape*)theShape->NativeInstance, *(gp_Trsf*)pp_theTrsf, theCopyGeom, theCopyMesh);
}

RDC::OCC::BRepBuilderAPI_Transform::BRepBuilderAPI_Transform(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::Trsf theTrsf, bool theCopyGeom)
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    _NativeInstance = new ::BRepBuilderAPI_Transform(*(::TopoDS_Shape*)theShape->NativeInstance, *(gp_Trsf*)pp_theTrsf, theCopyGeom, false);
}

RDC::OCC::BRepBuilderAPI_Transform::BRepBuilderAPI_Transform(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::Trsf theTrsf)
    : RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
    _NativeInstance = new ::BRepBuilderAPI_Transform(*(::TopoDS_Shape*)theShape->NativeInstance, *(gp_Trsf*)pp_theTrsf, false, false);
}

void RDC::OCC::BRepBuilderAPI_Transform::Perform(RDC::OCC::TopoDS_Shape^ theShape, bool theCopyGeom, bool theCopyMesh)
{
    ((::BRepBuilderAPI_Transform*)_NativeInstance)->Perform(*(::TopoDS_Shape*)theShape->NativeInstance, theCopyGeom, theCopyMesh);
}

void RDC::OCC::BRepBuilderAPI_Transform::Perform(RDC::OCC::TopoDS_Shape^ theShape, bool theCopyGeom)
{
    ((::BRepBuilderAPI_Transform*)_NativeInstance)->Perform(*(::TopoDS_Shape*)theShape->NativeInstance, theCopyGeom, false);
}

void RDC::OCC::BRepBuilderAPI_Transform::Perform(RDC::OCC::TopoDS_Shape^ theShape)
{
    ((::BRepBuilderAPI_Transform*)_NativeInstance)->Perform(*(::TopoDS_Shape*)theShape->NativeInstance, false, false);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepBuilderAPI_Transform::ModifiedShape(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepBuilderAPI_Transform*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepBuilderAPI_Transform::Modified(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepBuilderAPI_Transform*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}



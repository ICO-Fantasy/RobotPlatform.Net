// Generated wrapper code for package TopExp

#include "OcctPCH.h"
#include "TopExp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "TopAbs.h"
#include "TopTools.h"


//---------------------------------------------------------------------
//  Class  TopExp
//---------------------------------------------------------------------

RDC::OCC::TopExp::TopExp()
    : RDC::OCC::BaseClass<::TopExp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopExp();
}

void RDC::OCC::TopExp::MapShapes(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopAbs_ShapeEnum T, RDC::OCC::TopTools_IndexedMapOfShape^ M)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)T, *(::TopTools_IndexedMapOfShape*)M->NativeInstance);
}

void RDC::OCC::TopExp::MapShapes(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_IndexedMapOfShape^ M, bool cumOri, bool cumLoc)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_IndexedMapOfShape*)M->NativeInstance, cumOri, cumLoc);
}

void RDC::OCC::TopExp::MapShapes(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_IndexedMapOfShape^ M, bool cumOri)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_IndexedMapOfShape*)M->NativeInstance, cumOri, true);
}

void RDC::OCC::TopExp::MapShapes(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_IndexedMapOfShape^ M)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_IndexedMapOfShape*)M->NativeInstance, true, true);
}

void RDC::OCC::TopExp::MapShapes(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_MapOfShape^ M, bool cumOri, bool cumLoc)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_MapOfShape*)M->NativeInstance, cumOri, cumLoc);
}

void RDC::OCC::TopExp::MapShapes(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_MapOfShape^ M, bool cumOri)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_MapOfShape*)M->NativeInstance, cumOri, true);
}

void RDC::OCC::TopExp::MapShapes(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_MapOfShape^ M)
{
    ::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_MapOfShape*)M->NativeInstance, true, true);
}

void RDC::OCC::TopExp::MapShapesAndAncestors(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopAbs_ShapeEnum TS, RDC::OCC::TopAbs_ShapeEnum TA, RDC::OCC::TopTools_IndexedDataMapOfShapeListOfShape^ M)
{
    ::TopExp::MapShapesAndAncestors(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)TS, (::TopAbs_ShapeEnum)TA, *(::TopTools_IndexedDataMapOfShapeListOfShape*)M->NativeInstance);
}

void RDC::OCC::TopExp::MapShapesAndUniqueAncestors(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopAbs_ShapeEnum TS, RDC::OCC::TopAbs_ShapeEnum TA, RDC::OCC::TopTools_IndexedDataMapOfShapeListOfShape^ M, bool useOrientation)
{
    ::TopExp::MapShapesAndUniqueAncestors(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)TS, (::TopAbs_ShapeEnum)TA, *(::TopTools_IndexedDataMapOfShapeListOfShape*)M->NativeInstance, useOrientation);
}

void RDC::OCC::TopExp::MapShapesAndUniqueAncestors(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopAbs_ShapeEnum TS, RDC::OCC::TopAbs_ShapeEnum TA, RDC::OCC::TopTools_IndexedDataMapOfShapeListOfShape^ M)
{
    ::TopExp::MapShapesAndUniqueAncestors(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)TS, (::TopAbs_ShapeEnum)TA, *(::TopTools_IndexedDataMapOfShapeListOfShape*)M->NativeInstance, false);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::TopExp::FirstVertex(RDC::OCC::TopoDS_Edge^ E, bool CumOri)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ::TopExp::FirstVertex(*(::TopoDS_Edge*)E->NativeInstance, CumOri);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::TopExp::FirstVertex(RDC::OCC::TopoDS_Edge^ E)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ::TopExp::FirstVertex(*(::TopoDS_Edge*)E->NativeInstance, false);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::TopExp::LastVertex(RDC::OCC::TopoDS_Edge^ E, bool CumOri)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ::TopExp::LastVertex(*(::TopoDS_Edge*)E->NativeInstance, CumOri);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::TopExp::LastVertex(RDC::OCC::TopoDS_Edge^ E)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ::TopExp::LastVertex(*(::TopoDS_Edge*)E->NativeInstance, false);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

void RDC::OCC::TopExp::Vertices(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Vertex^ Vfirst, RDC::OCC::TopoDS_Vertex^ Vlast, bool CumOri)
{
    ::TopExp::Vertices(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Vertex*)Vfirst->NativeInstance, *(::TopoDS_Vertex*)Vlast->NativeInstance, CumOri);
}

void RDC::OCC::TopExp::Vertices(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Vertex^ Vfirst, RDC::OCC::TopoDS_Vertex^ Vlast)
{
    ::TopExp::Vertices(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Vertex*)Vfirst->NativeInstance, *(::TopoDS_Vertex*)Vlast->NativeInstance, false);
}

void RDC::OCC::TopExp::Vertices(RDC::OCC::TopoDS_Wire^ W, RDC::OCC::TopoDS_Vertex^ Vfirst, RDC::OCC::TopoDS_Vertex^ Vlast)
{
    ::TopExp::Vertices(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Vertex*)Vfirst->NativeInstance, *(::TopoDS_Vertex*)Vlast->NativeInstance);
}

bool RDC::OCC::TopExp::CommonVertex(RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2, RDC::OCC::TopoDS_Vertex^ V)
{
    bool _result = ::TopExp::CommonVertex(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Vertex*)V->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopExp_Explorer
//---------------------------------------------------------------------

RDC::OCC::TopExp_Explorer::TopExp_Explorer()
    : RDC::OCC::BaseClass<::TopExp_Explorer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopExp_Explorer();
}

RDC::OCC::TopExp_Explorer::TopExp_Explorer(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopAbs_ShapeEnum ToFind, RDC::OCC::TopAbs_ShapeEnum ToAvoid)
    : RDC::OCC::BaseClass<::TopExp_Explorer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopExp_Explorer(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)ToFind, (::TopAbs_ShapeEnum)ToAvoid);
}

RDC::OCC::TopExp_Explorer::TopExp_Explorer(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopAbs_ShapeEnum ToFind)
    : RDC::OCC::BaseClass<::TopExp_Explorer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopExp_Explorer(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)ToFind, TopAbs_SHAPE);
}

void RDC::OCC::TopExp_Explorer::Init(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopAbs_ShapeEnum ToFind, RDC::OCC::TopAbs_ShapeEnum ToAvoid)
{
    ((::TopExp_Explorer*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)ToFind, (::TopAbs_ShapeEnum)ToAvoid);
}

void RDC::OCC::TopExp_Explorer::Init(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopAbs_ShapeEnum ToFind)
{
    ((::TopExp_Explorer*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)ToFind, TopAbs_SHAPE);
}

bool RDC::OCC::TopExp_Explorer::More()
{
    bool _result = ((::TopExp_Explorer*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TopExp_Explorer::Next()
{
    ((::TopExp_Explorer*)_NativeInstance)->Next();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopExp_Explorer::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopExp_Explorer*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopExp_Explorer::Current()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopExp_Explorer*)_NativeInstance)->Current();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::TopExp_Explorer::ReInit()
{
    ((::TopExp_Explorer*)_NativeInstance)->ReInit();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopExp_Explorer::ExploredShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopExp_Explorer*)_NativeInstance)->ExploredShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

int RDC::OCC::TopExp_Explorer::Depth()
{
    int _result = ((::TopExp_Explorer*)_NativeInstance)->Depth();
    return _result;
}

void RDC::OCC::TopExp_Explorer::Clear()
{
    ((::TopExp_Explorer*)_NativeInstance)->Clear();
}



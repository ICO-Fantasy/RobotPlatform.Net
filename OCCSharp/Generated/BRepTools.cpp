// Generated wrapper code for package BRepTools

#include "OcctPCH.h"
#include "BRepTools.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TopoDS.h"
#include "TColgp.h"
#include "Bnd.h"
#include "TopTools.h"
#include "Message.h"
#include "BRep.h"
#include "Geom.h"
#include "Geom2d.h"
#include "TopAbs.h"
#include "TopLoc.h"
#include "gp.h"
#include "GeomAbs.h"
#include "ShapeBuild.h"


//---------------------------------------------------------------------
//  Class  BRepTools_MapOfVertexPnt2d
//---------------------------------------------------------------------

RDC::OCC::BRepTools_MapOfVertexPnt2d::BRepTools_MapOfVertexPnt2d()
    : RDC::OCC::BaseClass<::BRepTools_MapOfVertexPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_MapOfVertexPnt2d();
}

RDC::OCC::BRepTools_MapOfVertexPnt2d::BRepTools_MapOfVertexPnt2d(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::BRepTools_MapOfVertexPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_MapOfVertexPnt2d(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::BRepTools_MapOfVertexPnt2d::BRepTools_MapOfVertexPnt2d(int theNbBuckets)
    : RDC::OCC::BaseClass<::BRepTools_MapOfVertexPnt2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_MapOfVertexPnt2d(theNbBuckets, 0L);
}

void RDC::OCC::BRepTools_MapOfVertexPnt2d::Exchange(RDC::OCC::BRepTools_MapOfVertexPnt2d^ theOther)
{
    ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Exchange(*(::BRepTools_MapOfVertexPnt2d*)theOther->NativeInstance);
}

RDC::OCC::BRepTools_MapOfVertexPnt2d^ RDC::OCC::BRepTools_MapOfVertexPnt2d::Assign(RDC::OCC::BRepTools_MapOfVertexPnt2d^ theOther)
{
    ::BRepTools_MapOfVertexPnt2d* _result = new ::BRepTools_MapOfVertexPnt2d();
    *_result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Assign(*(::BRepTools_MapOfVertexPnt2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepTools_MapOfVertexPnt2d(_result);
}

void RDC::OCC::BRepTools_MapOfVertexPnt2d::ReSize(int N)
{
    ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::BRepTools_MapOfVertexPnt2d::Bind(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::TColgp_SequenceOfPnt2d^ theItem)
{
    bool _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TColgp_SequenceOfPnt2d*)theItem->NativeInstance);
    return _result;
}

RDC::OCC::TColgp_SequenceOfPnt2d^ RDC::OCC::BRepTools_MapOfVertexPnt2d::Bound(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::TColgp_SequenceOfPnt2d^ theItem)
{
    ::TColgp_SequenceOfPnt2d* _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TColgp_SequenceOfPnt2d*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt2d(_result);
}

bool RDC::OCC::BRepTools_MapOfVertexPnt2d::IsBound(RDC::OCC::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool RDC::OCC::BRepTools_MapOfVertexPnt2d::UnBind(RDC::OCC::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

RDC::OCC::TColgp_SequenceOfPnt2d^ RDC::OCC::BRepTools_MapOfVertexPnt2d::Seek(RDC::OCC::TopoDS_Shape^ theKey)
{
    const ::TColgp_SequenceOfPnt2d* _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt2d((::TColgp_SequenceOfPnt2d*)_result);
}

RDC::OCC::TColgp_SequenceOfPnt2d^ RDC::OCC::BRepTools_MapOfVertexPnt2d::Find(RDC::OCC::TopoDS_Shape^ theKey)
{
    ::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
    *_result = (::TColgp_SequenceOfPnt2d)((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt2d(_result);
}

RDC::OCC::TColgp_SequenceOfPnt2d^ RDC::OCC::BRepTools_MapOfVertexPnt2d::ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey)
{
    ::TColgp_SequenceOfPnt2d* _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt2d(_result);
}

RDC::OCC::TColgp_SequenceOfPnt2d^ RDC::OCC::BRepTools_MapOfVertexPnt2d::ChangeFind(RDC::OCC::TopoDS_Shape^ theKey)
{
    ::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
    *_result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt2d(_result);
}

void RDC::OCC::BRepTools_MapOfVertexPnt2d::Clear(bool doReleaseMemory)
{
    ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::BRepTools_MapOfVertexPnt2d::Clear()
{
    ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Clear(false);
}

int RDC::OCC::BRepTools_MapOfVertexPnt2d::Size()
{
    int _result = ((::BRepTools_MapOfVertexPnt2d*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepTools_MapOfVertexPnt2d::Iterator
//---------------------------------------------------------------------

RDC::OCC::BRepTools_MapOfVertexPnt2d::Iterator::Iterator()
    : RDC::OCC::BaseClass<::BRepTools_MapOfVertexPnt2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_MapOfVertexPnt2d::Iterator();
}

bool RDC::OCC::BRepTools_MapOfVertexPnt2d::Iterator::More()
{
    bool _result = ((::BRepTools_MapOfVertexPnt2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::BRepTools_MapOfVertexPnt2d::Iterator::Next()
{
    ((::BRepTools_MapOfVertexPnt2d::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TColgp_SequenceOfPnt2d^ RDC::OCC::BRepTools_MapOfVertexPnt2d::Iterator::Value()
{
    ::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
    *_result = (::TColgp_SequenceOfPnt2d)((::BRepTools_MapOfVertexPnt2d::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt2d(_result);
}

RDC::OCC::TColgp_SequenceOfPnt2d^ RDC::OCC::BRepTools_MapOfVertexPnt2d::Iterator::ChangeValue()
{
    ::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
    *_result = ((::BRepTools_MapOfVertexPnt2d::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColgp_SequenceOfPnt2d(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepTools_MapOfVertexPnt2d::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepTools_MapOfVertexPnt2d::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepTools
//---------------------------------------------------------------------

RDC::OCC::BRepTools::BRepTools()
    : RDC::OCC::BaseClass<::BRepTools>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools();
}

void RDC::OCC::BRepTools::UVBounds(RDC::OCC::TopoDS_Face^ F, double% UMin, double% UMax, double% VMin, double% VMax)
{
    pin_ptr<double> pp_UMin = &UMin;
    pin_ptr<double> pp_UMax = &UMax;
    pin_ptr<double> pp_VMin = &VMin;
    pin_ptr<double> pp_VMax = &VMax;
    ::BRepTools::UVBounds(*(::TopoDS_Face*)F->NativeInstance, *(double*)pp_UMin, *(double*)pp_UMax, *(double*)pp_VMin, *(double*)pp_VMax);
}

void RDC::OCC::BRepTools::UVBounds(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Wire^ W, double% UMin, double% UMax, double% VMin, double% VMax)
{
    pin_ptr<double> pp_UMin = &UMin;
    pin_ptr<double> pp_UMax = &UMax;
    pin_ptr<double> pp_VMin = &VMin;
    pin_ptr<double> pp_VMax = &VMax;
    ::BRepTools::UVBounds(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, *(double*)pp_UMin, *(double*)pp_UMax, *(double*)pp_VMin, *(double*)pp_VMax);
}

void RDC::OCC::BRepTools::UVBounds(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ E, double% UMin, double% UMax, double% VMin, double% VMax)
{
    pin_ptr<double> pp_UMin = &UMin;
    pin_ptr<double> pp_UMax = &UMax;
    pin_ptr<double> pp_VMin = &VMin;
    pin_ptr<double> pp_VMax = &VMax;
    ::BRepTools::UVBounds(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_UMin, *(double*)pp_UMax, *(double*)pp_VMin, *(double*)pp_VMax);
}

void RDC::OCC::BRepTools::AddUVBounds(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Bnd_Box2d^ B)
{
    ::BRepTools::AddUVBounds(*(::TopoDS_Face*)F->NativeInstance, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BRepTools::AddUVBounds(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Wire^ W, RDC::OCC::Bnd_Box2d^ B)
{
    ::BRepTools::AddUVBounds(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BRepTools::AddUVBounds(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ E, RDC::OCC::Bnd_Box2d^ B)
{
    ::BRepTools::AddUVBounds(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(::Bnd_Box2d*)B->NativeInstance);
}

void RDC::OCC::BRepTools::Update(RDC::OCC::TopoDS_Vertex^ V)
{
    ::BRepTools::Update(*(::TopoDS_Vertex*)V->NativeInstance);
}

void RDC::OCC::BRepTools::Update(RDC::OCC::TopoDS_Edge^ E)
{
    ::BRepTools::Update(*(::TopoDS_Edge*)E->NativeInstance);
}

void RDC::OCC::BRepTools::Update(RDC::OCC::TopoDS_Wire^ W)
{
    ::BRepTools::Update(*(::TopoDS_Wire*)W->NativeInstance);
}

void RDC::OCC::BRepTools::Update(RDC::OCC::TopoDS_Face^ F)
{
    ::BRepTools::Update(*(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepTools::Update(RDC::OCC::TopoDS_Shell^ S)
{
    ::BRepTools::Update(*(::TopoDS_Shell*)S->NativeInstance);
}

void RDC::OCC::BRepTools::Update(RDC::OCC::TopoDS_Solid^ S)
{
    ::BRepTools::Update(*(::TopoDS_Solid*)S->NativeInstance);
}

void RDC::OCC::BRepTools::Update(RDC::OCC::TopoDS_CompSolid^ C)
{
    ::BRepTools::Update(*(::TopoDS_CompSolid*)C->NativeInstance);
}

void RDC::OCC::BRepTools::Update(RDC::OCC::TopoDS_Compound^ C)
{
    ::BRepTools::Update(*(::TopoDS_Compound*)C->NativeInstance);
}

void RDC::OCC::BRepTools::Update(RDC::OCC::TopoDS_Shape^ S)
{
    ::BRepTools::Update(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepTools::UpdateFaceUVPoints(RDC::OCC::TopoDS_Face^ theF)
{
    ::BRepTools::UpdateFaceUVPoints(*(::TopoDS_Face*)theF->NativeInstance);
}

void RDC::OCC::BRepTools::Clean(RDC::OCC::TopoDS_Shape^ theShape, bool theForce)
{
    ::BRepTools::Clean(*(::TopoDS_Shape*)theShape->NativeInstance, theForce);
}

void RDC::OCC::BRepTools::Clean(RDC::OCC::TopoDS_Shape^ theShape)
{
    ::BRepTools::Clean(*(::TopoDS_Shape*)theShape->NativeInstance, false);
}

void RDC::OCC::BRepTools::CleanGeometry(RDC::OCC::TopoDS_Shape^ theShape)
{
    ::BRepTools::CleanGeometry(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void RDC::OCC::BRepTools::RemoveUnusedPCurves(RDC::OCC::TopoDS_Shape^ S)
{
    ::BRepTools::RemoveUnusedPCurves(*(::TopoDS_Shape*)S->NativeInstance);
}

bool RDC::OCC::BRepTools::Triangulation(RDC::OCC::TopoDS_Shape^ theShape, double theLinDefl, bool theToCheckFreeEdges)
{
    bool _result = ::BRepTools::Triangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theLinDefl, theToCheckFreeEdges);
    return _result;
}

bool RDC::OCC::BRepTools::Triangulation(RDC::OCC::TopoDS_Shape^ theShape, double theLinDefl)
{
    bool _result = ::BRepTools::Triangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theLinDefl, false);
    return _result;
}

bool RDC::OCC::BRepTools::LoadTriangulation(RDC::OCC::TopoDS_Shape^ theShape, int theTriangulationIdx, bool theToSetAsActive)
{
    bool _result = ::BRepTools::LoadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx, theToSetAsActive, ::opencascade::handle<::OSD_FileSystem>());
    return _result;
}

bool RDC::OCC::BRepTools::LoadTriangulation(RDC::OCC::TopoDS_Shape^ theShape, int theTriangulationIdx)
{
    bool _result = ::BRepTools::LoadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx, false, ::opencascade::handle<::OSD_FileSystem>());
    return _result;
}

bool RDC::OCC::BRepTools::LoadTriangulation(RDC::OCC::TopoDS_Shape^ theShape)
{
    bool _result = ::BRepTools::LoadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, -1, false, ::opencascade::handle<::OSD_FileSystem>());
    return _result;
}

bool RDC::OCC::BRepTools::UnloadTriangulation(RDC::OCC::TopoDS_Shape^ theShape, int theTriangulationIdx)
{
    bool _result = ::BRepTools::UnloadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx);
    return _result;
}

bool RDC::OCC::BRepTools::UnloadTriangulation(RDC::OCC::TopoDS_Shape^ theShape)
{
    bool _result = ::BRepTools::UnloadTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, -1);
    return _result;
}

bool RDC::OCC::BRepTools::ActivateTriangulation(RDC::OCC::TopoDS_Shape^ theShape, int theTriangulationIdx, bool theToActivateStrictly)
{
    bool _result = ::BRepTools::ActivateTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx, theToActivateStrictly);
    return _result;
}

bool RDC::OCC::BRepTools::ActivateTriangulation(RDC::OCC::TopoDS_Shape^ theShape, int theTriangulationIdx)
{
    bool _result = ::BRepTools::ActivateTriangulation(*(::TopoDS_Shape*)theShape->NativeInstance, theTriangulationIdx, false);
    return _result;
}

bool RDC::OCC::BRepTools::LoadAllTriangulations(RDC::OCC::TopoDS_Shape^ theShape)
{
    bool _result = ::BRepTools::LoadAllTriangulations(*(::TopoDS_Shape*)theShape->NativeInstance, ::opencascade::handle<::OSD_FileSystem>());
    return _result;
}

bool RDC::OCC::BRepTools::UnloadAllTriangulations(RDC::OCC::TopoDS_Shape^ theShape)
{
    bool _result = ::BRepTools::UnloadAllTriangulations(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

bool RDC::OCC::BRepTools::Compare(RDC::OCC::TopoDS_Vertex^ V1, RDC::OCC::TopoDS_Vertex^ V2)
{
    bool _result = ::BRepTools::Compare(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
    return _result;
}

bool RDC::OCC::BRepTools::Compare(RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2)
{
    bool _result = ::BRepTools::Compare(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
    return _result;
}

RDC::OCC::TopoDS_Wire^ RDC::OCC::BRepTools::OuterWire(RDC::OCC::TopoDS_Face^ F)
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = ::BRepTools::OuterWire(*(::TopoDS_Face*)F->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Wire(_result);
}

void RDC::OCC::BRepTools::Map3DEdges(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_IndexedMapOfShape^ M)
{
    ::BRepTools::Map3DEdges(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_IndexedMapOfShape*)M->NativeInstance);
}

bool RDC::OCC::BRepTools::IsReallyClosed(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F)
{
    bool _result = ::BRepTools::IsReallyClosed(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
    return _result;
}

void RDC::OCC::BRepTools::DetectClosedness(RDC::OCC::TopoDS_Face^ theFace, bool% theUclosed, bool% theVclosed)
{
    pin_ptr<bool> pp_theUclosed = &theUclosed;
    pin_ptr<bool> pp_theVclosed = &theVclosed;
    ::BRepTools::DetectClosedness(*(::TopoDS_Face*)theFace->NativeInstance, *(bool*)pp_theUclosed, *(bool*)pp_theVclosed);
}

void RDC::OCC::BRepTools::Dump(RDC::OCC::TopoDS_Shape^ Sh, System::IO::TextWriter^ S)
{
    std::ostringstream oss_S;
    ::BRepTools::Dump(*(::TopoDS_Shape*)Sh->NativeInstance, oss_S);
    S->Write(gcnew System::String(oss_S.str().c_str()));
}

void RDC::OCC::BRepTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, RDC::OCC::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_theStream;
    ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, *(::Message_ProgressRange*)theProgress->NativeInstance);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void RDC::OCC::BRepTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream)
{
    std::ostringstream oss_theStream;
    ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, ::Message_ProgressRange());
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void RDC::OCC::BRepTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, bool theWithTriangles, bool theWithNormals, RDC::OCC::TopTools_FormatVersion theVersion, RDC::OCC::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_theStream;
    ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, theWithTriangles, theWithNormals, (::TopTools_FormatVersion)theVersion, *(::Message_ProgressRange*)theProgress->NativeInstance);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void RDC::OCC::BRepTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::IO::TextWriter^ theStream, bool theWithTriangles, bool theWithNormals, RDC::OCC::TopTools_FormatVersion theVersion)
{
    std::ostringstream oss_theStream;
    ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, oss_theStream, theWithTriangles, theWithNormals, (::TopTools_FormatVersion)theVersion, ::Message_ProgressRange());
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

bool RDC::OCC::BRepTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::String^ theFile, RDC::OCC::Message_ProgressRange^ theProgress)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, *(::Message_ProgressRange*)theProgress->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool RDC::OCC::BRepTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::String^ theFile)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, ::Message_ProgressRange());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool RDC::OCC::BRepTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, RDC::OCC::TopTools_FormatVersion theVersion, RDC::OCC::Message_ProgressRange^ theProgress)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, theWithTriangles, theWithNormals, (::TopTools_FormatVersion)theVersion, *(::Message_ProgressRange*)theProgress->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool RDC::OCC::BRepTools::Write(RDC::OCC::TopoDS_Shape^ theShape, System::String^ theFile, bool theWithTriangles, bool theWithNormals, RDC::OCC::TopTools_FormatVersion theVersion)
{
    const char* sz_theFile = (char*)(void*)Marshal::StringToHGlobalAnsi(theFile);
    bool _result = ::BRepTools::Write(*(::TopoDS_Shape*)theShape->NativeInstance, sz_theFile, theWithTriangles, theWithNormals, (::TopTools_FormatVersion)theVersion, ::Message_ProgressRange());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFile);
    return _result;
}

bool RDC::OCC::BRepTools::Read(RDC::OCC::TopoDS_Shape^ Sh, System::String^ File, RDC::OCC::BRep_Builder^ B, RDC::OCC::Message_ProgressRange^ theProgress)
{
    const char* sz_File = (char*)(void*)Marshal::StringToHGlobalAnsi(File);
    bool _result = ::BRepTools::Read(*(::TopoDS_Shape*)Sh->NativeInstance, sz_File, *(::BRep_Builder*)B->NativeInstance, *(::Message_ProgressRange*)theProgress->NativeInstance);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_File);
    return _result;
}

bool RDC::OCC::BRepTools::Read(RDC::OCC::TopoDS_Shape^ Sh, System::String^ File, RDC::OCC::BRep_Builder^ B)
{
    const char* sz_File = (char*)(void*)Marshal::StringToHGlobalAnsi(File);
    bool _result = ::BRepTools::Read(*(::TopoDS_Shape*)Sh->NativeInstance, sz_File, *(::BRep_Builder*)B->NativeInstance, ::Message_ProgressRange());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_File);
    return _result;
}

double RDC::OCC::BRepTools::EvalAndUpdateTol(RDC::OCC::TopoDS_Edge^ theE, RDC::OCC::Geom_Curve^ theC3d, RDC::OCC::Geom2d_Curve^ theC2d, RDC::OCC::Geom_Surface^ theS, double theF, double theL)
{
    double _result = ::BRepTools::EvalAndUpdateTol(*(::TopoDS_Edge*)theE->NativeInstance, Handle(::Geom_Curve)(theC3d->NativeInstance), Handle(::Geom2d_Curve)(theC2d->NativeInstance), Handle(::Geom_Surface)(theS->NativeInstance), theF, theL);
    return _result;
}

RDC::OCC::TopAbs_Orientation RDC::OCC::BRepTools::OriEdgeInFace(RDC::OCC::TopoDS_Edge^ theEdge, RDC::OCC::TopoDS_Face^ theFace)
{
    ::TopAbs_Orientation _result = ::BRepTools::OriEdgeInFace(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance);
    return (RDC::OCC::TopAbs_Orientation)_result;
}

void RDC::OCC::BRepTools::RemoveInternals(RDC::OCC::TopoDS_Shape^ theS, bool theForce)
{
    ::BRepTools::RemoveInternals(*(::TopoDS_Shape*)theS->NativeInstance, theForce);
}

void RDC::OCC::BRepTools::RemoveInternals(RDC::OCC::TopoDS_Shape^ theS)
{
    ::BRepTools::RemoveInternals(*(::TopoDS_Shape*)theS->NativeInstance, false);
}

void RDC::OCC::BRepTools::CheckLocations(RDC::OCC::TopoDS_Shape^ theS, RDC::OCC::TopTools_ListOfShape^ theProblemShapes)
{
    ::BRepTools::CheckLocations(*(::TopoDS_Shape*)theS->NativeInstance, *(::TopTools_ListOfShape*)theProblemShapes->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BRepTools_Modification
//---------------------------------------------------------------------

RDC::OCC::BRepTools_Modification::BRepTools_Modification()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

bool RDC::OCC::BRepTools_Modification::NewSurface(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
    Handle(::Geom_Surface) h_S = S->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    pin_ptr<bool> pp_RevWires = &RevWires;
    pin_ptr<bool> pp_RevFace = &RevFace;
    bool _result = ((::BRepTools_Modification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol, *(bool*)pp_RevWires, *(bool*)pp_RevFace);
    S->NativeInstance = h_S.get();
    return _result;
}

bool RDC::OCC::BRepTools_Modification::NewCurve(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::Geom_Curve^ C, RDC::OCC::TopLoc_Location^ L, double% Tol)
{
    Handle(::Geom_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_Modification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool RDC::OCC::BRepTools_Modification::NewPoint(RDC::OCC::TopoDS_Vertex^ V, RDC::OCC::Pnt% P, double% Tol)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_Modification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_Tol);
    return _result;
}

bool RDC::OCC::BRepTools_Modification::NewCurve2d(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ NewE, RDC::OCC::TopoDS_Face^ NewF, RDC::OCC::Geom2d_Curve^ C, double% Tol)
{
    Handle(::Geom2d_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_Modification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool RDC::OCC::BRepTools_Modification::NewParameter(RDC::OCC::TopoDS_Vertex^ V, RDC::OCC::TopoDS_Edge^ E, double% P, double% Tol)
{
    pin_ptr<double> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_Modification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_P, *(double*)pp_Tol);
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepTools_Modification::Continuity(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F1, RDC::OCC::TopoDS_Face^ F2, RDC::OCC::TopoDS_Edge^ NewE, RDC::OCC::TopoDS_Face^ NewF1, RDC::OCC::TopoDS_Face^ NewF2)
{
    ::GeomAbs_Shape _result = ((::BRepTools_Modification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
    return (RDC::OCC::GeomAbs_Shape)_result;
}

RDC::OCC::BRepTools_Modification^ RDC::OCC::BRepTools_Modification::CreateDowncasted(::BRepTools_Modification* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRepTools_CopyModification)))
        return RDC::OCC::BRepTools_CopyModification::CreateDowncasted((::BRepTools_CopyModification*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepTools_GTrsfModification)))
        return RDC::OCC::BRepTools_GTrsfModification::CreateDowncasted((::BRepTools_GTrsfModification*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepTools_TrsfModification)))
        return RDC::OCC::BRepTools_TrsfModification::CreateDowncasted((::BRepTools_TrsfModification*)instance);
    
    return gcnew RDC::OCC::BRepTools_Modification( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_CopyModification
//---------------------------------------------------------------------

RDC::OCC::BRepTools_CopyModification::BRepTools_CopyModification(bool theCopyGeom, bool theCopyMesh)
    : RDC::OCC::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_CopyModification(theCopyGeom, theCopyMesh);
}

RDC::OCC::BRepTools_CopyModification::BRepTools_CopyModification(bool theCopyGeom)
    : RDC::OCC::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_CopyModification(theCopyGeom, true);
}

RDC::OCC::BRepTools_CopyModification::BRepTools_CopyModification()
    : RDC::OCC::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_CopyModification(true, true);
}

bool RDC::OCC::BRepTools_CopyModification::NewSurface(RDC::OCC::TopoDS_Face^ theFace, RDC::OCC::Geom_Surface^ theSurf, RDC::OCC::TopLoc_Location^ theLoc, double% theTol, bool% theRevWires, bool% theRevFace)
{
    Handle(::Geom_Surface) h_theSurf = theSurf->NativeInstance;
    pin_ptr<double> pp_theTol = &theTol;
    pin_ptr<bool> pp_theRevWires = &theRevWires;
    pin_ptr<bool> pp_theRevFace = &theRevFace;
    bool _result = ((::BRepTools_CopyModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)theFace->NativeInstance, h_theSurf, *(::TopLoc_Location*)theLoc->NativeInstance, *(double*)pp_theTol, *(bool*)pp_theRevWires, *(bool*)pp_theRevFace);
    theSurf->NativeInstance = h_theSurf.get();
    return _result;
}

bool RDC::OCC::BRepTools_CopyModification::NewCurve(RDC::OCC::TopoDS_Edge^ theEdge, RDC::OCC::Geom_Curve^ theCurve, RDC::OCC::TopLoc_Location^ theLoc, double% theTol)
{
    Handle(::Geom_Curve) h_theCurve = theCurve->NativeInstance;
    pin_ptr<double> pp_theTol = &theTol;
    bool _result = ((::BRepTools_CopyModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)theEdge->NativeInstance, h_theCurve, *(::TopLoc_Location*)theLoc->NativeInstance, *(double*)pp_theTol);
    theCurve->NativeInstance = h_theCurve.get();
    return _result;
}

bool RDC::OCC::BRepTools_CopyModification::NewPoint(RDC::OCC::TopoDS_Vertex^ theVertex, RDC::OCC::Pnt% thePnt, double% theTol)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
    pin_ptr<double> pp_theTol = &theTol;
    bool _result = ((::BRepTools_CopyModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)theVertex->NativeInstance, *(gp_Pnt*)pp_thePnt, *(double*)pp_theTol);
    return _result;
}

bool RDC::OCC::BRepTools_CopyModification::NewCurve2d(RDC::OCC::TopoDS_Edge^ theEdge, RDC::OCC::TopoDS_Face^ theFace, RDC::OCC::TopoDS_Edge^ theNewEdge, RDC::OCC::TopoDS_Face^ theNewFace, RDC::OCC::Geom2d_Curve^ theCurve, double% theTol)
{
    Handle(::Geom2d_Curve) h_theCurve = theCurve->NativeInstance;
    pin_ptr<double> pp_theTol = &theTol;
    bool _result = ((::BRepTools_CopyModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance, *(::TopoDS_Edge*)theNewEdge->NativeInstance, *(::TopoDS_Face*)theNewFace->NativeInstance, h_theCurve, *(double*)pp_theTol);
    theCurve->NativeInstance = h_theCurve.get();
    return _result;
}

bool RDC::OCC::BRepTools_CopyModification::NewParameter(RDC::OCC::TopoDS_Vertex^ theVertex, RDC::OCC::TopoDS_Edge^ theEdge, double% thePnt, double% theTol)
{
    pin_ptr<double> pp_thePnt = &thePnt;
    pin_ptr<double> pp_theTol = &theTol;
    bool _result = ((::BRepTools_CopyModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)theVertex->NativeInstance, *(::TopoDS_Edge*)theEdge->NativeInstance, *(double*)pp_thePnt, *(double*)pp_theTol);
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepTools_CopyModification::Continuity(RDC::OCC::TopoDS_Edge^ theEdge, RDC::OCC::TopoDS_Face^ theFace1, RDC::OCC::TopoDS_Face^ theFace2, RDC::OCC::TopoDS_Edge^ theNewEdge, RDC::OCC::TopoDS_Face^ theNewFace1, RDC::OCC::TopoDS_Face^ theNewFace2)
{
    ::GeomAbs_Shape _result = ((::BRepTools_CopyModification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace1->NativeInstance, *(::TopoDS_Face*)theFace2->NativeInstance, *(::TopoDS_Edge*)theNewEdge->NativeInstance, *(::TopoDS_Face*)theNewFace1->NativeInstance, *(::TopoDS_Face*)theNewFace2->NativeInstance);
    return (RDC::OCC::GeomAbs_Shape)_result;
}

RDC::OCC::BRepTools_CopyModification^ RDC::OCC::BRepTools_CopyModification::CreateDowncasted(::BRepTools_CopyModification* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRepTools_NurbsConvertModification)))
        return RDC::OCC::BRepTools_NurbsConvertModification::CreateDowncasted((::BRepTools_NurbsConvertModification*)instance);
    
    return gcnew RDC::OCC::BRepTools_CopyModification( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_GTrsfModification
//---------------------------------------------------------------------

RDC::OCC::BRepTools_GTrsfModification::BRepTools_GTrsfModification(RDC::OCC::gp_GTrsf^ T)
    : RDC::OCC::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_GTrsfModification(*(::gp_GTrsf*)T->NativeInstance);
}

RDC::OCC::gp_GTrsf^ RDC::OCC::BRepTools_GTrsfModification::GTrsf()
{
    ::gp_GTrsf* _result = new ::gp_GTrsf();
    *_result = ((::BRepTools_GTrsfModification*)_NativeInstance)->GTrsf();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf(_result);
}

bool RDC::OCC::BRepTools_GTrsfModification::NewSurface(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
    Handle(::Geom_Surface) h_S = S->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    pin_ptr<bool> pp_RevWires = &RevWires;
    pin_ptr<bool> pp_RevFace = &RevFace;
    bool _result = ((::BRepTools_GTrsfModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol, *(bool*)pp_RevWires, *(bool*)pp_RevFace);
    S->NativeInstance = h_S.get();
    return _result;
}

bool RDC::OCC::BRepTools_GTrsfModification::NewCurve(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::Geom_Curve^ C, RDC::OCC::TopLoc_Location^ L, double% Tol)
{
    Handle(::Geom_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_GTrsfModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool RDC::OCC::BRepTools_GTrsfModification::NewPoint(RDC::OCC::TopoDS_Vertex^ V, RDC::OCC::Pnt% P, double% Tol)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_GTrsfModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_Tol);
    return _result;
}

bool RDC::OCC::BRepTools_GTrsfModification::NewCurve2d(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ NewE, RDC::OCC::TopoDS_Face^ NewF, RDC::OCC::Geom2d_Curve^ C, double% Tol)
{
    Handle(::Geom2d_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_GTrsfModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool RDC::OCC::BRepTools_GTrsfModification::NewParameter(RDC::OCC::TopoDS_Vertex^ V, RDC::OCC::TopoDS_Edge^ E, double% P, double% Tol)
{
    pin_ptr<double> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_GTrsfModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_P, *(double*)pp_Tol);
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepTools_GTrsfModification::Continuity(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F1, RDC::OCC::TopoDS_Face^ F2, RDC::OCC::TopoDS_Edge^ NewE, RDC::OCC::TopoDS_Face^ NewF1, RDC::OCC::TopoDS_Face^ NewF2)
{
    ::GeomAbs_Shape _result = ((::BRepTools_GTrsfModification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
    return (RDC::OCC::GeomAbs_Shape)_result;
}

RDC::OCC::BRepTools_GTrsfModification^ RDC::OCC::BRepTools_GTrsfModification::CreateDowncasted(::BRepTools_GTrsfModification* instance)
{
    return gcnew RDC::OCC::BRepTools_GTrsfModification( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_History
//---------------------------------------------------------------------

RDC::OCC::BRepTools_History::BRepTools_History()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_History();
}

bool RDC::OCC::BRepTools_History::IsSupportedType(RDC::OCC::TopoDS_Shape^ theShape)
{
    bool _result = ::BRepTools_History::IsSupportedType(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

void RDC::OCC::BRepTools_History::AddGenerated(RDC::OCC::TopoDS_Shape^ theInitial, RDC::OCC::TopoDS_Shape^ theGenerated)
{
    ((::BRepTools_History*)_NativeInstance)->AddGenerated(*(::TopoDS_Shape*)theInitial->NativeInstance, *(::TopoDS_Shape*)theGenerated->NativeInstance);
}

void RDC::OCC::BRepTools_History::AddModified(RDC::OCC::TopoDS_Shape^ theInitial, RDC::OCC::TopoDS_Shape^ theModified)
{
    ((::BRepTools_History*)_NativeInstance)->AddModified(*(::TopoDS_Shape*)theInitial->NativeInstance, *(::TopoDS_Shape*)theModified->NativeInstance);
}

void RDC::OCC::BRepTools_History::Remove(RDC::OCC::TopoDS_Shape^ theRemoved)
{
    ((::BRepTools_History*)_NativeInstance)->Remove(*(::TopoDS_Shape*)theRemoved->NativeInstance);
}

void RDC::OCC::BRepTools_History::ReplaceGenerated(RDC::OCC::TopoDS_Shape^ theInitial, RDC::OCC::TopoDS_Shape^ theGenerated)
{
    ((::BRepTools_History*)_NativeInstance)->ReplaceGenerated(*(::TopoDS_Shape*)theInitial->NativeInstance, *(::TopoDS_Shape*)theGenerated->NativeInstance);
}

void RDC::OCC::BRepTools_History::ReplaceModified(RDC::OCC::TopoDS_Shape^ theInitial, RDC::OCC::TopoDS_Shape^ theModified)
{
    ((::BRepTools_History*)_NativeInstance)->ReplaceModified(*(::TopoDS_Shape*)theInitial->NativeInstance, *(::TopoDS_Shape*)theModified->NativeInstance);
}

void RDC::OCC::BRepTools_History::Clear()
{
    ((::BRepTools_History*)_NativeInstance)->Clear();
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepTools_History::Generated(RDC::OCC::TopoDS_Shape^ theInitial)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepTools_History*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theInitial->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepTools_History::Modified(RDC::OCC::TopoDS_Shape^ theInitial)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepTools_History*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theInitial->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

bool RDC::OCC::BRepTools_History::IsRemoved(RDC::OCC::TopoDS_Shape^ theInitial)
{
    bool _result = ((::BRepTools_History*)_NativeInstance)->IsRemoved(*(::TopoDS_Shape*)theInitial->NativeInstance);
    return _result;
}

bool RDC::OCC::BRepTools_History::HasGenerated()
{
    bool _result = ((::BRepTools_History*)_NativeInstance)->HasGenerated();
    return _result;
}

bool RDC::OCC::BRepTools_History::HasModified()
{
    bool _result = ((::BRepTools_History*)_NativeInstance)->HasModified();
    return _result;
}

bool RDC::OCC::BRepTools_History::HasRemoved()
{
    bool _result = ((::BRepTools_History*)_NativeInstance)->HasRemoved();
    return _result;
}

void RDC::OCC::BRepTools_History::Merge(RDC::OCC::BRepTools_History^ theHistory23)
{
    ((::BRepTools_History*)_NativeInstance)->Merge(Handle(::BRepTools_History)(theHistory23->NativeInstance));
}

void RDC::OCC::BRepTools_History::Dump(System::IO::TextWriter^ theS)
{
    std::ostringstream oss_theS;
    ((::BRepTools_History*)_NativeInstance)->Dump(oss_theS);
    theS->Write(gcnew System::String(oss_theS.str().c_str()));
}

RDC::OCC::BRepTools_History^ RDC::OCC::BRepTools_History::CreateDowncasted(::BRepTools_History* instance)
{
    return gcnew RDC::OCC::BRepTools_History( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_Modifier
//---------------------------------------------------------------------

RDC::OCC::BRepTools_Modifier::BRepTools_Modifier(bool theMutableInput)
    : RDC::OCC::BaseClass<::BRepTools_Modifier>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_Modifier(theMutableInput);
}

RDC::OCC::BRepTools_Modifier::BRepTools_Modifier()
    : RDC::OCC::BaseClass<::BRepTools_Modifier>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_Modifier(false);
}

RDC::OCC::BRepTools_Modifier::BRepTools_Modifier(RDC::OCC::TopoDS_Shape^ S)
    : RDC::OCC::BaseClass<::BRepTools_Modifier>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_Modifier(*(::TopoDS_Shape*)S->NativeInstance);
}

RDC::OCC::BRepTools_Modifier::BRepTools_Modifier(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::BRepTools_Modification^ M)
    : RDC::OCC::BaseClass<::BRepTools_Modifier>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_Modifier(*(::TopoDS_Shape*)S->NativeInstance, Handle(::BRepTools_Modification)(M->NativeInstance));
}

void RDC::OCC::BRepTools_Modifier::Init(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepTools_Modifier*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepTools_Modifier::Perform(RDC::OCC::BRepTools_Modification^ M, RDC::OCC::Message_ProgressRange^ theProgress)
{
    ((::BRepTools_Modifier*)_NativeInstance)->Perform(Handle(::BRepTools_Modification)(M->NativeInstance), *(::Message_ProgressRange*)theProgress->NativeInstance);
}

void RDC::OCC::BRepTools_Modifier::Perform(RDC::OCC::BRepTools_Modification^ M)
{
    ((::BRepTools_Modifier*)_NativeInstance)->Perform(Handle(::BRepTools_Modification)(M->NativeInstance), ::Message_ProgressRange());
}

bool RDC::OCC::BRepTools_Modifier::IsDone()
{
    bool _result = ((::BRepTools_Modifier*)_NativeInstance)->IsDone();
    return _result;
}

bool RDC::OCC::BRepTools_Modifier::IsMutableInput()
{
    bool _result = ((::BRepTools_Modifier*)_NativeInstance)->IsMutableInput();
    return _result;
}

void RDC::OCC::BRepTools_Modifier::SetMutableInput(bool theMutableInput)
{
    ((::BRepTools_Modifier*)_NativeInstance)->SetMutableInput(theMutableInput);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepTools_Modifier::ModifiedShape(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepTools_Modifier*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepTools_NurbsConvertModification
//---------------------------------------------------------------------

RDC::OCC::BRepTools_NurbsConvertModification::BRepTools_NurbsConvertModification()
    : RDC::OCC::BRepTools_CopyModification(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_NurbsConvertModification();
}

bool RDC::OCC::BRepTools_NurbsConvertModification::NewSurface(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
    Handle(::Geom_Surface) h_S = S->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    pin_ptr<bool> pp_RevWires = &RevWires;
    pin_ptr<bool> pp_RevFace = &RevFace;
    bool _result = ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol, *(bool*)pp_RevWires, *(bool*)pp_RevFace);
    S->NativeInstance = h_S.get();
    return _result;
}

bool RDC::OCC::BRepTools_NurbsConvertModification::NewCurve(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::Geom_Curve^ C, RDC::OCC::TopLoc_Location^ L, double% Tol)
{
    Handle(::Geom_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool RDC::OCC::BRepTools_NurbsConvertModification::NewPoint(RDC::OCC::TopoDS_Vertex^ V, RDC::OCC::Pnt% P, double% Tol)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_Tol);
    return _result;
}

bool RDC::OCC::BRepTools_NurbsConvertModification::NewCurve2d(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ NewE, RDC::OCC::TopoDS_Face^ NewF, RDC::OCC::Geom2d_Curve^ C, double% Tol)
{
    Handle(::Geom2d_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool RDC::OCC::BRepTools_NurbsConvertModification::NewParameter(RDC::OCC::TopoDS_Vertex^ V, RDC::OCC::TopoDS_Edge^ E, double% P, double% Tol)
{
    pin_ptr<double> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_NurbsConvertModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_P, *(double*)pp_Tol);
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepTools_NurbsConvertModification::Continuity(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F1, RDC::OCC::TopoDS_Face^ F2, RDC::OCC::TopoDS_Edge^ NewE, RDC::OCC::TopoDS_Face^ NewF1, RDC::OCC::TopoDS_Face^ NewF2)
{
    ::GeomAbs_Shape _result = ((::BRepTools_NurbsConvertModification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
    return (RDC::OCC::GeomAbs_Shape)_result;
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepTools_NurbsConvertModification::GetUpdatedEdges()
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepTools_NurbsConvertModification*)_NativeInstance)->GetUpdatedEdges();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::BRepTools_NurbsConvertModification^ RDC::OCC::BRepTools_NurbsConvertModification::CreateDowncasted(::BRepTools_NurbsConvertModification* instance)
{
    return gcnew RDC::OCC::BRepTools_NurbsConvertModification( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_ReShape
//---------------------------------------------------------------------

RDC::OCC::BRepTools_ReShape::BRepTools_ReShape()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepTools_ReShape();
}

void RDC::OCC::BRepTools_ReShape::Clear()
{
    ((::BRepTools_ReShape*)_NativeInstance)->Clear();
}

void RDC::OCC::BRepTools_ReShape::Remove(RDC::OCC::TopoDS_Shape^ shape)
{
    ((::BRepTools_ReShape*)_NativeInstance)->Remove(*(::TopoDS_Shape*)shape->NativeInstance);
}

void RDC::OCC::BRepTools_ReShape::Replace(RDC::OCC::TopoDS_Shape^ shape, RDC::OCC::TopoDS_Shape^ newshape)
{
    ((::BRepTools_ReShape*)_NativeInstance)->Replace(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Shape*)newshape->NativeInstance);
}

bool RDC::OCC::BRepTools_ReShape::IsRecorded(RDC::OCC::TopoDS_Shape^ shape)
{
    bool _result = ((::BRepTools_ReShape*)_NativeInstance)->IsRecorded(*(::TopoDS_Shape*)shape->NativeInstance);
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepTools_ReShape::Value(RDC::OCC::TopoDS_Shape^ shape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepTools_ReShape*)_NativeInstance)->Value(*(::TopoDS_Shape*)shape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

int RDC::OCC::BRepTools_ReShape::Status(RDC::OCC::TopoDS_Shape^ shape, RDC::OCC::TopoDS_Shape^ newsh, bool last)
{
    int _result = ((::BRepTools_ReShape*)_NativeInstance)->Status(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Shape*)newsh->NativeInstance, last);
    return _result;
}

int RDC::OCC::BRepTools_ReShape::Status(RDC::OCC::TopoDS_Shape^ shape, RDC::OCC::TopoDS_Shape^ newsh)
{
    int _result = ((::BRepTools_ReShape*)_NativeInstance)->Status(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Shape*)newsh->NativeInstance, false);
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepTools_ReShape::Apply(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::TopAbs_ShapeEnum theUntil)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepTools_ReShape*)_NativeInstance)->Apply(*(::TopoDS_Shape*)theShape->NativeInstance, (::TopAbs_ShapeEnum)theUntil);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepTools_ReShape::Apply(RDC::OCC::TopoDS_Shape^ theShape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepTools_ReShape*)_NativeInstance)->Apply(*(::TopoDS_Shape*)theShape->NativeInstance, TopAbs_SHAPE);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepTools_ReShape::CopyVertex(RDC::OCC::TopoDS_Vertex^ theV, double theTol)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepTools_ReShape*)_NativeInstance)->CopyVertex(*(::TopoDS_Vertex*)theV->NativeInstance, theTol);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepTools_ReShape::CopyVertex(RDC::OCC::TopoDS_Vertex^ theV)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepTools_ReShape*)_NativeInstance)->CopyVertex(*(::TopoDS_Vertex*)theV->NativeInstance, -1.);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepTools_ReShape::CopyVertex(RDC::OCC::TopoDS_Vertex^ theV, RDC::OCC::Pnt theNewPos, double aTol)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    pin_ptr<RDC::OCC::Pnt> pp_theNewPos = &theNewPos;
    *_result = ((::BRepTools_ReShape*)_NativeInstance)->CopyVertex(*(::TopoDS_Vertex*)theV->NativeInstance, *(gp_Pnt*)pp_theNewPos, aTol);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

bool RDC::OCC::BRepTools_ReShape::IsNewShape(RDC::OCC::TopoDS_Shape^ theShape)
{
    bool _result = ((::BRepTools_ReShape*)_NativeInstance)->IsNewShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

RDC::OCC::BRepTools_History^ RDC::OCC::BRepTools_ReShape::History()
{
    Handle(::BRepTools_History) _result = ((::BRepTools_ReShape*)_NativeInstance)->History();
    return _result.IsNull() ? nullptr : RDC::OCC::BRepTools_History::CreateDowncasted(_result.get());
}

RDC::OCC::BRepTools_ReShape^ RDC::OCC::BRepTools_ReShape::CreateDowncasted(::BRepTools_ReShape* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::ShapeBuild_ReShape)))
        return RDC::OCC::ShapeBuild_ReShape::CreateDowncasted((::ShapeBuild_ReShape*)instance);
    
    return gcnew RDC::OCC::BRepTools_ReShape( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_PurgeLocations
//---------------------------------------------------------------------

RDC::OCC::BRepTools_PurgeLocations::BRepTools_PurgeLocations()
    : RDC::OCC::BaseClass<::BRepTools_PurgeLocations>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_PurgeLocations();
}

bool RDC::OCC::BRepTools_PurgeLocations::Perform(RDC::OCC::TopoDS_Shape^ theShape)
{
    bool _result = ((::BRepTools_PurgeLocations*)_NativeInstance)->Perform(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepTools_PurgeLocations::GetResult()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepTools_PurgeLocations*)_NativeInstance)->GetResult();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::BRepTools_PurgeLocations::IsDone()
{
    bool _result = ((::BRepTools_PurgeLocations*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepTools_Quilt
//---------------------------------------------------------------------

RDC::OCC::BRepTools_Quilt::BRepTools_Quilt()
    : RDC::OCC::BaseClass<::BRepTools_Quilt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_Quilt();
}

void RDC::OCC::BRepTools_Quilt::Bind(RDC::OCC::TopoDS_Edge^ Eold, RDC::OCC::TopoDS_Edge^ Enew)
{
    ((::BRepTools_Quilt*)_NativeInstance)->Bind(*(::TopoDS_Edge*)Eold->NativeInstance, *(::TopoDS_Edge*)Enew->NativeInstance);
}

void RDC::OCC::BRepTools_Quilt::Bind(RDC::OCC::TopoDS_Vertex^ Vold, RDC::OCC::TopoDS_Vertex^ Vnew)
{
    ((::BRepTools_Quilt*)_NativeInstance)->Bind(*(::TopoDS_Vertex*)Vold->NativeInstance, *(::TopoDS_Vertex*)Vnew->NativeInstance);
}

void RDC::OCC::BRepTools_Quilt::Add(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepTools_Quilt*)_NativeInstance)->Add(*(::TopoDS_Shape*)S->NativeInstance);
}

bool RDC::OCC::BRepTools_Quilt::IsCopied(RDC::OCC::TopoDS_Shape^ S)
{
    bool _result = ((::BRepTools_Quilt*)_NativeInstance)->IsCopied(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepTools_Quilt::Copy(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepTools_Quilt*)_NativeInstance)->Copy(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepTools_Quilt::Shells()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepTools_Quilt*)_NativeInstance)->Shells();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepTools_ShapeSet
//---------------------------------------------------------------------

RDC::OCC::BRepTools_ShapeSet::BRepTools_ShapeSet(bool theWithTriangles, bool theWithNormals)
    : RDC::OCC::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_ShapeSet(theWithTriangles, theWithNormals);
}

RDC::OCC::BRepTools_ShapeSet::BRepTools_ShapeSet(bool theWithTriangles)
    : RDC::OCC::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_ShapeSet(theWithTriangles, false);
}

RDC::OCC::BRepTools_ShapeSet::BRepTools_ShapeSet()
    : RDC::OCC::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_ShapeSet(true, false);
}

RDC::OCC::BRepTools_ShapeSet::BRepTools_ShapeSet(RDC::OCC::BRep_Builder^ theBuilder, bool theWithTriangles, bool theWithNormals)
    : RDC::OCC::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_ShapeSet(*(::BRep_Builder*)theBuilder->NativeInstance, theWithTriangles, theWithNormals);
}

RDC::OCC::BRepTools_ShapeSet::BRepTools_ShapeSet(RDC::OCC::BRep_Builder^ theBuilder, bool theWithTriangles)
    : RDC::OCC::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_ShapeSet(*(::BRep_Builder*)theBuilder->NativeInstance, theWithTriangles, false);
}

RDC::OCC::BRepTools_ShapeSet::BRepTools_ShapeSet(RDC::OCC::BRep_Builder^ theBuilder)
    : RDC::OCC::TopTools_ShapeSet(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_ShapeSet(*(::BRep_Builder*)theBuilder->NativeInstance, true, false);
}

bool RDC::OCC::BRepTools_ShapeSet::IsWithTriangles()
{
    bool _result = ((::BRepTools_ShapeSet*)_NativeInstance)->IsWithTriangles();
    return _result;
}

bool RDC::OCC::BRepTools_ShapeSet::IsWithNormals()
{
    bool _result = ((::BRepTools_ShapeSet*)_NativeInstance)->IsWithNormals();
    return _result;
}

void RDC::OCC::BRepTools_ShapeSet::SetWithTriangles(bool theWithTriangles)
{
    ((::BRepTools_ShapeSet*)_NativeInstance)->SetWithTriangles(theWithTriangles);
}

void RDC::OCC::BRepTools_ShapeSet::SetWithNormals(bool theWithNormals)
{
    ((::BRepTools_ShapeSet*)_NativeInstance)->SetWithNormals(theWithNormals);
}

void RDC::OCC::BRepTools_ShapeSet::Clear()
{
    ((::BRepTools_ShapeSet*)_NativeInstance)->Clear();
}

void RDC::OCC::BRepTools_ShapeSet::AddGeometry(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepTools_ShapeSet*)_NativeInstance)->AddGeometry(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepTools_ShapeSet::DumpGeometry(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->DumpGeometry(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::WriteGeometry(System::IO::TextWriter^ OS, RDC::OCC::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WriteGeometry(oss_OS, *(::Message_ProgressRange*)theProgress->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::WriteGeometry(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WriteGeometry(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::DumpGeometry(RDC::OCC::TopoDS_Shape^ S, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->DumpGeometry(*(::TopoDS_Shape*)S->NativeInstance, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::WriteGeometry(RDC::OCC::TopoDS_Shape^ S, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WriteGeometry(*(::TopoDS_Shape*)S->NativeInstance, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::AddShapes(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::TopoDS_Shape^ S2)
{
    ((::BRepTools_ShapeSet*)_NativeInstance)->AddShapes(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}

void RDC::OCC::BRepTools_ShapeSet::Check(RDC::OCC::TopAbs_ShapeEnum T, RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepTools_ShapeSet*)_NativeInstance)->Check((::TopAbs_ShapeEnum)T, *(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepTools_ShapeSet::WritePolygon3D(System::IO::TextWriter^ OS, bool Compact, RDC::OCC::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WritePolygon3D(oss_OS, Compact, *(::Message_ProgressRange*)theProgress->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::WritePolygon3D(System::IO::TextWriter^ OS, bool Compact)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WritePolygon3D(oss_OS, Compact, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::WritePolygon3D(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WritePolygon3D(oss_OS, true, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::DumpPolygon3D(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->DumpPolygon3D(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::WriteTriangulation(System::IO::TextWriter^ OS, bool Compact, RDC::OCC::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WriteTriangulation(oss_OS, Compact, *(::Message_ProgressRange*)theProgress->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::WriteTriangulation(System::IO::TextWriter^ OS, bool Compact)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WriteTriangulation(oss_OS, Compact, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::WriteTriangulation(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WriteTriangulation(oss_OS, true, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::DumpTriangulation(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->DumpTriangulation(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::WritePolygonOnTriangulation(System::IO::TextWriter^ OS, bool Compact, RDC::OCC::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WritePolygonOnTriangulation(oss_OS, Compact, *(::Message_ProgressRange*)theProgress->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::WritePolygonOnTriangulation(System::IO::TextWriter^ OS, bool Compact)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WritePolygonOnTriangulation(oss_OS, Compact, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::WritePolygonOnTriangulation(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->WritePolygonOnTriangulation(oss_OS, true, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void RDC::OCC::BRepTools_ShapeSet::DumpPolygonOnTriangulation(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::BRepTools_ShapeSet*)_NativeInstance)->DumpPolygonOnTriangulation(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  BRepTools_Substitution
//---------------------------------------------------------------------

RDC::OCC::BRepTools_Substitution::BRepTools_Substitution()
    : RDC::OCC::BaseClass<::BRepTools_Substitution>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_Substitution();
}

void RDC::OCC::BRepTools_Substitution::Clear()
{
    ((::BRepTools_Substitution*)_NativeInstance)->Clear();
}

void RDC::OCC::BRepTools_Substitution::Substitute(RDC::OCC::TopoDS_Shape^ OldShape, RDC::OCC::TopTools_ListOfShape^ NewShapes)
{
    ((::BRepTools_Substitution*)_NativeInstance)->Substitute(*(::TopoDS_Shape*)OldShape->NativeInstance, *(::TopTools_ListOfShape*)NewShapes->NativeInstance);
}

void RDC::OCC::BRepTools_Substitution::Build(RDC::OCC::TopoDS_Shape^ S)
{
    ((::BRepTools_Substitution*)_NativeInstance)->Build(*(::TopoDS_Shape*)S->NativeInstance);
}

bool RDC::OCC::BRepTools_Substitution::IsCopied(RDC::OCC::TopoDS_Shape^ S)
{
    bool _result = ((::BRepTools_Substitution*)_NativeInstance)->IsCopied(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepTools_Substitution::Copy(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepTools_Substitution*)_NativeInstance)->Copy(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepTools_TrsfModification
//---------------------------------------------------------------------

RDC::OCC::BRepTools_TrsfModification::BRepTools_TrsfModification(RDC::OCC::Trsf T)
    : RDC::OCC::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Trsf> pp_T = &T;
    NativeInstance = new ::BRepTools_TrsfModification(*(gp_Trsf*)pp_T);
}

RDC::OCC::Trsf RDC::OCC::BRepTools_TrsfModification::Trsf()
{
    ::gp_Trsf _nativeResult = ((::BRepTools_TrsfModification*)_NativeInstance)->Trsf();
    return RDC::OCC::Trsf(_nativeResult);
}

bool RDC::OCC::BRepTools_TrsfModification::NewSurface(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Geom_Surface^ S, RDC::OCC::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
    Handle(::Geom_Surface) h_S = S->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    pin_ptr<bool> pp_RevWires = &RevWires;
    pin_ptr<bool> pp_RevFace = &RevFace;
    bool _result = ((::BRepTools_TrsfModification*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol, *(bool*)pp_RevWires, *(bool*)pp_RevFace);
    S->NativeInstance = h_S.get();
    return _result;
}

bool RDC::OCC::BRepTools_TrsfModification::NewCurve(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::Geom_Curve^ C, RDC::OCC::TopLoc_Location^ L, double% Tol)
{
    Handle(::Geom_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_TrsfModification*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool RDC::OCC::BRepTools_TrsfModification::NewPoint(RDC::OCC::TopoDS_Vertex^ V, RDC::OCC::Pnt% P, double% Tol)
{
    pin_ptr<RDC::OCC::Pnt> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_TrsfModification*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_Tol);
    return _result;
}

bool RDC::OCC::BRepTools_TrsfModification::NewCurve2d(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ NewE, RDC::OCC::TopoDS_Face^ NewF, RDC::OCC::Geom2d_Curve^ C, double% Tol)
{
    Handle(::Geom2d_Curve) h_C = C->NativeInstance;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_TrsfModification*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(double*)pp_Tol);
    C->NativeInstance = h_C.get();
    return _result;
}

bool RDC::OCC::BRepTools_TrsfModification::NewParameter(RDC::OCC::TopoDS_Vertex^ V, RDC::OCC::TopoDS_Edge^ E, double% P, double% Tol)
{
    pin_ptr<double> pp_P = &P;
    pin_ptr<double> pp_Tol = &Tol;
    bool _result = ((::BRepTools_TrsfModification*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_P, *(double*)pp_Tol);
    return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepTools_TrsfModification::Continuity(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F1, RDC::OCC::TopoDS_Face^ F2, RDC::OCC::TopoDS_Edge^ NewE, RDC::OCC::TopoDS_Face^ NewF1, RDC::OCC::TopoDS_Face^ NewF2)
{
    ::GeomAbs_Shape _result = ((::BRepTools_TrsfModification*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
    return (RDC::OCC::GeomAbs_Shape)_result;
}

RDC::OCC::BRepTools_TrsfModification^ RDC::OCC::BRepTools_TrsfModification::CreateDowncasted(::BRepTools_TrsfModification* instance)
{
    return gcnew RDC::OCC::BRepTools_TrsfModification( instance );
}



//---------------------------------------------------------------------
//  Class  BRepTools_WireExplorer
//---------------------------------------------------------------------

RDC::OCC::BRepTools_WireExplorer::BRepTools_WireExplorer()
    : RDC::OCC::BaseClass<::BRepTools_WireExplorer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_WireExplorer();
}

RDC::OCC::BRepTools_WireExplorer::BRepTools_WireExplorer(RDC::OCC::TopoDS_Wire^ W)
    : RDC::OCC::BaseClass<::BRepTools_WireExplorer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_WireExplorer(*(::TopoDS_Wire*)W->NativeInstance);
}

RDC::OCC::BRepTools_WireExplorer::BRepTools_WireExplorer(RDC::OCC::TopoDS_Wire^ W, RDC::OCC::TopoDS_Face^ F)
    : RDC::OCC::BaseClass<::BRepTools_WireExplorer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepTools_WireExplorer(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepTools_WireExplorer::Init(RDC::OCC::TopoDS_Wire^ W)
{
    ((::BRepTools_WireExplorer*)_NativeInstance)->Init(*(::TopoDS_Wire*)W->NativeInstance);
}

void RDC::OCC::BRepTools_WireExplorer::Init(RDC::OCC::TopoDS_Wire^ W, RDC::OCC::TopoDS_Face^ F)
{
    ((::BRepTools_WireExplorer*)_NativeInstance)->Init(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepTools_WireExplorer::Init(RDC::OCC::TopoDS_Wire^ W, RDC::OCC::TopoDS_Face^ F, double UMin, double UMax, double VMin, double VMax)
{
    ((::BRepTools_WireExplorer*)_NativeInstance)->Init(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, UMin, UMax, VMin, VMax);
}

bool RDC::OCC::BRepTools_WireExplorer::More()
{
    bool _result = ((::BRepTools_WireExplorer*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::BRepTools_WireExplorer::Next()
{
    ((::BRepTools_WireExplorer*)_NativeInstance)->Next();
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepTools_WireExplorer::Current()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepTools_WireExplorer*)_NativeInstance)->Current();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopAbs_Orientation RDC::OCC::BRepTools_WireExplorer::Orientation()
{
    ::TopAbs_Orientation _result = ((::BRepTools_WireExplorer*)_NativeInstance)->Orientation();
    return (RDC::OCC::TopAbs_Orientation)_result;
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepTools_WireExplorer::CurrentVertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepTools_WireExplorer*)_NativeInstance)->CurrentVertex();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

void RDC::OCC::BRepTools_WireExplorer::Clear()
{
    ((::BRepTools_WireExplorer*)_NativeInstance)->Clear();
}



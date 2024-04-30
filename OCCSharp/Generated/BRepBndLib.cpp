// Generated wrapper code for package BRepBndLib

#include "OcctPCH.h"
#include "BRepBndLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "Bnd.h"


//---------------------------------------------------------------------
//  Class  BRepBndLib
//---------------------------------------------------------------------

RDC::OCC::BRepBndLib::BRepBndLib()
	: RDC::OCC::BaseClass<::BRepBndLib>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBndLib();
}

void RDC::OCC::BRepBndLib::Add(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Bnd_Box^ B, bool useTriangulation)
{
	::BRepBndLib::Add(*(::TopoDS_Shape*)S->NativeInstance, *(::Bnd_Box*)B->NativeInstance, useTriangulation);
}

void RDC::OCC::BRepBndLib::Add(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Bnd_Box^ B)
{
	::BRepBndLib::Add(*(::TopoDS_Shape*)S->NativeInstance, *(::Bnd_Box*)B->NativeInstance, true);
}

void RDC::OCC::BRepBndLib::AddClose(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Bnd_Box^ B)
{
	::BRepBndLib::AddClose(*(::TopoDS_Shape*)S->NativeInstance, *(::Bnd_Box*)B->NativeInstance);
}

void RDC::OCC::BRepBndLib::AddOptimal(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Bnd_Box^ B, bool useTriangulation, bool useShapeTolerance)
{
	::BRepBndLib::AddOptimal(*(::TopoDS_Shape*)S->NativeInstance, *(::Bnd_Box*)B->NativeInstance, useTriangulation, useShapeTolerance);
}

void RDC::OCC::BRepBndLib::AddOptimal(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Bnd_Box^ B, bool useTriangulation)
{
	::BRepBndLib::AddOptimal(*(::TopoDS_Shape*)S->NativeInstance, *(::Bnd_Box*)B->NativeInstance, useTriangulation, false);
}

void RDC::OCC::BRepBndLib::AddOptimal(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Bnd_Box^ B)
{
	::BRepBndLib::AddOptimal(*(::TopoDS_Shape*)S->NativeInstance, *(::Bnd_Box*)B->NativeInstance, true, false);
}

void RDC::OCC::BRepBndLib::AddOBB(RDC::OCC::TopoDS_Shape^ theS, RDC::OCC::Bnd_OBB^ theOBB, bool theIsTriangulationUsed, bool theIsOptimal, bool theIsShapeToleranceUsed)
{
	::BRepBndLib::AddOBB(*(::TopoDS_Shape*)theS->NativeInstance, *(::Bnd_OBB*)theOBB->NativeInstance, theIsTriangulationUsed, theIsOptimal, theIsShapeToleranceUsed);
}

void RDC::OCC::BRepBndLib::AddOBB(RDC::OCC::TopoDS_Shape^ theS, RDC::OCC::Bnd_OBB^ theOBB, bool theIsTriangulationUsed, bool theIsOptimal)
{
	::BRepBndLib::AddOBB(*(::TopoDS_Shape*)theS->NativeInstance, *(::Bnd_OBB*)theOBB->NativeInstance, theIsTriangulationUsed, theIsOptimal, true);
}

void RDC::OCC::BRepBndLib::AddOBB(RDC::OCC::TopoDS_Shape^ theS, RDC::OCC::Bnd_OBB^ theOBB, bool theIsTriangulationUsed)
{
	::BRepBndLib::AddOBB(*(::TopoDS_Shape*)theS->NativeInstance, *(::Bnd_OBB*)theOBB->NativeInstance, theIsTriangulationUsed, false, true);
}

void RDC::OCC::BRepBndLib::AddOBB(RDC::OCC::TopoDS_Shape^ theS, RDC::OCC::Bnd_OBB^ theOBB)
{
	::BRepBndLib::AddOBB(*(::TopoDS_Shape*)theS->NativeInstance, *(::Bnd_OBB*)theOBB->NativeInstance, true, false, true);
}



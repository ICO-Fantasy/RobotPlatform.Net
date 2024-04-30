// Generated wrapper code for package BRepClass3d

#include "OcctPCH.h"
#include "BRepClass3d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Bnd.h"
#include "TopoDS.h"
#include "gp.h"
#include "TopAbs.h"
#include "BRepAdaptor.h"
#include "IntCurvesFace.h"
#include "TopTools.h"


//---------------------------------------------------------------------
//  Class  BRepClass3d_BndBoxTree
//---------------------------------------------------------------------

RDC::OCC::BRepClass3d_BndBoxTree::BRepClass3d_BndBoxTree()
	: RDC::OCC::BaseClass<::BRepClass3d_BndBoxTree>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_BndBoxTree();
}

RDC::OCC::BRepClass3d_BndBoxTree::BRepClass3d_BndBoxTree(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::BRepClass3d_BndBoxTree>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_BndBoxTree(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

bool RDC::OCC::BRepClass3d_BndBoxTree::Add(int theObj, RDC::OCC::Bnd_Box^ theBnd)
{
	pin_ptr<int> pp_theObj = &theObj;
	bool _result = ((::BRepClass3d_BndBoxTree*)_NativeInstance)->Add(*(int*)pp_theObj, *(::Bnd_Box*)theBnd->NativeInstance);
	return _result;
}

void RDC::OCC::BRepClass3d_BndBoxTree::Clear(RDC::OCC::NCollection_BaseAllocator^ aNewAlloc)
{
	((::BRepClass3d_BndBoxTree*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(aNewAlloc->NativeInstance));
}

void RDC::OCC::BRepClass3d_BndBoxTree::Clear()
{
	((::BRepClass3d_BndBoxTree*)_NativeInstance)->Clear(0L);
}

bool RDC::OCC::BRepClass3d_BndBoxTree::IsEmpty()
{
	bool _result = ((::BRepClass3d_BndBoxTree*)_NativeInstance)->IsEmpty();
	return _result;
}

RDC::OCC::NCollection_BaseAllocator^ RDC::OCC::BRepClass3d_BndBoxTree::Allocator()
{
	Handle(::NCollection_BaseAllocator) _result = ((::BRepClass3d_BndBoxTree*)_NativeInstance)->Allocator();
	return _result.IsNull() ? nullptr : RDC::OCC::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepClass3d_MapOfInter
//---------------------------------------------------------------------

RDC::OCC::BRepClass3d_MapOfInter::BRepClass3d_MapOfInter()
	: RDC::OCC::BaseClass<::BRepClass3d_MapOfInter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_MapOfInter();
}

RDC::OCC::BRepClass3d_MapOfInter::BRepClass3d_MapOfInter(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::BRepClass3d_MapOfInter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_MapOfInter(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::BRepClass3d_MapOfInter::BRepClass3d_MapOfInter(int theNbBuckets)
	: RDC::OCC::BaseClass<::BRepClass3d_MapOfInter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_MapOfInter(theNbBuckets, 0L);
}

void RDC::OCC::BRepClass3d_MapOfInter::Exchange(RDC::OCC::BRepClass3d_MapOfInter^ theOther)
{
	((::BRepClass3d_MapOfInter*)_NativeInstance)->Exchange(*(::BRepClass3d_MapOfInter*)theOther->NativeInstance);
}

RDC::OCC::BRepClass3d_MapOfInter^ RDC::OCC::BRepClass3d_MapOfInter::Assign(RDC::OCC::BRepClass3d_MapOfInter^ theOther)
{
	::BRepClass3d_MapOfInter* _result = new ::BRepClass3d_MapOfInter();
	*_result = ((::BRepClass3d_MapOfInter*)_NativeInstance)->Assign(*(::BRepClass3d_MapOfInter*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::BRepClass3d_MapOfInter(_result);
}

void RDC::OCC::BRepClass3d_MapOfInter::ReSize(int N)
{
	((::BRepClass3d_MapOfInter*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::BRepClass3d_MapOfInter::Bind(RDC::OCC::TopoDS_Shape^ theKey, System::IntPtr theItem)
{
	void* _theItem = theItem.ToPointer();
	bool _result = ((::BRepClass3d_MapOfInter*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, _theItem);
	return _result;
}

System::IntPtr RDC::OCC::BRepClass3d_MapOfInter::Bound(RDC::OCC::TopoDS_Shape^ theKey, System::IntPtr theItem)
{
	void* _theItem = theItem.ToPointer();
	void* _result = ((::BRepClass3d_MapOfInter*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, _theItem);
	return System::IntPtr(_result);
}

bool RDC::OCC::BRepClass3d_MapOfInter::IsBound(RDC::OCC::TopoDS_Shape^ theKey)
{
	bool _result = ((::BRepClass3d_MapOfInter*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
	return _result;
}

bool RDC::OCC::BRepClass3d_MapOfInter::UnBind(RDC::OCC::TopoDS_Shape^ theKey)
{
	bool _result = ((::BRepClass3d_MapOfInter*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
	return _result;
}

System::IntPtr RDC::OCC::BRepClass3d_MapOfInter::Seek(RDC::OCC::TopoDS_Shape^ theKey)
{
	const void* _result = ((::BRepClass3d_MapOfInter*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
	return System::IntPtr((void*)_result);
}

System::IntPtr RDC::OCC::BRepClass3d_MapOfInter::Find(RDC::OCC::TopoDS_Shape^ theKey)
{
	const void* _result = ((::BRepClass3d_MapOfInter*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
	return System::IntPtr((void*)_result);
}

System::IntPtr RDC::OCC::BRepClass3d_MapOfInter::ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey)
{
	void* _result = ((::BRepClass3d_MapOfInter*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
	return System::IntPtr(_result);
}

System::IntPtr RDC::OCC::BRepClass3d_MapOfInter::ChangeFind(RDC::OCC::TopoDS_Shape^ theKey)
{
	void* _result = ((::BRepClass3d_MapOfInter*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
	return System::IntPtr(_result);
}

void RDC::OCC::BRepClass3d_MapOfInter::Clear(bool doReleaseMemory)
{
	((::BRepClass3d_MapOfInter*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::BRepClass3d_MapOfInter::Clear()
{
	((::BRepClass3d_MapOfInter*)_NativeInstance)->Clear(false);
}

int RDC::OCC::BRepClass3d_MapOfInter::Size()
{
	int _result = ((::BRepClass3d_MapOfInter*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  BRepClass3d_MapOfInter::Iterator
//---------------------------------------------------------------------

RDC::OCC::BRepClass3d_MapOfInter::Iterator::Iterator()
	: RDC::OCC::BaseClass<::BRepClass3d_MapOfInter::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_MapOfInter::Iterator();
}

bool RDC::OCC::BRepClass3d_MapOfInter::Iterator::More()
{
	bool _result = ((::BRepClass3d_MapOfInter::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::BRepClass3d_MapOfInter::Iterator::Next()
{
	((::BRepClass3d_MapOfInter::Iterator*)_NativeInstance)->Next();
}

System::IntPtr RDC::OCC::BRepClass3d_MapOfInter::Iterator::Value()
{
	const void* _result = ((::BRepClass3d_MapOfInter::Iterator*)_NativeInstance)->Value();
	return System::IntPtr((void*)_result);
}

System::IntPtr RDC::OCC::BRepClass3d_MapOfInter::Iterator::ChangeValue()
{
	void* _result = ((::BRepClass3d_MapOfInter::Iterator*)_NativeInstance)->ChangeValue();
	return System::IntPtr(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepClass3d_MapOfInter::Iterator::Key()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepClass3d_MapOfInter::Iterator*)_NativeInstance)->Key();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepClass3d
//---------------------------------------------------------------------

RDC::OCC::BRepClass3d::BRepClass3d()
	: RDC::OCC::BaseClass<::BRepClass3d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d();
}

RDC::OCC::TopoDS_Shell^ RDC::OCC::BRepClass3d::OuterShell(RDC::OCC::TopoDS_Solid^ S)
{
	::TopoDS_Shell* _result = new ::TopoDS_Shell();
	*_result = ::BRepClass3d::OuterShell(*(::TopoDS_Solid*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shell(_result);
}



//---------------------------------------------------------------------
//  Class  BRepClass3d_Intersector3d
//---------------------------------------------------------------------

RDC::OCC::BRepClass3d_Intersector3d::BRepClass3d_Intersector3d()
	: RDC::OCC::BaseClass<::BRepClass3d_Intersector3d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_Intersector3d();
}

void RDC::OCC::BRepClass3d_Intersector3d::Perform(RDC::OCC::gp_Lin^ L, double Prm, double Tol, RDC::OCC::TopoDS_Face^ F)
{
	((::BRepClass3d_Intersector3d*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, Prm, Tol, *(::TopoDS_Face*)F->NativeInstance);
}

bool RDC::OCC::BRepClass3d_Intersector3d::IsDone()
{
	bool _result = ((::BRepClass3d_Intersector3d*)_NativeInstance)->IsDone();
	return _result;
}

bool RDC::OCC::BRepClass3d_Intersector3d::HasAPoint()
{
	bool _result = ((::BRepClass3d_Intersector3d*)_NativeInstance)->HasAPoint();
	return _result;
}

double RDC::OCC::BRepClass3d_Intersector3d::UParameter()
{
	double _result = ((::BRepClass3d_Intersector3d*)_NativeInstance)->UParameter();
	return _result;
}

double RDC::OCC::BRepClass3d_Intersector3d::VParameter()
{
	double _result = ((::BRepClass3d_Intersector3d*)_NativeInstance)->VParameter();
	return _result;
}

double RDC::OCC::BRepClass3d_Intersector3d::WParameter()
{
	double _result = ((::BRepClass3d_Intersector3d*)_NativeInstance)->WParameter();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::BRepClass3d_Intersector3d::Pnt()
{
	::gp_Pnt _nativeResult = ((::BRepClass3d_Intersector3d*)_NativeInstance)->Pnt();
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::TopAbs_State RDC::OCC::BRepClass3d_Intersector3d::State()
{
	::TopAbs_State _result = ((::BRepClass3d_Intersector3d*)_NativeInstance)->State();
	return (RDC::OCC::TopAbs_State)_result;
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepClass3d_Intersector3d::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = (::TopoDS_Face)((::BRepClass3d_Intersector3d*)_NativeInstance)->Face();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}



//---------------------------------------------------------------------
//  Class  BRepClass3d_SolidExplorer
//---------------------------------------------------------------------

RDC::OCC::BRepClass3d_SolidExplorer::BRepClass3d_SolidExplorer()
	: RDC::OCC::BaseClass<::BRepClass3d_SolidExplorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SolidExplorer();
}

RDC::OCC::BRepClass3d_SolidExplorer::BRepClass3d_SolidExplorer(RDC::OCC::TopoDS_Shape^ S)
	: RDC::OCC::BaseClass<::BRepClass3d_SolidExplorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SolidExplorer(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepClass3d_SolidExplorer::InitShape(RDC::OCC::TopoDS_Shape^ S)
{
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->InitShape(*(::TopoDS_Shape*)S->NativeInstance);
}

bool RDC::OCC::BRepClass3d_SolidExplorer::Reject(RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	bool _result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->Reject(*(gp_Pnt*)pp_P);
	return _result;
}

bool RDC::OCC::BRepClass3d_SolidExplorer::FindAPointInTheFace(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Pnt% P, double% Param)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_Param = &Param;
	bool _result = ::BRepClass3d_SolidExplorer::FindAPointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_Param);
	return _result;
}

bool RDC::OCC::BRepClass3d_SolidExplorer::FindAPointInTheFace(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Pnt% P, double% u, double% v, double% Param)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	pin_ptr<double> pp_Param = &Param;
	bool _result = ::BRepClass3d_SolidExplorer::FindAPointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_u, *(double*)pp_v, *(double*)pp_Param);
	return _result;
}

bool RDC::OCC::BRepClass3d_SolidExplorer::FindAPointInTheFace(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Pnt% P, double% u, double% v, double% Param, RDC::OCC::Vec% theVecD1U, RDC::OCC::Vec% theVecD1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	pin_ptr<double> pp_Param = &Param;
	pin_ptr<RDC::OCC::Vec> pp_theVecD1U = &theVecD1U;
	pin_ptr<RDC::OCC::Vec> pp_theVecD1V = &theVecD1V;
	bool _result = ::BRepClass3d_SolidExplorer::FindAPointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_u, *(double*)pp_v, *(double*)pp_Param, *(gp_Vec*)pp_theVecD1U, *(gp_Vec*)pp_theVecD1V);
	return _result;
}

bool RDC::OCC::BRepClass3d_SolidExplorer::FindAPointInTheFace(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Pnt% P, double% u, double% v)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	bool _result = ::BRepClass3d_SolidExplorer::FindAPointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_u, *(double*)pp_v);
	return _result;
}

bool RDC::OCC::BRepClass3d_SolidExplorer::FindAPointInTheFace(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	bool _result = ::BRepClass3d_SolidExplorer::FindAPointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P);
	return _result;
}

bool RDC::OCC::BRepClass3d_SolidExplorer::FindAPointInTheFace(RDC::OCC::TopoDS_Face^ F, double% u, double% v)
{
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	bool _result = ::BRepClass3d_SolidExplorer::FindAPointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(double*)pp_u, *(double*)pp_v);
	return _result;
}

bool RDC::OCC::BRepClass3d_SolidExplorer::PointInTheFace(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Pnt% P, double% u, double% v, double% Param, int% Index)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	pin_ptr<double> pp_Param = &Param;
	pin_ptr<int> pp_Index = &Index;
	bool _result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->PointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_u, *(double*)pp_v, *(double*)pp_Param, *(int*)pp_Index);
	return _result;
}

bool RDC::OCC::BRepClass3d_SolidExplorer::PointInTheFace(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Pnt% P, double% u, double% v, double% Param, int% Index, RDC::OCC::BRepAdaptor_Surface^ surf, double u1, double v1, double u2, double v2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	pin_ptr<double> pp_Param = &Param;
	pin_ptr<int> pp_Index = &Index;
	bool _result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->PointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_u, *(double*)pp_v, *(double*)pp_Param, *(int*)pp_Index, Handle(::BRepAdaptor_Surface)(surf->NativeInstance), u1, v1, u2, v2);
	return _result;
}

bool RDC::OCC::BRepClass3d_SolidExplorer::PointInTheFace(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Pnt% P, double% u, double% v, double% Param, int% Index, RDC::OCC::BRepAdaptor_Surface^ surf, double u1, double v1, double u2, double v2, RDC::OCC::Vec% theVecD1U, RDC::OCC::Vec% theVecD1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	pin_ptr<double> pp_Param = &Param;
	pin_ptr<int> pp_Index = &Index;
	pin_ptr<RDC::OCC::Vec> pp_theVecD1U = &theVecD1U;
	pin_ptr<RDC::OCC::Vec> pp_theVecD1V = &theVecD1V;
	bool _result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->PointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_u, *(double*)pp_v, *(double*)pp_Param, *(int*)pp_Index, Handle(::BRepAdaptor_Surface)(surf->NativeInstance), u1, v1, u2, v2, *(gp_Vec*)pp_theVecD1U, *(gp_Vec*)pp_theVecD1V);
	return _result;
}

void RDC::OCC::BRepClass3d_SolidExplorer::InitShell()
{
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->InitShell();
}

bool RDC::OCC::BRepClass3d_SolidExplorer::MoreShell()
{
	bool _result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->MoreShell();
	return _result;
}

void RDC::OCC::BRepClass3d_SolidExplorer::NextShell()
{
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->NextShell();
}

RDC::OCC::TopoDS_Shell^ RDC::OCC::BRepClass3d_SolidExplorer::CurrentShell()
{
	::TopoDS_Shell* _result = new ::TopoDS_Shell();
	*_result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->CurrentShell();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shell(_result);
}

bool RDC::OCC::BRepClass3d_SolidExplorer::RejectShell(RDC::OCC::gp_Lin^ L)
{
	bool _result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->RejectShell(*(::gp_Lin*)L->NativeInstance);
	return _result;
}

void RDC::OCC::BRepClass3d_SolidExplorer::InitFace()
{
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->InitFace();
}

bool RDC::OCC::BRepClass3d_SolidExplorer::MoreFace()
{
	bool _result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->MoreFace();
	return _result;
}

void RDC::OCC::BRepClass3d_SolidExplorer::NextFace()
{
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->NextFace();
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepClass3d_SolidExplorer::CurrentFace()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->CurrentFace();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

bool RDC::OCC::BRepClass3d_SolidExplorer::RejectFace(RDC::OCC::gp_Lin^ L)
{
	bool _result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->RejectFace(*(::gp_Lin*)L->NativeInstance);
	return _result;
}

int RDC::OCC::BRepClass3d_SolidExplorer::Segment(RDC::OCC::Pnt P, RDC::OCC::gp_Lin^ L, double% Par)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_Par = &Par;
	int _result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->Segment(*(gp_Pnt*)pp_P, *(::gp_Lin*)L->NativeInstance, *(double*)pp_Par);
	return _result;
}

int RDC::OCC::BRepClass3d_SolidExplorer::OtherSegment(RDC::OCC::Pnt P, RDC::OCC::gp_Lin^ L, double% Par)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<double> pp_Par = &Par;
	int _result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->OtherSegment(*(gp_Pnt*)pp_P, *(::gp_Lin*)L->NativeInstance, *(double*)pp_Par);
	return _result;
}

int RDC::OCC::BRepClass3d_SolidExplorer::GetFaceSegmentIndex()
{
	int _result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->GetFaceSegmentIndex();
	return _result;
}

void RDC::OCC::BRepClass3d_SolidExplorer::DumpSegment(RDC::OCC::Pnt P, RDC::OCC::gp_Lin^ L, double Par, RDC::OCC::TopAbs_State S)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->DumpSegment(*(gp_Pnt*)pp_P, *(::gp_Lin*)L->NativeInstance, Par, (::TopAbs_State)S);
}

RDC::OCC::Bnd_Box^ RDC::OCC::BRepClass3d_SolidExplorer::Box()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = (::Bnd_Box)((::BRepClass3d_SolidExplorer*)_NativeInstance)->Box();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepClass3d_SolidExplorer::GetShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepClass3d_SolidExplorer*)_NativeInstance)->GetShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::IntCurvesFace_Intersector^ RDC::OCC::BRepClass3d_SolidExplorer::Intersector(RDC::OCC::TopoDS_Face^ F)
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::BRepClass3d_BndBoxTree^ RDC::OCC::BRepClass3d_SolidExplorer::GetTree()
{
	throw gcnew System::NotImplementedException();
}

RDC::OCC::TopTools_IndexedMapOfShape^ RDC::OCC::BRepClass3d_SolidExplorer::GetMapEV()
{
	::TopTools_IndexedMapOfShape* _result = new ::TopTools_IndexedMapOfShape();
	*_result = (::TopTools_IndexedMapOfShape)((::BRepClass3d_SolidExplorer*)_NativeInstance)->GetMapEV();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_IndexedMapOfShape(_result);
}

void RDC::OCC::BRepClass3d_SolidExplorer::Destroy()
{
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->Destroy();
}



//---------------------------------------------------------------------
//  Class  BRepClass3d_SClassifier
//---------------------------------------------------------------------

RDC::OCC::BRepClass3d_SClassifier::BRepClass3d_SClassifier()
	: RDC::OCC::BaseClass<::BRepClass3d_SClassifier>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SClassifier();
}

RDC::OCC::BRepClass3d_SClassifier::BRepClass3d_SClassifier(RDC::OCC::BRepClass3d_SolidExplorer^ S, RDC::OCC::Pnt P, double Tol)
	: RDC::OCC::BaseClass<::BRepClass3d_SClassifier>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	_NativeInstance = new ::BRepClass3d_SClassifier(*(::BRepClass3d_SolidExplorer*)S->NativeInstance, *(gp_Pnt*)pp_P, Tol);
}

void RDC::OCC::BRepClass3d_SClassifier::Perform(RDC::OCC::BRepClass3d_SolidExplorer^ S, RDC::OCC::Pnt P, double Tol)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::BRepClass3d_SClassifier*)_NativeInstance)->Perform(*(::BRepClass3d_SolidExplorer*)S->NativeInstance, *(gp_Pnt*)pp_P, Tol);
}

void RDC::OCC::BRepClass3d_SClassifier::PerformInfinitePoint(RDC::OCC::BRepClass3d_SolidExplorer^ S, double Tol)
{
	((::BRepClass3d_SClassifier*)_NativeInstance)->PerformInfinitePoint(*(::BRepClass3d_SolidExplorer*)S->NativeInstance, Tol);
}

bool RDC::OCC::BRepClass3d_SClassifier::Rejected()
{
	bool _result = ((::BRepClass3d_SClassifier*)_NativeInstance)->Rejected();
	return _result;
}

RDC::OCC::TopAbs_State RDC::OCC::BRepClass3d_SClassifier::State()
{
	::TopAbs_State _result = ((::BRepClass3d_SClassifier*)_NativeInstance)->State();
	return (RDC::OCC::TopAbs_State)_result;
}

bool RDC::OCC::BRepClass3d_SClassifier::IsOnAFace()
{
	bool _result = ((::BRepClass3d_SClassifier*)_NativeInstance)->IsOnAFace();
	return _result;
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepClass3d_SClassifier::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = ((::BRepClass3d_SClassifier*)_NativeInstance)->Face();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}



//---------------------------------------------------------------------
//  Class  BRepClass3d_SolidClassifier
//---------------------------------------------------------------------

RDC::OCC::BRepClass3d_SolidClassifier::BRepClass3d_SolidClassifier()
	: RDC::OCC::BRepClass3d_SClassifier(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SolidClassifier();
}

RDC::OCC::BRepClass3d_SolidClassifier::BRepClass3d_SolidClassifier(RDC::OCC::TopoDS_Shape^ S)
	: RDC::OCC::BRepClass3d_SClassifier(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SolidClassifier(*(::TopoDS_Shape*)S->NativeInstance);
}

RDC::OCC::BRepClass3d_SolidClassifier::BRepClass3d_SolidClassifier(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Pnt P, double Tol)
	: RDC::OCC::BRepClass3d_SClassifier(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	_NativeInstance = new ::BRepClass3d_SolidClassifier(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Pnt*)pp_P, Tol);
}

void RDC::OCC::BRepClass3d_SolidClassifier::Load(RDC::OCC::TopoDS_Shape^ S)
{
	((::BRepClass3d_SolidClassifier*)_NativeInstance)->Load(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepClass3d_SolidClassifier::Perform(RDC::OCC::Pnt P, double Tol)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::BRepClass3d_SolidClassifier*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P, Tol);
}

void RDC::OCC::BRepClass3d_SolidClassifier::PerformInfinitePoint(double Tol)
{
	((::BRepClass3d_SolidClassifier*)_NativeInstance)->PerformInfinitePoint(Tol);
}

void RDC::OCC::BRepClass3d_SolidClassifier::Destroy()
{
	((::BRepClass3d_SolidClassifier*)_NativeInstance)->Destroy();
}



//---------------------------------------------------------------------
//  Class  BRepClass3d_SolidPassiveClassifier
//---------------------------------------------------------------------

RDC::OCC::BRepClass3d_SolidPassiveClassifier::BRepClass3d_SolidPassiveClassifier()
	: RDC::OCC::BaseClass<::BRepClass3d_SolidPassiveClassifier>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SolidPassiveClassifier();
}

void RDC::OCC::BRepClass3d_SolidPassiveClassifier::Reset(RDC::OCC::gp_Lin^ L, double P, double Tol)
{
	((::BRepClass3d_SolidPassiveClassifier*)_NativeInstance)->Reset(*(::gp_Lin*)L->NativeInstance, P, Tol);
}

void RDC::OCC::BRepClass3d_SolidPassiveClassifier::Compare(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopAbs_Orientation Or)
{
	((::BRepClass3d_SolidPassiveClassifier*)_NativeInstance)->Compare(*(::TopoDS_Face*)F->NativeInstance, (::TopAbs_Orientation)Or);
}

double RDC::OCC::BRepClass3d_SolidPassiveClassifier::Parameter()
{
	double _result = ((::BRepClass3d_SolidPassiveClassifier*)_NativeInstance)->Parameter();
	return _result;
}

bool RDC::OCC::BRepClass3d_SolidPassiveClassifier::HasIntersection()
{
	bool _result = ((::BRepClass3d_SolidPassiveClassifier*)_NativeInstance)->HasIntersection();
	return _result;
}

RDC::OCC::BRepClass3d_Intersector3d^ RDC::OCC::BRepClass3d_SolidPassiveClassifier::Intersector()
{
	::BRepClass3d_Intersector3d* _result = new ::BRepClass3d_Intersector3d();
	*_result = ((::BRepClass3d_SolidPassiveClassifier*)_NativeInstance)->Intersector();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::BRepClass3d_Intersector3d(_result);
}

RDC::OCC::TopAbs_State RDC::OCC::BRepClass3d_SolidPassiveClassifier::State()
{
	::TopAbs_State _result = ((::BRepClass3d_SolidPassiveClassifier*)_NativeInstance)->State();
	return (RDC::OCC::TopAbs_State)_result;
}



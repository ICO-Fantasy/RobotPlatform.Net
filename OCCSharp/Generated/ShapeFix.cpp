﻿// Generated wrapper code for package ShapeFix

#include "OcctPCH.h"
#include "ShapeFix.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TopoDS.h"
#include "Bnd.h"
#include "Message.h"
#include "ShapeBuild.h"
#include "TopAbs.h"
#include "TopLoc.h"
#include "TopTools.h"
#include "ShapeAnalysis.h"
#include "ShapeConstruct.h"
#include "Geom.h"
#include "Geom2d.h"


//---------------------------------------------------------------------
//  Class  ShapeFix_SequenceOfWireSegment
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_SequenceOfWireSegment::ShapeFix_SequenceOfWireSegment()
	: RDC::OCC::BaseClass<::ShapeFix_SequenceOfWireSegment>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_SequenceOfWireSegment();
}

RDC::OCC::ShapeFix_SequenceOfWireSegment::ShapeFix_SequenceOfWireSegment(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::ShapeFix_SequenceOfWireSegment>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_SequenceOfWireSegment(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::ShapeFix_SequenceOfWireSegment::Size()
{
	int _result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::ShapeFix_SequenceOfWireSegment::Length()
{
	int _result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::ShapeFix_SequenceOfWireSegment::Lower()
{
	int _result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::ShapeFix_SequenceOfWireSegment::Upper()
{
	int _result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::ShapeFix_SequenceOfWireSegment::IsEmpty()
{
	bool _result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::ShapeFix_SequenceOfWireSegment::Reverse()
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Reverse();
}

void RDC::OCC::ShapeFix_SequenceOfWireSegment::Exchange(int I, int J)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::ShapeFix_SequenceOfWireSegment::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::ShapeFix_SequenceOfWireSegment::Clear()
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Clear(0L);
}

RDC::OCC::ShapeFix_SequenceOfWireSegment^ RDC::OCC::ShapeFix_SequenceOfWireSegment::Assign(RDC::OCC::ShapeFix_SequenceOfWireSegment^ theOther)
{
	::ShapeFix_SequenceOfWireSegment* _result = new ::ShapeFix_SequenceOfWireSegment();
	*_result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Assign(*(::ShapeFix_SequenceOfWireSegment*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::ShapeFix_SequenceOfWireSegment(_result);
}

void RDC::OCC::ShapeFix_SequenceOfWireSegment::Remove(RDC::OCC::ShapeFix_SequenceOfWireSegment::Iterator^ thePosition)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Remove(*(::ShapeFix_SequenceOfWireSegment::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::ShapeFix_SequenceOfWireSegment::Append(RDC::OCC::ShapeFix_WireSegment^ theItem)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Append(*(::ShapeFix_WireSegment*)theItem->NativeInstance);
}

void RDC::OCC::ShapeFix_SequenceOfWireSegment::Prepend(RDC::OCC::ShapeFix_WireSegment^ theItem)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Prepend(*(::ShapeFix_WireSegment*)theItem->NativeInstance);
}

void RDC::OCC::ShapeFix_SequenceOfWireSegment::InsertBefore(int theIndex, RDC::OCC::ShapeFix_WireSegment^ theItem)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->InsertBefore(theIndex, *(::ShapeFix_WireSegment*)theItem->NativeInstance);
}

void RDC::OCC::ShapeFix_SequenceOfWireSegment::InsertAfter(RDC::OCC::ShapeFix_SequenceOfWireSegment::Iterator^ thePosition, RDC::OCC::ShapeFix_WireSegment^ theItem)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->InsertAfter(*(::ShapeFix_SequenceOfWireSegment::Iterator*)thePosition->NativeInstance, *(::ShapeFix_WireSegment*)theItem->NativeInstance);
}

void RDC::OCC::ShapeFix_SequenceOfWireSegment::Split(int theIndex, RDC::OCC::ShapeFix_SequenceOfWireSegment^ theSeq)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Split(theIndex, *(::ShapeFix_SequenceOfWireSegment*)theSeq->NativeInstance);
}

RDC::OCC::ShapeFix_WireSegment^ RDC::OCC::ShapeFix_SequenceOfWireSegment::First()
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result = (::ShapeFix_WireSegment)((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::ShapeFix_WireSegment(_result);
}

RDC::OCC::ShapeFix_WireSegment^ RDC::OCC::ShapeFix_SequenceOfWireSegment::ChangeFirst()
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::ShapeFix_WireSegment(_result);
}

RDC::OCC::ShapeFix_WireSegment^ RDC::OCC::ShapeFix_SequenceOfWireSegment::Last()
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result = (::ShapeFix_WireSegment)((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::ShapeFix_WireSegment(_result);
}

RDC::OCC::ShapeFix_WireSegment^ RDC::OCC::ShapeFix_SequenceOfWireSegment::ChangeLast()
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::ShapeFix_WireSegment(_result);
}

RDC::OCC::ShapeFix_WireSegment^ RDC::OCC::ShapeFix_SequenceOfWireSegment::Value(int theIndex)
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result = (::ShapeFix_WireSegment)((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::ShapeFix_WireSegment(_result);
}

RDC::OCC::ShapeFix_WireSegment^ RDC::OCC::ShapeFix_SequenceOfWireSegment::ChangeValue(int theIndex)
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::ShapeFix_WireSegment(_result);
}

void RDC::OCC::ShapeFix_SequenceOfWireSegment::SetValue(int theIndex, RDC::OCC::ShapeFix_WireSegment^ theItem)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->SetValue(theIndex, *(::ShapeFix_WireSegment*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::ShapeFix_WireSegment^>^ RDC::OCC::ShapeFix_SequenceOfWireSegment::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::ShapeFix_WireSegment^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::ShapeFix_SequenceOfWireSegment::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::ShapeFix_WireSegment^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  ShapeFix_SequenceOfWireSegment::Iterator
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_SequenceOfWireSegment::Iterator::Iterator()
	: RDC::OCC::BaseClass<::ShapeFix_SequenceOfWireSegment::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_SequenceOfWireSegment::Iterator();
}

bool RDC::OCC::ShapeFix_SequenceOfWireSegment::Iterator::More()
{
	bool _result = ((::ShapeFix_SequenceOfWireSegment::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::ShapeFix_SequenceOfWireSegment::Iterator::Next()
{
	((::ShapeFix_SequenceOfWireSegment::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::ShapeFix_WireSegment^ RDC::OCC::ShapeFix_SequenceOfWireSegment::Iterator::Value()
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result = (::ShapeFix_WireSegment)((::ShapeFix_SequenceOfWireSegment::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::ShapeFix_WireSegment(_result);
}

RDC::OCC::ShapeFix_WireSegment^ RDC::OCC::ShapeFix_SequenceOfWireSegment::Iterator::ChangeValue()
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result = ((::ShapeFix_SequenceOfWireSegment::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::ShapeFix_WireSegment(_result);
}

bool RDC::OCC::ShapeFix_SequenceOfWireSegment::Iterator::IsEqual(RDC::OCC::ShapeFix_SequenceOfWireSegment::Iterator^ theOther)
{
	bool _result = ((::ShapeFix_SequenceOfWireSegment::Iterator*)_NativeInstance)->IsEqual(*(::ShapeFix_SequenceOfWireSegment::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_SequenceOfWireSegment::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::ShapeFix_SequenceOfWireSegment::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  ShapeFix_DataMapOfShapeBox2d
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_DataMapOfShapeBox2d::ShapeFix_DataMapOfShapeBox2d()
	: RDC::OCC::BaseClass<::ShapeFix_DataMapOfShapeBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_DataMapOfShapeBox2d();
}

RDC::OCC::ShapeFix_DataMapOfShapeBox2d::ShapeFix_DataMapOfShapeBox2d(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::ShapeFix_DataMapOfShapeBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_DataMapOfShapeBox2d(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::ShapeFix_DataMapOfShapeBox2d::ShapeFix_DataMapOfShapeBox2d(int theNbBuckets)
	: RDC::OCC::BaseClass<::ShapeFix_DataMapOfShapeBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_DataMapOfShapeBox2d(theNbBuckets, 0L);
}

void RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Exchange(RDC::OCC::ShapeFix_DataMapOfShapeBox2d^ theOther)
{
	((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Exchange(*(::ShapeFix_DataMapOfShapeBox2d*)theOther->NativeInstance);
}

RDC::OCC::ShapeFix_DataMapOfShapeBox2d^ RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Assign(RDC::OCC::ShapeFix_DataMapOfShapeBox2d^ theOther)
{
	::ShapeFix_DataMapOfShapeBox2d* _result = new ::ShapeFix_DataMapOfShapeBox2d();
	*_result = ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Assign(*(::ShapeFix_DataMapOfShapeBox2d*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::ShapeFix_DataMapOfShapeBox2d(_result);
}

void RDC::OCC::ShapeFix_DataMapOfShapeBox2d::ReSize(int N)
{
	((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Bind(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::Bnd_Box2d^ theItem)
{
	bool _result = ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::Bnd_Box2d*)theItem->NativeInstance);
	return _result;
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Bound(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::Bnd_Box2d^ theItem)
{
	::Bnd_Box2d* _result = ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::Bnd_Box2d*)theItem->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

bool RDC::OCC::ShapeFix_DataMapOfShapeBox2d::IsBound(RDC::OCC::TopoDS_Shape^ theKey)
{
	bool _result = ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_DataMapOfShapeBox2d::UnBind(RDC::OCC::TopoDS_Shape^ theKey)
{
	bool _result = ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
	return _result;
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Seek(RDC::OCC::TopoDS_Shape^ theKey)
{
	const ::Bnd_Box2d* _result = ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d((::Bnd_Box2d*)_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Find(RDC::OCC::TopoDS_Shape^ theKey)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = (::Bnd_Box2d)((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::ShapeFix_DataMapOfShapeBox2d::ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey)
{
	::Bnd_Box2d* _result = ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::ShapeFix_DataMapOfShapeBox2d::ChangeFind(RDC::OCC::TopoDS_Shape^ theKey)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

void RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Clear(bool doReleaseMemory)
{
	((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Clear()
{
	((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Clear(false);
}

int RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Size()
{
	int _result = ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Size();
	return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeFix_DataMapOfShapeBox2d::Iterator
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Iterator::Iterator()
	: RDC::OCC::BaseClass<::ShapeFix_DataMapOfShapeBox2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_DataMapOfShapeBox2d::Iterator();
}

bool RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Iterator::More()
{
	bool _result = ((::ShapeFix_DataMapOfShapeBox2d::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Iterator::Next()
{
	((::ShapeFix_DataMapOfShapeBox2d::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Iterator::Value()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = (::Bnd_Box2d)((::ShapeFix_DataMapOfShapeBox2d::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::Bnd_Box2d^ RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Iterator::ChangeValue()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::ShapeFix_DataMapOfShapeBox2d::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Bnd_Box2d(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_DataMapOfShapeBox2d::Iterator::Key()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::ShapeFix_DataMapOfShapeBox2d::Iterator*)_NativeInstance)->Key();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  ShapeFix
//---------------------------------------------------------------------

RDC::OCC::ShapeFix::ShapeFix()
	: RDC::OCC::BaseClass<::ShapeFix>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix();
}

bool RDC::OCC::ShapeFix::SameParameter(RDC::OCC::TopoDS_Shape^ shape, bool enforce, double preci, RDC::OCC::Message_ProgressRange^ theProgress)
{
	bool _result = ::ShapeFix::SameParameter(*(::TopoDS_Shape*)shape->NativeInstance, enforce, preci, *(::Message_ProgressRange*)theProgress->NativeInstance, nullptr);
	return _result;
}

bool RDC::OCC::ShapeFix::SameParameter(RDC::OCC::TopoDS_Shape^ shape, bool enforce, double preci)
{
	bool _result = ::ShapeFix::SameParameter(*(::TopoDS_Shape*)shape->NativeInstance, enforce, preci, ::Message_ProgressRange(), nullptr);
	return _result;
}

bool RDC::OCC::ShapeFix::SameParameter(RDC::OCC::TopoDS_Shape^ shape, bool enforce)
{
	bool _result = ::ShapeFix::SameParameter(*(::TopoDS_Shape*)shape->NativeInstance, enforce, 0., ::Message_ProgressRange(), nullptr);
	return _result;
}

void RDC::OCC::ShapeFix::EncodeRegularity(RDC::OCC::TopoDS_Shape^ shape, double tolang)
{
	::ShapeFix::EncodeRegularity(*(::TopoDS_Shape*)shape->NativeInstance, tolang);
}

void RDC::OCC::ShapeFix::EncodeRegularity(RDC::OCC::TopoDS_Shape^ shape)
{
	::ShapeFix::EncodeRegularity(*(::TopoDS_Shape*)shape->NativeInstance, 1.0E-10);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix::RemoveSmallEdges(RDC::OCC::TopoDS_Shape^ shape, double Tolerance, RDC::OCC::ShapeBuild_ReShape^ context)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	Handle(::ShapeBuild_ReShape) h_context = context->NativeInstance;
	*_result = ::ShapeFix::RemoveSmallEdges(*(::TopoDS_Shape*)shape->NativeInstance, Tolerance, h_context);
	context->NativeInstance = h_context.get();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::ShapeFix::FixVertexPosition(RDC::OCC::TopoDS_Shape^ theshape, double theTolerance, RDC::OCC::ShapeBuild_ReShape^ thecontext)
{
	bool _result = ::ShapeFix::FixVertexPosition(*(::TopoDS_Shape*)theshape->NativeInstance, theTolerance, Handle(::ShapeBuild_ReShape)(thecontext->NativeInstance));
	return _result;
}

double RDC::OCC::ShapeFix::LeastEdgeSize(RDC::OCC::TopoDS_Shape^ theshape)
{
	double _result = ::ShapeFix::LeastEdgeSize(*(::TopoDS_Shape*)theshape->NativeInstance);
	return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeFix_Root
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_Root::ShapeFix_Root()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Root();
}

void RDC::OCC::ShapeFix_Root::Set(RDC::OCC::ShapeFix_Root^ Root)
{
	((::ShapeFix_Root*)_NativeInstance)->Set(Handle(::ShapeFix_Root)(Root->NativeInstance));
}

void RDC::OCC::ShapeFix_Root::SetContext(RDC::OCC::ShapeBuild_ReShape^ context)
{
	((::ShapeFix_Root*)_NativeInstance)->SetContext(Handle(::ShapeBuild_ReShape)(context->NativeInstance));
}

RDC::OCC::ShapeBuild_ReShape^ RDC::OCC::ShapeFix_Root::Context()
{
	Handle(::ShapeBuild_ReShape) _result = ((::ShapeFix_Root*)_NativeInstance)->Context();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeBuild_ReShape::CreateDowncasted(_result.get());
}

void RDC::OCC::ShapeFix_Root::SetPrecision(double preci)
{
	((::ShapeFix_Root*)_NativeInstance)->SetPrecision(preci);
}

double RDC::OCC::ShapeFix_Root::Precision()
{
	double _result = ((::ShapeFix_Root*)_NativeInstance)->Precision();
	return _result;
}

void RDC::OCC::ShapeFix_Root::SetMinTolerance(double mintol)
{
	((::ShapeFix_Root*)_NativeInstance)->SetMinTolerance(mintol);
}

double RDC::OCC::ShapeFix_Root::MinTolerance()
{
	double _result = ((::ShapeFix_Root*)_NativeInstance)->MinTolerance();
	return _result;
}

void RDC::OCC::ShapeFix_Root::SetMaxTolerance(double maxtol)
{
	((::ShapeFix_Root*)_NativeInstance)->SetMaxTolerance(maxtol);
}

double RDC::OCC::ShapeFix_Root::MaxTolerance()
{
	double _result = ((::ShapeFix_Root*)_NativeInstance)->MaxTolerance();
	return _result;
}

double RDC::OCC::ShapeFix_Root::LimitTolerance(double toler)
{
	double _result = ((::ShapeFix_Root*)_NativeInstance)->LimitTolerance(toler);
	return _result;
}

RDC::OCC::ShapeFix_Root^ RDC::OCC::ShapeFix_Root::CreateDowncasted(::ShapeFix_Root* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_ComposeShell)))
		return RDC::OCC::ShapeFix_ComposeShell::CreateDowncasted((::ShapeFix_ComposeShell*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_Wire)))
		return RDC::OCC::ShapeFix_Wire::CreateDowncasted((::ShapeFix_Wire*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_Face)))
		return RDC::OCC::ShapeFix_Face::CreateDowncasted((::ShapeFix_Face*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_FixSmallFace)))
		return RDC::OCC::ShapeFix_FixSmallFace::CreateDowncasted((::ShapeFix_FixSmallFace*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_FixSmallSolid)))
		return RDC::OCC::ShapeFix_FixSmallSolid::CreateDowncasted((::ShapeFix_FixSmallSolid*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_Solid)))
		return RDC::OCC::ShapeFix_Solid::CreateDowncasted((::ShapeFix_Solid*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_Shell)))
		return RDC::OCC::ShapeFix_Shell::CreateDowncasted((::ShapeFix_Shell*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_Shape)))
		return RDC::OCC::ShapeFix_Shape::CreateDowncasted((::ShapeFix_Shape*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_SplitCommonVertex)))
		return RDC::OCC::ShapeFix_SplitCommonVertex::CreateDowncasted((::ShapeFix_SplitCommonVertex*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_Wireframe)))
		return RDC::OCC::ShapeFix_Wireframe::CreateDowncasted((::ShapeFix_Wireframe*)instance);

	return gcnew RDC::OCC::ShapeFix_Root(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_WireSegment
//---------------------------------------------------------------------

void RDC::OCC::ShapeFix_WireSegment::Clear()
{
	((::ShapeFix_WireSegment*)_NativeInstance)->Clear();
}

void RDC::OCC::ShapeFix_WireSegment::Orientation(RDC::OCC::TopAbs_Orientation ori)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->Orientation((::TopAbs_Orientation)ori);
}

RDC::OCC::TopAbs_Orientation RDC::OCC::ShapeFix_WireSegment::Orientation()
{
	::TopAbs_Orientation _result = ((::ShapeFix_WireSegment*)_NativeInstance)->Orientation();
	return (RDC::OCC::TopAbs_Orientation)_result;
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::ShapeFix_WireSegment::FirstVertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ((::ShapeFix_WireSegment*)_NativeInstance)->FirstVertex();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::ShapeFix_WireSegment::LastVertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ((::ShapeFix_WireSegment*)_NativeInstance)->LastVertex();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

bool RDC::OCC::ShapeFix_WireSegment::IsClosed()
{
	bool _result = ((::ShapeFix_WireSegment*)_NativeInstance)->IsClosed();
	return _result;
}

int RDC::OCC::ShapeFix_WireSegment::NbEdges()
{
	int _result = ((::ShapeFix_WireSegment*)_NativeInstance)->NbEdges();
	return _result;
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::ShapeFix_WireSegment::Edge(int i)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result = ((::ShapeFix_WireSegment*)_NativeInstance)->Edge(i);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

void RDC::OCC::ShapeFix_WireSegment::SetEdge(int i, RDC::OCC::TopoDS_Edge^ edge)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->SetEdge(i, *(::TopoDS_Edge*)edge->NativeInstance);
}

void RDC::OCC::ShapeFix_WireSegment::AddEdge(int i, RDC::OCC::TopoDS_Edge^ edge)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->AddEdge(i, *(::TopoDS_Edge*)edge->NativeInstance);
}

void RDC::OCC::ShapeFix_WireSegment::AddEdge(int i, RDC::OCC::TopoDS_Edge^ edge, int iumin, int iumax, int ivmin, int ivmax)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->AddEdge(i, *(::TopoDS_Edge*)edge->NativeInstance, iumin, iumax, ivmin, ivmax);
}

void RDC::OCC::ShapeFix_WireSegment::SetPatchIndex(int i, int iumin, int iumax, int ivmin, int ivmax)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->SetPatchIndex(i, iumin, iumax, ivmin, ivmax);
}

void RDC::OCC::ShapeFix_WireSegment::DefineIUMin(int i, int iumin)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->DefineIUMin(i, iumin);
}

void RDC::OCC::ShapeFix_WireSegment::DefineIUMax(int i, int iumax)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->DefineIUMax(i, iumax);
}

void RDC::OCC::ShapeFix_WireSegment::DefineIVMin(int i, int ivmin)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->DefineIVMin(i, ivmin);
}

void RDC::OCC::ShapeFix_WireSegment::DefineIVMax(int i, int ivmax)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->DefineIVMax(i, ivmax);
}

void RDC::OCC::ShapeFix_WireSegment::GetPatchIndex(int i, int% iumin, int% iumax, int% ivmin, int% ivmax)
{
	pin_ptr<int> pp_iumin = &iumin;
	pin_ptr<int> pp_iumax = &iumax;
	pin_ptr<int> pp_ivmin = &ivmin;
	pin_ptr<int> pp_ivmax = &ivmax;
	((::ShapeFix_WireSegment*)_NativeInstance)->GetPatchIndex(i, *(int*)pp_iumin, *(int*)pp_iumax, *(int*)pp_ivmin, *(int*)pp_ivmax);
}

bool RDC::OCC::ShapeFix_WireSegment::CheckPatchIndex(int i)
{
	bool _result = ((::ShapeFix_WireSegment*)_NativeInstance)->CheckPatchIndex(i);
	return _result;
}

void RDC::OCC::ShapeFix_WireSegment::SetVertex(RDC::OCC::TopoDS_Vertex^ theVertex)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->SetVertex(*(::TopoDS_Vertex*)theVertex->NativeInstance);
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::ShapeFix_WireSegment::GetVertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ((::ShapeFix_WireSegment*)_NativeInstance)->GetVertex();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

bool RDC::OCC::ShapeFix_WireSegment::IsVertex()
{
	bool _result = ((::ShapeFix_WireSegment*)_NativeInstance)->IsVertex();
	return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeFix_ComposeShell
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_ComposeShell::ShapeFix_ComposeShell()
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_ComposeShell();
}

bool RDC::OCC::ShapeFix_ComposeShell::Perform()
{
	bool _result = ((::ShapeFix_ComposeShell*)_NativeInstance)->Perform();
	return _result;
}

void RDC::OCC::ShapeFix_ComposeShell::SplitEdges()
{
	((::ShapeFix_ComposeShell*)_NativeInstance)->SplitEdges();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_ComposeShell::Result()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::ShapeFix_ComposeShell*)_NativeInstance)->Result();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::ShapeFix_ComposeShell::DispatchWires(RDC::OCC::TopTools_SequenceOfShape^ faces, RDC::OCC::ShapeFix_SequenceOfWireSegment^ wires)
{
	((::ShapeFix_ComposeShell*)_NativeInstance)->DispatchWires(*(::TopTools_SequenceOfShape*)faces->NativeInstance, *(::ShapeFix_SequenceOfWireSegment*)wires->NativeInstance);
}

void RDC::OCC::ShapeFix_ComposeShell::SetTransferParamTool(RDC::OCC::ShapeAnalysis_TransferParameters^ TransferParam)
{
	((::ShapeFix_ComposeShell*)_NativeInstance)->SetTransferParamTool(Handle(::ShapeAnalysis_TransferParameters)(TransferParam->NativeInstance));
}

RDC::OCC::ShapeAnalysis_TransferParameters^ RDC::OCC::ShapeFix_ComposeShell::GetTransferParamTool()
{
	Handle(::ShapeAnalysis_TransferParameters) _result = ((::ShapeFix_ComposeShell*)_NativeInstance)->GetTransferParamTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeAnalysis_TransferParameters::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeFix_ComposeShell^ RDC::OCC::ShapeFix_ComposeShell::CreateDowncasted(::ShapeFix_ComposeShell* instance)
{
	return gcnew RDC::OCC::ShapeFix_ComposeShell(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_Edge
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_Edge::ShapeFix_Edge()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Edge();
}

RDC::OCC::ShapeConstruct_ProjectCurveOnSurface^ RDC::OCC::ShapeFix_Edge::Projector()
{
	Handle(::ShapeConstruct_ProjectCurveOnSurface) _result = ((::ShapeFix_Edge*)_NativeInstance)->Projector();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeConstruct_ProjectCurveOnSurface::CreateDowncasted(_result.get());
}

bool RDC::OCC::ShapeFix_Edge::FixRemovePCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ face)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixRemovePCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixRemovePCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Surface^ surface, RDC::OCC::TopLoc_Location^ location)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixRemovePCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixRemoveCurve3d(RDC::OCC::TopoDS_Edge^ edge)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixRemoveCurve3d(*(::TopoDS_Edge*)edge->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixAddPCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ face, bool isSeam, double prec)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, isSeam, prec);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixAddPCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ face, bool isSeam)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, isSeam, 0.);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixAddPCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Surface^ surface, RDC::OCC::TopLoc_Location^ location, bool isSeam, double prec)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance, isSeam, prec);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixAddPCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Surface^ surface, RDC::OCC::TopLoc_Location^ location, bool isSeam)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance, isSeam, 0.);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixAddPCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ face, bool isSeam, RDC::OCC::ShapeAnalysis_Surface^ surfana, double prec)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, isSeam, Handle(::ShapeAnalysis_Surface)(surfana->NativeInstance), prec);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixAddPCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ face, bool isSeam, RDC::OCC::ShapeAnalysis_Surface^ surfana)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, isSeam, Handle(::ShapeAnalysis_Surface)(surfana->NativeInstance), 0.);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixAddPCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Surface^ surface, RDC::OCC::TopLoc_Location^ location, bool isSeam, RDC::OCC::ShapeAnalysis_Surface^ surfana, double prec)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance, isSeam, Handle(::ShapeAnalysis_Surface)(surfana->NativeInstance), prec);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixAddPCurve(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Surface^ surface, RDC::OCC::TopLoc_Location^ location, bool isSeam, RDC::OCC::ShapeAnalysis_Surface^ surfana)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance, isSeam, Handle(::ShapeAnalysis_Surface)(surfana->NativeInstance), 0.);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixAddCurve3d(RDC::OCC::TopoDS_Edge^ edge)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixAddCurve3d(*(::TopoDS_Edge*)edge->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixVertexTolerance(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ face)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixVertexTolerance(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixVertexTolerance(RDC::OCC::TopoDS_Edge^ edge)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixVertexTolerance(*(::TopoDS_Edge*)edge->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixReversed2d(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ face)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixReversed2d(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixReversed2d(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::Geom_Surface^ surface, RDC::OCC::TopLoc_Location^ location)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixReversed2d(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixSameParameter(RDC::OCC::TopoDS_Edge^ edge, double tolerance)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixSameParameter(*(::TopoDS_Edge*)edge->NativeInstance, tolerance);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixSameParameter(RDC::OCC::TopoDS_Edge^ edge)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixSameParameter(*(::TopoDS_Edge*)edge->NativeInstance, 0.);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixSameParameter(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ face, double tolerance)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixSameParameter(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, tolerance);
	return _result;
}

bool RDC::OCC::ShapeFix_Edge::FixSameParameter(RDC::OCC::TopoDS_Edge^ edge, RDC::OCC::TopoDS_Face^ face)
{
	bool _result = ((::ShapeFix_Edge*)_NativeInstance)->FixSameParameter(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, 0.);
	return _result;
}

void RDC::OCC::ShapeFix_Edge::SetContext(RDC::OCC::ShapeBuild_ReShape^ context)
{
	((::ShapeFix_Edge*)_NativeInstance)->SetContext(Handle(::ShapeBuild_ReShape)(context->NativeInstance));
}

RDC::OCC::ShapeBuild_ReShape^ RDC::OCC::ShapeFix_Edge::Context()
{
	Handle(::ShapeBuild_ReShape) _result = ((::ShapeFix_Edge*)_NativeInstance)->Context();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeBuild_ReShape::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeFix_Edge^ RDC::OCC::ShapeFix_Edge::CreateDowncasted(::ShapeFix_Edge* instance)
{
	return gcnew RDC::OCC::ShapeFix_Edge(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_EdgeConnect
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_EdgeConnect::ShapeFix_EdgeConnect()
	: RDC::OCC::BaseClass<::ShapeFix_EdgeConnect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_EdgeConnect();
}

void RDC::OCC::ShapeFix_EdgeConnect::Add(RDC::OCC::TopoDS_Edge^ aFirst, RDC::OCC::TopoDS_Edge^ aSecond)
{
	((::ShapeFix_EdgeConnect*)_NativeInstance)->Add(*(::TopoDS_Edge*)aFirst->NativeInstance, *(::TopoDS_Edge*)aSecond->NativeInstance);
}

void RDC::OCC::ShapeFix_EdgeConnect::Add(RDC::OCC::TopoDS_Shape^ aShape)
{
	((::ShapeFix_EdgeConnect*)_NativeInstance)->Add(*(::TopoDS_Shape*)aShape->NativeInstance);
}

void RDC::OCC::ShapeFix_EdgeConnect::Build()
{
	((::ShapeFix_EdgeConnect*)_NativeInstance)->Build();
}

void RDC::OCC::ShapeFix_EdgeConnect::Clear()
{
	((::ShapeFix_EdgeConnect*)_NativeInstance)->Clear();
}



//---------------------------------------------------------------------
//  Class  ShapeFix_EdgeProjAux
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_EdgeProjAux::ShapeFix_EdgeProjAux()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_EdgeProjAux();
}

RDC::OCC::ShapeFix_EdgeProjAux::ShapeFix_EdgeProjAux(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ E)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_EdgeProjAux(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

void RDC::OCC::ShapeFix_EdgeProjAux::Init(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ E)
{
	((::ShapeFix_EdgeProjAux*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

void RDC::OCC::ShapeFix_EdgeProjAux::Compute(double preci)
{
	((::ShapeFix_EdgeProjAux*)_NativeInstance)->Compute(preci);
}

bool RDC::OCC::ShapeFix_EdgeProjAux::IsFirstDone()
{
	bool _result = ((::ShapeFix_EdgeProjAux*)_NativeInstance)->IsFirstDone();
	return _result;
}

bool RDC::OCC::ShapeFix_EdgeProjAux::IsLastDone()
{
	bool _result = ((::ShapeFix_EdgeProjAux*)_NativeInstance)->IsLastDone();
	return _result;
}

double RDC::OCC::ShapeFix_EdgeProjAux::FirstParam()
{
	double _result = ((::ShapeFix_EdgeProjAux*)_NativeInstance)->FirstParam();
	return _result;
}

double RDC::OCC::ShapeFix_EdgeProjAux::LastParam()
{
	double _result = ((::ShapeFix_EdgeProjAux*)_NativeInstance)->LastParam();
	return _result;
}

bool RDC::OCC::ShapeFix_EdgeProjAux::IsIso(RDC::OCC::Geom2d_Curve^ C)
{
	bool _result = ((::ShapeFix_EdgeProjAux*)_NativeInstance)->IsIso(Handle(::Geom2d_Curve)(C->NativeInstance));
	return _result;
}

RDC::OCC::ShapeFix_EdgeProjAux^ RDC::OCC::ShapeFix_EdgeProjAux::CreateDowncasted(::ShapeFix_EdgeProjAux* instance)
{
	return gcnew RDC::OCC::ShapeFix_EdgeProjAux(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_Wire
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_Wire::ShapeFix_Wire()
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Wire();
}

RDC::OCC::ShapeFix_Wire::ShapeFix_Wire(RDC::OCC::TopoDS_Wire^ wire, RDC::OCC::TopoDS_Face^ face, double prec)
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Wire(*(::TopoDS_Wire*)wire->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, prec);
}

void RDC::OCC::ShapeFix_Wire::ClearModes()
{
	((::ShapeFix_Wire*)_NativeInstance)->ClearModes();
}

void RDC::OCC::ShapeFix_Wire::ClearStatuses()
{
	((::ShapeFix_Wire*)_NativeInstance)->ClearStatuses();
}

void RDC::OCC::ShapeFix_Wire::Init(RDC::OCC::TopoDS_Wire^ wire, RDC::OCC::TopoDS_Face^ face, double prec)
{
	((::ShapeFix_Wire*)_NativeInstance)->Init(*(::TopoDS_Wire*)wire->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, prec);
}

void RDC::OCC::ShapeFix_Wire::Init(RDC::OCC::ShapeAnalysis_Wire^ saw)
{
	((::ShapeFix_Wire*)_NativeInstance)->Init(Handle(::ShapeAnalysis_Wire)(saw->NativeInstance));
}

void RDC::OCC::ShapeFix_Wire::Load(RDC::OCC::TopoDS_Wire^ wire)
{
	((::ShapeFix_Wire*)_NativeInstance)->Load(*(::TopoDS_Wire*)wire->NativeInstance);
}

void RDC::OCC::ShapeFix_Wire::SetFace(RDC::OCC::TopoDS_Face^ face)
{
	((::ShapeFix_Wire*)_NativeInstance)->SetFace(*(::TopoDS_Face*)face->NativeInstance);
}

void RDC::OCC::ShapeFix_Wire::SetSurface(RDC::OCC::Geom_Surface^ surf)
{
	((::ShapeFix_Wire*)_NativeInstance)->SetSurface(Handle(::Geom_Surface)(surf->NativeInstance));
}

void RDC::OCC::ShapeFix_Wire::SetSurface(RDC::OCC::Geom_Surface^ surf, RDC::OCC::TopLoc_Location^ loc)
{
	((::ShapeFix_Wire*)_NativeInstance)->SetSurface(Handle(::Geom_Surface)(surf->NativeInstance), *(::TopLoc_Location*)loc->NativeInstance);
}

void RDC::OCC::ShapeFix_Wire::SetPrecision(double prec)
{
	((::ShapeFix_Wire*)_NativeInstance)->SetPrecision(prec);
}

void RDC::OCC::ShapeFix_Wire::SetMaxTailAngle(double theMaxTailAngle)
{
	((::ShapeFix_Wire*)_NativeInstance)->SetMaxTailAngle(theMaxTailAngle);
}

void RDC::OCC::ShapeFix_Wire::SetMaxTailWidth(double theMaxTailWidth)
{
	((::ShapeFix_Wire*)_NativeInstance)->SetMaxTailWidth(theMaxTailWidth);
}

bool RDC::OCC::ShapeFix_Wire::IsLoaded()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->IsLoaded();
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::IsReady()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->IsReady();
	return _result;
}

int RDC::OCC::ShapeFix_Wire::NbEdges()
{
	int _result = ((::ShapeFix_Wire*)_NativeInstance)->NbEdges();
	return _result;
}

RDC::OCC::TopoDS_Wire^ RDC::OCC::ShapeFix_Wire::Wire()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = ((::ShapeFix_Wire*)_NativeInstance)->Wire();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Wire(_result);
}

RDC::OCC::TopoDS_Wire^ RDC::OCC::ShapeFix_Wire::WireAPIMake()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = ((::ShapeFix_Wire*)_NativeInstance)->WireAPIMake();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Wire(_result);
}

RDC::OCC::ShapeAnalysis_Wire^ RDC::OCC::ShapeFix_Wire::Analyzer()
{
	Handle(::ShapeAnalysis_Wire) _result = ((::ShapeFix_Wire*)_NativeInstance)->Analyzer();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeAnalysis_Wire::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_Face^ RDC::OCC::ShapeFix_Wire::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = (::TopoDS_Face)((::ShapeFix_Wire*)_NativeInstance)->Face();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

bool RDC::OCC::ShapeFix_Wire::Perform()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->Perform();
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixReorder(bool theModeBoth)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixReorder(theModeBoth);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixReorder()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixReorder(false);
	return _result;
}

int RDC::OCC::ShapeFix_Wire::FixSmall(bool lockvtx, double precsmall)
{
	int _result = ((::ShapeFix_Wire*)_NativeInstance)->FixSmall(lockvtx, precsmall);
	return _result;
}

int RDC::OCC::ShapeFix_Wire::FixSmall(bool lockvtx)
{
	int _result = ((::ShapeFix_Wire*)_NativeInstance)->FixSmall(lockvtx, 0.);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixConnected(double prec)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixConnected(prec);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixConnected()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixConnected(-1.);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixEdgeCurves()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixEdgeCurves();
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixDegenerated()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixDegenerated();
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixSelfIntersection()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixSelfIntersection();
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixLacking(bool force)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixLacking(force);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixLacking()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixLacking(false);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixClosed(double prec)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixClosed(prec);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixClosed()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixClosed(-1.);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixGaps3d()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixGaps3d();
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixGaps2d()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixGaps2d();
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixReorder(RDC::OCC::ShapeAnalysis_WireOrder^ wi)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixReorder(*(::ShapeAnalysis_WireOrder*)wi->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixSmall(int num, bool lockvtx, double precsmall)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixSmall(num, lockvtx, precsmall);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixConnected(int num, double prec)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixConnected(num, prec);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixSeam(int num)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixSeam(num);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixShifted()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixShifted();
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixDegenerated(int num)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixDegenerated(num);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixLacking(int num, bool force)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixLacking(num, force);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixLacking(int num)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixLacking(num, false);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixNotchedEdges()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixNotchedEdges();
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixGap3d(int num, bool convert)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixGap3d(num, convert);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixGap3d(int num)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixGap3d(num, false);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixGap2d(int num, bool convert)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixGap2d(num, convert);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixGap2d(int num)
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixGap2d(num, false);
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::FixTails()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->FixTails();
	return _result;
}

bool RDC::OCC::ShapeFix_Wire::StatusRemovedSegment()
{
	bool _result = ((::ShapeFix_Wire*)_NativeInstance)->StatusRemovedSegment();
	return _result;
}

RDC::OCC::ShapeFix_Edge^ RDC::OCC::ShapeFix_Wire::FixEdgeTool()
{
	Handle(::ShapeFix_Edge) _result = ((::ShapeFix_Wire*)_NativeInstance)->FixEdgeTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeFix_Edge::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeFix_Wire^ RDC::OCC::ShapeFix_Wire::CreateDowncasted(::ShapeFix_Wire* instance)
{
	return gcnew RDC::OCC::ShapeFix_Wire(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_Face
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_Face::ShapeFix_Face()
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Face();
}

RDC::OCC::ShapeFix_Face::ShapeFix_Face(RDC::OCC::TopoDS_Face^ face)
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Face(*(::TopoDS_Face*)face->NativeInstance);
}

void RDC::OCC::ShapeFix_Face::ClearModes()
{
	((::ShapeFix_Face*)_NativeInstance)->ClearModes();
}

void RDC::OCC::ShapeFix_Face::Init(RDC::OCC::TopoDS_Face^ face)
{
	((::ShapeFix_Face*)_NativeInstance)->Init(*(::TopoDS_Face*)face->NativeInstance);
}

void RDC::OCC::ShapeFix_Face::Init(RDC::OCC::Geom_Surface^ surf, double preci, bool fwd)
{
	((::ShapeFix_Face*)_NativeInstance)->Init(Handle(::Geom_Surface)(surf->NativeInstance), preci, fwd);
}

void RDC::OCC::ShapeFix_Face::Init(RDC::OCC::Geom_Surface^ surf, double preci)
{
	((::ShapeFix_Face*)_NativeInstance)->Init(Handle(::Geom_Surface)(surf->NativeInstance), preci, true);
}

void RDC::OCC::ShapeFix_Face::Init(RDC::OCC::ShapeAnalysis_Surface^ surf, double preci, bool fwd)
{
	((::ShapeFix_Face*)_NativeInstance)->Init(Handle(::ShapeAnalysis_Surface)(surf->NativeInstance), preci, fwd);
}

void RDC::OCC::ShapeFix_Face::Init(RDC::OCC::ShapeAnalysis_Surface^ surf, double preci)
{
	((::ShapeFix_Face*)_NativeInstance)->Init(Handle(::ShapeAnalysis_Surface)(surf->NativeInstance), preci, true);
}

void RDC::OCC::ShapeFix_Face::SetPrecision(double preci)
{
	((::ShapeFix_Face*)_NativeInstance)->SetPrecision(preci);
}

void RDC::OCC::ShapeFix_Face::SetMinTolerance(double mintol)
{
	((::ShapeFix_Face*)_NativeInstance)->SetMinTolerance(mintol);
}

void RDC::OCC::ShapeFix_Face::SetMaxTolerance(double maxtol)
{
	((::ShapeFix_Face*)_NativeInstance)->SetMaxTolerance(maxtol);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::ShapeFix_Face::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = ((::ShapeFix_Face*)_NativeInstance)->Face();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_Face::Result()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_Face*)_NativeInstance)->Result();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::ShapeFix_Face::Add(RDC::OCC::TopoDS_Wire^ wire)
{
	((::ShapeFix_Face*)_NativeInstance)->Add(*(::TopoDS_Wire*)wire->NativeInstance);
}

bool RDC::OCC::ShapeFix_Face::Perform()
{
	bool _result = ((::ShapeFix_Face*)_NativeInstance)->Perform();
	return _result;
}

bool RDC::OCC::ShapeFix_Face::FixOrientation()
{
	bool _result = ((::ShapeFix_Face*)_NativeInstance)->FixOrientation();
	return _result;
}

bool RDC::OCC::ShapeFix_Face::FixOrientation(RDC::OCC::TopTools_DataMapOfShapeListOfShape^ MapWires)
{
	bool _result = ((::ShapeFix_Face*)_NativeInstance)->FixOrientation(*(::TopTools_DataMapOfShapeListOfShape*)MapWires->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Face::FixAddNaturalBound()
{
	bool _result = ((::ShapeFix_Face*)_NativeInstance)->FixAddNaturalBound();
	return _result;
}

bool RDC::OCC::ShapeFix_Face::FixMissingSeam()
{
	bool _result = ((::ShapeFix_Face*)_NativeInstance)->FixMissingSeam();
	return _result;
}

bool RDC::OCC::ShapeFix_Face::FixSmallAreaWire(bool theIsRemoveSmallFace)
{
	bool _result = ((::ShapeFix_Face*)_NativeInstance)->FixSmallAreaWire(theIsRemoveSmallFace);
	return _result;
}

bool RDC::OCC::ShapeFix_Face::FixLoopWire(RDC::OCC::TopTools_SequenceOfShape^ aResWires)
{
	bool _result = ((::ShapeFix_Face*)_NativeInstance)->FixLoopWire(*(::TopTools_SequenceOfShape*)aResWires->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Face::FixIntersectingWires()
{
	bool _result = ((::ShapeFix_Face*)_NativeInstance)->FixIntersectingWires();
	return _result;
}

bool RDC::OCC::ShapeFix_Face::FixWiresTwoCoincEdges()
{
	bool _result = ((::ShapeFix_Face*)_NativeInstance)->FixWiresTwoCoincEdges();
	return _result;
}

bool RDC::OCC::ShapeFix_Face::FixSplitFace(RDC::OCC::TopTools_DataMapOfShapeListOfShape^ MapWires)
{
	bool _result = ((::ShapeFix_Face*)_NativeInstance)->FixSplitFace(*(::TopTools_DataMapOfShapeListOfShape*)MapWires->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Face::FixPeriodicDegenerated()
{
	bool _result = ((::ShapeFix_Face*)_NativeInstance)->FixPeriodicDegenerated();
	return _result;
}

RDC::OCC::ShapeFix_Wire^ RDC::OCC::ShapeFix_Face::FixWireTool()
{
	Handle(::ShapeFix_Wire) _result = ((::ShapeFix_Face*)_NativeInstance)->FixWireTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeFix_Wire::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeFix_Face^ RDC::OCC::ShapeFix_Face::CreateDowncasted(::ShapeFix_Face* instance)
{
	return gcnew RDC::OCC::ShapeFix_Face(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_FaceConnect
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_FaceConnect::ShapeFix_FaceConnect()
	: RDC::OCC::BaseClass<::ShapeFix_FaceConnect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_FaceConnect();
}

bool RDC::OCC::ShapeFix_FaceConnect::Add(RDC::OCC::TopoDS_Face^ aFirst, RDC::OCC::TopoDS_Face^ aSecond)
{
	bool _result = ((::ShapeFix_FaceConnect*)_NativeInstance)->Add(*(::TopoDS_Face*)aFirst->NativeInstance, *(::TopoDS_Face*)aSecond->NativeInstance);
	return _result;
}

RDC::OCC::TopoDS_Shell^ RDC::OCC::ShapeFix_FaceConnect::Build(RDC::OCC::TopoDS_Shell^ shell, double sewtoler, double fixtoler)
{
	::TopoDS_Shell* _result = new ::TopoDS_Shell();
	*_result = ((::ShapeFix_FaceConnect*)_NativeInstance)->Build(*(::TopoDS_Shell*)shell->NativeInstance, sewtoler, fixtoler);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shell(_result);
}

void RDC::OCC::ShapeFix_FaceConnect::Clear()
{
	((::ShapeFix_FaceConnect*)_NativeInstance)->Clear();
}



//---------------------------------------------------------------------
//  Class  ShapeFix_FixSmallFace
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_FixSmallFace::ShapeFix_FixSmallFace()
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_FixSmallFace();
}

void RDC::OCC::ShapeFix_FixSmallFace::Init(RDC::OCC::TopoDS_Shape^ S)
{
	((::ShapeFix_FixSmallFace*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::ShapeFix_FixSmallFace::Perform()
{
	((::ShapeFix_FixSmallFace*)_NativeInstance)->Perform();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_FixSmallFace::FixSpotFace()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixSpotFace();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::ShapeFix_FixSmallFace::ReplaceVerticesInCaseOfSpot(RDC::OCC::TopoDS_Face^ F, double tol)
{
	bool _result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->ReplaceVerticesInCaseOfSpot(*(::TopoDS_Face*)F->NativeInstance, tol);
	return _result;
}

bool RDC::OCC::ShapeFix_FixSmallFace::RemoveFacesInCaseOfSpot(RDC::OCC::TopoDS_Face^ F)
{
	bool _result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->RemoveFacesInCaseOfSpot(*(::TopoDS_Face*)F->NativeInstance);
	return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_FixSmallFace::FixStripFace(bool wasdone)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixStripFace(wasdone);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_FixSmallFace::FixStripFace()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixStripFace(false);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::ShapeFix_FixSmallFace::ReplaceInCaseOfStrip(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2, double tol)
{
	bool _result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->ReplaceInCaseOfStrip(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, tol);
	return _result;
}

bool RDC::OCC::ShapeFix_FixSmallFace::RemoveFacesInCaseOfStrip(RDC::OCC::TopoDS_Face^ F)
{
	bool _result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->RemoveFacesInCaseOfStrip(*(::TopoDS_Face*)F->NativeInstance);
	return _result;
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::ShapeFix_FixSmallFace::ComputeSharedEdgeForStripFace(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2, RDC::OCC::TopoDS_Face^ F1, double tol)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->ComputeSharedEdgeForStripFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, tol);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_FixSmallFace::FixSplitFace(RDC::OCC::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixSplitFace(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::ShapeFix_FixSmallFace::SplitOneFace(RDC::OCC::TopoDS_Face^ F, RDC::OCC::TopoDS_Compound^ theSplittedFaces)
{
	bool _result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->SplitOneFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Compound*)theSplittedFaces->NativeInstance);
	return _result;
}

RDC::OCC::TopoDS_Face^ RDC::OCC::ShapeFix_FixSmallFace::FixFace(RDC::OCC::TopoDS_Face^ F)
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixFace(*(::TopoDS_Face*)F->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_FixSmallFace::FixShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_FixSmallFace::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->Shape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::ShapeFix_FixSmallFace::FixPinFace(RDC::OCC::TopoDS_Face^ F)
{
	bool _result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixPinFace(*(::TopoDS_Face*)F->NativeInstance);
	return _result;
}

RDC::OCC::ShapeFix_FixSmallFace^ RDC::OCC::ShapeFix_FixSmallFace::CreateDowncasted(::ShapeFix_FixSmallFace* instance)
{
	return gcnew RDC::OCC::ShapeFix_FixSmallFace(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_FixSmallSolid
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_FixSmallSolid::ShapeFix_FixSmallSolid()
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_FixSmallSolid();
}

void RDC::OCC::ShapeFix_FixSmallSolid::SetFixMode(int theMode)
{
	((::ShapeFix_FixSmallSolid*)_NativeInstance)->SetFixMode(theMode);
}

void RDC::OCC::ShapeFix_FixSmallSolid::SetVolumeThreshold(double theThreshold)
{
	((::ShapeFix_FixSmallSolid*)_NativeInstance)->SetVolumeThreshold(theThreshold);
}

void RDC::OCC::ShapeFix_FixSmallSolid::SetVolumeThreshold()
{
	((::ShapeFix_FixSmallSolid*)_NativeInstance)->SetVolumeThreshold(-1.);
}

void RDC::OCC::ShapeFix_FixSmallSolid::SetWidthFactorThreshold(double theThreshold)
{
	((::ShapeFix_FixSmallSolid*)_NativeInstance)->SetWidthFactorThreshold(theThreshold);
}

void RDC::OCC::ShapeFix_FixSmallSolid::SetWidthFactorThreshold()
{
	((::ShapeFix_FixSmallSolid*)_NativeInstance)->SetWidthFactorThreshold(-1.);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_FixSmallSolid::Remove(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::ShapeBuild_ReShape^ theContext)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallSolid*)_NativeInstance)->Remove(*(::TopoDS_Shape*)theShape->NativeInstance, Handle(::ShapeBuild_ReShape)(theContext->NativeInstance));
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_FixSmallSolid::Merge(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::ShapeBuild_ReShape^ theContext)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallSolid*)_NativeInstance)->Merge(*(::TopoDS_Shape*)theShape->NativeInstance, Handle(::ShapeBuild_ReShape)(theContext->NativeInstance));
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::ShapeFix_FixSmallSolid^ RDC::OCC::ShapeFix_FixSmallSolid::CreateDowncasted(::ShapeFix_FixSmallSolid* instance)
{
	return gcnew RDC::OCC::ShapeFix_FixSmallSolid(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_FreeBounds
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_FreeBounds::ShapeFix_FreeBounds()
	: RDC::OCC::BaseClass<::ShapeFix_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_FreeBounds();
}

RDC::OCC::ShapeFix_FreeBounds::ShapeFix_FreeBounds(RDC::OCC::TopoDS_Shape^ shape, double sewtoler, double closetoler, bool splitclosed, bool splitopen)
	: RDC::OCC::BaseClass<::ShapeFix_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, sewtoler, closetoler, splitclosed, splitopen);
}

RDC::OCC::ShapeFix_FreeBounds::ShapeFix_FreeBounds(RDC::OCC::TopoDS_Shape^ shape, double closetoler, bool splitclosed, bool splitopen)
	: RDC::OCC::BaseClass<::ShapeFix_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, closetoler, splitclosed, splitopen);
}

RDC::OCC::TopoDS_Compound^ RDC::OCC::ShapeFix_FreeBounds::GetClosedWires()
{
	::TopoDS_Compound* _result = new ::TopoDS_Compound();
	*_result = (::TopoDS_Compound)((::ShapeFix_FreeBounds*)_NativeInstance)->GetClosedWires();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Compound(_result);
}

RDC::OCC::TopoDS_Compound^ RDC::OCC::ShapeFix_FreeBounds::GetOpenWires()
{
	::TopoDS_Compound* _result = new ::TopoDS_Compound();
	*_result = (::TopoDS_Compound)((::ShapeFix_FreeBounds*)_NativeInstance)->GetOpenWires();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Compound(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_FreeBounds::GetShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::ShapeFix_FreeBounds*)_NativeInstance)->GetShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_IntersectionTool
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_IntersectionTool::ShapeFix_IntersectionTool(RDC::OCC::ShapeBuild_ReShape^ context, double preci, double maxtol)
	: RDC::OCC::BaseClass<::ShapeFix_IntersectionTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_IntersectionTool(Handle(::ShapeBuild_ReShape)(context->NativeInstance), preci, maxtol);
}

RDC::OCC::ShapeFix_IntersectionTool::ShapeFix_IntersectionTool(RDC::OCC::ShapeBuild_ReShape^ context, double preci)
	: RDC::OCC::BaseClass<::ShapeFix_IntersectionTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_IntersectionTool(Handle(::ShapeBuild_ReShape)(context->NativeInstance), preci, 1.);
}

RDC::OCC::ShapeBuild_ReShape^ RDC::OCC::ShapeFix_IntersectionTool::Context()
{
	Handle(::ShapeBuild_ReShape) _result = ((::ShapeFix_IntersectionTool*)_NativeInstance)->Context();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeBuild_ReShape::CreateDowncasted(_result.get());
}

bool RDC::OCC::ShapeFix_IntersectionTool::SplitEdge(RDC::OCC::TopoDS_Edge^ edge, double param, RDC::OCC::TopoDS_Vertex^ vert, RDC::OCC::TopoDS_Face^ face, RDC::OCC::TopoDS_Edge^ newE1, RDC::OCC::TopoDS_Edge^ newE2, double preci)
{
	bool _result = ((::ShapeFix_IntersectionTool*)_NativeInstance)->SplitEdge(*(::TopoDS_Edge*)edge->NativeInstance, param, *(::TopoDS_Vertex*)vert->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, *(::TopoDS_Edge*)newE1->NativeInstance, *(::TopoDS_Edge*)newE2->NativeInstance, preci);
	return _result;
}

bool RDC::OCC::ShapeFix_IntersectionTool::CutEdge(RDC::OCC::TopoDS_Edge^ edge, double pend, double cut, RDC::OCC::TopoDS_Face^ face, bool% iscutline)
{
	pin_ptr<bool> pp_iscutline = &iscutline;
	bool _result = ((::ShapeFix_IntersectionTool*)_NativeInstance)->CutEdge(*(::TopoDS_Edge*)edge->NativeInstance, pend, cut, *(::TopoDS_Face*)face->NativeInstance, *(bool*)pp_iscutline);
	return _result;
}

bool RDC::OCC::ShapeFix_IntersectionTool::FixIntersectingWires(RDC::OCC::TopoDS_Face^ face)
{
	bool _result = ((::ShapeFix_IntersectionTool*)_NativeInstance)->FixIntersectingWires(*(::TopoDS_Face*)face->NativeInstance);
	return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeFix_Solid
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_Solid::ShapeFix_Solid()
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Solid();
}

RDC::OCC::ShapeFix_Solid::ShapeFix_Solid(RDC::OCC::TopoDS_Solid^ solid)
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Solid(*(::TopoDS_Solid*)solid->NativeInstance);
}

void RDC::OCC::ShapeFix_Solid::Init(RDC::OCC::TopoDS_Solid^ solid)
{
	((::ShapeFix_Solid*)_NativeInstance)->Init(*(::TopoDS_Solid*)solid->NativeInstance);
}

bool RDC::OCC::ShapeFix_Solid::Perform(RDC::OCC::Message_ProgressRange^ theProgress)
{
	bool _result = ((::ShapeFix_Solid*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theProgress->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Solid::Perform()
{
	bool _result = ((::ShapeFix_Solid*)_NativeInstance)->Perform(::Message_ProgressRange());
	return _result;
}

RDC::OCC::TopoDS_Solid^ RDC::OCC::ShapeFix_Solid::SolidFromShell(RDC::OCC::TopoDS_Shell^ shell)
{
	::TopoDS_Solid* _result = new ::TopoDS_Solid();
	*_result = ((::ShapeFix_Solid*)_NativeInstance)->SolidFromShell(*(::TopoDS_Shell*)shell->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Solid(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_Solid::Solid()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_Solid*)_NativeInstance)->Solid();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::ShapeFix_Shell^ RDC::OCC::ShapeFix_Solid::FixShellTool()
{
	Handle(::ShapeFix_Shell) _result = ((::ShapeFix_Solid*)_NativeInstance)->FixShellTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeFix_Shell::CreateDowncasted(_result.get());
}

void RDC::OCC::ShapeFix_Solid::SetPrecision(double preci)
{
	((::ShapeFix_Solid*)_NativeInstance)->SetPrecision(preci);
}

void RDC::OCC::ShapeFix_Solid::SetMinTolerance(double mintol)
{
	((::ShapeFix_Solid*)_NativeInstance)->SetMinTolerance(mintol);
}

void RDC::OCC::ShapeFix_Solid::SetMaxTolerance(double maxtol)
{
	((::ShapeFix_Solid*)_NativeInstance)->SetMaxTolerance(maxtol);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_Solid::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_Solid*)_NativeInstance)->Shape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::ShapeFix_Solid^ RDC::OCC::ShapeFix_Solid::CreateDowncasted(::ShapeFix_Solid* instance)
{
	return gcnew RDC::OCC::ShapeFix_Solid(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_Shell
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_Shell::ShapeFix_Shell()
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Shell();
}

RDC::OCC::ShapeFix_Shell::ShapeFix_Shell(RDC::OCC::TopoDS_Shell^ shape)
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Shell(*(::TopoDS_Shell*)shape->NativeInstance);
}

void RDC::OCC::ShapeFix_Shell::Init(RDC::OCC::TopoDS_Shell^ shell)
{
	((::ShapeFix_Shell*)_NativeInstance)->Init(*(::TopoDS_Shell*)shell->NativeInstance);
}

bool RDC::OCC::ShapeFix_Shell::Perform(RDC::OCC::Message_ProgressRange^ theProgress)
{
	bool _result = ((::ShapeFix_Shell*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theProgress->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Shell::Perform()
{
	bool _result = ((::ShapeFix_Shell*)_NativeInstance)->Perform(::Message_ProgressRange());
	return _result;
}

bool RDC::OCC::ShapeFix_Shell::FixFaceOrientation(RDC::OCC::TopoDS_Shell^ shell, bool isAccountMultiConex, bool NonManifold)
{
	bool _result = ((::ShapeFix_Shell*)_NativeInstance)->FixFaceOrientation(*(::TopoDS_Shell*)shell->NativeInstance, isAccountMultiConex, NonManifold);
	return _result;
}

bool RDC::OCC::ShapeFix_Shell::FixFaceOrientation(RDC::OCC::TopoDS_Shell^ shell, bool isAccountMultiConex)
{
	bool _result = ((::ShapeFix_Shell*)_NativeInstance)->FixFaceOrientation(*(::TopoDS_Shell*)shell->NativeInstance, isAccountMultiConex, false);
	return _result;
}

bool RDC::OCC::ShapeFix_Shell::FixFaceOrientation(RDC::OCC::TopoDS_Shell^ shell)
{
	bool _result = ((::ShapeFix_Shell*)_NativeInstance)->FixFaceOrientation(*(::TopoDS_Shell*)shell->NativeInstance, true, false);
	return _result;
}

RDC::OCC::TopoDS_Shell^ RDC::OCC::ShapeFix_Shell::Shell()
{
	::TopoDS_Shell* _result = new ::TopoDS_Shell();
	*_result = ((::ShapeFix_Shell*)_NativeInstance)->Shell();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shell(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_Shell::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_Shell*)_NativeInstance)->Shape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

int RDC::OCC::ShapeFix_Shell::NbShells()
{
	int _result = ((::ShapeFix_Shell*)_NativeInstance)->NbShells();
	return _result;
}

RDC::OCC::TopoDS_Compound^ RDC::OCC::ShapeFix_Shell::ErrorFaces()
{
	::TopoDS_Compound* _result = new ::TopoDS_Compound();
	*_result = ((::ShapeFix_Shell*)_NativeInstance)->ErrorFaces();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Compound(_result);
}

RDC::OCC::ShapeFix_Face^ RDC::OCC::ShapeFix_Shell::FixFaceTool()
{
	Handle(::ShapeFix_Face) _result = ((::ShapeFix_Shell*)_NativeInstance)->FixFaceTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeFix_Face::CreateDowncasted(_result.get());
}

void RDC::OCC::ShapeFix_Shell::SetPrecision(double preci)
{
	((::ShapeFix_Shell*)_NativeInstance)->SetPrecision(preci);
}

void RDC::OCC::ShapeFix_Shell::SetMinTolerance(double mintol)
{
	((::ShapeFix_Shell*)_NativeInstance)->SetMinTolerance(mintol);
}

void RDC::OCC::ShapeFix_Shell::SetMaxTolerance(double maxtol)
{
	((::ShapeFix_Shell*)_NativeInstance)->SetMaxTolerance(maxtol);
}

void RDC::OCC::ShapeFix_Shell::SetNonManifoldFlag(bool isNonManifold)
{
	((::ShapeFix_Shell*)_NativeInstance)->SetNonManifoldFlag(isNonManifold);
}

RDC::OCC::ShapeFix_Shell^ RDC::OCC::ShapeFix_Shell::CreateDowncasted(::ShapeFix_Shell* instance)
{
	return gcnew RDC::OCC::ShapeFix_Shell(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_Shape
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_Shape::ShapeFix_Shape()
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Shape();
}

RDC::OCC::ShapeFix_Shape::ShapeFix_Shape(RDC::OCC::TopoDS_Shape^ shape)
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Shape(*(::TopoDS_Shape*)shape->NativeInstance);
}

void RDC::OCC::ShapeFix_Shape::Init(RDC::OCC::TopoDS_Shape^ shape)
{
	((::ShapeFix_Shape*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance);
}

bool RDC::OCC::ShapeFix_Shape::Perform(RDC::OCC::Message_ProgressRange^ theProgress)
{
	bool _result = ((::ShapeFix_Shape*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theProgress->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Shape::Perform()
{
	bool _result = ((::ShapeFix_Shape*)_NativeInstance)->Perform(::Message_ProgressRange());
	return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_Shape::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_Shape*)_NativeInstance)->Shape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::ShapeFix_Solid^ RDC::OCC::ShapeFix_Shape::FixSolidTool()
{
	Handle(::ShapeFix_Solid) _result = ((::ShapeFix_Shape*)_NativeInstance)->FixSolidTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeFix_Solid::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeFix_Shell^ RDC::OCC::ShapeFix_Shape::FixShellTool()
{
	Handle(::ShapeFix_Shell) _result = ((::ShapeFix_Shape*)_NativeInstance)->FixShellTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeFix_Shell::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeFix_Face^ RDC::OCC::ShapeFix_Shape::FixFaceTool()
{
	Handle(::ShapeFix_Face) _result = ((::ShapeFix_Shape*)_NativeInstance)->FixFaceTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeFix_Face::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeFix_Wire^ RDC::OCC::ShapeFix_Shape::FixWireTool()
{
	Handle(::ShapeFix_Wire) _result = ((::ShapeFix_Shape*)_NativeInstance)->FixWireTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeFix_Wire::CreateDowncasted(_result.get());
}

RDC::OCC::ShapeFix_Edge^ RDC::OCC::ShapeFix_Shape::FixEdgeTool()
{
	Handle(::ShapeFix_Edge) _result = ((::ShapeFix_Shape*)_NativeInstance)->FixEdgeTool();
	return _result.IsNull() ? nullptr : RDC::OCC::ShapeFix_Edge::CreateDowncasted(_result.get());
}

void RDC::OCC::ShapeFix_Shape::SetPrecision(double preci)
{
	((::ShapeFix_Shape*)_NativeInstance)->SetPrecision(preci);
}

void RDC::OCC::ShapeFix_Shape::SetMinTolerance(double mintol)
{
	((::ShapeFix_Shape*)_NativeInstance)->SetMinTolerance(mintol);
}

void RDC::OCC::ShapeFix_Shape::SetMaxTolerance(double maxtol)
{
	((::ShapeFix_Shape*)_NativeInstance)->SetMaxTolerance(maxtol);
}

RDC::OCC::ShapeFix_Shape^ RDC::OCC::ShapeFix_Shape::CreateDowncasted(::ShapeFix_Shape* instance)
{
	return gcnew RDC::OCC::ShapeFix_Shape(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_ShapeTolerance
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_ShapeTolerance::ShapeFix_ShapeTolerance()
	: RDC::OCC::BaseClass<::ShapeFix_ShapeTolerance>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_ShapeTolerance();
}

bool RDC::OCC::ShapeFix_ShapeTolerance::LimitTolerance(RDC::OCC::TopoDS_Shape^ shape, double tmin, double tmax, RDC::OCC::TopAbs_ShapeEnum styp)
{
	bool _result = ((::ShapeFix_ShapeTolerance*)_NativeInstance)->LimitTolerance(*(::TopoDS_Shape*)shape->NativeInstance, tmin, tmax, (::TopAbs_ShapeEnum)styp);
	return _result;
}

bool RDC::OCC::ShapeFix_ShapeTolerance::LimitTolerance(RDC::OCC::TopoDS_Shape^ shape, double tmin, double tmax)
{
	bool _result = ((::ShapeFix_ShapeTolerance*)_NativeInstance)->LimitTolerance(*(::TopoDS_Shape*)shape->NativeInstance, tmin, tmax, TopAbs_SHAPE);
	return _result;
}

bool RDC::OCC::ShapeFix_ShapeTolerance::LimitTolerance(RDC::OCC::TopoDS_Shape^ shape, double tmin)
{
	bool _result = ((::ShapeFix_ShapeTolerance*)_NativeInstance)->LimitTolerance(*(::TopoDS_Shape*)shape->NativeInstance, tmin, 0., TopAbs_SHAPE);
	return _result;
}

void RDC::OCC::ShapeFix_ShapeTolerance::SetTolerance(RDC::OCC::TopoDS_Shape^ shape, double preci, RDC::OCC::TopAbs_ShapeEnum styp)
{
	((::ShapeFix_ShapeTolerance*)_NativeInstance)->SetTolerance(*(::TopoDS_Shape*)shape->NativeInstance, preci, (::TopAbs_ShapeEnum)styp);
}

void RDC::OCC::ShapeFix_ShapeTolerance::SetTolerance(RDC::OCC::TopoDS_Shape^ shape, double preci)
{
	((::ShapeFix_ShapeTolerance*)_NativeInstance)->SetTolerance(*(::TopoDS_Shape*)shape->NativeInstance, preci, TopAbs_SHAPE);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_SplitCommonVertex
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_SplitCommonVertex::ShapeFix_SplitCommonVertex()
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_SplitCommonVertex();
}

void RDC::OCC::ShapeFix_SplitCommonVertex::Init(RDC::OCC::TopoDS_Shape^ S)
{
	((::ShapeFix_SplitCommonVertex*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::ShapeFix_SplitCommonVertex::Perform()
{
	((::ShapeFix_SplitCommonVertex*)_NativeInstance)->Perform();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_SplitCommonVertex::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_SplitCommonVertex*)_NativeInstance)->Shape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::ShapeFix_SplitCommonVertex^ RDC::OCC::ShapeFix_SplitCommonVertex::CreateDowncasted(::ShapeFix_SplitCommonVertex* instance)
{
	return gcnew RDC::OCC::ShapeFix_SplitCommonVertex(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_SplitTool
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_SplitTool::ShapeFix_SplitTool()
	: RDC::OCC::BaseClass<::ShapeFix_SplitTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_SplitTool();
}

bool RDC::OCC::ShapeFix_SplitTool::SplitEdge(RDC::OCC::TopoDS_Edge^ edge, double param, RDC::OCC::TopoDS_Vertex^ vert, RDC::OCC::TopoDS_Face^ face, RDC::OCC::TopoDS_Edge^ newE1, RDC::OCC::TopoDS_Edge^ newE2, double tol3d, double tol2d)
{
	bool _result = ((::ShapeFix_SplitTool*)_NativeInstance)->SplitEdge(*(::TopoDS_Edge*)edge->NativeInstance, param, *(::TopoDS_Vertex*)vert->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, *(::TopoDS_Edge*)newE1->NativeInstance, *(::TopoDS_Edge*)newE2->NativeInstance, tol3d, tol2d);
	return _result;
}

bool RDC::OCC::ShapeFix_SplitTool::SplitEdge(RDC::OCC::TopoDS_Edge^ edge, double param1, double param2, RDC::OCC::TopoDS_Vertex^ vert, RDC::OCC::TopoDS_Face^ face, RDC::OCC::TopoDS_Edge^ newE1, RDC::OCC::TopoDS_Edge^ newE2, double tol3d, double tol2d)
{
	bool _result = ((::ShapeFix_SplitTool*)_NativeInstance)->SplitEdge(*(::TopoDS_Edge*)edge->NativeInstance, param1, param2, *(::TopoDS_Vertex*)vert->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, *(::TopoDS_Edge*)newE1->NativeInstance, *(::TopoDS_Edge*)newE2->NativeInstance, tol3d, tol2d);
	return _result;
}

bool RDC::OCC::ShapeFix_SplitTool::CutEdge(RDC::OCC::TopoDS_Edge^ edge, double pend, double cut, RDC::OCC::TopoDS_Face^ face, bool% iscutline)
{
	pin_ptr<bool> pp_iscutline = &iscutline;
	bool _result = ((::ShapeFix_SplitTool*)_NativeInstance)->CutEdge(*(::TopoDS_Edge*)edge->NativeInstance, pend, cut, *(::TopoDS_Face*)face->NativeInstance, *(bool*)pp_iscutline);
	return _result;
}

bool RDC::OCC::ShapeFix_SplitTool::SplitEdge(RDC::OCC::TopoDS_Edge^ edge, double fp, RDC::OCC::TopoDS_Vertex^ V1, double lp, RDC::OCC::TopoDS_Vertex^ V2, RDC::OCC::TopoDS_Face^ face, RDC::OCC::TopTools_SequenceOfShape^ SeqE, int% aNum, RDC::OCC::ShapeBuild_ReShape^ context, double tol3d, double tol2d)
{
	pin_ptr<int> pp_aNum = &aNum;
	bool _result = ((::ShapeFix_SplitTool*)_NativeInstance)->SplitEdge(*(::TopoDS_Edge*)edge->NativeInstance, fp, *(::TopoDS_Vertex*)V1->NativeInstance, lp, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, *(::TopTools_SequenceOfShape*)SeqE->NativeInstance, *(int*)pp_aNum, Handle(::ShapeBuild_ReShape)(context->NativeInstance), tol3d, tol2d);
	return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeFix_Wireframe
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_Wireframe::ShapeFix_Wireframe()
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Wireframe();
}

RDC::OCC::ShapeFix_Wireframe::ShapeFix_Wireframe(RDC::OCC::TopoDS_Shape^ shape)
	: RDC::OCC::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Wireframe(*(::TopoDS_Shape*)shape->NativeInstance);
}

void RDC::OCC::ShapeFix_Wireframe::ClearStatuses()
{
	((::ShapeFix_Wireframe*)_NativeInstance)->ClearStatuses();
}

void RDC::OCC::ShapeFix_Wireframe::Load(RDC::OCC::TopoDS_Shape^ shape)
{
	((::ShapeFix_Wireframe*)_NativeInstance)->Load(*(::TopoDS_Shape*)shape->NativeInstance);
}

bool RDC::OCC::ShapeFix_Wireframe::FixWireGaps()
{
	bool _result = ((::ShapeFix_Wireframe*)_NativeInstance)->FixWireGaps();
	return _result;
}

bool RDC::OCC::ShapeFix_Wireframe::FixSmallEdges()
{
	bool _result = ((::ShapeFix_Wireframe*)_NativeInstance)->FixSmallEdges();
	return _result;
}

bool RDC::OCC::ShapeFix_Wireframe::CheckSmallEdges(RDC::OCC::TopTools_MapOfShape^ theSmallEdges, RDC::OCC::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, RDC::OCC::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, RDC::OCC::TopTools_MapOfShape^ theMultyEdges)
{
	bool _result = ((::ShapeFix_Wireframe*)_NativeInstance)->CheckSmallEdges(*(::TopTools_MapOfShape*)theSmallEdges->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theEdgeToFaces->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theFaceWithSmall->NativeInstance, *(::TopTools_MapOfShape*)theMultyEdges->NativeInstance);
	return _result;
}

bool RDC::OCC::ShapeFix_Wireframe::MergeSmallEdges(RDC::OCC::TopTools_MapOfShape^ theSmallEdges, RDC::OCC::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, RDC::OCC::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, RDC::OCC::TopTools_MapOfShape^ theMultyEdges, bool theModeDrop, double theLimitAngle)
{
	bool _result = ((::ShapeFix_Wireframe*)_NativeInstance)->MergeSmallEdges(*(::TopTools_MapOfShape*)theSmallEdges->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theEdgeToFaces->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theFaceWithSmall->NativeInstance, *(::TopTools_MapOfShape*)theMultyEdges->NativeInstance, theModeDrop, theLimitAngle);
	return _result;
}

bool RDC::OCC::ShapeFix_Wireframe::MergeSmallEdges(RDC::OCC::TopTools_MapOfShape^ theSmallEdges, RDC::OCC::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, RDC::OCC::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, RDC::OCC::TopTools_MapOfShape^ theMultyEdges, bool theModeDrop)
{
	bool _result = ((::ShapeFix_Wireframe*)_NativeInstance)->MergeSmallEdges(*(::TopTools_MapOfShape*)theSmallEdges->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theEdgeToFaces->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theFaceWithSmall->NativeInstance, *(::TopTools_MapOfShape*)theMultyEdges->NativeInstance, theModeDrop, -1);
	return _result;
}

bool RDC::OCC::ShapeFix_Wireframe::MergeSmallEdges(RDC::OCC::TopTools_MapOfShape^ theSmallEdges, RDC::OCC::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, RDC::OCC::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, RDC::OCC::TopTools_MapOfShape^ theMultyEdges)
{
	bool _result = ((::ShapeFix_Wireframe*)_NativeInstance)->MergeSmallEdges(*(::TopTools_MapOfShape*)theSmallEdges->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theEdgeToFaces->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theFaceWithSmall->NativeInstance, *(::TopTools_MapOfShape*)theMultyEdges->NativeInstance, false, -1);
	return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::ShapeFix_Wireframe::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_Wireframe*)_NativeInstance)->Shape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::ShapeFix_Wireframe::SetLimitAngle(double theLimitAngle)
{
	((::ShapeFix_Wireframe*)_NativeInstance)->SetLimitAngle(theLimitAngle);
}

double RDC::OCC::ShapeFix_Wireframe::LimitAngle()
{
	double _result = ((::ShapeFix_Wireframe*)_NativeInstance)->LimitAngle();
	return _result;
}

RDC::OCC::ShapeFix_Wireframe^ RDC::OCC::ShapeFix_Wireframe::CreateDowncasted(::ShapeFix_Wireframe* instance)
{
	return gcnew RDC::OCC::ShapeFix_Wireframe(instance);
}



//---------------------------------------------------------------------
//  Class  ShapeFix_WireVertex
//---------------------------------------------------------------------

RDC::OCC::ShapeFix_WireVertex::ShapeFix_WireVertex()
	: RDC::OCC::BaseClass<::ShapeFix_WireVertex>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_WireVertex();
}

void RDC::OCC::ShapeFix_WireVertex::Init(RDC::OCC::TopoDS_Wire^ wire, double preci)
{
	((::ShapeFix_WireVertex*)_NativeInstance)->Init(*(::TopoDS_Wire*)wire->NativeInstance, preci);
}

void RDC::OCC::ShapeFix_WireVertex::Init(RDC::OCC::ShapeAnalysis_WireVertex^ sawv)
{
	((::ShapeFix_WireVertex*)_NativeInstance)->Init(*(::ShapeAnalysis_WireVertex*)sawv->NativeInstance);
}

RDC::OCC::ShapeAnalysis_WireVertex^ RDC::OCC::ShapeFix_WireVertex::Analyzer()
{
	::ShapeAnalysis_WireVertex* _result = new ::ShapeAnalysis_WireVertex();
	*_result = (::ShapeAnalysis_WireVertex)((::ShapeFix_WireVertex*)_NativeInstance)->Analyzer();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::ShapeAnalysis_WireVertex(_result);
}

RDC::OCC::TopoDS_Wire^ RDC::OCC::ShapeFix_WireVertex::Wire()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = ((::ShapeFix_WireVertex*)_NativeInstance)->Wire();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Wire(_result);
}

int RDC::OCC::ShapeFix_WireVertex::FixSame()
{
	int _result = ((::ShapeFix_WireVertex*)_NativeInstance)->FixSame();
	return _result;
}

int RDC::OCC::ShapeFix_WireVertex::Fix()
{
	int _result = ((::ShapeFix_WireVertex*)_NativeInstance)->Fix();
	return _result;
}



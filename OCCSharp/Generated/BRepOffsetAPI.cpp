// Generated wrapper code for package BRepOffsetAPI

#include "OcctPCH.h"
#include "BRepOffsetAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TopTools.h"
#include "TColStd.h"
#include "TopoDS.h"
#include "gp.h"
#include "Message.h"
#include "BRepBuilderAPI.h"
#include "Geom.h"
#include "GeomAbs.h"
#include "BRepOffset.h"


//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_SequenceOfSequenceOfShape
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::BRepOffsetAPI_SequenceOfSequenceOfShape()
	: RDC::OCC::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_SequenceOfSequenceOfShape();
}

RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::BRepOffsetAPI_SequenceOfSequenceOfShape(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_SequenceOfSequenceOfShape(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Size()
{
	int _result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Length()
{
	int _result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Lower()
{
	int _result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Upper()
{
	int _result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::IsEmpty()
{
	bool _result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Reverse()
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Reverse();
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Exchange(int I, int J)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Clear()
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Clear(0L);
}

RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Assign(RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape^ theOther)
{
	::BRepOffsetAPI_SequenceOfSequenceOfShape* _result = new ::BRepOffsetAPI_SequenceOfSequenceOfShape();
	*_result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Assign(*(::BRepOffsetAPI_SequenceOfSequenceOfShape*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape(_result);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Remove(RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator^ thePosition)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Remove(*(::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Append(RDC::OCC::TopTools_SequenceOfShape^ theItem)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Append(*(::TopTools_SequenceOfShape*)theItem->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Prepend(RDC::OCC::TopTools_SequenceOfShape^ theItem)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Prepend(*(::TopTools_SequenceOfShape*)theItem->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::InsertBefore(int theIndex, RDC::OCC::TopTools_SequenceOfShape^ theItem)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->InsertBefore(theIndex, *(::TopTools_SequenceOfShape*)theItem->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::InsertAfter(RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator^ thePosition, RDC::OCC::TopTools_SequenceOfShape^ theItem)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->InsertAfter(*(::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator*)thePosition->NativeInstance, *(::TopTools_SequenceOfShape*)theItem->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Split(int theIndex, RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape^ theSeq)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Split(theIndex, *(::BRepOffsetAPI_SequenceOfSequenceOfShape*)theSeq->NativeInstance);
}

RDC::OCC::TopTools_SequenceOfShape^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::First()
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result = (::TopTools_SequenceOfShape)((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_SequenceOfShape(_result);
}

RDC::OCC::TopTools_SequenceOfShape^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::ChangeFirst()
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_SequenceOfShape(_result);
}

RDC::OCC::TopTools_SequenceOfShape^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Last()
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result = (::TopTools_SequenceOfShape)((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_SequenceOfShape(_result);
}

RDC::OCC::TopTools_SequenceOfShape^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::ChangeLast()
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_SequenceOfShape(_result);
}

RDC::OCC::TopTools_SequenceOfShape^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Value(int theIndex)
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result = (::TopTools_SequenceOfShape)((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_SequenceOfShape(_result);
}

RDC::OCC::TopTools_SequenceOfShape^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::ChangeValue(int theIndex)
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_SequenceOfShape(_result);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::SetValue(int theIndex, RDC::OCC::TopTools_SequenceOfShape^ theItem)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape*)_NativeInstance)->SetValue(theIndex, *(::TopTools_SequenceOfShape*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::TopTools_SequenceOfShape^>^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TopTools_SequenceOfShape^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TopTools_SequenceOfShape^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator::Iterator()
	: RDC::OCC::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator();
}

bool RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator::More()
{
	bool _result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator::Next()
{
	((::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TopTools_SequenceOfShape^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator::Value()
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result = (::TopTools_SequenceOfShape)((::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_SequenceOfShape(_result);
}

RDC::OCC::TopTools_SequenceOfShape^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator::ChangeValue()
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_SequenceOfShape(_result);
}

bool RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator::IsEqual(RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator^ theOther)
{
	bool _result = ((::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator*)_NativeInstance)->IsEqual(*(::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfShape::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_SequenceOfSequenceOfReal
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::BRepOffsetAPI_SequenceOfSequenceOfReal()
	: RDC::OCC::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_SequenceOfSequenceOfReal();
}

RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::BRepOffsetAPI_SequenceOfSequenceOfReal(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_SequenceOfSequenceOfReal(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Size()
{
	int _result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Length()
{
	int _result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Lower()
{
	int _result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Upper()
{
	int _result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::IsEmpty()
{
	bool _result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Reverse()
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Reverse();
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Exchange(int I, int J)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Clear()
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Clear(0L);
}

RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Assign(RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal^ theOther)
{
	::BRepOffsetAPI_SequenceOfSequenceOfReal* _result = new ::BRepOffsetAPI_SequenceOfSequenceOfReal();
	*_result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Assign(*(::BRepOffsetAPI_SequenceOfSequenceOfReal*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal(_result);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Remove(RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator^ thePosition)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Remove(*(::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Append(RDC::OCC::TColStd_SequenceOfReal^ theItem)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Append(*(::TColStd_SequenceOfReal*)theItem->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Prepend(RDC::OCC::TColStd_SequenceOfReal^ theItem)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Prepend(*(::TColStd_SequenceOfReal*)theItem->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::InsertBefore(int theIndex, RDC::OCC::TColStd_SequenceOfReal^ theItem)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->InsertBefore(theIndex, *(::TColStd_SequenceOfReal*)theItem->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::InsertAfter(RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator^ thePosition, RDC::OCC::TColStd_SequenceOfReal^ theItem)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->InsertAfter(*(::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator*)thePosition->NativeInstance, *(::TColStd_SequenceOfReal*)theItem->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Split(int theIndex, RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal^ theSeq)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Split(theIndex, *(::BRepOffsetAPI_SequenceOfSequenceOfReal*)theSeq->NativeInstance);
}

RDC::OCC::TColStd_SequenceOfReal^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::First()
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = (::TColStd_SequenceOfReal)((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->First();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfReal(_result);
}

RDC::OCC::TColStd_SequenceOfReal^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::ChangeFirst()
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->ChangeFirst();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfReal(_result);
}

RDC::OCC::TColStd_SequenceOfReal^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Last()
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = (::TColStd_SequenceOfReal)((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Last();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfReal(_result);
}

RDC::OCC::TColStd_SequenceOfReal^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::ChangeLast()
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->ChangeLast();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfReal(_result);
}

RDC::OCC::TColStd_SequenceOfReal^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Value(int theIndex)
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = (::TColStd_SequenceOfReal)((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->Value(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfReal(_result);
}

RDC::OCC::TColStd_SequenceOfReal^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::ChangeValue(int theIndex)
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->ChangeValue(theIndex);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfReal(_result);
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::SetValue(int theIndex, RDC::OCC::TColStd_SequenceOfReal^ theItem)
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal*)_NativeInstance)->SetValue(theIndex, *(::TColStd_SequenceOfReal*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::TColStd_SequenceOfReal^>^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::TColStd_SequenceOfReal^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::TColStd_SequenceOfReal^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator::Iterator()
	: RDC::OCC::BaseClass<::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator();
}

bool RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator::More()
{
	bool _result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator::Next()
{
	((::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TColStd_SequenceOfReal^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator::Value()
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = (::TColStd_SequenceOfReal)((::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator*)_NativeInstance)->Value();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfReal(_result);
}

RDC::OCC::TColStd_SequenceOfReal^ RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator::ChangeValue()
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator*)_NativeInstance)->ChangeValue();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_SequenceOfReal(_result);
}

bool RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator::IsEqual(RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator^ theOther)
{
	bool _result = ((::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator*)_NativeInstance)->IsEqual(*(::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::BRepOffsetAPI_SequenceOfSequenceOfReal::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_DraftAngle
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_DraftAngle::BRepOffsetAPI_DraftAngle()
	: RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_DraftAngle();
}

RDC::OCC::BRepOffsetAPI_DraftAngle::BRepOffsetAPI_DraftAngle(RDC::OCC::TopoDS_Shape^ S)
	: RDC::OCC::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_DraftAngle(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_DraftAngle::Clear()
{
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Clear();
}

void RDC::OCC::BRepOffsetAPI_DraftAngle::Init(RDC::OCC::TopoDS_Shape^ S)
{
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_DraftAngle::Add(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Dir Direction, double Angle, RDC::OCC::Pln NeutralPlane, bool Flag)
{
	pin_ptr<RDC::OCC::Dir> pp_Direction = &Direction;
	pin_ptr<RDC::OCC::Pln> pp_NeutralPlane = &NeutralPlane;
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Add(*(::TopoDS_Face*)F->NativeInstance, *(gp_Dir*)pp_Direction, Angle, *(gp_Pln*)pp_NeutralPlane, Flag);
}

void RDC::OCC::BRepOffsetAPI_DraftAngle::Add(RDC::OCC::TopoDS_Face^ F, RDC::OCC::Dir Direction, double Angle, RDC::OCC::Pln NeutralPlane)
{
	pin_ptr<RDC::OCC::Dir> pp_Direction = &Direction;
	pin_ptr<RDC::OCC::Pln> pp_NeutralPlane = &NeutralPlane;
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Add(*(::TopoDS_Face*)F->NativeInstance, *(gp_Dir*)pp_Direction, Angle, *(gp_Pln*)pp_NeutralPlane, true);
}

bool RDC::OCC::BRepOffsetAPI_DraftAngle::AddDone()
{
	bool _result = ((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->AddDone();
	return _result;
}

void RDC::OCC::BRepOffsetAPI_DraftAngle::Remove(RDC::OCC::TopoDS_Face^ F)
{
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Remove(*(::TopoDS_Face*)F->NativeInstance);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_DraftAngle::ProblematicShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->ProblematicShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_DraftAngle::ConnectedFaces(RDC::OCC::TopoDS_Face^ F)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->ConnectedFaces(*(::TopoDS_Face*)F->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_DraftAngle::ModifiedFaces()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->ModifiedFaces();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

void RDC::OCC::BRepOffsetAPI_DraftAngle::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_DraftAngle::Build()
{
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Build(::Message_ProgressRange());
}

void RDC::OCC::BRepOffsetAPI_DraftAngle::CorrectWires()
{
	((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->CorrectWires();
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_DraftAngle::Generated(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_DraftAngle::Modified(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_DraftAngle::ModifiedShape(RDC::OCC::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_DraftAngle*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_FindContigousEdges
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_FindContigousEdges::BRepOffsetAPI_FindContigousEdges(double tolerance, bool option)
	: RDC::OCC::BaseClass<::BRepOffsetAPI_FindContigousEdges>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_FindContigousEdges(tolerance, option);
}

RDC::OCC::BRepOffsetAPI_FindContigousEdges::BRepOffsetAPI_FindContigousEdges(double tolerance)
	: RDC::OCC::BaseClass<::BRepOffsetAPI_FindContigousEdges>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_FindContigousEdges(tolerance, true);
}

RDC::OCC::BRepOffsetAPI_FindContigousEdges::BRepOffsetAPI_FindContigousEdges()
	: RDC::OCC::BaseClass<::BRepOffsetAPI_FindContigousEdges>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_FindContigousEdges(9.9999999999999995E-7, true);
}

void RDC::OCC::BRepOffsetAPI_FindContigousEdges::Init(double tolerance, bool option)
{
	((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->Init(tolerance, option);
}

void RDC::OCC::BRepOffsetAPI_FindContigousEdges::Add(RDC::OCC::TopoDS_Shape^ shape)
{
	((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->Add(*(::TopoDS_Shape*)shape->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_FindContigousEdges::Perform()
{
	((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->Perform();
}

int RDC::OCC::BRepOffsetAPI_FindContigousEdges::NbContigousEdges()
{
	int _result = ((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->NbContigousEdges();
	return _result;
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepOffsetAPI_FindContigousEdges::ContigousEdge(int index)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result = (::TopoDS_Edge)((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->ContigousEdge(index);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_FindContigousEdges::ContigousEdgeCouple(int index)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->ContigousEdgeCouple(index);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepOffsetAPI_FindContigousEdges::SectionToBoundary(RDC::OCC::TopoDS_Edge^ section)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result = (::TopoDS_Edge)((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->SectionToBoundary(*(::TopoDS_Edge*)section->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

int RDC::OCC::BRepOffsetAPI_FindContigousEdges::NbDegeneratedShapes()
{
	int _result = ((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->NbDegeneratedShapes();
	return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_FindContigousEdges::DegeneratedShape(int index)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->DegeneratedShape(index);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::BRepOffsetAPI_FindContigousEdges::IsDegenerated(RDC::OCC::TopoDS_Shape^ shape)
{
	bool _result = ((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->IsDegenerated(*(::TopoDS_Shape*)shape->NativeInstance);
	return _result;
}

bool RDC::OCC::BRepOffsetAPI_FindContigousEdges::IsModified(RDC::OCC::TopoDS_Shape^ shape)
{
	bool _result = ((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->IsModified(*(::TopoDS_Shape*)shape->NativeInstance);
	return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_FindContigousEdges::Modified(RDC::OCC::TopoDS_Shape^ shape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->Modified(*(::TopoDS_Shape*)shape->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::BRepOffsetAPI_FindContigousEdges::Dump()
{
	((::BRepOffsetAPI_FindContigousEdges*)_NativeInstance)->Dump();
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeDraft
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_MakeDraft::BRepOffsetAPI_MakeDraft(RDC::OCC::TopoDS_Shape^ Shape, RDC::OCC::Dir Dir, double Angle)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Dir> pp_Dir = &Dir;
	_NativeInstance = new ::BRepOffsetAPI_MakeDraft(*(::TopoDS_Shape*)Shape->NativeInstance, *(gp_Dir*)pp_Dir, Angle);
}

void RDC::OCC::BRepOffsetAPI_MakeDraft::SetOptions(RDC::OCC::BRepBuilderAPI_TransitionMode Style, double AngleMin, double AngleMax)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->SetOptions((::BRepBuilderAPI_TransitionMode)Style, AngleMin, AngleMax);
}

void RDC::OCC::BRepOffsetAPI_MakeDraft::SetOptions(RDC::OCC::BRepBuilderAPI_TransitionMode Style, double AngleMin)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->SetOptions((::BRepBuilderAPI_TransitionMode)Style, AngleMin, 3.);
}

void RDC::OCC::BRepOffsetAPI_MakeDraft::SetOptions(RDC::OCC::BRepBuilderAPI_TransitionMode Style)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->SetOptions((::BRepBuilderAPI_TransitionMode)Style, 0.01, 3.);
}

void RDC::OCC::BRepOffsetAPI_MakeDraft::SetOptions()
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->SetOptions(BRepBuilderAPI_RightCorner, 0.01, 3.);
}

void RDC::OCC::BRepOffsetAPI_MakeDraft::SetDraft(bool IsInternal)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->SetDraft(IsInternal);
}

void RDC::OCC::BRepOffsetAPI_MakeDraft::SetDraft()
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->SetDraft(false);
}

void RDC::OCC::BRepOffsetAPI_MakeDraft::Perform(double LengthMax)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Perform(LengthMax);
}

void RDC::OCC::BRepOffsetAPI_MakeDraft::Perform(RDC::OCC::Geom_Surface^ Surface, bool KeepInsideSurface)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Perform(Handle(::Geom_Surface)(Surface->NativeInstance), KeepInsideSurface);
}

void RDC::OCC::BRepOffsetAPI_MakeDraft::Perform(RDC::OCC::Geom_Surface^ Surface)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Perform(Handle(::Geom_Surface)(Surface->NativeInstance), true);
}

void RDC::OCC::BRepOffsetAPI_MakeDraft::Perform(RDC::OCC::TopoDS_Shape^ StopShape, bool KeepOutSide)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Perform(*(::TopoDS_Shape*)StopShape->NativeInstance, KeepOutSide);
}

void RDC::OCC::BRepOffsetAPI_MakeDraft::Perform(RDC::OCC::TopoDS_Shape^ StopShape)
{
	((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Perform(*(::TopoDS_Shape*)StopShape->NativeInstance, true);
}

RDC::OCC::TopoDS_Shell^ RDC::OCC::BRepOffsetAPI_MakeDraft::Shell()
{
	::TopoDS_Shell* _result = new ::TopoDS_Shell();
	*_result = ((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Shell();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shell(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_MakeDraft::Generated(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeDraft*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeEvolved
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved()
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved();
}

RDC::OCC::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(RDC::OCC::TopoDS_Shape^ theSpine, RDC::OCC::TopoDS_Wire^ theProfile, RDC::OCC::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine, double theTol, bool theIsVolume, bool theRunInParallel)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, theIsAxeProf, theIsSolid, theIsProfOnSpine, theTol, theIsVolume, theRunInParallel);
}

RDC::OCC::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(RDC::OCC::TopoDS_Shape^ theSpine, RDC::OCC::TopoDS_Wire^ theProfile, RDC::OCC::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine, double theTol, bool theIsVolume)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, theIsAxeProf, theIsSolid, theIsProfOnSpine, theTol, theIsVolume, false);
}

RDC::OCC::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(RDC::OCC::TopoDS_Shape^ theSpine, RDC::OCC::TopoDS_Wire^ theProfile, RDC::OCC::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine, double theTol)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, theIsAxeProf, theIsSolid, theIsProfOnSpine, theTol, false, false);
}

RDC::OCC::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(RDC::OCC::TopoDS_Shape^ theSpine, RDC::OCC::TopoDS_Wire^ theProfile, RDC::OCC::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid, bool theIsProfOnSpine)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, theIsAxeProf, theIsSolid, theIsProfOnSpine, 9.9999999999999995E-8, false, false);
}

RDC::OCC::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(RDC::OCC::TopoDS_Shape^ theSpine, RDC::OCC::TopoDS_Wire^ theProfile, RDC::OCC::GeomAbs_JoinType theJoinType, bool theIsAxeProf, bool theIsSolid)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, theIsAxeProf, theIsSolid, false, 9.9999999999999995E-8, false, false);
}

RDC::OCC::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(RDC::OCC::TopoDS_Shape^ theSpine, RDC::OCC::TopoDS_Wire^ theProfile, RDC::OCC::GeomAbs_JoinType theJoinType, bool theIsAxeProf)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, theIsAxeProf, false, false, 9.9999999999999995E-8, false, false);
}

RDC::OCC::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(RDC::OCC::TopoDS_Shape^ theSpine, RDC::OCC::TopoDS_Wire^ theProfile, RDC::OCC::GeomAbs_JoinType theJoinType)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, (::GeomAbs_JoinType)theJoinType, true, false, false, 9.9999999999999995E-8, false, false);
}

RDC::OCC::BRepOffsetAPI_MakeEvolved::BRepOffsetAPI_MakeEvolved(RDC::OCC::TopoDS_Shape^ theSpine, RDC::OCC::TopoDS_Wire^ theProfile)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeEvolved(*(::TopoDS_Shape*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, GeomAbs_Arc, true, false, false, 9.9999999999999995E-8, false, false);
}

void RDC::OCC::BRepOffsetAPI_MakeEvolved::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeEvolved*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakeEvolved::Build()
{
	((::BRepOffsetAPI_MakeEvolved*)_NativeInstance)->Build(::Message_ProgressRange());
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_MakeEvolved::GeneratedShapes(RDC::OCC::TopoDS_Shape^ SpineShape, RDC::OCC::TopoDS_Shape^ ProfShape)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeEvolved*)_NativeInstance)->GeneratedShapes(*(::TopoDS_Shape*)SpineShape->NativeInstance, *(::TopoDS_Shape*)ProfShape->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_MakeEvolved::Top()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepOffsetAPI_MakeEvolved*)_NativeInstance)->Top();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_MakeEvolved::Bottom()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepOffsetAPI_MakeEvolved*)_NativeInstance)->Bottom();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeFilling
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv, int MaxDeg, int MaxSegments)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, TolAng, TolCurv, MaxDeg, MaxSegments);
}

RDC::OCC::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv, int MaxDeg)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, TolAng, TolCurv, MaxDeg, 9);
}

RDC::OCC::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, TolAng, TolCurv, 8, 9);
}

RDC::OCC::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, TolAng, 0.10000000000000001, 8, 9);
}

RDC::OCC::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, 0.01, 0.10000000000000001, 8, 9);
}

RDC::OCC::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

RDC::OCC::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, Anisotropie, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

RDC::OCC::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur, int NbIter)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, NbIter, false, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

RDC::OCC::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree, int NbPtsOnCur)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, NbPtsOnCur, 2, false, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

RDC::OCC::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling(int Degree)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(Degree, 15, 2, false, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

RDC::OCC::BRepOffsetAPI_MakeFilling::BRepOffsetAPI_MakeFilling()
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeFilling(3, 15, 2, false, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetConstrParam(double Tol2d, double Tol3d, double TolAng, double TolCurv)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetConstrParam(Tol2d, Tol3d, TolAng, TolCurv);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetConstrParam(double Tol2d, double Tol3d, double TolAng)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetConstrParam(Tol2d, Tol3d, TolAng, 0.10000000000000001);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetConstrParam(double Tol2d, double Tol3d)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetConstrParam(Tol2d, Tol3d, 0.01, 0.10000000000000001);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetConstrParam(double Tol2d)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetConstrParam(Tol2d, 1.0E-4, 0.01, 0.10000000000000001);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetConstrParam()
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetConstrParam(1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetResolParam(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetResolParam(Degree, NbPtsOnCur, NbIter, Anisotropie);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetResolParam(int Degree, int NbPtsOnCur, int NbIter)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetResolParam(Degree, NbPtsOnCur, NbIter, false);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetResolParam(int Degree, int NbPtsOnCur)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetResolParam(Degree, NbPtsOnCur, 2, false);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetResolParam(int Degree)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetResolParam(Degree, 15, 2, false);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetResolParam()
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetResolParam(3, 15, 2, false);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetApproxParam(int MaxDeg, int MaxSegments)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetApproxParam(MaxDeg, MaxSegments);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetApproxParam(int MaxDeg)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetApproxParam(MaxDeg, 9);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::SetApproxParam()
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->SetApproxParam(8, 9);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::LoadInitSurface(RDC::OCC::TopoDS_Face^ Surf)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->LoadInitSurface(*(::TopoDS_Face*)Surf->NativeInstance);
}

int RDC::OCC::BRepOffsetAPI_MakeFilling::Add(RDC::OCC::TopoDS_Edge^ Constr, RDC::OCC::GeomAbs_Shape Order, bool IsBound)
{
	int _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(*(::TopoDS_Edge*)Constr->NativeInstance, (::GeomAbs_Shape)Order, IsBound);
	return _result;
}

int RDC::OCC::BRepOffsetAPI_MakeFilling::Add(RDC::OCC::TopoDS_Edge^ Constr, RDC::OCC::GeomAbs_Shape Order)
{
	int _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(*(::TopoDS_Edge*)Constr->NativeInstance, (::GeomAbs_Shape)Order, true);
	return _result;
}

int RDC::OCC::BRepOffsetAPI_MakeFilling::Add(RDC::OCC::TopoDS_Edge^ Constr, RDC::OCC::TopoDS_Face^ Support, RDC::OCC::GeomAbs_Shape Order, bool IsBound)
{
	int _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(*(::TopoDS_Edge*)Constr->NativeInstance, *(::TopoDS_Face*)Support->NativeInstance, (::GeomAbs_Shape)Order, IsBound);
	return _result;
}

int RDC::OCC::BRepOffsetAPI_MakeFilling::Add(RDC::OCC::TopoDS_Edge^ Constr, RDC::OCC::TopoDS_Face^ Support, RDC::OCC::GeomAbs_Shape Order)
{
	int _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(*(::TopoDS_Edge*)Constr->NativeInstance, *(::TopoDS_Face*)Support->NativeInstance, (::GeomAbs_Shape)Order, true);
	return _result;
}

int RDC::OCC::BRepOffsetAPI_MakeFilling::Add(RDC::OCC::TopoDS_Face^ Support, RDC::OCC::GeomAbs_Shape Order)
{
	int _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(*(::TopoDS_Face*)Support->NativeInstance, (::GeomAbs_Shape)Order);
	return _result;
}

int RDC::OCC::BRepOffsetAPI_MakeFilling::Add(RDC::OCC::Pnt Point)
{
	pin_ptr<RDC::OCC::Pnt> pp_Point = &Point;
	int _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(*(gp_Pnt*)pp_Point);
	return _result;
}

int RDC::OCC::BRepOffsetAPI_MakeFilling::Add(double U, double V, RDC::OCC::TopoDS_Face^ Support, RDC::OCC::GeomAbs_Shape Order)
{
	int _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Add(U, V, *(::TopoDS_Face*)Support->NativeInstance, (::GeomAbs_Shape)Order);
	return _result;
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakeFilling::Build()
{
	((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool RDC::OCC::BRepOffsetAPI_MakeFilling::IsDone()
{
	bool _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->IsDone();
	return _result;
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_MakeFilling::Generated(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

double RDC::OCC::BRepOffsetAPI_MakeFilling::G0Error()
{
	double _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->G0Error();
	return _result;
}

double RDC::OCC::BRepOffsetAPI_MakeFilling::G1Error()
{
	double _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->G1Error();
	return _result;
}

double RDC::OCC::BRepOffsetAPI_MakeFilling::G2Error()
{
	double _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->G2Error();
	return _result;
}

double RDC::OCC::BRepOffsetAPI_MakeFilling::G0Error(int Index)
{
	double _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->G0Error(Index);
	return _result;
}

double RDC::OCC::BRepOffsetAPI_MakeFilling::G1Error(int Index)
{
	double _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->G1Error(Index);
	return _result;
}

double RDC::OCC::BRepOffsetAPI_MakeFilling::G2Error(int Index)
{
	double _result = ((::BRepOffsetAPI_MakeFilling*)_NativeInstance)->G2Error(Index);
	return _result;
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeOffset
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset()
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset();
}

RDC::OCC::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(RDC::OCC::TopoDS_Face^ Spine, RDC::OCC::GeomAbs_JoinType Join, bool IsOpenResult)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::TopoDS_Face*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, IsOpenResult);
}

RDC::OCC::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(RDC::OCC::TopoDS_Face^ Spine, RDC::OCC::GeomAbs_JoinType Join)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::TopoDS_Face*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, false);
}

RDC::OCC::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(RDC::OCC::TopoDS_Face^ Spine)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::TopoDS_Face*)Spine->NativeInstance, GeomAbs_Arc, false);
}

RDC::OCC::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(RDC::OCC::TopoDS_Wire^ Spine, RDC::OCC::GeomAbs_JoinType Join, bool IsOpenResult)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::TopoDS_Wire*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, IsOpenResult);
}

RDC::OCC::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(RDC::OCC::TopoDS_Wire^ Spine, RDC::OCC::GeomAbs_JoinType Join)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::TopoDS_Wire*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, false);
}

RDC::OCC::BRepOffsetAPI_MakeOffset::BRepOffsetAPI_MakeOffset(RDC::OCC::TopoDS_Wire^ Spine)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffset(*(::TopoDS_Wire*)Spine->NativeInstance, GeomAbs_Arc, false);
}

void RDC::OCC::BRepOffsetAPI_MakeOffset::Init(RDC::OCC::TopoDS_Face^ Spine, RDC::OCC::GeomAbs_JoinType Join, bool IsOpenResult)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Init(*(::TopoDS_Face*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, IsOpenResult);
}

void RDC::OCC::BRepOffsetAPI_MakeOffset::Init(RDC::OCC::TopoDS_Face^ Spine, RDC::OCC::GeomAbs_JoinType Join)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Init(*(::TopoDS_Face*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, false);
}

void RDC::OCC::BRepOffsetAPI_MakeOffset::Init(RDC::OCC::TopoDS_Face^ Spine)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Init(*(::TopoDS_Face*)Spine->NativeInstance, GeomAbs_Arc, false);
}

void RDC::OCC::BRepOffsetAPI_MakeOffset::Init(RDC::OCC::GeomAbs_JoinType Join, bool IsOpenResult)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Init((::GeomAbs_JoinType)Join, IsOpenResult);
}

void RDC::OCC::BRepOffsetAPI_MakeOffset::Init(RDC::OCC::GeomAbs_JoinType Join)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Init((::GeomAbs_JoinType)Join, false);
}

void RDC::OCC::BRepOffsetAPI_MakeOffset::Init()
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Init(GeomAbs_Arc, false);
}

void RDC::OCC::BRepOffsetAPI_MakeOffset::SetApprox(bool ToApprox)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->SetApprox(ToApprox);
}

void RDC::OCC::BRepOffsetAPI_MakeOffset::AddWire(RDC::OCC::TopoDS_Wire^ Spine)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->AddWire(*(::TopoDS_Wire*)Spine->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakeOffset::Perform(double Offset, double Alt)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Perform(Offset, Alt);
}

void RDC::OCC::BRepOffsetAPI_MakeOffset::Perform(double Offset)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Perform(Offset, 0.);
}

void RDC::OCC::BRepOffsetAPI_MakeOffset::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakeOffset::Build()
{
	((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Build(::Message_ProgressRange());
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_MakeOffset::Generated(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeOffset*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepOffsetAPI_MakeOffset::ConvertFace(RDC::OCC::TopoDS_Face^ theFace, double theAngleTolerance)
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = ::BRepOffsetAPI_MakeOffset::ConvertFace(*(::TopoDS_Face*)theFace->NativeInstance, theAngleTolerance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeOffsetShape
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_MakeOffsetShape::BRepOffsetAPI_MakeOffsetShape()
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeOffsetShape();
}

void RDC::OCC::BRepOffsetAPI_MakeOffsetShape::PerformBySimple(RDC::OCC::TopoDS_Shape^ theS, double theOffsetValue)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformBySimple(*(::TopoDS_Shape*)theS->NativeInstance, theOffsetValue);
}

void RDC::OCC::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join, bool RemoveIntEdges, RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, RemoveIntEdges, *(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join, bool RemoveIntEdges)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, RemoveIntEdges, ::Message_ProgressRange());
}

void RDC::OCC::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, false, ::Message_ProgressRange());
}

void RDC::OCC::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void RDC::OCC::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, false, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void RDC::OCC::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, false, false, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void RDC::OCC::BRepOffsetAPI_MakeOffsetShape::PerformByJoin(RDC::OCC::TopoDS_Shape^ S, double Offset, double Tol)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->PerformByJoin(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, BRepOffset_Skin, false, false, GeomAbs_Arc, false, ::Message_ProgressRange());
}

RDC::OCC::BRepOffset_MakeOffset^ RDC::OCC::BRepOffsetAPI_MakeOffsetShape::MakeOffset()
{
	::BRepOffset_MakeOffset* _result = new ::BRepOffset_MakeOffset();
	*_result = (::BRepOffset_MakeOffset)((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->MakeOffset();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::BRepOffset_MakeOffset(_result);
}

void RDC::OCC::BRepOffsetAPI_MakeOffsetShape::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakeOffsetShape::Build()
{
	((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->Build(::Message_ProgressRange());
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_MakeOffsetShape::Generated(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_MakeOffsetShape::Modified(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

bool RDC::OCC::BRepOffsetAPI_MakeOffsetShape::IsDeleted(RDC::OCC::TopoDS_Shape^ S)
{
	bool _result = ((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
	return _result;
}

RDC::OCC::GeomAbs_JoinType RDC::OCC::BRepOffsetAPI_MakeOffsetShape::GetJoinType()
{
	::GeomAbs_JoinType _result = ((::BRepOffsetAPI_MakeOffsetShape*)_NativeInstance)->GetJoinType();
	return (RDC::OCC::GeomAbs_JoinType)_result;
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakePipe
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_MakePipe::BRepOffsetAPI_MakePipe(RDC::OCC::TopoDS_Wire^ Spine, RDC::OCC::TopoDS_Shape^ Profile)
	: RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakePipe(*(::TopoDS_Wire*)Spine->NativeInstance, *(::TopoDS_Shape*)Profile->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakePipe::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakePipe*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakePipe::Build()
{
	((::BRepOffsetAPI_MakePipe*)_NativeInstance)->Build(::Message_ProgressRange());
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_MakePipe::FirstShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_MakePipe*)_NativeInstance)->FirstShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_MakePipe::LastShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_MakePipe*)_NativeInstance)->LastShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_MakePipe::Generated(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_MakePipe*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_MakePipe::Generated(RDC::OCC::TopoDS_Shape^ SSpine, RDC::OCC::TopoDS_Shape^ SProfile)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_MakePipe*)_NativeInstance)->Generated(*(::TopoDS_Shape*)SSpine->NativeInstance, *(::TopoDS_Shape*)SProfile->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

double RDC::OCC::BRepOffsetAPI_MakePipe::ErrorOnSurface()
{
	double _result = ((::BRepOffsetAPI_MakePipe*)_NativeInstance)->ErrorOnSurface();
	return _result;
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakePipeShell
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_MakePipeShell::BRepOffsetAPI_MakePipeShell(RDC::OCC::TopoDS_Wire^ Spine)
	: RDC::OCC::BRepPrimAPI_MakeSweep(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakePipeShell(*(::TopoDS_Wire*)Spine->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetMode(bool IsFrenet)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMode(IsFrenet);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetMode()
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMode(false);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetDiscreteMode()
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetDiscreteMode();
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetMode(RDC::OCC::Ax2 Axe)
{
	pin_ptr<RDC::OCC::Ax2> pp_Axe = &Axe;
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMode(*(gp_Ax2*)pp_Axe);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetMode(RDC::OCC::Dir BiNormal)
{
	pin_ptr<RDC::OCC::Dir> pp_BiNormal = &BiNormal;
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMode(*(gp_Dir*)pp_BiNormal);
}

bool RDC::OCC::BRepOffsetAPI_MakePipeShell::SetMode(RDC::OCC::TopoDS_Shape^ SpineSupport)
{
	bool _result = ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMode(*(::TopoDS_Shape*)SpineSupport->NativeInstance);
	return _result;
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetMode(RDC::OCC::TopoDS_Wire^ AuxiliarySpine, bool CurvilinearEquivalence)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMode(*(::TopoDS_Wire*)AuxiliarySpine->NativeInstance, CurvilinearEquivalence, BRepFill_NoContact);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::Add(RDC::OCC::TopoDS_Shape^ Profile, bool WithContact, bool WithCorrection)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, WithContact, WithCorrection);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::Add(RDC::OCC::TopoDS_Shape^ Profile, bool WithContact)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, WithContact, false);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::Add(RDC::OCC::TopoDS_Shape^ Profile)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, false, false);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::Add(RDC::OCC::TopoDS_Shape^ Profile, RDC::OCC::TopoDS_Vertex^ Location, bool WithContact, bool WithCorrection)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, *(::TopoDS_Vertex*)Location->NativeInstance, WithContact, WithCorrection);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::Add(RDC::OCC::TopoDS_Shape^ Profile, RDC::OCC::TopoDS_Vertex^ Location, bool WithContact)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, *(::TopoDS_Vertex*)Location->NativeInstance, WithContact, false);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::Add(RDC::OCC::TopoDS_Shape^ Profile, RDC::OCC::TopoDS_Vertex^ Location)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, *(::TopoDS_Vertex*)Location->NativeInstance, false, false);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::Delete(RDC::OCC::TopoDS_Shape^ Profile)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Delete(*(::TopoDS_Shape*)Profile->NativeInstance);
}

bool RDC::OCC::BRepOffsetAPI_MakePipeShell::IsReady()
{
	bool _result = ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->IsReady();
	return _result;
}

RDC::OCC::BRepBuilderAPI_PipeError RDC::OCC::BRepOffsetAPI_MakePipeShell::GetStatus()
{
	::BRepBuilderAPI_PipeError _result = ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->GetStatus();
	return (RDC::OCC::BRepBuilderAPI_PipeError)_result;
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetTolerance(double Tol3d, double BoundTol, double TolAngular)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetTolerance(Tol3d, BoundTol, TolAngular);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetTolerance(double Tol3d, double BoundTol)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetTolerance(Tol3d, BoundTol, 0.01);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetTolerance(double Tol3d)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetTolerance(Tol3d, 1.0E-4, 0.01);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetTolerance()
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetTolerance(1.0E-4, 1.0E-4, 0.01);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetMaxDegree(int NewMaxDegree)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMaxDegree(NewMaxDegree);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetMaxSegments(int NewMaxSegments)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetMaxSegments(NewMaxSegments);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetForceApproxC1(bool ForceApproxC1)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetForceApproxC1(ForceApproxC1);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetTransitionMode(RDC::OCC::BRepBuilderAPI_TransitionMode Mode)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetTransitionMode((::BRepBuilderAPI_TransitionMode)Mode);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::SetTransitionMode()
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->SetTransitionMode(BRepBuilderAPI_Transformed);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::Simulate(int NumberOfSection, RDC::OCC::TopTools_ListOfShape^ Result)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Simulate(NumberOfSection, *(::TopTools_ListOfShape*)Result->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::Build()
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool RDC::OCC::BRepOffsetAPI_MakePipeShell::MakeSolid()
{
	bool _result = ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->MakeSolid();
	return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_MakePipeShell::FirstShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->FirstShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_MakePipeShell::LastShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->LastShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_MakePipeShell::Generated(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

double RDC::OCC::BRepOffsetAPI_MakePipeShell::ErrorOnSurface()
{
	double _result = ((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->ErrorOnSurface();
	return _result;
}

void RDC::OCC::BRepOffsetAPI_MakePipeShell::Profiles(RDC::OCC::TopTools_ListOfShape^ theProfiles)
{
	((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Profiles(*(::TopTools_ListOfShape*)theProfiles->NativeInstance);
}

RDC::OCC::TopoDS_Wire^ RDC::OCC::BRepOffsetAPI_MakePipeShell::Spine()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = (::TopoDS_Wire)((::BRepOffsetAPI_MakePipeShell*)_NativeInstance)->Spine();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Wire(_result);
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MakeThickSolid
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_MakeThickSolid::BRepOffsetAPI_MakeThickSolid()
	: RDC::OCC::BRepOffsetAPI_MakeOffsetShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MakeThickSolid();
}

void RDC::OCC::BRepOffsetAPI_MakeThickSolid::MakeThickSolidBySimple(RDC::OCC::TopoDS_Shape^ theS, double theOffsetValue)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidBySimple(*(::TopoDS_Shape*)theS->NativeInstance, theOffsetValue);
}

void RDC::OCC::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join, bool RemoveIntEdges, RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, RemoveIntEdges, *(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join, bool RemoveIntEdges)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, RemoveIntEdges, ::Message_ProgressRange());
}

void RDC::OCC::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, RDC::OCC::GeomAbs_JoinType Join)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, false, ::Message_ProgressRange());
}

void RDC::OCC::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection, bool SelfInter)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void RDC::OCC::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode, bool Intersection)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, false, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void RDC::OCC::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol, RDC::OCC::BRepOffset_Mode Mode)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, false, false, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void RDC::OCC::BRepOffsetAPI_MakeThickSolid::MakeThickSolidByJoin(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopTools_ListOfShape^ ClosingFaces, double Offset, double Tol)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->MakeThickSolidByJoin(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)ClosingFaces->NativeInstance, Offset, Tol, BRepOffset_Skin, false, false, GeomAbs_Arc, false, ::Message_ProgressRange());
}

void RDC::OCC::BRepOffsetAPI_MakeThickSolid::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MakeThickSolid::Build()
{
	((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->Build(::Message_ProgressRange());
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_MakeThickSolid::Modified(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_MakeThickSolid*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_MiddlePath
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_MiddlePath::BRepOffsetAPI_MiddlePath(RDC::OCC::TopoDS_Shape^ aShape, RDC::OCC::TopoDS_Shape^ StartShape, RDC::OCC::TopoDS_Shape^ EndShape)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_MiddlePath(*(::TopoDS_Shape*)aShape->NativeInstance, *(::TopoDS_Shape*)StartShape->NativeInstance, *(::TopoDS_Shape*)EndShape->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MiddlePath::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_MiddlePath*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_MiddlePath::Build()
{
	((::BRepOffsetAPI_MiddlePath*)_NativeInstance)->Build(::Message_ProgressRange());
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_NormalProjection
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_NormalProjection::BRepOffsetAPI_NormalProjection()
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_NormalProjection();
}

RDC::OCC::BRepOffsetAPI_NormalProjection::BRepOffsetAPI_NormalProjection(RDC::OCC::TopoDS_Shape^ S)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_NormalProjection(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_NormalProjection::Init(RDC::OCC::TopoDS_Shape^ S)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_NormalProjection::Add(RDC::OCC::TopoDS_Shape^ ToProj)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Add(*(::TopoDS_Shape*)ToProj->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_NormalProjection::SetParams(double Tol3D, double Tol2D, RDC::OCC::GeomAbs_Shape InternalContinuity, int MaxDegree, int MaxSeg)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->SetParams(Tol3D, Tol2D, (::GeomAbs_Shape)InternalContinuity, MaxDegree, MaxSeg);
}

void RDC::OCC::BRepOffsetAPI_NormalProjection::SetMaxDistance(double MaxDist)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->SetMaxDistance(MaxDist);
}

void RDC::OCC::BRepOffsetAPI_NormalProjection::SetLimit(bool FaceBoundaries)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->SetLimit(FaceBoundaries);
}

void RDC::OCC::BRepOffsetAPI_NormalProjection::SetLimit()
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->SetLimit(true);
}

void RDC::OCC::BRepOffsetAPI_NormalProjection::Compute3d(bool With3d)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Compute3d(With3d);
}

void RDC::OCC::BRepOffsetAPI_NormalProjection::Compute3d()
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Compute3d(true);
}

void RDC::OCC::BRepOffsetAPI_NormalProjection::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_NormalProjection::Build()
{
	((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool RDC::OCC::BRepOffsetAPI_NormalProjection::IsDone()
{
	bool _result = ((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->IsDone();
	return _result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_NormalProjection::Projection()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Projection();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_NormalProjection::Couple(RDC::OCC::TopoDS_Edge^ E)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Couple(*(::TopoDS_Edge*)E->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_NormalProjection::Generated(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_NormalProjection::Ancestor(RDC::OCC::TopoDS_Edge^ E)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->Ancestor(*(::TopoDS_Edge*)E->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

bool RDC::OCC::BRepOffsetAPI_NormalProjection::BuildWire(RDC::OCC::TopTools_ListOfShape^ Liste)
{
	bool _result = ((::BRepOffsetAPI_NormalProjection*)_NativeInstance)->BuildWire(*(::TopTools_ListOfShape*)Liste->NativeInstance);
	return _result;
}



//---------------------------------------------------------------------
//  Class  BRepOffsetAPI_ThruSections
//---------------------------------------------------------------------

RDC::OCC::BRepOffsetAPI_ThruSections::BRepOffsetAPI_ThruSections(bool isSolid, bool ruled, double pres3d)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_ThruSections(isSolid, ruled, pres3d);
}

RDC::OCC::BRepOffsetAPI_ThruSections::BRepOffsetAPI_ThruSections(bool isSolid, bool ruled)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_ThruSections(isSolid, ruled, 9.9999999999999995E-7);
}

RDC::OCC::BRepOffsetAPI_ThruSections::BRepOffsetAPI_ThruSections(bool isSolid)
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_ThruSections(isSolid, false, 9.9999999999999995E-7);
}

RDC::OCC::BRepOffsetAPI_ThruSections::BRepOffsetAPI_ThruSections()
	: RDC::OCC::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffsetAPI_ThruSections(false, false, 9.9999999999999995E-7);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::Init(bool isSolid, bool ruled, double pres3d)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Init(isSolid, ruled, pres3d);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::Init(bool isSolid, bool ruled)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Init(isSolid, ruled, 9.9999999999999995E-7);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::Init(bool isSolid)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Init(isSolid, false, 9.9999999999999995E-7);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::Init()
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Init(false, false, 9.9999999999999995E-7);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::AddWire(RDC::OCC::TopoDS_Wire^ wire)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->AddWire(*(::TopoDS_Wire*)wire->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::AddVertex(RDC::OCC::TopoDS_Vertex^ aVertex)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->AddVertex(*(::TopoDS_Vertex*)aVertex->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::CheckCompatibility(bool check)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->CheckCompatibility(check);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::CheckCompatibility()
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->CheckCompatibility(true);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::SetSmoothing(bool UseSmoothing)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->SetSmoothing(UseSmoothing);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::SetContinuity(RDC::OCC::GeomAbs_Shape C)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->SetContinuity((::GeomAbs_Shape)C);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::SetCriteriumWeight(double W1, double W2, double W3)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->SetCriteriumWeight(W1, W2, W3);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::SetMaxDegree(int MaxDeg)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->SetMaxDegree(MaxDeg);
}

RDC::OCC::GeomAbs_Shape RDC::OCC::BRepOffsetAPI_ThruSections::Continuity()
{
	::GeomAbs_Shape _result = ((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::BRepOffsetAPI_ThruSections::MaxDegree()
{
	int _result = ((::BRepOffsetAPI_ThruSections*)_NativeInstance)->MaxDegree();
	return _result;
}

bool RDC::OCC::BRepOffsetAPI_ThruSections::UseSmoothing()
{
	bool _result = ((::BRepOffsetAPI_ThruSections*)_NativeInstance)->UseSmoothing();
	return _result;
}

void RDC::OCC::BRepOffsetAPI_ThruSections::CriteriumWeight(double% W1, double% W2, double% W3)
{
	pin_ptr<double> pp_W1 = &W1;
	pin_ptr<double> pp_W2 = &W2;
	pin_ptr<double> pp_W3 = &W3;
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->CriteriumWeight(*(double*)pp_W1, *(double*)pp_W2, *(double*)pp_W3);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::Build(RDC::OCC::Message_ProgressRange^ theRange)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::Build()
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Build(::Message_ProgressRange());
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_ThruSections::FirstShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepOffsetAPI_ThruSections*)_NativeInstance)->FirstShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_ThruSections::LastShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = (::TopoDS_Shape)((::BRepOffsetAPI_ThruSections*)_NativeInstance)->LastShape();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepOffsetAPI_ThruSections::GeneratedFace(RDC::OCC::TopoDS_Shape^ Edge)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffsetAPI_ThruSections*)_NativeInstance)->GeneratedFace(*(::TopoDS_Shape*)Edge->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::BRepOffsetAPI_ThruSections::SetMutableInput(bool theIsMutableInput)
{
	((::BRepOffsetAPI_ThruSections*)_NativeInstance)->SetMutableInput(theIsMutableInput);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_ThruSections::Generated(RDC::OCC::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

RDC::OCC::TopTools_ListOfShape^ RDC::OCC::BRepOffsetAPI_ThruSections::Wires()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = (::TopTools_ListOfShape)((::BRepOffsetAPI_ThruSections*)_NativeInstance)->Wires();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TopTools_ListOfShape(_result);
}

bool RDC::OCC::BRepOffsetAPI_ThruSections::IsMutableInput()
{
	bool _result = ((::BRepOffsetAPI_ThruSections*)_NativeInstance)->IsMutableInput();
	return _result;
}



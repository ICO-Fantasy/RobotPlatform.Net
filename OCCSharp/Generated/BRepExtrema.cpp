// Generated wrapper code for package BRepExtrema

#include "OcctPCH.h"
#include "BRepExtrema.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TColStd.h"
#include "TopoDS.h"
#include "gp.h"
#include "Bnd.h"
#include "Extrema.h"
#include "Message.h"


//---------------------------------------------------------------------
//  Class  BRepExtrema_SeqOfSolution
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_SeqOfSolution::BRepExtrema_SeqOfSolution()
    : RDC::OCC::BaseClass<::BRepExtrema_SeqOfSolution>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SeqOfSolution();
}

RDC::OCC::BRepExtrema_SeqOfSolution::BRepExtrema_SeqOfSolution(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::BRepExtrema_SeqOfSolution>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SeqOfSolution(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::BRepExtrema_SeqOfSolution::Size()
{
    int _result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::BRepExtrema_SeqOfSolution::Length()
{
    int _result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::BRepExtrema_SeqOfSolution::Lower()
{
    int _result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::BRepExtrema_SeqOfSolution::Upper()
{
    int _result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::BRepExtrema_SeqOfSolution::IsEmpty()
{
    bool _result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->IsEmpty();
    return _result;
}

void RDC::OCC::BRepExtrema_SeqOfSolution::Reverse()
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Reverse();
}

void RDC::OCC::BRepExtrema_SeqOfSolution::Exchange(int I, int J)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::BRepExtrema_SeqOfSolution::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::BRepExtrema_SeqOfSolution::Clear()
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Clear(0L);
}

RDC::OCC::BRepExtrema_SeqOfSolution^ RDC::OCC::BRepExtrema_SeqOfSolution::Assign(RDC::OCC::BRepExtrema_SeqOfSolution^ theOther)
{
    ::BRepExtrema_SeqOfSolution* _result = new ::BRepExtrema_SeqOfSolution();
    *_result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Assign(*(::BRepExtrema_SeqOfSolution*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_SeqOfSolution(_result);
}

void RDC::OCC::BRepExtrema_SeqOfSolution::Remove(RDC::OCC::BRepExtrema_SeqOfSolution::Iterator^ thePosition)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Remove(*(::BRepExtrema_SeqOfSolution::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::BRepExtrema_SeqOfSolution::Append(RDC::OCC::BRepExtrema_SolutionElem^ theItem)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Append(*(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

void RDC::OCC::BRepExtrema_SeqOfSolution::Prepend(RDC::OCC::BRepExtrema_SolutionElem^ theItem)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Prepend(*(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

void RDC::OCC::BRepExtrema_SeqOfSolution::InsertBefore(int theIndex, RDC::OCC::BRepExtrema_SolutionElem^ theItem)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->InsertBefore(theIndex, *(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

void RDC::OCC::BRepExtrema_SeqOfSolution::InsertAfter(RDC::OCC::BRepExtrema_SeqOfSolution::Iterator^ thePosition, RDC::OCC::BRepExtrema_SolutionElem^ theItem)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->InsertAfter(*(::BRepExtrema_SeqOfSolution::Iterator*)thePosition->NativeInstance, *(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

void RDC::OCC::BRepExtrema_SeqOfSolution::Split(int theIndex, RDC::OCC::BRepExtrema_SeqOfSolution^ theSeq)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Split(theIndex, *(::BRepExtrema_SeqOfSolution*)theSeq->NativeInstance);
}

RDC::OCC::BRepExtrema_SolutionElem^ RDC::OCC::BRepExtrema_SeqOfSolution::First()
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = (::BRepExtrema_SolutionElem)((::BRepExtrema_SeqOfSolution*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_SolutionElem(_result);
}

RDC::OCC::BRepExtrema_SolutionElem^ RDC::OCC::BRepExtrema_SeqOfSolution::ChangeFirst()
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_SolutionElem(_result);
}

RDC::OCC::BRepExtrema_SolutionElem^ RDC::OCC::BRepExtrema_SeqOfSolution::Last()
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = (::BRepExtrema_SolutionElem)((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_SolutionElem(_result);
}

RDC::OCC::BRepExtrema_SolutionElem^ RDC::OCC::BRepExtrema_SeqOfSolution::ChangeLast()
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_SolutionElem(_result);
}

RDC::OCC::BRepExtrema_SolutionElem^ RDC::OCC::BRepExtrema_SeqOfSolution::Value(int theIndex)
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = (::BRepExtrema_SolutionElem)((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_SolutionElem(_result);
}

RDC::OCC::BRepExtrema_SolutionElem^ RDC::OCC::BRepExtrema_SeqOfSolution::ChangeValue(int theIndex)
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_SolutionElem(_result);
}

void RDC::OCC::BRepExtrema_SeqOfSolution::SetValue(int theIndex, RDC::OCC::BRepExtrema_SolutionElem^ theItem)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->SetValue(theIndex, *(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::BRepExtrema_SolutionElem^>^ RDC::OCC::BRepExtrema_SeqOfSolution::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::BRepExtrema_SolutionElem^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::BRepExtrema_SeqOfSolution::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::BRepExtrema_SolutionElem^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_SeqOfSolution::Iterator
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_SeqOfSolution::Iterator::Iterator()
    : RDC::OCC::BaseClass<::BRepExtrema_SeqOfSolution::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SeqOfSolution::Iterator();
}

bool RDC::OCC::BRepExtrema_SeqOfSolution::Iterator::More()
{
    bool _result = ((::BRepExtrema_SeqOfSolution::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::BRepExtrema_SeqOfSolution::Iterator::Next()
{
    ((::BRepExtrema_SeqOfSolution::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::BRepExtrema_SolutionElem^ RDC::OCC::BRepExtrema_SeqOfSolution::Iterator::Value()
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = (::BRepExtrema_SolutionElem)((::BRepExtrema_SeqOfSolution::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_SolutionElem(_result);
}

RDC::OCC::BRepExtrema_SolutionElem^ RDC::OCC::BRepExtrema_SeqOfSolution::Iterator::ChangeValue()
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = ((::BRepExtrema_SeqOfSolution::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_SolutionElem(_result);
}

bool RDC::OCC::BRepExtrema_SeqOfSolution::Iterator::IsEqual(RDC::OCC::BRepExtrema_SeqOfSolution::Iterator^ theOther)
{
    bool _result = ((::BRepExtrema_SeqOfSolution::Iterator*)_NativeInstance)->IsEqual(*(::BRepExtrema_SeqOfSolution::Iterator*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::BRepExtrema_SeqOfSolution::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::BRepExtrema_SeqOfSolution::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_MapOfIntegerPackedMapOfInteger
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::BRepExtrema_MapOfIntegerPackedMapOfInteger()
    : RDC::OCC::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
}

RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::BRepExtrema_MapOfIntegerPackedMapOfInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::BRepExtrema_MapOfIntegerPackedMapOfInteger(int theNbBuckets)
    : RDC::OCC::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger(theNbBuckets, 0L);
}

void RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Exchange(RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger^ theOther)
{
    ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Exchange(*(::BRepExtrema_MapOfIntegerPackedMapOfInteger*)theOther->NativeInstance);
}

RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger^ RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Assign(RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger^ theOther)
{
    ::BRepExtrema_MapOfIntegerPackedMapOfInteger* _result = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
    *_result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Assign(*(::BRepExtrema_MapOfIntegerPackedMapOfInteger*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger(_result);
}

void RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::ReSize(int N)
{
    ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->ReSize(N);
}

bool RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Bind(int theKey, RDC::OCC::TColStd_PackedMapOfInteger^ theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Bind(*(int*)pp_theKey, *(::TColStd_PackedMapOfInteger*)theItem->NativeInstance);
    return _result;
}

RDC::OCC::TColStd_PackedMapOfInteger^ RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Bound(int theKey, RDC::OCC::TColStd_PackedMapOfInteger^ theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    ::TColStd_PackedMapOfInteger* _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Bound(*(int*)pp_theKey, *(::TColStd_PackedMapOfInteger*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_PackedMapOfInteger(_result);
}

bool RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::IsBound(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->IsBound(*(int*)pp_theKey);
    return _result;
}

bool RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::UnBind(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->UnBind(*(int*)pp_theKey);
    return _result;
}

RDC::OCC::TColStd_PackedMapOfInteger^ RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Seek(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    const ::TColStd_PackedMapOfInteger* _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Seek(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_PackedMapOfInteger((::TColStd_PackedMapOfInteger*)_result);
}

RDC::OCC::TColStd_PackedMapOfInteger^ RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Find(int theKey)
{
    ::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
    pin_ptr<int> pp_theKey = &theKey;
    *_result = (::TColStd_PackedMapOfInteger)((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Find(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_PackedMapOfInteger(_result);
}

RDC::OCC::TColStd_PackedMapOfInteger^ RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::ChangeSeek(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    ::TColStd_PackedMapOfInteger* _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->ChangeSeek(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_PackedMapOfInteger(_result);
}

RDC::OCC::TColStd_PackedMapOfInteger^ RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::ChangeFind(int theKey)
{
    ::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
    pin_ptr<int> pp_theKey = &theKey;
    *_result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_PackedMapOfInteger(_result);
}

void RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Clear(bool doReleaseMemory)
{
    ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Clear()
{
    ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Clear(false);
}

int RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Size()
{
    int _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator::Iterator()
    : RDC::OCC::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator();
}

bool RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator::More()
{
    bool _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator::Next()
{
    ((::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TColStd_PackedMapOfInteger^ RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator::Value()
{
    ::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
    *_result = (::TColStd_PackedMapOfInteger)((::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_PackedMapOfInteger(_result);
}

RDC::OCC::TColStd_PackedMapOfInteger^ RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator::ChangeValue()
{
    ::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
    *_result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TColStd_PackedMapOfInteger(_result);
}

int RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator::Key()
{
    int _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ShapeList
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_ShapeList::BRepExtrema_ShapeList(int theIncrement)
    : RDC::OCC::BaseClass<::BRepExtrema_ShapeList>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeList(theIncrement);
}

RDC::OCC::BRepExtrema_ShapeList::BRepExtrema_ShapeList()
    : RDC::OCC::BaseClass<::BRepExtrema_ShapeList>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeList(256);
}

RDC::OCC::BRepExtrema_ShapeList::BRepExtrema_ShapeList(int theIncrement, RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::BaseClass<::BRepExtrema_ShapeList>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeList(theIncrement, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::BRepExtrema_ShapeList::Length()
{
    int _result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Length();
    return _result;
}

int RDC::OCC::BRepExtrema_ShapeList::Size()
{
    int _result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Size();
    return _result;
}

int RDC::OCC::BRepExtrema_ShapeList::Lower()
{
    int _result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Lower();
    return _result;
}

int RDC::OCC::BRepExtrema_ShapeList::Upper()
{
    int _result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Upper();
    return _result;
}

bool RDC::OCC::BRepExtrema_ShapeList::IsEmpty()
{
    bool _result = ((::BRepExtrema_ShapeList*)_NativeInstance)->IsEmpty();
    return _result;
}

RDC::OCC::BRepExtrema_ShapeList^ RDC::OCC::BRepExtrema_ShapeList::Assign(RDC::OCC::BRepExtrema_ShapeList^ theOther, bool theOwnAllocator)
{
    ::BRepExtrema_ShapeList* _result = new ::BRepExtrema_ShapeList();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Assign(*(::BRepExtrema_ShapeList*)theOther->NativeInstance, theOwnAllocator);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_ShapeList(_result);
}

RDC::OCC::BRepExtrema_ShapeList^ RDC::OCC::BRepExtrema_ShapeList::Assign(RDC::OCC::BRepExtrema_ShapeList^ theOther)
{
    ::BRepExtrema_ShapeList* _result = new ::BRepExtrema_ShapeList();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Assign(*(::BRepExtrema_ShapeList*)theOther->NativeInstance, true);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_ShapeList(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_ShapeList::Append(RDC::OCC::TopoDS_Shape^ theValue)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Append(*(::TopoDS_Shape*)theValue->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::BRepExtrema_ShapeList::EraseLast()
{
    ((::BRepExtrema_ShapeList*)_NativeInstance)->EraseLast();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_ShapeList::Appended()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Appended();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_ShapeList::Value(int theIndex)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepExtrema_ShapeList*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_ShapeList::First()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepExtrema_ShapeList*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_ShapeList::ChangeFirst()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_ShapeList::Last()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepExtrema_ShapeList*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_ShapeList::ChangeLast()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_ShapeList::ChangeValue(int theIndex)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_ShapeList::SetValue(int theIndex, RDC::OCC::TopoDS_Shape^ theValue)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->SetValue(theIndex, *(::TopoDS_Shape*)theValue->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::BRepExtrema_ShapeList::Clear(bool theReleaseMemory)
{
    ((::BRepExtrema_ShapeList*)_NativeInstance)->Clear(theReleaseMemory);
}

void RDC::OCC::BRepExtrema_ShapeList::Clear()
{
    ((::BRepExtrema_ShapeList*)_NativeInstance)->Clear(false);
}

void RDC::OCC::BRepExtrema_ShapeList::SetIncrement(int theIncrement)
{
    ((::BRepExtrema_ShapeList*)_NativeInstance)->SetIncrement(theIncrement);
}

System::Collections::Generic::IEnumerator<RDC::OCC::TopoDS_Shape^>^ RDC::OCC::BRepExtrema_ShapeList::GetEnumerator()
{
    return gcnew IndexEnumerator<RDC::OCC::TopoDS_Shape^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::BRepExtrema_ShapeList::GetEnumerator2()
{
    return gcnew IndexEnumerator<RDC::OCC::TopoDS_Shape^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ShapeList::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  BRepExtrema_ElementFilter
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_ElementFilter::BRepExtrema_ElementFilter()
    : RDC::OCC::BaseClass<::BRepExtrema_ElementFilter>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ElementFilter();
}

RDC::OCC::BRepExtrema_ElementFilter::FilterResult RDC::OCC::BRepExtrema_ElementFilter::PreCheckElements(int parameter1, int parameter2)
{
    ::BRepExtrema_ElementFilter::FilterResult _result = ((::BRepExtrema_ElementFilter*)_NativeInstance)->PreCheckElements(parameter1, parameter2);
    return (RDC::OCC::BRepExtrema_ElementFilter::FilterResult)_result;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_SolutionElem
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem()
    : RDC::OCC::BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SolutionElem();
}

RDC::OCC::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem(double theDist, RDC::OCC::Pnt thePoint, RDC::OCC::BRepExtrema_SupportType theSolType, RDC::OCC::TopoDS_Vertex^ theVertex)
    : RDC::OCC::BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    _NativeInstance = new ::BRepExtrema_SolutionElem(theDist, *(gp_Pnt*)pp_thePoint, (::BRepExtrema_SupportType)theSolType, *(::TopoDS_Vertex*)theVertex->NativeInstance);
}

RDC::OCC::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem(double theDist, RDC::OCC::Pnt thePoint, RDC::OCC::BRepExtrema_SupportType theSolType, RDC::OCC::TopoDS_Edge^ theEdge, double theParam)
    : RDC::OCC::BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    _NativeInstance = new ::BRepExtrema_SolutionElem(theDist, *(gp_Pnt*)pp_thePoint, (::BRepExtrema_SupportType)theSolType, *(::TopoDS_Edge*)theEdge->NativeInstance, theParam);
}

RDC::OCC::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem(double theDist, RDC::OCC::Pnt thePoint, RDC::OCC::BRepExtrema_SupportType theSolType, RDC::OCC::TopoDS_Face^ theFace, double theU, double theV)
    : RDC::OCC::BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint = &thePoint;
    _NativeInstance = new ::BRepExtrema_SolutionElem(theDist, *(gp_Pnt*)pp_thePoint, (::BRepExtrema_SupportType)theSolType, *(::TopoDS_Face*)theFace->NativeInstance, theU, theV);
}

double RDC::OCC::BRepExtrema_SolutionElem::Dist()
{
    double _result = ((::BRepExtrema_SolutionElem*)_NativeInstance)->Dist();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_SolutionElem::Point()
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_SolutionElem*)_NativeInstance)->Point();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::BRepExtrema_SupportType RDC::OCC::BRepExtrema_SolutionElem::SupportKind()
{
    ::BRepExtrema_SupportType _result = ((::BRepExtrema_SolutionElem*)_NativeInstance)->SupportKind();
    return (RDC::OCC::BRepExtrema_SupportType)_result;
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::BRepExtrema_SolutionElem::Vertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepExtrema_SolutionElem*)_NativeInstance)->Vertex();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::BRepExtrema_SolutionElem::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepExtrema_SolutionElem*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepExtrema_SolutionElem::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepExtrema_SolutionElem*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

void RDC::OCC::BRepExtrema_SolutionElem::EdgeParameter(double% theParam)
{
    pin_ptr<double> pp_theParam = &theParam;
    ((::BRepExtrema_SolutionElem*)_NativeInstance)->EdgeParameter(*(double*)pp_theParam);
}

void RDC::OCC::BRepExtrema_SolutionElem::FaceParameter(double% theU, double% theV)
{
    pin_ptr<double> pp_theU = &theU;
    pin_ptr<double> pp_theV = &theV;
    ((::BRepExtrema_SolutionElem*)_NativeInstance)->FaceParameter(*(double*)pp_theU, *(double*)pp_theV);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_DistanceSS
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_DistanceSS::BRepExtrema_DistanceSS(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2, RDC::OCC::Bnd_Box^ theBox1, RDC::OCC::Bnd_Box^ theBox2, double theDstRef, double theDeflection, RDC::OCC::Extrema_ExtFlag theExtFlag, RDC::OCC::Extrema_ExtAlgo theExtAlgo)
    : RDC::OCC::BaseClass<::BRepExtrema_DistanceSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistanceSS(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, *(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, theDstRef, theDeflection, (::Extrema_ExtFlag)theExtFlag, (::Extrema_ExtAlgo)theExtAlgo);
}

RDC::OCC::BRepExtrema_DistanceSS::BRepExtrema_DistanceSS(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2, RDC::OCC::Bnd_Box^ theBox1, RDC::OCC::Bnd_Box^ theBox2, double theDstRef, double theDeflection, RDC::OCC::Extrema_ExtFlag theExtFlag)
    : RDC::OCC::BaseClass<::BRepExtrema_DistanceSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistanceSS(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, *(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, theDstRef, theDeflection, (::Extrema_ExtFlag)theExtFlag, Extrema_ExtAlgo_Grad);
}

RDC::OCC::BRepExtrema_DistanceSS::BRepExtrema_DistanceSS(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2, RDC::OCC::Bnd_Box^ theBox1, RDC::OCC::Bnd_Box^ theBox2, double theDstRef, double theDeflection)
    : RDC::OCC::BaseClass<::BRepExtrema_DistanceSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistanceSS(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, *(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, theDstRef, theDeflection, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

RDC::OCC::BRepExtrema_DistanceSS::BRepExtrema_DistanceSS(RDC::OCC::TopoDS_Shape^ theS1, RDC::OCC::TopoDS_Shape^ theS2, RDC::OCC::Bnd_Box^ theBox1, RDC::OCC::Bnd_Box^ theBox2, double theDstRef)
    : RDC::OCC::BaseClass<::BRepExtrema_DistanceSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistanceSS(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, *(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, theDstRef, ::Precision::Confusion(), Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

bool RDC::OCC::BRepExtrema_DistanceSS::IsDone()
{
    bool _result = ((::BRepExtrema_DistanceSS*)_NativeInstance)->IsDone();
    return _result;
}

double RDC::OCC::BRepExtrema_DistanceSS::DistValue()
{
    double _result = ((::BRepExtrema_DistanceSS*)_NativeInstance)->DistValue();
    return _result;
}

RDC::OCC::BRepExtrema_SeqOfSolution^ RDC::OCC::BRepExtrema_DistanceSS::Seq1Value()
{
    ::BRepExtrema_SeqOfSolution* _result = new ::BRepExtrema_SeqOfSolution();
    *_result = (::BRepExtrema_SeqOfSolution)((::BRepExtrema_DistanceSS*)_NativeInstance)->Seq1Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_SeqOfSolution(_result);
}

RDC::OCC::BRepExtrema_SeqOfSolution^ RDC::OCC::BRepExtrema_DistanceSS::Seq2Value()
{
    ::BRepExtrema_SeqOfSolution* _result = new ::BRepExtrema_SeqOfSolution();
    *_result = (::BRepExtrema_SeqOfSolution)((::BRepExtrema_DistanceSS*)_NativeInstance)->Seq2Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_SeqOfSolution(_result);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_DistShapeShape
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape()
    : RDC::OCC::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape();
}

RDC::OCC::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(RDC::OCC::TopoDS_Shape^ Shape1, RDC::OCC::TopoDS_Shape^ Shape2, RDC::OCC::Extrema_ExtFlag F, RDC::OCC::Extrema_ExtAlgo A, RDC::OCC::Message_ProgressRange^ theRange)
    : RDC::OCC::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, (::Extrema_ExtFlag)F, (::Extrema_ExtAlgo)A, *(::Message_ProgressRange*)theRange->NativeInstance);
}

RDC::OCC::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(RDC::OCC::TopoDS_Shape^ Shape1, RDC::OCC::TopoDS_Shape^ Shape2, RDC::OCC::Extrema_ExtFlag F, RDC::OCC::Extrema_ExtAlgo A)
    : RDC::OCC::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, (::Extrema_ExtFlag)F, (::Extrema_ExtAlgo)A, ::Message_ProgressRange());
}

RDC::OCC::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(RDC::OCC::TopoDS_Shape^ Shape1, RDC::OCC::TopoDS_Shape^ Shape2, RDC::OCC::Extrema_ExtFlag F)
    : RDC::OCC::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, (::Extrema_ExtFlag)F, Extrema_ExtAlgo_Grad, ::Message_ProgressRange());
}

RDC::OCC::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(RDC::OCC::TopoDS_Shape^ Shape1, RDC::OCC::TopoDS_Shape^ Shape2)
    : RDC::OCC::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad, ::Message_ProgressRange());
}

RDC::OCC::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(RDC::OCC::TopoDS_Shape^ Shape1, RDC::OCC::TopoDS_Shape^ Shape2, double theDeflection, RDC::OCC::Extrema_ExtFlag F, RDC::OCC::Extrema_ExtAlgo A, RDC::OCC::Message_ProgressRange^ theRange)
    : RDC::OCC::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, theDeflection, (::Extrema_ExtFlag)F, (::Extrema_ExtAlgo)A, *(::Message_ProgressRange*)theRange->NativeInstance);
}

RDC::OCC::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(RDC::OCC::TopoDS_Shape^ Shape1, RDC::OCC::TopoDS_Shape^ Shape2, double theDeflection, RDC::OCC::Extrema_ExtFlag F, RDC::OCC::Extrema_ExtAlgo A)
    : RDC::OCC::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, theDeflection, (::Extrema_ExtFlag)F, (::Extrema_ExtAlgo)A, ::Message_ProgressRange());
}

RDC::OCC::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(RDC::OCC::TopoDS_Shape^ Shape1, RDC::OCC::TopoDS_Shape^ Shape2, double theDeflection, RDC::OCC::Extrema_ExtFlag F)
    : RDC::OCC::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, theDeflection, (::Extrema_ExtFlag)F, Extrema_ExtAlgo_Grad, ::Message_ProgressRange());
}

RDC::OCC::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(RDC::OCC::TopoDS_Shape^ Shape1, RDC::OCC::TopoDS_Shape^ Shape2, double theDeflection)
    : RDC::OCC::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, theDeflection, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad, ::Message_ProgressRange());
}

void RDC::OCC::BRepExtrema_DistShapeShape::SetDeflection(double theDeflection)
{
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SetDeflection(theDeflection);
}

void RDC::OCC::BRepExtrema_DistShapeShape::LoadS1(RDC::OCC::TopoDS_Shape^ Shape1)
{
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->LoadS1(*(::TopoDS_Shape*)Shape1->NativeInstance);
}

void RDC::OCC::BRepExtrema_DistShapeShape::LoadS2(RDC::OCC::TopoDS_Shape^ Shape1)
{
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->LoadS2(*(::TopoDS_Shape*)Shape1->NativeInstance);
}

bool RDC::OCC::BRepExtrema_DistShapeShape::Perform(RDC::OCC::Message_ProgressRange^ theRange)
{
    bool _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theRange->NativeInstance);
    return _result;
}

bool RDC::OCC::BRepExtrema_DistShapeShape::Perform()
{
    bool _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->Perform(::Message_ProgressRange());
    return _result;
}

bool RDC::OCC::BRepExtrema_DistShapeShape::IsDone()
{
    bool _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->IsDone();
    return _result;
}

int RDC::OCC::BRepExtrema_DistShapeShape::NbSolution()
{
    int _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->NbSolution();
    return _result;
}

double RDC::OCC::BRepExtrema_DistShapeShape::Value()
{
    double _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->Value();
    return _result;
}

bool RDC::OCC::BRepExtrema_DistShapeShape::InnerSolution()
{
    bool _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->InnerSolution();
    return _result;
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_DistShapeShape::PointOnShape1(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->PointOnShape1(N);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_DistShapeShape::PointOnShape2(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->PointOnShape2(N);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::BRepExtrema_SupportType RDC::OCC::BRepExtrema_DistShapeShape::SupportTypeShape1(int N)
{
    ::BRepExtrema_SupportType _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SupportTypeShape1(N);
    return (RDC::OCC::BRepExtrema_SupportType)_result;
}

RDC::OCC::BRepExtrema_SupportType RDC::OCC::BRepExtrema_DistShapeShape::SupportTypeShape2(int N)
{
    ::BRepExtrema_SupportType _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SupportTypeShape2(N);
    return (RDC::OCC::BRepExtrema_SupportType)_result;
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_DistShapeShape::SupportOnShape1(int N)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SupportOnShape1(N);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_DistShapeShape::SupportOnShape2(int N)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SupportOnShape2(N);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::BRepExtrema_DistShapeShape::ParOnEdgeS1(int N, double% t)
{
    pin_ptr<double> pp_t = &t;
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->ParOnEdgeS1(N, *(double*)pp_t);
}

void RDC::OCC::BRepExtrema_DistShapeShape::ParOnEdgeS2(int N, double% t)
{
    pin_ptr<double> pp_t = &t;
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->ParOnEdgeS2(N, *(double*)pp_t);
}

void RDC::OCC::BRepExtrema_DistShapeShape::ParOnFaceS1(int N, double% u, double% v)
{
    pin_ptr<double> pp_u = &u;
    pin_ptr<double> pp_v = &v;
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->ParOnFaceS1(N, *(double*)pp_u, *(double*)pp_v);
}

void RDC::OCC::BRepExtrema_DistShapeShape::ParOnFaceS2(int N, double% u, double% v)
{
    pin_ptr<double> pp_u = &u;
    pin_ptr<double> pp_v = &v;
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->ParOnFaceS2(N, *(double*)pp_u, *(double*)pp_v);
}

void RDC::OCC::BRepExtrema_DistShapeShape::Dump(System::IO::TextWriter^ o)
{
    std::ostringstream oss_o;
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->Dump(oss_o);
    o->Write(gcnew System::String(oss_o.str().c_str()));
}

void RDC::OCC::BRepExtrema_DistShapeShape::SetFlag(RDC::OCC::Extrema_ExtFlag F)
{
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SetFlag((::Extrema_ExtFlag)F);
}

void RDC::OCC::BRepExtrema_DistShapeShape::SetAlgo(RDC::OCC::Extrema_ExtAlgo A)
{
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SetAlgo((::Extrema_ExtAlgo)A);
}

void RDC::OCC::BRepExtrema_DistShapeShape::SetMultiThread(bool theIsMultiThread)
{
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SetMultiThread(theIsMultiThread);
}

bool RDC::OCC::BRepExtrema_DistShapeShape::IsMultiThread()
{
    bool _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->IsMultiThread();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtCC
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_ExtCC::BRepExtrema_ExtCC()
    : RDC::OCC::BaseClass<::BRepExtrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtCC();
}

RDC::OCC::BRepExtrema_ExtCC::BRepExtrema_ExtCC(RDC::OCC::TopoDS_Edge^ E1, RDC::OCC::TopoDS_Edge^ E2)
    : RDC::OCC::BaseClass<::BRepExtrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtCC(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
}

void RDC::OCC::BRepExtrema_ExtCC::Initialize(RDC::OCC::TopoDS_Edge^ E2)
{
    ((::BRepExtrema_ExtCC*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E2->NativeInstance);
}

void RDC::OCC::BRepExtrema_ExtCC::Perform(RDC::OCC::TopoDS_Edge^ E1)
{
    ((::BRepExtrema_ExtCC*)_NativeInstance)->Perform(*(::TopoDS_Edge*)E1->NativeInstance);
}

bool RDC::OCC::BRepExtrema_ExtCC::IsDone()
{
    bool _result = ((::BRepExtrema_ExtCC*)_NativeInstance)->IsDone();
    return _result;
}

int RDC::OCC::BRepExtrema_ExtCC::NbExt()
{
    int _result = ((::BRepExtrema_ExtCC*)_NativeInstance)->NbExt();
    return _result;
}

bool RDC::OCC::BRepExtrema_ExtCC::IsParallel()
{
    bool _result = ((::BRepExtrema_ExtCC*)_NativeInstance)->IsParallel();
    return _result;
}

double RDC::OCC::BRepExtrema_ExtCC::SquareDistance(int N)
{
    double _result = ((::BRepExtrema_ExtCC*)_NativeInstance)->SquareDistance(N);
    return _result;
}

double RDC::OCC::BRepExtrema_ExtCC::ParameterOnE1(int N)
{
    double _result = ((::BRepExtrema_ExtCC*)_NativeInstance)->ParameterOnE1(N);
    return _result;
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_ExtCC::PointOnE1(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtCC*)_NativeInstance)->PointOnE1(N);
    return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::BRepExtrema_ExtCC::ParameterOnE2(int N)
{
    double _result = ((::BRepExtrema_ExtCC*)_NativeInstance)->ParameterOnE2(N);
    return _result;
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_ExtCC::PointOnE2(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtCC*)_NativeInstance)->PointOnE2(N);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::BRepExtrema_ExtCC::TrimmedSquareDistances(double% dist11, double% distP12, double% distP21, double% distP22, RDC::OCC::Pnt% P11, RDC::OCC::Pnt% P12, RDC::OCC::Pnt% P21, RDC::OCC::Pnt% P22)
{
    pin_ptr<double> pp_dist11 = &dist11;
    pin_ptr<double> pp_distP12 = &distP12;
    pin_ptr<double> pp_distP21 = &distP21;
    pin_ptr<double> pp_distP22 = &distP22;
    pin_ptr<RDC::OCC::Pnt> pp_P11 = &P11;
    pin_ptr<RDC::OCC::Pnt> pp_P12 = &P12;
    pin_ptr<RDC::OCC::Pnt> pp_P21 = &P21;
    pin_ptr<RDC::OCC::Pnt> pp_P22 = &P22;
    ((::BRepExtrema_ExtCC*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_dist11, *(double*)pp_distP12, *(double*)pp_distP21, *(double*)pp_distP22, *(gp_Pnt*)pp_P11, *(gp_Pnt*)pp_P12, *(gp_Pnt*)pp_P21, *(gp_Pnt*)pp_P22);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtCF
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_ExtCF::BRepExtrema_ExtCF()
    : RDC::OCC::BaseClass<::BRepExtrema_ExtCF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtCF();
}

RDC::OCC::BRepExtrema_ExtCF::BRepExtrema_ExtCF(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F)
    : RDC::OCC::BaseClass<::BRepExtrema_ExtCF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtCF(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepExtrema_ExtCF::Initialize(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F)
{
    ((::BRepExtrema_ExtCF*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void RDC::OCC::BRepExtrema_ExtCF::Perform(RDC::OCC::TopoDS_Edge^ E, RDC::OCC::TopoDS_Face^ F)
{
    ((::BRepExtrema_ExtCF*)_NativeInstance)->Perform(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

bool RDC::OCC::BRepExtrema_ExtCF::IsDone()
{
    bool _result = ((::BRepExtrema_ExtCF*)_NativeInstance)->IsDone();
    return _result;
}

int RDC::OCC::BRepExtrema_ExtCF::NbExt()
{
    int _result = ((::BRepExtrema_ExtCF*)_NativeInstance)->NbExt();
    return _result;
}

double RDC::OCC::BRepExtrema_ExtCF::SquareDistance(int N)
{
    double _result = ((::BRepExtrema_ExtCF*)_NativeInstance)->SquareDistance(N);
    return _result;
}

bool RDC::OCC::BRepExtrema_ExtCF::IsParallel()
{
    bool _result = ((::BRepExtrema_ExtCF*)_NativeInstance)->IsParallel();
    return _result;
}

double RDC::OCC::BRepExtrema_ExtCF::ParameterOnEdge(int N)
{
    double _result = ((::BRepExtrema_ExtCF*)_NativeInstance)->ParameterOnEdge(N);
    return _result;
}

void RDC::OCC::BRepExtrema_ExtCF::ParameterOnFace(int N, double% U, double% V)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::BRepExtrema_ExtCF*)_NativeInstance)->ParameterOnFace(N, *(double*)pp_U, *(double*)pp_V);
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_ExtCF::PointOnEdge(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtCF*)_NativeInstance)->PointOnEdge(N);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_ExtCF::PointOnFace(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtCF*)_NativeInstance)->PointOnFace(N);
    return RDC::OCC::Pnt(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtFF
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_ExtFF::BRepExtrema_ExtFF()
    : RDC::OCC::BaseClass<::BRepExtrema_ExtFF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtFF();
}

RDC::OCC::BRepExtrema_ExtFF::BRepExtrema_ExtFF(RDC::OCC::TopoDS_Face^ F1, RDC::OCC::TopoDS_Face^ F2)
    : RDC::OCC::BaseClass<::BRepExtrema_ExtFF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtFF(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
}

void RDC::OCC::BRepExtrema_ExtFF::Initialize(RDC::OCC::TopoDS_Face^ F2)
{
    ((::BRepExtrema_ExtFF*)_NativeInstance)->Initialize(*(::TopoDS_Face*)F2->NativeInstance);
}

void RDC::OCC::BRepExtrema_ExtFF::Perform(RDC::OCC::TopoDS_Face^ F1, RDC::OCC::TopoDS_Face^ F2)
{
    ((::BRepExtrema_ExtFF*)_NativeInstance)->Perform(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
}

bool RDC::OCC::BRepExtrema_ExtFF::IsDone()
{
    bool _result = ((::BRepExtrema_ExtFF*)_NativeInstance)->IsDone();
    return _result;
}

bool RDC::OCC::BRepExtrema_ExtFF::IsParallel()
{
    bool _result = ((::BRepExtrema_ExtFF*)_NativeInstance)->IsParallel();
    return _result;
}

int RDC::OCC::BRepExtrema_ExtFF::NbExt()
{
    int _result = ((::BRepExtrema_ExtFF*)_NativeInstance)->NbExt();
    return _result;
}

double RDC::OCC::BRepExtrema_ExtFF::SquareDistance(int N)
{
    double _result = ((::BRepExtrema_ExtFF*)_NativeInstance)->SquareDistance(N);
    return _result;
}

void RDC::OCC::BRepExtrema_ExtFF::ParameterOnFace1(int N, double% U, double% V)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::BRepExtrema_ExtFF*)_NativeInstance)->ParameterOnFace1(N, *(double*)pp_U, *(double*)pp_V);
}

void RDC::OCC::BRepExtrema_ExtFF::ParameterOnFace2(int N, double% U, double% V)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::BRepExtrema_ExtFF*)_NativeInstance)->ParameterOnFace2(N, *(double*)pp_U, *(double*)pp_V);
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_ExtFF::PointOnFace1(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtFF*)_NativeInstance)->PointOnFace1(N);
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_ExtFF::PointOnFace2(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtFF*)_NativeInstance)->PointOnFace2(N);
    return RDC::OCC::Pnt(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtPC
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_ExtPC::BRepExtrema_ExtPC()
    : RDC::OCC::BaseClass<::BRepExtrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtPC();
}

RDC::OCC::BRepExtrema_ExtPC::BRepExtrema_ExtPC(RDC::OCC::TopoDS_Vertex^ V, RDC::OCC::TopoDS_Edge^ E)
    : RDC::OCC::BaseClass<::BRepExtrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtPC(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

void RDC::OCC::BRepExtrema_ExtPC::Initialize(RDC::OCC::TopoDS_Edge^ E)
{
    ((::BRepExtrema_ExtPC*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance);
}

void RDC::OCC::BRepExtrema_ExtPC::Perform(RDC::OCC::TopoDS_Vertex^ V)
{
    ((::BRepExtrema_ExtPC*)_NativeInstance)->Perform(*(::TopoDS_Vertex*)V->NativeInstance);
}

bool RDC::OCC::BRepExtrema_ExtPC::IsDone()
{
    bool _result = ((::BRepExtrema_ExtPC*)_NativeInstance)->IsDone();
    return _result;
}

int RDC::OCC::BRepExtrema_ExtPC::NbExt()
{
    int _result = ((::BRepExtrema_ExtPC*)_NativeInstance)->NbExt();
    return _result;
}

bool RDC::OCC::BRepExtrema_ExtPC::IsMin(int N)
{
    bool _result = ((::BRepExtrema_ExtPC*)_NativeInstance)->IsMin(N);
    return _result;
}

double RDC::OCC::BRepExtrema_ExtPC::SquareDistance(int N)
{
    double _result = ((::BRepExtrema_ExtPC*)_NativeInstance)->SquareDistance(N);
    return _result;
}

double RDC::OCC::BRepExtrema_ExtPC::Parameter(int N)
{
    double _result = ((::BRepExtrema_ExtPC*)_NativeInstance)->Parameter(N);
    return _result;
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_ExtPC::Point(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtPC*)_NativeInstance)->Point(N);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::BRepExtrema_ExtPC::TrimmedSquareDistances(double% dist1, double% dist2, RDC::OCC::Pnt% pnt1, RDC::OCC::Pnt% pnt2)
{
    pin_ptr<double> pp_dist1 = &dist1;
    pin_ptr<double> pp_dist2 = &dist2;
    pin_ptr<RDC::OCC::Pnt> pp_pnt1 = &pnt1;
    pin_ptr<RDC::OCC::Pnt> pp_pnt2 = &pnt2;
    ((::BRepExtrema_ExtPC*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_dist1, *(double*)pp_dist2, *(gp_Pnt*)pp_pnt1, *(gp_Pnt*)pp_pnt2);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtPF
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_ExtPF::BRepExtrema_ExtPF()
    : RDC::OCC::BaseClass<::BRepExtrema_ExtPF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtPF();
}

RDC::OCC::BRepExtrema_ExtPF::BRepExtrema_ExtPF(RDC::OCC::TopoDS_Vertex^ TheVertex, RDC::OCC::TopoDS_Face^ TheFace, RDC::OCC::Extrema_ExtFlag TheFlag, RDC::OCC::Extrema_ExtAlgo TheAlgo)
    : RDC::OCC::BaseClass<::BRepExtrema_ExtPF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtPF(*(::TopoDS_Vertex*)TheVertex->NativeInstance, *(::TopoDS_Face*)TheFace->NativeInstance, (::Extrema_ExtFlag)TheFlag, (::Extrema_ExtAlgo)TheAlgo);
}

RDC::OCC::BRepExtrema_ExtPF::BRepExtrema_ExtPF(RDC::OCC::TopoDS_Vertex^ TheVertex, RDC::OCC::TopoDS_Face^ TheFace, RDC::OCC::Extrema_ExtFlag TheFlag)
    : RDC::OCC::BaseClass<::BRepExtrema_ExtPF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtPF(*(::TopoDS_Vertex*)TheVertex->NativeInstance, *(::TopoDS_Face*)TheFace->NativeInstance, (::Extrema_ExtFlag)TheFlag, Extrema_ExtAlgo_Grad);
}

RDC::OCC::BRepExtrema_ExtPF::BRepExtrema_ExtPF(RDC::OCC::TopoDS_Vertex^ TheVertex, RDC::OCC::TopoDS_Face^ TheFace)
    : RDC::OCC::BaseClass<::BRepExtrema_ExtPF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtPF(*(::TopoDS_Vertex*)TheVertex->NativeInstance, *(::TopoDS_Face*)TheFace->NativeInstance, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

void RDC::OCC::BRepExtrema_ExtPF::Initialize(RDC::OCC::TopoDS_Face^ TheFace, RDC::OCC::Extrema_ExtFlag TheFlag, RDC::OCC::Extrema_ExtAlgo TheAlgo)
{
    ((::BRepExtrema_ExtPF*)_NativeInstance)->Initialize(*(::TopoDS_Face*)TheFace->NativeInstance, (::Extrema_ExtFlag)TheFlag, (::Extrema_ExtAlgo)TheAlgo);
}

void RDC::OCC::BRepExtrema_ExtPF::Initialize(RDC::OCC::TopoDS_Face^ TheFace, RDC::OCC::Extrema_ExtFlag TheFlag)
{
    ((::BRepExtrema_ExtPF*)_NativeInstance)->Initialize(*(::TopoDS_Face*)TheFace->NativeInstance, (::Extrema_ExtFlag)TheFlag, Extrema_ExtAlgo_Grad);
}

void RDC::OCC::BRepExtrema_ExtPF::Initialize(RDC::OCC::TopoDS_Face^ TheFace)
{
    ((::BRepExtrema_ExtPF*)_NativeInstance)->Initialize(*(::TopoDS_Face*)TheFace->NativeInstance, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

void RDC::OCC::BRepExtrema_ExtPF::Perform(RDC::OCC::TopoDS_Vertex^ TheVertex, RDC::OCC::TopoDS_Face^ TheFace)
{
    ((::BRepExtrema_ExtPF*)_NativeInstance)->Perform(*(::TopoDS_Vertex*)TheVertex->NativeInstance, *(::TopoDS_Face*)TheFace->NativeInstance);
}

bool RDC::OCC::BRepExtrema_ExtPF::IsDone()
{
    bool _result = ((::BRepExtrema_ExtPF*)_NativeInstance)->IsDone();
    return _result;
}

int RDC::OCC::BRepExtrema_ExtPF::NbExt()
{
    int _result = ((::BRepExtrema_ExtPF*)_NativeInstance)->NbExt();
    return _result;
}

double RDC::OCC::BRepExtrema_ExtPF::SquareDistance(int N)
{
    double _result = ((::BRepExtrema_ExtPF*)_NativeInstance)->SquareDistance(N);
    return _result;
}

void RDC::OCC::BRepExtrema_ExtPF::Parameter(int N, double% U, double% V)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::BRepExtrema_ExtPF*)_NativeInstance)->Parameter(N, *(double*)pp_U, *(double*)pp_V);
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_ExtPF::Point(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtPF*)_NativeInstance)->Point(N);
    return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::BRepExtrema_ExtPF::SetFlag(RDC::OCC::Extrema_ExtFlag F)
{
    ((::BRepExtrema_ExtPF*)_NativeInstance)->SetFlag((::Extrema_ExtFlag)F);
}

void RDC::OCC::BRepExtrema_ExtPF::SetAlgo(RDC::OCC::Extrema_ExtAlgo A)
{
    ((::BRepExtrema_ExtPF*)_NativeInstance)->SetAlgo((::Extrema_ExtAlgo)A);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_Poly
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_Poly::BRepExtrema_Poly()
    : RDC::OCC::BaseClass<::BRepExtrema_Poly>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_Poly();
}

bool RDC::OCC::BRepExtrema_Poly::Distance(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::TopoDS_Shape^ S2, RDC::OCC::Pnt% P1, RDC::OCC::Pnt% P2, double% dist)
{
    pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
    pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
    pin_ptr<double> pp_dist = &dist;
    bool _result = ::BRepExtrema_Poly::Distance(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(double*)pp_dist);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_VertexInspector
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_VertexInspector::BRepExtrema_VertexInspector()
    : RDC::OCC::BaseClass<::BRepExtrema_VertexInspector>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_VertexInspector();
}

void RDC::OCC::BRepExtrema_VertexInspector::Add(RDC::OCC::XYZ thePnt)
{
    pin_ptr<RDC::OCC::XYZ> pp_thePnt = &thePnt;
    ((::BRepExtrema_VertexInspector*)_NativeInstance)->Add(*(gp_XYZ*)pp_thePnt);
}

void RDC::OCC::BRepExtrema_VertexInspector::SetTol(double theTol)
{
    ((::BRepExtrema_VertexInspector*)_NativeInstance)->SetTol(theTol);
}

void RDC::OCC::BRepExtrema_VertexInspector::SetCurrent(RDC::OCC::XYZ theCurPnt)
{
    pin_ptr<RDC::OCC::XYZ> pp_theCurPnt = &theCurPnt;
    ((::BRepExtrema_VertexInspector*)_NativeInstance)->SetCurrent(*(gp_XYZ*)pp_theCurPnt);
}

bool RDC::OCC::BRepExtrema_VertexInspector::IsNeedAdd()
{
    bool _result = ((::BRepExtrema_VertexInspector*)_NativeInstance)->IsNeedAdd();
    return _result;
}

RDC::OCC::NCollection_CellFilter_Action RDC::OCC::BRepExtrema_VertexInspector::Inspect(int theTarget)
{
    ::NCollection_CellFilter_Action _result = ((::BRepExtrema_VertexInspector*)_NativeInstance)->Inspect(theTarget);
    return (RDC::OCC::NCollection_CellFilter_Action)_result;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ProximityValueTool
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_ProximityValueTool::BRepExtrema_ProximityValueTool()
    : RDC::OCC::BaseClass<::BRepExtrema_ProximityValueTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ProximityValueTool();
}

void RDC::OCC::BRepExtrema_ProximityValueTool::LoadShapeLists(RDC::OCC::BRepExtrema_ShapeList^ theShapeList1, RDC::OCC::BRepExtrema_ShapeList^ theShapeList2)
{
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->LoadShapeLists(*(::BRepExtrema_ShapeList*)theShapeList1->NativeInstance, *(::BRepExtrema_ShapeList*)theShapeList2->NativeInstance);
}

void RDC::OCC::BRepExtrema_ProximityValueTool::SetNbSamplePoints(int theSamples1, int theSamples2)
{
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->SetNbSamplePoints(theSamples1, theSamples2);
}

void RDC::OCC::BRepExtrema_ProximityValueTool::SetNbSamplePoints(int theSamples1)
{
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->SetNbSamplePoints(theSamples1, 0);
}

void RDC::OCC::BRepExtrema_ProximityValueTool::SetNbSamplePoints()
{
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->SetNbSamplePoints(0, 0);
}

void RDC::OCC::BRepExtrema_ProximityValueTool::Perform(double% theTolerance)
{
    pin_ptr<double> pp_theTolerance = &theTolerance;
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->Perform(*(double*)pp_theTolerance);
}

bool RDC::OCC::BRepExtrema_ProximityValueTool::IsDone()
{
    bool _result = ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->IsDone();
    return _result;
}

void RDC::OCC::BRepExtrema_ProximityValueTool::MarkDirty()
{
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->MarkDirty();
}

double RDC::OCC::BRepExtrema_ProximityValueTool::Distance()
{
    double _result = ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->Distance();
    return _result;
}

void RDC::OCC::BRepExtrema_ProximityValueTool::ProximityPoints(RDC::OCC::Pnt% thePoint1, RDC::OCC::Pnt% thePoint2)
{
    pin_ptr<RDC::OCC::Pnt> pp_thePoint1 = &thePoint1;
    pin_ptr<RDC::OCC::Pnt> pp_thePoint2 = &thePoint2;
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->ProximityPoints(*(gp_Pnt*)pp_thePoint1, *(gp_Pnt*)pp_thePoint2);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_SelfIntersection
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_SelfIntersection::BRepExtrema_SelfIntersection(double theTolerance)
    : RDC::OCC::BaseClass<::BRepExtrema_SelfIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SelfIntersection(theTolerance);
}

RDC::OCC::BRepExtrema_SelfIntersection::BRepExtrema_SelfIntersection()
    : RDC::OCC::BaseClass<::BRepExtrema_SelfIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SelfIntersection(0.);
}

RDC::OCC::BRepExtrema_SelfIntersection::BRepExtrema_SelfIntersection(RDC::OCC::TopoDS_Shape^ theShape, double theTolerance)
    : RDC::OCC::BaseClass<::BRepExtrema_SelfIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SelfIntersection(*(::TopoDS_Shape*)theShape->NativeInstance, theTolerance);
}

RDC::OCC::BRepExtrema_SelfIntersection::BRepExtrema_SelfIntersection(RDC::OCC::TopoDS_Shape^ theShape)
    : RDC::OCC::BaseClass<::BRepExtrema_SelfIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SelfIntersection(*(::TopoDS_Shape*)theShape->NativeInstance, 0.);
}

double RDC::OCC::BRepExtrema_SelfIntersection::Tolerance()
{
    double _result = ((::BRepExtrema_SelfIntersection*)_NativeInstance)->Tolerance();
    return _result;
}

void RDC::OCC::BRepExtrema_SelfIntersection::SetTolerance(double theTolerance)
{
    ((::BRepExtrema_SelfIntersection*)_NativeInstance)->SetTolerance(theTolerance);
}

bool RDC::OCC::BRepExtrema_SelfIntersection::LoadShape(RDC::OCC::TopoDS_Shape^ theShape)
{
    bool _result = ((::BRepExtrema_SelfIntersection*)_NativeInstance)->LoadShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

void RDC::OCC::BRepExtrema_SelfIntersection::Perform()
{
    ((::BRepExtrema_SelfIntersection*)_NativeInstance)->Perform();
}

bool RDC::OCC::BRepExtrema_SelfIntersection::IsDone()
{
    bool _result = ((::BRepExtrema_SelfIntersection*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger^ RDC::OCC::BRepExtrema_SelfIntersection::OverlapElements()
{
    ::BRepExtrema_MapOfIntegerPackedMapOfInteger* _result = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
    *_result = (::BRepExtrema_MapOfIntegerPackedMapOfInteger)((::BRepExtrema_SelfIntersection*)_NativeInstance)->OverlapElements();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::BRepExtrema_SelfIntersection::GetSubShape(int theID)
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepExtrema_SelfIntersection*)_NativeInstance)->GetSubShape(theID);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ShapeProximity
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_ShapeProximity::BRepExtrema_ShapeProximity(double theTolerance)
    : RDC::OCC::BaseClass<::BRepExtrema_ShapeProximity>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeProximity(theTolerance);
}

RDC::OCC::BRepExtrema_ShapeProximity::BRepExtrema_ShapeProximity()
    : RDC::OCC::BaseClass<::BRepExtrema_ShapeProximity>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeProximity(::Precision::Infinite());
}

RDC::OCC::BRepExtrema_ShapeProximity::BRepExtrema_ShapeProximity(RDC::OCC::TopoDS_Shape^ theShape1, RDC::OCC::TopoDS_Shape^ theShape2, double theTolerance)
    : RDC::OCC::BaseClass<::BRepExtrema_ShapeProximity>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeProximity(*(::TopoDS_Shape*)theShape1->NativeInstance, *(::TopoDS_Shape*)theShape2->NativeInstance, theTolerance);
}

RDC::OCC::BRepExtrema_ShapeProximity::BRepExtrema_ShapeProximity(RDC::OCC::TopoDS_Shape^ theShape1, RDC::OCC::TopoDS_Shape^ theShape2)
    : RDC::OCC::BaseClass<::BRepExtrema_ShapeProximity>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeProximity(*(::TopoDS_Shape*)theShape1->NativeInstance, *(::TopoDS_Shape*)theShape2->NativeInstance, ::Precision::Infinite());
}

double RDC::OCC::BRepExtrema_ShapeProximity::Tolerance()
{
    double _result = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->Tolerance();
    return _result;
}

void RDC::OCC::BRepExtrema_ShapeProximity::SetTolerance(double theTolerance)
{
    ((::BRepExtrema_ShapeProximity*)_NativeInstance)->SetTolerance(theTolerance);
}

double RDC::OCC::BRepExtrema_ShapeProximity::Proximity()
{
    double _result = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->Proximity();
    return _result;
}

bool RDC::OCC::BRepExtrema_ShapeProximity::LoadShape1(RDC::OCC::TopoDS_Shape^ theShape1)
{
    bool _result = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->LoadShape1(*(::TopoDS_Shape*)theShape1->NativeInstance);
    return _result;
}

bool RDC::OCC::BRepExtrema_ShapeProximity::LoadShape2(RDC::OCC::TopoDS_Shape^ theShape2)
{
    bool _result = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->LoadShape2(*(::TopoDS_Shape*)theShape2->NativeInstance);
    return _result;
}

void RDC::OCC::BRepExtrema_ShapeProximity::SetNbSamples1(int theNbSamples)
{
    ((::BRepExtrema_ShapeProximity*)_NativeInstance)->SetNbSamples1(theNbSamples);
}

void RDC::OCC::BRepExtrema_ShapeProximity::SetNbSamples2(int theNbSamples)
{
    ((::BRepExtrema_ShapeProximity*)_NativeInstance)->SetNbSamples2(theNbSamples);
}

void RDC::OCC::BRepExtrema_ShapeProximity::Perform()
{
    ((::BRepExtrema_ShapeProximity*)_NativeInstance)->Perform();
}

bool RDC::OCC::BRepExtrema_ShapeProximity::IsDone()
{
    bool _result = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->IsDone();
    return _result;
}

RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger^ RDC::OCC::BRepExtrema_ShapeProximity::OverlapSubShapes1()
{
    ::BRepExtrema_MapOfIntegerPackedMapOfInteger* _result = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
    *_result = (::BRepExtrema_MapOfIntegerPackedMapOfInteger)((::BRepExtrema_ShapeProximity*)_NativeInstance)->OverlapSubShapes1();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger(_result);
}

RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger^ RDC::OCC::BRepExtrema_ShapeProximity::OverlapSubShapes2()
{
    ::BRepExtrema_MapOfIntegerPackedMapOfInteger* _result = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
    *_result = (::BRepExtrema_MapOfIntegerPackedMapOfInteger)((::BRepExtrema_ShapeProximity*)_NativeInstance)->OverlapSubShapes2();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::BRepExtrema_MapOfIntegerPackedMapOfInteger(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_ShapeProximity::GetSubShape1(int theID)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepExtrema_ShapeProximity*)_NativeInstance)->GetSubShape1(theID);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::BRepExtrema_ShapeProximity::GetSubShape2(int theID)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepExtrema_ShapeProximity*)_NativeInstance)->GetSubShape2(theID);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_ShapeProximity::ProximityPoint1()
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->ProximityPoint1();
    return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::BRepExtrema_ShapeProximity::ProximityPoint2()
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->ProximityPoint2();
    return RDC::OCC::Pnt(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_UnCompatibleShape
//---------------------------------------------------------------------

RDC::OCC::BRepExtrema_UnCompatibleShape::BRepExtrema_UnCompatibleShape()
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepExtrema_UnCompatibleShape();
}

RDC::OCC::BRepExtrema_UnCompatibleShape::BRepExtrema_UnCompatibleShape(System::String^ theMessage)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::BRepExtrema_UnCompatibleShape(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::BRepExtrema_UnCompatibleShape::BRepExtrema_UnCompatibleShape(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::BRepExtrema_UnCompatibleShape(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::BRepExtrema_UnCompatibleShape::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::BRepExtrema_UnCompatibleShape::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::BRepExtrema_UnCompatibleShape::Raise()
{
    ::BRepExtrema_UnCompatibleShape::Raise("");
}

RDC::OCC::BRepExtrema_UnCompatibleShape^ RDC::OCC::BRepExtrema_UnCompatibleShape::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::BRepExtrema_UnCompatibleShape) _result = ::BRepExtrema_UnCompatibleShape::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::BRepExtrema_UnCompatibleShape::CreateDowncasted(_result.get());
}

RDC::OCC::BRepExtrema_UnCompatibleShape^ RDC::OCC::BRepExtrema_UnCompatibleShape::NewInstance()
{
    Handle(::BRepExtrema_UnCompatibleShape) _result = ::BRepExtrema_UnCompatibleShape::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::BRepExtrema_UnCompatibleShape::CreateDowncasted(_result.get());
}

RDC::OCC::BRepExtrema_UnCompatibleShape^ RDC::OCC::BRepExtrema_UnCompatibleShape::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::BRepExtrema_UnCompatibleShape) _result = ::BRepExtrema_UnCompatibleShape::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::BRepExtrema_UnCompatibleShape::CreateDowncasted(_result.get());
}

RDC::OCC::BRepExtrema_UnCompatibleShape^ RDC::OCC::BRepExtrema_UnCompatibleShape::CreateDowncasted(::BRepExtrema_UnCompatibleShape* instance)
{
    return gcnew RDC::OCC::BRepExtrema_UnCompatibleShape( instance );
}



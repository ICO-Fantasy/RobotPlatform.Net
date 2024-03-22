// Generated wrapper code for package TopoDS

#include "OcctPCH.h"
#include "TopoDS.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TopLoc.h"
#include "TopAbs.h"
#include "BRep.h"


//---------------------------------------------------------------------
//  Class  TopoDS_ListOfShape
//---------------------------------------------------------------------

RDC::OCC::TopoDS_ListOfShape::TopoDS_ListOfShape()
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_ListOfShape();
}

RDC::OCC::TopoDS_ListOfShape::TopoDS_ListOfShape(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
    : RDC::OCC::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_ListOfShape(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::TopoDS_ListOfShape::Size()
{
    int _result = ((::TopoDS_ListOfShape*)_NativeInstance)->Size();
    return _result;
}

RDC::OCC::TopoDS_ListOfShape^ RDC::OCC::TopoDS_ListOfShape::Assign(RDC::OCC::TopoDS_ListOfShape^ theOther)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::TopoDS_ListOfShape*)_NativeInstance)->Assign(*(::TopoDS_ListOfShape*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_ListOfShape(_result);
}

void RDC::OCC::TopoDS_ListOfShape::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
    ((::TopoDS_ListOfShape*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::TopoDS_ListOfShape::Clear()
{
    ((::TopoDS_ListOfShape*)_NativeInstance)->Clear(0L);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_ListOfShape::First()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopoDS_ListOfShape*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_ListOfShape::Last()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopoDS_ListOfShape*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_ListOfShape::Append(RDC::OCC::TopoDS_Shape^ theItem)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_ListOfShape*)_NativeInstance)->Append(*(::TopoDS_Shape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_ListOfShape::Prepend(RDC::OCC::TopoDS_Shape^ theItem)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_ListOfShape*)_NativeInstance)->Prepend(*(::TopoDS_Shape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::TopoDS_ListOfShape::RemoveFirst()
{
    ((::TopoDS_ListOfShape*)_NativeInstance)->RemoveFirst();
}

void RDC::OCC::TopoDS_ListOfShape::Remove(RDC::OCC::TopoDS_ListOfShape::Iterator^ theIter)
{
    ((::TopoDS_ListOfShape*)_NativeInstance)->Remove(*(::TopoDS_ListOfShape::Iterator*)theIter->NativeInstance);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_ListOfShape::InsertBefore(RDC::OCC::TopoDS_Shape^ theItem, RDC::OCC::TopoDS_ListOfShape::Iterator^ theIter)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_ListOfShape*)_NativeInstance)->InsertBefore(*(::TopoDS_Shape*)theItem->NativeInstance, *(::TopoDS_ListOfShape::Iterator*)theIter->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_ListOfShape::InsertAfter(RDC::OCC::TopoDS_Shape^ theItem, RDC::OCC::TopoDS_ListOfShape::Iterator^ theIter)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_ListOfShape*)_NativeInstance)->InsertAfter(*(::TopoDS_Shape*)theItem->NativeInstance, *(::TopoDS_ListOfShape::Iterator*)theIter->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::TopoDS_ListOfShape::Reverse()
{
    ((::TopoDS_ListOfShape*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<RDC::OCC::TopoDS_Shape^>^ RDC::OCC::TopoDS_ListOfShape::GetEnumerator()
{
    return gcnew RDC::OCC::TopoDS_ListOfShape::Iterator(new ::TopoDS_ListOfShape::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ RDC::OCC::TopoDS_ListOfShape::GetEnumerator2()
{
    return gcnew RDC::OCC::TopoDS_ListOfShape::Iterator(new ::TopoDS_ListOfShape::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TopoDS_ListOfShape::Iterator
//---------------------------------------------------------------------

RDC::OCC::TopoDS_ListOfShape::Iterator::Iterator()
    : RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_Shape^, ::TopoDS_ListOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_ListOfShape::Iterator();
}

bool RDC::OCC::TopoDS_ListOfShape::Iterator::More()
{
    bool _result = ((::TopoDS_ListOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TopoDS_ListOfShape::Iterator::Next()
{
    ((::TopoDS_ListOfShape::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_ListOfShape::Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopoDS_ListOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_ListOfShape::Iterator::ChangeValue()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_ListOfShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopoDS_ListIteratorOfListOfShape
//---------------------------------------------------------------------

RDC::OCC::TopoDS_ListIteratorOfListOfShape::TopoDS_ListIteratorOfListOfShape()
    : RDC::OCC::BaseClass<::TopoDS_ListIteratorOfListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_ListIteratorOfListOfShape();
}

RDC::OCC::TopoDS_ListIteratorOfListOfShape::TopoDS_ListIteratorOfListOfShape(RDC::OCC::NCollection_BaseList^ theList)
    : RDC::OCC::BaseClass<::TopoDS_ListIteratorOfListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_ListIteratorOfListOfShape(*(::NCollection_BaseList*)theList->NativeInstance);
}

bool RDC::OCC::TopoDS_ListIteratorOfListOfShape::More()
{
    bool _result = ((::TopoDS_ListIteratorOfListOfShape*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TopoDS_ListIteratorOfListOfShape::Next()
{
    ((::TopoDS_ListIteratorOfListOfShape*)_NativeInstance)->Next();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_ListIteratorOfListOfShape::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopoDS_ListIteratorOfListOfShape*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_ListIteratorOfListOfShape::ChangeValue()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_ListIteratorOfListOfShape*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Shape
//---------------------------------------------------------------------

RDC::OCC::TopoDS_Shape::TopoDS_Shape()
    : RDC::OCC::BaseClass<::TopoDS_Shape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Shape();
}

bool RDC::OCC::TopoDS_Shape::IsNull()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->IsNull();
    return _result;
}

void RDC::OCC::TopoDS_Shape::Nullify()
{
    ((::TopoDS_Shape*)_NativeInstance)->Nullify();
}

RDC::OCC::TopLoc_Location^ RDC::OCC::TopoDS_Shape::Location()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopoDS_Shape*)_NativeInstance)->Location();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopLoc_Location(_result);
}

void RDC::OCC::TopoDS_Shape::Location(RDC::OCC::TopLoc_Location^ theLoc, bool theRaiseExc)
{
    ((::TopoDS_Shape*)_NativeInstance)->Location(*(::TopLoc_Location*)theLoc->NativeInstance, theRaiseExc);
}

void RDC::OCC::TopoDS_Shape::Location(RDC::OCC::TopLoc_Location^ theLoc)
{
    ((::TopoDS_Shape*)_NativeInstance)->Location(*(::TopLoc_Location*)theLoc->NativeInstance, true);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_Shape::Located(RDC::OCC::TopLoc_Location^ theLoc, bool theRaiseExc)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Located(*(::TopLoc_Location*)theLoc->NativeInstance, theRaiseExc);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_Shape::Located(RDC::OCC::TopLoc_Location^ theLoc)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Located(*(::TopLoc_Location*)theLoc->NativeInstance, true);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopAbs_Orientation RDC::OCC::TopoDS_Shape::Orientation()
{
    ::TopAbs_Orientation _result = ((::TopoDS_Shape*)_NativeInstance)->Orientation();
    return (RDC::OCC::TopAbs_Orientation)_result;
}

void RDC::OCC::TopoDS_Shape::Orientation(RDC::OCC::TopAbs_Orientation theOrient)
{
    ((::TopoDS_Shape*)_NativeInstance)->Orientation((::TopAbs_Orientation)theOrient);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_Shape::Oriented(RDC::OCC::TopAbs_Orientation theOrient)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Oriented((::TopAbs_Orientation)theOrient);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_TShape^ RDC::OCC::TopoDS_Shape::TShape()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_Shape*)_NativeInstance)->TShape();
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_TShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::TopoDS_Shape::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::TopoDS_Shape*)_NativeInstance)->ShapeType();
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

bool RDC::OCC::TopoDS_Shape::Free()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Free();
    return _result;
}

void RDC::OCC::TopoDS_Shape::Free(bool theIsFree)
{
    ((::TopoDS_Shape*)_NativeInstance)->Free(theIsFree);
}

bool RDC::OCC::TopoDS_Shape::Locked()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Locked();
    return _result;
}

void RDC::OCC::TopoDS_Shape::Locked(bool theIsLocked)
{
    ((::TopoDS_Shape*)_NativeInstance)->Locked(theIsLocked);
}

bool RDC::OCC::TopoDS_Shape::Modified()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Modified();
    return _result;
}

void RDC::OCC::TopoDS_Shape::Modified(bool theIsModified)
{
    ((::TopoDS_Shape*)_NativeInstance)->Modified(theIsModified);
}

bool RDC::OCC::TopoDS_Shape::Checked()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Checked();
    return _result;
}

void RDC::OCC::TopoDS_Shape::Checked(bool theIsChecked)
{
    ((::TopoDS_Shape*)_NativeInstance)->Checked(theIsChecked);
}

bool RDC::OCC::TopoDS_Shape::Orientable()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Orientable();
    return _result;
}

void RDC::OCC::TopoDS_Shape::Orientable(bool theIsOrientable)
{
    ((::TopoDS_Shape*)_NativeInstance)->Orientable(theIsOrientable);
}

bool RDC::OCC::TopoDS_Shape::Closed()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Closed();
    return _result;
}

void RDC::OCC::TopoDS_Shape::Closed(bool theIsClosed)
{
    ((::TopoDS_Shape*)_NativeInstance)->Closed(theIsClosed);
}

bool RDC::OCC::TopoDS_Shape::Infinite()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Infinite();
    return _result;
}

void RDC::OCC::TopoDS_Shape::Infinite(bool theIsInfinite)
{
    ((::TopoDS_Shape*)_NativeInstance)->Infinite(theIsInfinite);
}

bool RDC::OCC::TopoDS_Shape::Convex()
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->Convex();
    return _result;
}

void RDC::OCC::TopoDS_Shape::Convex(bool theIsConvex)
{
    ((::TopoDS_Shape*)_NativeInstance)->Convex(theIsConvex);
}

void RDC::OCC::TopoDS_Shape::Move(RDC::OCC::TopLoc_Location^ thePosition, bool theRaiseExc)
{
    ((::TopoDS_Shape*)_NativeInstance)->Move(*(::TopLoc_Location*)thePosition->NativeInstance, theRaiseExc);
}

void RDC::OCC::TopoDS_Shape::Move(RDC::OCC::TopLoc_Location^ thePosition)
{
    ((::TopoDS_Shape*)_NativeInstance)->Move(*(::TopLoc_Location*)thePosition->NativeInstance, true);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_Shape::Moved(RDC::OCC::TopLoc_Location^ thePosition, bool theRaiseExc)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Moved(*(::TopLoc_Location*)thePosition->NativeInstance, theRaiseExc);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_Shape::Moved(RDC::OCC::TopLoc_Location^ thePosition)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Moved(*(::TopLoc_Location*)thePosition->NativeInstance, true);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::TopoDS_Shape::Reverse()
{
    ((::TopoDS_Shape*)_NativeInstance)->Reverse();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_Shape::Reversed()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::TopoDS_Shape::Complement()
{
    ((::TopoDS_Shape*)_NativeInstance)->Complement();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_Shape::Complemented()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Complemented();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::TopoDS_Shape::Compose(RDC::OCC::TopAbs_Orientation theOrient)
{
    ((::TopoDS_Shape*)_NativeInstance)->Compose((::TopAbs_Orientation)theOrient);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_Shape::Composed(RDC::OCC::TopAbs_Orientation theOrient)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->Composed((::TopAbs_Orientation)theOrient);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

int RDC::OCC::TopoDS_Shape::NbChildren()
{
    int _result = ((::TopoDS_Shape*)_NativeInstance)->NbChildren();
    return _result;
}

bool RDC::OCC::TopoDS_Shape::IsPartner(RDC::OCC::TopoDS_Shape^ theOther)
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->IsPartner(*(::TopoDS_Shape*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TopoDS_Shape::IsSame(RDC::OCC::TopoDS_Shape^ theOther)
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->IsSame(*(::TopoDS_Shape*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TopoDS_Shape::IsEqual(RDC::OCC::TopoDS_Shape^ theOther)
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->IsEqual(*(::TopoDS_Shape*)theOther->NativeInstance);
    return _result;
}

bool RDC::OCC::TopoDS_Shape::IsNotEqual(RDC::OCC::TopoDS_Shape^ theOther)
{
    bool _result = ((::TopoDS_Shape*)_NativeInstance)->IsNotEqual(*(::TopoDS_Shape*)theOther->NativeInstance);
    return _result;
}

void RDC::OCC::TopoDS_Shape::EmptyCopy()
{
    ((::TopoDS_Shape*)_NativeInstance)->EmptyCopy();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_Shape::EmptyCopied()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_Shape*)_NativeInstance)->EmptyCopied();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

void RDC::OCC::TopoDS_Shape::TShape(RDC::OCC::TopoDS_TShape^ theTShape)
{
    ((::TopoDS_Shape*)_NativeInstance)->TShape(Handle(::TopoDS_TShape)(theTShape->NativeInstance));
}

void RDC::OCC::TopoDS_Shape::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::TopoDS_Shape*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::TopoDS_Shape::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::TopoDS_Shape*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool RDC::OCC::TopoDS_Shape::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = RDC::OCC::TopoDS_Shape::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TopoDS_Shape^)obj)->NativeInstance);
    }
    return false;
}

int RDC::OCC::TopoDS_Shape::GetHashCode()
{
    return std::hash<::TopoDS_Shape>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Vertex
//---------------------------------------------------------------------

RDC::OCC::TopoDS_Vertex::TopoDS_Vertex()
    : RDC::OCC::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Vertex();
}

int RDC::OCC::TopoDS_Vertex::GetHashCode()
{
    return std::hash<::TopoDS_Vertex>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Edge
//---------------------------------------------------------------------

RDC::OCC::TopoDS_Edge::TopoDS_Edge()
    : RDC::OCC::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Edge();
}

int RDC::OCC::TopoDS_Edge::GetHashCode()
{
    return std::hash<::TopoDS_Edge>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Wire
//---------------------------------------------------------------------

RDC::OCC::TopoDS_Wire::TopoDS_Wire()
    : RDC::OCC::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Wire();
}

int RDC::OCC::TopoDS_Wire::GetHashCode()
{
    return std::hash<::TopoDS_Wire>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Face
//---------------------------------------------------------------------

RDC::OCC::TopoDS_Face::TopoDS_Face()
    : RDC::OCC::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Face();
}

int RDC::OCC::TopoDS_Face::GetHashCode()
{
    return std::hash<::TopoDS_Face>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Shell
//---------------------------------------------------------------------

RDC::OCC::TopoDS_Shell::TopoDS_Shell()
    : RDC::OCC::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Shell();
}

int RDC::OCC::TopoDS_Shell::GetHashCode()
{
    return std::hash<::TopoDS_Shell>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Solid
//---------------------------------------------------------------------

RDC::OCC::TopoDS_Solid::TopoDS_Solid()
    : RDC::OCC::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Solid();
}

int RDC::OCC::TopoDS_Solid::GetHashCode()
{
    return std::hash<::TopoDS_Solid>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_CompSolid
//---------------------------------------------------------------------

RDC::OCC::TopoDS_CompSolid::TopoDS_CompSolid()
    : RDC::OCC::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_CompSolid();
}

int RDC::OCC::TopoDS_CompSolid::GetHashCode()
{
    return std::hash<::TopoDS_CompSolid>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Compound
//---------------------------------------------------------------------

RDC::OCC::TopoDS_Compound::TopoDS_Compound()
    : RDC::OCC::TopoDS_Shape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Compound();
}

int RDC::OCC::TopoDS_Compound::GetHashCode()
{
    return std::hash<::TopoDS_Compound>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_HShape
//---------------------------------------------------------------------

RDC::OCC::TopoDS_HShape::TopoDS_HShape()
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_HShape();
}

RDC::OCC::TopoDS_HShape::TopoDS_HShape(RDC::OCC::TopoDS_Shape^ aShape)
    : RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_HShape(*(::TopoDS_Shape*)aShape->NativeInstance);
}

void RDC::OCC::TopoDS_HShape::Shape(RDC::OCC::TopoDS_Shape^ aShape)
{
    ((::TopoDS_HShape*)_NativeInstance)->Shape(*(::TopoDS_Shape*)aShape->NativeInstance);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_HShape::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopoDS_HShape*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_HShape::ChangeShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopoDS_HShape*)_NativeInstance)->ChangeShape();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}

RDC::OCC::TopoDS_HShape^ RDC::OCC::TopoDS_HShape::CreateDowncasted(::TopoDS_HShape* instance)
{
    return gcnew RDC::OCC::TopoDS_HShape( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TShape
//---------------------------------------------------------------------

bool RDC::OCC::TopoDS_TShape::Free()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Free();
    return _result;
}

void RDC::OCC::TopoDS_TShape::Free(bool theIsFree)
{
    ((::TopoDS_TShape*)_NativeInstance)->Free(theIsFree);
}

bool RDC::OCC::TopoDS_TShape::Locked()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Locked();
    return _result;
}

void RDC::OCC::TopoDS_TShape::Locked(bool theIsLocked)
{
    ((::TopoDS_TShape*)_NativeInstance)->Locked(theIsLocked);
}

bool RDC::OCC::TopoDS_TShape::Modified()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Modified();
    return _result;
}

void RDC::OCC::TopoDS_TShape::Modified(bool theIsModified)
{
    ((::TopoDS_TShape*)_NativeInstance)->Modified(theIsModified);
}

bool RDC::OCC::TopoDS_TShape::Checked()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Checked();
    return _result;
}

void RDC::OCC::TopoDS_TShape::Checked(bool theIsChecked)
{
    ((::TopoDS_TShape*)_NativeInstance)->Checked(theIsChecked);
}

bool RDC::OCC::TopoDS_TShape::Orientable()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Orientable();
    return _result;
}

void RDC::OCC::TopoDS_TShape::Orientable(bool theIsOrientable)
{
    ((::TopoDS_TShape*)_NativeInstance)->Orientable(theIsOrientable);
}

bool RDC::OCC::TopoDS_TShape::Closed()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Closed();
    return _result;
}

void RDC::OCC::TopoDS_TShape::Closed(bool theIsClosed)
{
    ((::TopoDS_TShape*)_NativeInstance)->Closed(theIsClosed);
}

bool RDC::OCC::TopoDS_TShape::Infinite()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Infinite();
    return _result;
}

void RDC::OCC::TopoDS_TShape::Infinite(bool theIsInfinite)
{
    ((::TopoDS_TShape*)_NativeInstance)->Infinite(theIsInfinite);
}

bool RDC::OCC::TopoDS_TShape::Convex()
{
    bool _result = ((::TopoDS_TShape*)_NativeInstance)->Convex();
    return _result;
}

void RDC::OCC::TopoDS_TShape::Convex(bool theIsConvex)
{
    ((::TopoDS_TShape*)_NativeInstance)->Convex(theIsConvex);
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::TopoDS_TShape::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::TopoDS_TShape*)_NativeInstance)->ShapeType();
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

RDC::OCC::TopoDS_TShape^ RDC::OCC::TopoDS_TShape::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TShape*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_TShape::CreateDowncasted(_result.get());
}

int RDC::OCC::TopoDS_TShape::NbChildren()
{
    int _result = ((::TopoDS_TShape*)_NativeInstance)->NbChildren();
    return _result;
}

void RDC::OCC::TopoDS_TShape::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::TopoDS_TShape*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::TopoDS_TShape::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::TopoDS_TShape*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::TopoDS_TShape^ RDC::OCC::TopoDS_TShape::CreateDowncasted(::TopoDS_TShape* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TVertex)))
        return RDC::OCC::TopoDS_TVertex::CreateDowncasted((::TopoDS_TVertex*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TEdge)))
        return RDC::OCC::TopoDS_TEdge::CreateDowncasted((::TopoDS_TEdge*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TWire)))
        return RDC::OCC::TopoDS_TWire::CreateDowncasted((::TopoDS_TWire*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TFace)))
        return RDC::OCC::TopoDS_TFace::CreateDowncasted((::TopoDS_TFace*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TShell)))
        return RDC::OCC::TopoDS_TShell::CreateDowncasted((::TopoDS_TShell*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TSolid)))
        return RDC::OCC::TopoDS_TSolid::CreateDowncasted((::TopoDS_TSolid*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TCompSolid)))
        return RDC::OCC::TopoDS_TCompSolid::CreateDowncasted((::TopoDS_TCompSolid*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_TCompound)))
        return RDC::OCC::TopoDS_TCompound::CreateDowncasted((::TopoDS_TCompound*)instance);
    
    return gcnew RDC::OCC::TopoDS_TShape( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TVertex
//---------------------------------------------------------------------

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::TopoDS_TVertex::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::TopoDS_TVertex*)_NativeInstance)->ShapeType();
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

RDC::OCC::TopoDS_TVertex^ RDC::OCC::TopoDS_TVertex::CreateDowncasted(::TopoDS_TVertex* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_TVertex)))
        return RDC::OCC::BRep_TVertex::CreateDowncasted((::BRep_TVertex*)instance);
    
    return gcnew RDC::OCC::TopoDS_TVertex( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TEdge
//---------------------------------------------------------------------

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::TopoDS_TEdge::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::TopoDS_TEdge*)_NativeInstance)->ShapeType();
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

RDC::OCC::TopoDS_TEdge^ RDC::OCC::TopoDS_TEdge::CreateDowncasted(::TopoDS_TEdge* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_TEdge)))
        return RDC::OCC::BRep_TEdge::CreateDowncasted((::BRep_TEdge*)instance);
    
    return gcnew RDC::OCC::TopoDS_TEdge( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TWire
//---------------------------------------------------------------------

RDC::OCC::TopoDS_TWire::TopoDS_TWire()
    : RDC::OCC::TopoDS_TShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_TWire();
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::TopoDS_TWire::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::TopoDS_TWire*)_NativeInstance)->ShapeType();
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

RDC::OCC::TopoDS_TShape^ RDC::OCC::TopoDS_TWire::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TWire*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_TShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_TWire^ RDC::OCC::TopoDS_TWire::CreateDowncasted(::TopoDS_TWire* instance)
{
    return gcnew RDC::OCC::TopoDS_TWire( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TFace
//---------------------------------------------------------------------

RDC::OCC::TopoDS_TFace::TopoDS_TFace()
    : RDC::OCC::TopoDS_TShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_TFace();
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::TopoDS_TFace::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::TopoDS_TFace*)_NativeInstance)->ShapeType();
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

RDC::OCC::TopoDS_TShape^ RDC::OCC::TopoDS_TFace::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TFace*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_TShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_TFace^ RDC::OCC::TopoDS_TFace::CreateDowncasted(::TopoDS_TFace* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_TFace)))
        return RDC::OCC::BRep_TFace::CreateDowncasted((::BRep_TFace*)instance);
    
    return gcnew RDC::OCC::TopoDS_TFace( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TShell
//---------------------------------------------------------------------

RDC::OCC::TopoDS_TShell::TopoDS_TShell()
    : RDC::OCC::TopoDS_TShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_TShell();
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::TopoDS_TShell::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::TopoDS_TShell*)_NativeInstance)->ShapeType();
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

RDC::OCC::TopoDS_TShape^ RDC::OCC::TopoDS_TShell::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TShell*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_TShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_TShell^ RDC::OCC::TopoDS_TShell::CreateDowncasted(::TopoDS_TShell* instance)
{
    return gcnew RDC::OCC::TopoDS_TShell( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TSolid
//---------------------------------------------------------------------

RDC::OCC::TopoDS_TSolid::TopoDS_TSolid()
    : RDC::OCC::TopoDS_TShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_TSolid();
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::TopoDS_TSolid::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::TopoDS_TSolid*)_NativeInstance)->ShapeType();
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

RDC::OCC::TopoDS_TShape^ RDC::OCC::TopoDS_TSolid::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TSolid*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_TShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_TSolid^ RDC::OCC::TopoDS_TSolid::CreateDowncasted(::TopoDS_TSolid* instance)
{
    return gcnew RDC::OCC::TopoDS_TSolid( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TCompSolid
//---------------------------------------------------------------------

RDC::OCC::TopoDS_TCompSolid::TopoDS_TCompSolid()
    : RDC::OCC::TopoDS_TShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_TCompSolid();
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::TopoDS_TCompSolid::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::TopoDS_TCompSolid*)_NativeInstance)->ShapeType();
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

RDC::OCC::TopoDS_TShape^ RDC::OCC::TopoDS_TCompSolid::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TCompSolid*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_TShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_TCompSolid^ RDC::OCC::TopoDS_TCompSolid::CreateDowncasted(::TopoDS_TCompSolid* instance)
{
    return gcnew RDC::OCC::TopoDS_TCompSolid( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_TCompound
//---------------------------------------------------------------------

RDC::OCC::TopoDS_TCompound::TopoDS_TCompound()
    : RDC::OCC::TopoDS_TShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_TCompound();
}

RDC::OCC::TopAbs_ShapeEnum RDC::OCC::TopoDS_TCompound::ShapeType()
{
    ::TopAbs_ShapeEnum _result = ((::TopoDS_TCompound*)_NativeInstance)->ShapeType();
    return (RDC::OCC::TopAbs_ShapeEnum)_result;
}

RDC::OCC::TopoDS_TShape^ RDC::OCC::TopoDS_TCompound::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::TopoDS_TCompound*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_TShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_TCompound^ RDC::OCC::TopoDS_TCompound::CreateDowncasted(::TopoDS_TCompound* instance)
{
    return gcnew RDC::OCC::TopoDS_TCompound( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_Builder
//---------------------------------------------------------------------

RDC::OCC::TopoDS_Builder::TopoDS_Builder()
    : RDC::OCC::BaseClass<::TopoDS_Builder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Builder();
}

void RDC::OCC::TopoDS_Builder::MakeWire(RDC::OCC::TopoDS_Wire^ W)
{
    ((::TopoDS_Builder*)_NativeInstance)->MakeWire(*(::TopoDS_Wire*)W->NativeInstance);
}

void RDC::OCC::TopoDS_Builder::MakeShell(RDC::OCC::TopoDS_Shell^ S)
{
    ((::TopoDS_Builder*)_NativeInstance)->MakeShell(*(::TopoDS_Shell*)S->NativeInstance);
}

void RDC::OCC::TopoDS_Builder::MakeSolid(RDC::OCC::TopoDS_Solid^ S)
{
    ((::TopoDS_Builder*)_NativeInstance)->MakeSolid(*(::TopoDS_Solid*)S->NativeInstance);
}

void RDC::OCC::TopoDS_Builder::MakeCompSolid(RDC::OCC::TopoDS_CompSolid^ C)
{
    ((::TopoDS_Builder*)_NativeInstance)->MakeCompSolid(*(::TopoDS_CompSolid*)C->NativeInstance);
}

void RDC::OCC::TopoDS_Builder::MakeCompound(RDC::OCC::TopoDS_Compound^ C)
{
    ((::TopoDS_Builder*)_NativeInstance)->MakeCompound(*(::TopoDS_Compound*)C->NativeInstance);
}

void RDC::OCC::TopoDS_Builder::Add(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopoDS_Shape^ C)
{
    ((::TopoDS_Builder*)_NativeInstance)->Add(*(::TopoDS_Shape*)S->NativeInstance, *(::TopoDS_Shape*)C->NativeInstance);
}

void RDC::OCC::TopoDS_Builder::Remove(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::TopoDS_Shape^ C)
{
    ((::TopoDS_Builder*)_NativeInstance)->Remove(*(::TopoDS_Shape*)S->NativeInstance, *(::TopoDS_Shape*)C->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TopoDS_Iterator
//---------------------------------------------------------------------

RDC::OCC::TopoDS_Iterator::TopoDS_Iterator()
    : RDC::OCC::BaseClass<::TopoDS_Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Iterator();
}

RDC::OCC::TopoDS_Iterator::TopoDS_Iterator(RDC::OCC::TopoDS_Shape^ S, bool cumOri, bool cumLoc)
    : RDC::OCC::BaseClass<::TopoDS_Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Iterator(*(::TopoDS_Shape*)S->NativeInstance, cumOri, cumLoc);
}

RDC::OCC::TopoDS_Iterator::TopoDS_Iterator(RDC::OCC::TopoDS_Shape^ S, bool cumOri)
    : RDC::OCC::BaseClass<::TopoDS_Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Iterator(*(::TopoDS_Shape*)S->NativeInstance, cumOri, true);
}

RDC::OCC::TopoDS_Iterator::TopoDS_Iterator(RDC::OCC::TopoDS_Shape^ S)
    : RDC::OCC::BaseClass<::TopoDS_Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS_Iterator(*(::TopoDS_Shape*)S->NativeInstance, true, true);
}

void RDC::OCC::TopoDS_Iterator::Initialize(RDC::OCC::TopoDS_Shape^ S, bool cumOri, bool cumLoc)
{
    ((::TopoDS_Iterator*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, cumOri, cumLoc);
}

void RDC::OCC::TopoDS_Iterator::Initialize(RDC::OCC::TopoDS_Shape^ S, bool cumOri)
{
    ((::TopoDS_Iterator*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, cumOri, true);
}

void RDC::OCC::TopoDS_Iterator::Initialize(RDC::OCC::TopoDS_Shape^ S)
{
    ((::TopoDS_Iterator*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, true, true);
}

bool RDC::OCC::TopoDS_Iterator::More()
{
    bool _result = ((::TopoDS_Iterator*)_NativeInstance)->More();
    return _result;
}

void RDC::OCC::TopoDS_Iterator::Next()
{
    ((::TopoDS_Iterator*)_NativeInstance)->Next();
}

RDC::OCC::TopoDS_Shape^ RDC::OCC::TopoDS_Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopoDS_Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopoDS
//---------------------------------------------------------------------

RDC::OCC::TopoDS::TopoDS()
    : RDC::OCC::BaseClass<::TopoDS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopoDS();
}

RDC::OCC::TopoDS_Vertex^ RDC::OCC::TopoDS::Vertex(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)::TopoDS::Vertex(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Vertex(_result);
}

RDC::OCC::TopoDS_Edge^ RDC::OCC::TopoDS::Edge(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)::TopoDS::Edge(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Edge(_result);
}

RDC::OCC::TopoDS_Wire^ RDC::OCC::TopoDS::Wire(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)::TopoDS::Wire(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Wire(_result);
}

RDC::OCC::TopoDS_Face^ RDC::OCC::TopoDS::Face(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)::TopoDS::Face(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Face(_result);
}

RDC::OCC::TopoDS_Shell^ RDC::OCC::TopoDS::Shell(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = (::TopoDS_Shell)::TopoDS::Shell(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Shell(_result);
}

RDC::OCC::TopoDS_Solid^ RDC::OCC::TopoDS::Solid(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = (::TopoDS_Solid)::TopoDS::Solid(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Solid(_result);
}

RDC::OCC::TopoDS_CompSolid^ RDC::OCC::TopoDS::CompSolid(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_CompSolid* _result = new ::TopoDS_CompSolid();
    *_result = (::TopoDS_CompSolid)::TopoDS::CompSolid(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_CompSolid(_result);
}

RDC::OCC::TopoDS_Compound^ RDC::OCC::TopoDS::Compound(RDC::OCC::TopoDS_Shape^ S)
{
    ::TopoDS_Compound* _result = new ::TopoDS_Compound();
    *_result = (::TopoDS_Compound)::TopoDS::Compound(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew RDC::OCC::TopoDS_Compound(_result);
}



//---------------------------------------------------------------------
//  Class  TopoDS_FrozenShape
//---------------------------------------------------------------------

RDC::OCC::TopoDS_FrozenShape::TopoDS_FrozenShape()
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_FrozenShape();
}

RDC::OCC::TopoDS_FrozenShape::TopoDS_FrozenShape(System::String^ theMessage)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::TopoDS_FrozenShape(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::TopoDS_FrozenShape::TopoDS_FrozenShape(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::TopoDS_FrozenShape(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::TopoDS_FrozenShape::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::TopoDS_FrozenShape::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::TopoDS_FrozenShape::Raise()
{
    ::TopoDS_FrozenShape::Raise("");
}

RDC::OCC::TopoDS_FrozenShape^ RDC::OCC::TopoDS_FrozenShape::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::TopoDS_FrozenShape) _result = ::TopoDS_FrozenShape::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_FrozenShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_FrozenShape^ RDC::OCC::TopoDS_FrozenShape::NewInstance()
{
    Handle(::TopoDS_FrozenShape) _result = ::TopoDS_FrozenShape::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_FrozenShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_FrozenShape^ RDC::OCC::TopoDS_FrozenShape::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::TopoDS_FrozenShape) _result = ::TopoDS_FrozenShape::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_FrozenShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_FrozenShape^ RDC::OCC::TopoDS_FrozenShape::CreateDowncasted(::TopoDS_FrozenShape* instance)
{
    return gcnew RDC::OCC::TopoDS_FrozenShape( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_LockedShape
//---------------------------------------------------------------------

RDC::OCC::TopoDS_LockedShape::TopoDS_LockedShape()
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_LockedShape();
}

RDC::OCC::TopoDS_LockedShape::TopoDS_LockedShape(System::String^ theMessage)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::TopoDS_LockedShape(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::TopoDS_LockedShape::TopoDS_LockedShape(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::TopoDS_LockedShape(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::TopoDS_LockedShape::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::TopoDS_LockedShape::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::TopoDS_LockedShape::Raise()
{
    ::TopoDS_LockedShape::Raise("");
}

RDC::OCC::TopoDS_LockedShape^ RDC::OCC::TopoDS_LockedShape::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::TopoDS_LockedShape) _result = ::TopoDS_LockedShape::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_LockedShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_LockedShape^ RDC::OCC::TopoDS_LockedShape::NewInstance()
{
    Handle(::TopoDS_LockedShape) _result = ::TopoDS_LockedShape::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_LockedShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_LockedShape^ RDC::OCC::TopoDS_LockedShape::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::TopoDS_LockedShape) _result = ::TopoDS_LockedShape::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_LockedShape::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_LockedShape^ RDC::OCC::TopoDS_LockedShape::CreateDowncasted(::TopoDS_LockedShape* instance)
{
    return gcnew RDC::OCC::TopoDS_LockedShape( instance );
}



//---------------------------------------------------------------------
//  Class  TopoDS_UnCompatibleShapes
//---------------------------------------------------------------------

RDC::OCC::TopoDS_UnCompatibleShapes::TopoDS_UnCompatibleShapes()
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopoDS_UnCompatibleShapes();
}

RDC::OCC::TopoDS_UnCompatibleShapes::TopoDS_UnCompatibleShapes(System::String^ theMessage)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::TopoDS_UnCompatibleShapes(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::TopoDS_UnCompatibleShapes::TopoDS_UnCompatibleShapes(System::String^ theMessage, System::String^ theStackTrace)
    : RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::TopoDS_UnCompatibleShapes(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::TopoDS_UnCompatibleShapes::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::TopoDS_UnCompatibleShapes::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::TopoDS_UnCompatibleShapes::Raise()
{
    ::TopoDS_UnCompatibleShapes::Raise("");
}

RDC::OCC::TopoDS_UnCompatibleShapes^ RDC::OCC::TopoDS_UnCompatibleShapes::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::TopoDS_UnCompatibleShapes) _result = ::TopoDS_UnCompatibleShapes::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_UnCompatibleShapes::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_UnCompatibleShapes^ RDC::OCC::TopoDS_UnCompatibleShapes::NewInstance()
{
    Handle(::TopoDS_UnCompatibleShapes) _result = ::TopoDS_UnCompatibleShapes::NewInstance("");
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_UnCompatibleShapes::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_UnCompatibleShapes^ RDC::OCC::TopoDS_UnCompatibleShapes::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::TopoDS_UnCompatibleShapes) _result = ::TopoDS_UnCompatibleShapes::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : RDC::OCC::TopoDS_UnCompatibleShapes::CreateDowncasted(_result.get());
}

RDC::OCC::TopoDS_UnCompatibleShapes^ RDC::OCC::TopoDS_UnCompatibleShapes::CreateDowncasted(::TopoDS_UnCompatibleShapes* instance)
{
    return gcnew RDC::OCC::TopoDS_UnCompatibleShapes( instance );
}



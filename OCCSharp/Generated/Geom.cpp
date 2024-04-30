﻿// Generated wrapper code for package Geom

#include "OcctPCH.h"
#include "Geom.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "gp.h"
#include "GeomAbs.h"
#include "TColgp.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  Geom_SequenceOfBSplineSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_SequenceOfBSplineSurface::Geom_SequenceOfBSplineSurface()
	: RDC::OCC::BaseClass<::Geom_SequenceOfBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom_SequenceOfBSplineSurface();
}

RDC::OCC::Geom_SequenceOfBSplineSurface::Geom_SequenceOfBSplineSurface(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
	: RDC::OCC::BaseClass<::Geom_SequenceOfBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom_SequenceOfBSplineSurface(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int RDC::OCC::Geom_SequenceOfBSplineSurface::Size()
{
	int _result = ((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::Geom_SequenceOfBSplineSurface::Length()
{
	int _result = ((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::Geom_SequenceOfBSplineSurface::Lower()
{
	int _result = ((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::Geom_SequenceOfBSplineSurface::Upper()
{
	int _result = ((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::Geom_SequenceOfBSplineSurface::IsEmpty()
{
	bool _result = ((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::Geom_SequenceOfBSplineSurface::Reverse()
{
	((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Reverse();
}

void RDC::OCC::Geom_SequenceOfBSplineSurface::Exchange(int I, int J)
{
	((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::Geom_SequenceOfBSplineSurface::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::Geom_SequenceOfBSplineSurface::Clear()
{
	((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Clear(0L);
}

RDC::OCC::Geom_SequenceOfBSplineSurface^ RDC::OCC::Geom_SequenceOfBSplineSurface::Assign(RDC::OCC::Geom_SequenceOfBSplineSurface^ theOther)
{
	::Geom_SequenceOfBSplineSurface* _result = new ::Geom_SequenceOfBSplineSurface();
	*_result = ((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Assign(*(::Geom_SequenceOfBSplineSurface*)theOther->NativeInstance);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Geom_SequenceOfBSplineSurface(_result);
}

void RDC::OCC::Geom_SequenceOfBSplineSurface::Remove(RDC::OCC::Geom_SequenceOfBSplineSurface::Iterator^ thePosition)
{
	((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Remove(*(::Geom_SequenceOfBSplineSurface::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::Geom_SequenceOfBSplineSurface::Append(RDC::OCC::Geom_BSplineSurface^ theItem)
{
	((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Append(Handle(::Geom_BSplineSurface)(theItem->NativeInstance));
}

void RDC::OCC::Geom_SequenceOfBSplineSurface::Prepend(RDC::OCC::Geom_BSplineSurface^ theItem)
{
	((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Prepend(Handle(::Geom_BSplineSurface)(theItem->NativeInstance));
}

void RDC::OCC::Geom_SequenceOfBSplineSurface::InsertBefore(int theIndex, RDC::OCC::Geom_BSplineSurface^ theItem)
{
	((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->InsertBefore(theIndex, Handle(::Geom_BSplineSurface)(theItem->NativeInstance));
}

void RDC::OCC::Geom_SequenceOfBSplineSurface::InsertAfter(RDC::OCC::Geom_SequenceOfBSplineSurface::Iterator^ thePosition, RDC::OCC::Geom_BSplineSurface^ theItem)
{
	((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->InsertAfter(*(::Geom_SequenceOfBSplineSurface::Iterator*)thePosition->NativeInstance, Handle(::Geom_BSplineSurface)(theItem->NativeInstance));
}

void RDC::OCC::Geom_SequenceOfBSplineSurface::Split(int theIndex, RDC::OCC::Geom_SequenceOfBSplineSurface^ theSeq)
{
	((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Split(theIndex, *(::Geom_SequenceOfBSplineSurface*)theSeq->NativeInstance);
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_SequenceOfBSplineSurface::First()
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_SequenceOfBSplineSurface::ChangeFirst()
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->ChangeFirst();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_SequenceOfBSplineSurface::Last()
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_SequenceOfBSplineSurface::ChangeLast()
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->ChangeLast();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_SequenceOfBSplineSurface::Value(int theIndex)
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->Value(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_SequenceOfBSplineSurface::ChangeValue(int theIndex)
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->ChangeValue(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_SequenceOfBSplineSurface::SetValue(int theIndex, RDC::OCC::Geom_BSplineSurface^ theItem)
{
	((::Geom_SequenceOfBSplineSurface*)_NativeInstance)->SetValue(theIndex, Handle(::Geom_BSplineSurface)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<RDC::OCC::Geom_BSplineSurface^>^ RDC::OCC::Geom_SequenceOfBSplineSurface::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Geom_BSplineSurface^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Geom_SequenceOfBSplineSurface::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Geom_BSplineSurface^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Geom_SequenceOfBSplineSurface::Iterator
//---------------------------------------------------------------------

RDC::OCC::Geom_SequenceOfBSplineSurface::Iterator::Iterator()
	: RDC::OCC::BaseClass<::Geom_SequenceOfBSplineSurface::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom_SequenceOfBSplineSurface::Iterator();
}

bool RDC::OCC::Geom_SequenceOfBSplineSurface::Iterator::More()
{
	bool _result = ((::Geom_SequenceOfBSplineSurface::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::Geom_SequenceOfBSplineSurface::Iterator::Next()
{
	((::Geom_SequenceOfBSplineSurface::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_SequenceOfBSplineSurface::Iterator::Value()
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_SequenceOfBSplineSurface::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_SequenceOfBSplineSurface::Iterator::ChangeValue()
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_SequenceOfBSplineSurface::Iterator*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

bool RDC::OCC::Geom_SequenceOfBSplineSurface::Iterator::IsEqual(RDC::OCC::Geom_SequenceOfBSplineSurface::Iterator^ theOther)
{
	bool _result = ((::Geom_SequenceOfBSplineSurface::Iterator*)_NativeInstance)->IsEqual(*(::Geom_SequenceOfBSplineSurface::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Geom_SequenceOfBSplineSurface::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::Geom_SequenceOfBSplineSurface::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  Geom_Geometry
//---------------------------------------------------------------------

RDC::OCC::Geom_Geometry::Geom_Geometry()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom_Geometry::Mirror(RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_Geometry*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_Geometry::Mirror(RDC::OCC::Ax1 A1)
{
	pin_ptr<RDC::OCC::Ax1> pp_A1 = &A1;
	((::Geom_Geometry*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_A1);
}

void RDC::OCC::Geom_Geometry::Mirror(RDC::OCC::Ax2 A2)
{
	pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
	((::Geom_Geometry*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_A2);
}

void RDC::OCC::Geom_Geometry::Rotate(RDC::OCC::Ax1 A1, double Ang)
{
	pin_ptr<RDC::OCC::Ax1> pp_A1 = &A1;
	((::Geom_Geometry*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_A1, Ang);
}

void RDC::OCC::Geom_Geometry::Scale(RDC::OCC::Pnt P, double S)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_Geometry*)_NativeInstance)->Scale(*(gp_Pnt*)pp_P, S);
}

void RDC::OCC::Geom_Geometry::Translate(RDC::OCC::Vec V)
{
	pin_ptr<RDC::OCC::Vec> pp_V = &V;
	((::Geom_Geometry*)_NativeInstance)->Translate(*(gp_Vec*)pp_V);
}

void RDC::OCC::Geom_Geometry::Translate(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
	((::Geom_Geometry*)_NativeInstance)->Translate(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void RDC::OCC::Geom_Geometry::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_Geometry*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Geometry::Mirrored(RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	Handle(::Geom_Geometry) _result = ((::Geom_Geometry*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_P);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Geometry::Mirrored(RDC::OCC::Ax1 A1)
{
	pin_ptr<RDC::OCC::Ax1> pp_A1 = &A1;
	Handle(::Geom_Geometry) _result = ((::Geom_Geometry*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_A1);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Geometry::Mirrored(RDC::OCC::Ax2 A2)
{
	pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
	Handle(::Geom_Geometry) _result = ((::Geom_Geometry*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_A2);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Geometry::Rotated(RDC::OCC::Ax1 A1, double Ang)
{
	pin_ptr<RDC::OCC::Ax1> pp_A1 = &A1;
	Handle(::Geom_Geometry) _result = ((::Geom_Geometry*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_A1, Ang);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Geometry::Scaled(RDC::OCC::Pnt P, double S)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	Handle(::Geom_Geometry) _result = ((::Geom_Geometry*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_P, S);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Geometry::Transformed(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	Handle(::Geom_Geometry) _result = ((::Geom_Geometry*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Geometry::Translated(RDC::OCC::Vec V)
{
	pin_ptr<RDC::OCC::Vec> pp_V = &V;
	Handle(::Geom_Geometry) _result = ((::Geom_Geometry*)_NativeInstance)->Translated(*(gp_Vec*)pp_V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Geometry::Translated(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
	Handle(::Geom_Geometry) _result = ((::Geom_Geometry*)_NativeInstance)->Translated(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Geometry::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_Geometry*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Geometry::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_Geometry*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_Geometry::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_Geometry*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Geometry::CreateDowncasted(::Geom_Geometry* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom_AxisPlacement)))
		return RDC::OCC::Geom_AxisPlacement::CreateDowncasted((::Geom_AxisPlacement*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_Curve)))
		return RDC::OCC::Geom_Curve::CreateDowncasted((::Geom_Curve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_Surface)))
		return RDC::OCC::Geom_Surface::CreateDowncasted((::Geom_Surface*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_Point)))
		return RDC::OCC::Geom_Point::CreateDowncasted((::Geom_Point*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_Vector)))
		return RDC::OCC::Geom_Vector::CreateDowncasted((::Geom_Vector*)instance);

	return gcnew RDC::OCC::Geom_Geometry(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_AxisPlacement
//---------------------------------------------------------------------

RDC::OCC::Geom_AxisPlacement::Geom_AxisPlacement()
	: RDC::OCC::Geom_Geometry(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom_AxisPlacement::SetAxis(RDC::OCC::Ax1 A1)
{
	pin_ptr<RDC::OCC::Ax1> pp_A1 = &A1;
	((::Geom_AxisPlacement*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_A1);
}

void RDC::OCC::Geom_AxisPlacement::SetDirection(RDC::OCC::Dir V)
{
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	((::Geom_AxisPlacement*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_V);
}

void RDC::OCC::Geom_AxisPlacement::SetLocation(RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_AxisPlacement*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_P);
}

double RDC::OCC::Geom_AxisPlacement::Angle(RDC::OCC::Geom_AxisPlacement^ Other)
{
	double _result = ((::Geom_AxisPlacement*)_NativeInstance)->Angle(Handle(::Geom_AxisPlacement)(Other->NativeInstance));
	return _result;
}

RDC::OCC::Ax1 RDC::OCC::Geom_AxisPlacement::Axis()
{
	::gp_Ax1 _nativeResult = ((::Geom_AxisPlacement*)_NativeInstance)->Axis();
	return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::Geom_AxisPlacement::Direction()
{
	::gp_Dir _nativeResult = ((::Geom_AxisPlacement*)_NativeInstance)->Direction();
	return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_AxisPlacement::Location()
{
	::gp_Pnt _nativeResult = ((::Geom_AxisPlacement*)_NativeInstance)->Location();
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Geom_AxisPlacement^ RDC::OCC::Geom_AxisPlacement::CreateDowncasted(::Geom_AxisPlacement* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom_Axis1Placement)))
		return RDC::OCC::Geom_Axis1Placement::CreateDowncasted((::Geom_Axis1Placement*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_Axis2Placement)))
		return RDC::OCC::Geom_Axis2Placement::CreateDowncasted((::Geom_Axis2Placement*)instance);

	return gcnew RDC::OCC::Geom_AxisPlacement(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Axis1Placement
//---------------------------------------------------------------------

RDC::OCC::Geom_Axis1Placement::Geom_Axis1Placement(RDC::OCC::Ax1 A1)
	: RDC::OCC::Geom_AxisPlacement(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax1> pp_A1 = &A1;
	NativeInstance = new ::Geom_Axis1Placement(*(gp_Ax1*)pp_A1);
}

RDC::OCC::Geom_Axis1Placement::Geom_Axis1Placement(RDC::OCC::Pnt P, RDC::OCC::Dir V)
	: RDC::OCC::Geom_AxisPlacement(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	NativeInstance = new ::Geom_Axis1Placement(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_V);
}

RDC::OCC::Ax1 RDC::OCC::Geom_Axis1Placement::Ax1()
{
	::gp_Ax1 _nativeResult = ((::Geom_Axis1Placement*)_NativeInstance)->Ax1();
	return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::Geom_Axis1Placement::Reverse()
{
	((::Geom_Axis1Placement*)_NativeInstance)->Reverse();
}

RDC::OCC::Geom_Axis1Placement^ RDC::OCC::Geom_Axis1Placement::Reversed()
{
	Handle(::Geom_Axis1Placement) _result = ((::Geom_Axis1Placement*)_NativeInstance)->Reversed();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Axis1Placement::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Axis1Placement::SetDirection(RDC::OCC::Dir V)
{
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	((::Geom_Axis1Placement*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_V);
}

void RDC::OCC::Geom_Axis1Placement::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_Axis1Placement*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Axis1Placement::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_Axis1Placement*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Axis1Placement^ RDC::OCC::Geom_Axis1Placement::CreateDowncasted(::Geom_Axis1Placement* instance)
{
	return gcnew RDC::OCC::Geom_Axis1Placement(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Axis2Placement
//---------------------------------------------------------------------

RDC::OCC::Geom_Axis2Placement::Geom_Axis2Placement(RDC::OCC::Ax2 A2)
	: RDC::OCC::Geom_AxisPlacement(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
	NativeInstance = new ::Geom_Axis2Placement(*(gp_Ax2*)pp_A2);
}

RDC::OCC::Geom_Axis2Placement::Geom_Axis2Placement(RDC::OCC::Pnt P, RDC::OCC::Dir N, RDC::OCC::Dir Vx)
	: RDC::OCC::Geom_AxisPlacement(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Dir> pp_N = &N;
	pin_ptr<RDC::OCC::Dir> pp_Vx = &Vx;
	NativeInstance = new ::Geom_Axis2Placement(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_N, *(gp_Dir*)pp_Vx);
}

void RDC::OCC::Geom_Axis2Placement::SetAx2(RDC::OCC::Ax2 A2)
{
	pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
	((::Geom_Axis2Placement*)_NativeInstance)->SetAx2(*(gp_Ax2*)pp_A2);
}

void RDC::OCC::Geom_Axis2Placement::SetDirection(RDC::OCC::Dir V)
{
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	((::Geom_Axis2Placement*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_V);
}

void RDC::OCC::Geom_Axis2Placement::SetXDirection(RDC::OCC::Dir Vx)
{
	pin_ptr<RDC::OCC::Dir> pp_Vx = &Vx;
	((::Geom_Axis2Placement*)_NativeInstance)->SetXDirection(*(gp_Dir*)pp_Vx);
}

void RDC::OCC::Geom_Axis2Placement::SetYDirection(RDC::OCC::Dir Vy)
{
	pin_ptr<RDC::OCC::Dir> pp_Vy = &Vy;
	((::Geom_Axis2Placement*)_NativeInstance)->SetYDirection(*(gp_Dir*)pp_Vy);
}

RDC::OCC::Ax2 RDC::OCC::Geom_Axis2Placement::Ax2()
{
	::gp_Ax2 _nativeResult = ((::Geom_Axis2Placement*)_NativeInstance)->Ax2();
	return RDC::OCC::Ax2(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::Geom_Axis2Placement::XDirection()
{
	::gp_Dir _nativeResult = ((::Geom_Axis2Placement*)_NativeInstance)->XDirection();
	return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Dir RDC::OCC::Geom_Axis2Placement::YDirection()
{
	::gp_Dir _nativeResult = ((::Geom_Axis2Placement*)_NativeInstance)->YDirection();
	return RDC::OCC::Dir(_nativeResult);
}

void RDC::OCC::Geom_Axis2Placement::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_Axis2Placement*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Axis2Placement::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_Axis2Placement*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Axis2Placement^ RDC::OCC::Geom_Axis2Placement::CreateDowncasted(::Geom_Axis2Placement* instance)
{
	return gcnew RDC::OCC::Geom_Axis2Placement(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Curve
//---------------------------------------------------------------------

RDC::OCC::Geom_Curve::Geom_Curve()
	: RDC::OCC::Geom_Geometry(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom_Curve::Reverse()
{
	((::Geom_Curve*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom_Curve::ReversedParameter(double U)
{
	double _result = ((::Geom_Curve*)_NativeInstance)->ReversedParameter(U);
	return _result;
}

double RDC::OCC::Geom_Curve::TransformedParameter(double U, RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	double _result = ((::Geom_Curve*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf*)pp_T);
	return _result;
}

double RDC::OCC::Geom_Curve::ParametricTransformation(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	double _result = ((::Geom_Curve*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_Curve::Reversed()
{
	Handle(::Geom_Curve) _result = ((::Geom_Curve*)_NativeInstance)->Reversed();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

double RDC::OCC::Geom_Curve::FirstParameter()
{
	double _result = ((::Geom_Curve*)_NativeInstance)->FirstParameter();
	return _result;
}

double RDC::OCC::Geom_Curve::LastParameter()
{
	double _result = ((::Geom_Curve*)_NativeInstance)->LastParameter();
	return _result;
}

bool RDC::OCC::Geom_Curve::IsClosed()
{
	bool _result = ((::Geom_Curve*)_NativeInstance)->IsClosed();
	return _result;
}

bool RDC::OCC::Geom_Curve::IsPeriodic()
{
	bool _result = ((::Geom_Curve*)_NativeInstance)->IsPeriodic();
	return _result;
}

double RDC::OCC::Geom_Curve::Period()
{
	double _result = ((::Geom_Curve*)_NativeInstance)->Period();
	return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_Curve::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_Curve*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

bool RDC::OCC::Geom_Curve::IsCN(int N)
{
	bool _result = ((::Geom_Curve*)_NativeInstance)->IsCN(N);
	return _result;
}

void RDC::OCC::Geom_Curve::D0(double U, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_Curve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_Curve::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	((::Geom_Curve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::Geom_Curve::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	((::Geom_Curve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::Geom_Curve::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
	((::Geom_Curve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::Geom_Curve::DN(double U, int N)
{
	::gp_Vec _nativeResult = ((::Geom_Curve*)_NativeInstance)->DN(U, N);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_Curve::Value(double U)
{
	::gp_Pnt _nativeResult = ((::Geom_Curve*)_NativeInstance)->Value(U);
	return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::Geom_Curve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_Curve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_Curve::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_Curve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_Curve::CreateDowncasted(::Geom_Curve* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom_BoundedCurve)))
		return RDC::OCC::Geom_BoundedCurve::CreateDowncasted((::Geom_BoundedCurve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_Conic)))
		return RDC::OCC::Geom_Conic::CreateDowncasted((::Geom_Conic*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_Line)))
		return RDC::OCC::Geom_Line::CreateDowncasted((::Geom_Line*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_OffsetCurve)))
		return RDC::OCC::Geom_OffsetCurve::CreateDowncasted((::Geom_OffsetCurve*)instance);

	return gcnew RDC::OCC::Geom_Curve(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_BoundedCurve
//---------------------------------------------------------------------

RDC::OCC::Geom_BoundedCurve::Geom_BoundedCurve()
	: RDC::OCC::Geom_Curve(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::Pnt RDC::OCC::Geom_BoundedCurve::EndPoint()
{
	::gp_Pnt _nativeResult = ((::Geom_BoundedCurve*)_NativeInstance)->EndPoint();
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_BoundedCurve::StartPoint()
{
	::gp_Pnt _nativeResult = ((::Geom_BoundedCurve*)_NativeInstance)->StartPoint();
	return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::Geom_BoundedCurve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_BoundedCurve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_BoundedCurve::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_BoundedCurve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_BoundedCurve^ RDC::OCC::Geom_BoundedCurve::CreateDowncasted(::Geom_BoundedCurve* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom_BezierCurve)))
		return RDC::OCC::Geom_BezierCurve::CreateDowncasted((::Geom_BezierCurve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_BSplineCurve)))
		return RDC::OCC::Geom_BSplineCurve::CreateDowncasted((::Geom_BSplineCurve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_TrimmedCurve)))
		return RDC::OCC::Geom_TrimmedCurve::CreateDowncasted((::Geom_TrimmedCurve*)instance);

	return gcnew RDC::OCC::Geom_BoundedCurve(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_BezierCurve
//---------------------------------------------------------------------

RDC::OCC::Geom_BezierCurve::Geom_BezierCurve(RDC::OCC::TColgp_Array1OfPnt^ CurvePoles)
	: RDC::OCC::Geom_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BezierCurve(*(::TColgp_Array1OfPnt*)CurvePoles->NativeInstance);
}

RDC::OCC::Geom_BezierCurve::Geom_BezierCurve(RDC::OCC::TColgp_Array1OfPnt^ CurvePoles, RDC::OCC::TColStd_Array1OfReal^ PoleWeights)
	: RDC::OCC::Geom_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BezierCurve(*(::TColgp_Array1OfPnt*)CurvePoles->NativeInstance, *(::TColStd_Array1OfReal*)PoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BezierCurve::Increase(int Degree)
{
	((::Geom_BezierCurve*)_NativeInstance)->Increase(Degree);
}

void RDC::OCC::Geom_BezierCurve::InsertPoleAfter(int Index, RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BezierCurve*)_NativeInstance)->InsertPoleAfter(Index, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_BezierCurve::InsertPoleAfter(int Index, RDC::OCC::Pnt P, double Weight)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BezierCurve*)_NativeInstance)->InsertPoleAfter(Index, *(gp_Pnt*)pp_P, Weight);
}

void RDC::OCC::Geom_BezierCurve::InsertPoleBefore(int Index, RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BezierCurve*)_NativeInstance)->InsertPoleBefore(Index, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_BezierCurve::InsertPoleBefore(int Index, RDC::OCC::Pnt P, double Weight)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BezierCurve*)_NativeInstance)->InsertPoleBefore(Index, *(gp_Pnt*)pp_P, Weight);
}

void RDC::OCC::Geom_BezierCurve::RemovePole(int Index)
{
	((::Geom_BezierCurve*)_NativeInstance)->RemovePole(Index);
}

void RDC::OCC::Geom_BezierCurve::Reverse()
{
	((::Geom_BezierCurve*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom_BezierCurve::ReversedParameter(double U)
{
	double _result = ((::Geom_BezierCurve*)_NativeInstance)->ReversedParameter(U);
	return _result;
}

void RDC::OCC::Geom_BezierCurve::Segment(double U1, double U2)
{
	((::Geom_BezierCurve*)_NativeInstance)->Segment(U1, U2);
}

void RDC::OCC::Geom_BezierCurve::SetPole(int Index, RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BezierCurve*)_NativeInstance)->SetPole(Index, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_BezierCurve::SetPole(int Index, RDC::OCC::Pnt P, double Weight)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BezierCurve*)_NativeInstance)->SetPole(Index, *(gp_Pnt*)pp_P, Weight);
}

void RDC::OCC::Geom_BezierCurve::SetWeight(int Index, double Weight)
{
	((::Geom_BezierCurve*)_NativeInstance)->SetWeight(Index, Weight);
}

bool RDC::OCC::Geom_BezierCurve::IsClosed()
{
	bool _result = ((::Geom_BezierCurve*)_NativeInstance)->IsClosed();
	return _result;
}

bool RDC::OCC::Geom_BezierCurve::IsCN(int N)
{
	bool _result = ((::Geom_BezierCurve*)_NativeInstance)->IsCN(N);
	return _result;
}

bool RDC::OCC::Geom_BezierCurve::IsPeriodic()
{
	bool _result = ((::Geom_BezierCurve*)_NativeInstance)->IsPeriodic();
	return _result;
}

bool RDC::OCC::Geom_BezierCurve::IsRational()
{
	bool _result = ((::Geom_BezierCurve*)_NativeInstance)->IsRational();
	return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_BezierCurve::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_BezierCurve*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::Geom_BezierCurve::Degree()
{
	int _result = ((::Geom_BezierCurve*)_NativeInstance)->Degree();
	return _result;
}

void RDC::OCC::Geom_BezierCurve::D0(double U, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BezierCurve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_BezierCurve::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	((::Geom_BezierCurve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::Geom_BezierCurve::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	((::Geom_BezierCurve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::Geom_BezierCurve::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
	((::Geom_BezierCurve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::Geom_BezierCurve::DN(double U, int N)
{
	::gp_Vec _nativeResult = ((::Geom_BezierCurve*)_NativeInstance)->DN(U, N);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_BezierCurve::StartPoint()
{
	::gp_Pnt _nativeResult = ((::Geom_BezierCurve*)_NativeInstance)->StartPoint();
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_BezierCurve::EndPoint()
{
	::gp_Pnt _nativeResult = ((::Geom_BezierCurve*)_NativeInstance)->EndPoint();
	return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::Geom_BezierCurve::FirstParameter()
{
	double _result = ((::Geom_BezierCurve*)_NativeInstance)->FirstParameter();
	return _result;
}

double RDC::OCC::Geom_BezierCurve::LastParameter()
{
	double _result = ((::Geom_BezierCurve*)_NativeInstance)->LastParameter();
	return _result;
}

int RDC::OCC::Geom_BezierCurve::NbPoles()
{
	int _result = ((::Geom_BezierCurve*)_NativeInstance)->NbPoles();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::Geom_BezierCurve::Pole(int Index)
{
	::gp_Pnt _nativeResult = ((::Geom_BezierCurve*)_NativeInstance)->Pole(Index);
	return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::Geom_BezierCurve::Poles(RDC::OCC::TColgp_Array1OfPnt^ P)
{
	((::Geom_BezierCurve*)_NativeInstance)->Poles(*(::TColgp_Array1OfPnt*)P->NativeInstance);
}

RDC::OCC::TColgp_Array1OfPnt^ RDC::OCC::Geom_BezierCurve::Poles()
{
	::TColgp_Array1OfPnt* _result = new ::TColgp_Array1OfPnt();
	*_result = (::TColgp_Array1OfPnt)((::Geom_BezierCurve*)_NativeInstance)->Poles();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfPnt(_result);
}

double RDC::OCC::Geom_BezierCurve::Weight(int Index)
{
	double _result = ((::Geom_BezierCurve*)_NativeInstance)->Weight(Index);
	return _result;
}

void RDC::OCC::Geom_BezierCurve::Weights(RDC::OCC::TColStd_Array1OfReal^ W)
{
	((::Geom_BezierCurve*)_NativeInstance)->Weights(*(::TColStd_Array1OfReal*)W->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::Geom_BezierCurve::Weights()
{
	const ::TColStd_Array1OfReal* _result = ((::Geom_BezierCurve*)_NativeInstance)->Weights();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal((::TColStd_Array1OfReal*)_result);
}

void RDC::OCC::Geom_BezierCurve::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_BezierCurve*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

int RDC::OCC::Geom_BezierCurve::MaxDegree()
{
	int _result = ::Geom_BezierCurve::MaxDegree();
	return _result;
}

void RDC::OCC::Geom_BezierCurve::Resolution(double Tolerance3D, double% UTolerance)
{
	pin_ptr<double> pp_UTolerance = &UTolerance;
	((::Geom_BezierCurve*)_NativeInstance)->Resolution(Tolerance3D, *(double*)pp_UTolerance);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_BezierCurve::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_BezierCurve*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_BezierCurve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_BezierCurve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_BezierCurve::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_BezierCurve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_BezierCurve^ RDC::OCC::Geom_BezierCurve::CreateDowncasted(::Geom_BezierCurve* instance)
{
	return gcnew RDC::OCC::Geom_BezierCurve(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Surface
//---------------------------------------------------------------------

RDC::OCC::Geom_Surface::Geom_Surface()
	: RDC::OCC::Geom_Geometry(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom_Surface::UReverse()
{
	((::Geom_Surface*)_NativeInstance)->UReverse();
}

RDC::OCC::Geom_Surface^ RDC::OCC::Geom_Surface::UReversed()
{
	Handle(::Geom_Surface) _result = ((::Geom_Surface*)_NativeInstance)->UReversed();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}

double RDC::OCC::Geom_Surface::UReversedParameter(double U)
{
	double _result = ((::Geom_Surface*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

void RDC::OCC::Geom_Surface::VReverse()
{
	((::Geom_Surface*)_NativeInstance)->VReverse();
}

RDC::OCC::Geom_Surface^ RDC::OCC::Geom_Surface::VReversed()
{
	Handle(::Geom_Surface) _result = ((::Geom_Surface*)_NativeInstance)->VReversed();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}

double RDC::OCC::Geom_Surface::VReversedParameter(double V)
{
	double _result = ((::Geom_Surface*)_NativeInstance)->VReversedParameter(V);
	return _result;
}

void RDC::OCC::Geom_Surface::TransformParameters(double% U, double% V, RDC::OCC::Trsf T)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_Surface*)_NativeInstance)->TransformParameters(*(double*)pp_U, *(double*)pp_V, *(gp_Trsf*)pp_T);
}

RDC::OCC::gp_GTrsf2d^ RDC::OCC::Geom_Surface::ParametricTransformation(RDC::OCC::Trsf T)
{
	::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	*_result = ((::Geom_Surface*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf2d(_result);
}

void RDC::OCC::Geom_Surface::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::Geom_Surface*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

bool RDC::OCC::Geom_Surface::IsUClosed()
{
	bool _result = ((::Geom_Surface*)_NativeInstance)->IsUClosed();
	return _result;
}

bool RDC::OCC::Geom_Surface::IsVClosed()
{
	bool _result = ((::Geom_Surface*)_NativeInstance)->IsVClosed();
	return _result;
}

bool RDC::OCC::Geom_Surface::IsUPeriodic()
{
	bool _result = ((::Geom_Surface*)_NativeInstance)->IsUPeriodic();
	return _result;
}

double RDC::OCC::Geom_Surface::UPeriod()
{
	double _result = ((::Geom_Surface*)_NativeInstance)->UPeriod();
	return _result;
}

bool RDC::OCC::Geom_Surface::IsVPeriodic()
{
	bool _result = ((::Geom_Surface*)_NativeInstance)->IsVPeriodic();
	return _result;
}

double RDC::OCC::Geom_Surface::VPeriod()
{
	double _result = ((::Geom_Surface*)_NativeInstance)->VPeriod();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_Surface::UIso(double U)
{
	Handle(::Geom_Curve) _result = ((::Geom_Surface*)_NativeInstance)->UIso(U);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_Surface::VIso(double V)
{
	Handle(::Geom_Curve) _result = ((::Geom_Surface*)_NativeInstance)->VIso(V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_Surface::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_Surface*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

bool RDC::OCC::Geom_Surface::IsCNu(int N)
{
	bool _result = ((::Geom_Surface*)_NativeInstance)->IsCNu(N);
	return _result;
}

bool RDC::OCC::Geom_Surface::IsCNv(int N)
{
	bool _result = ((::Geom_Surface*)_NativeInstance)->IsCNv(N);
	return _result;
}

void RDC::OCC::Geom_Surface::D0(double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_Surface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_Surface::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_Surface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_Surface::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_Surface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_Surface::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_Surface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_Surface::DN(double U, double V, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_Surface*)_NativeInstance)->DN(U, V, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_Surface::Value(double U, double V)
{
	::gp_Pnt _nativeResult = ((::Geom_Surface*)_NativeInstance)->Value(U, V);
	return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::Geom_Surface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_Surface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_Surface::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_Surface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_Surface^ RDC::OCC::Geom_Surface::CreateDowncasted(::Geom_Surface* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom_BoundedSurface)))
		return RDC::OCC::Geom_BoundedSurface::CreateDowncasted((::Geom_BoundedSurface*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_ElementarySurface)))
		return RDC::OCC::Geom_ElementarySurface::CreateDowncasted((::Geom_ElementarySurface*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_OffsetSurface)))
		return RDC::OCC::Geom_OffsetSurface::CreateDowncasted((::Geom_OffsetSurface*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_SweptSurface)))
		return RDC::OCC::Geom_SweptSurface::CreateDowncasted((::Geom_SweptSurface*)instance);

	return gcnew RDC::OCC::Geom_Surface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_BoundedSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_BoundedSurface::Geom_BoundedSurface()
	: RDC::OCC::Geom_Surface(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::Geom_BoundedSurface^ RDC::OCC::Geom_BoundedSurface::CreateDowncasted(::Geom_BoundedSurface* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom_BezierSurface)))
		return RDC::OCC::Geom_BezierSurface::CreateDowncasted((::Geom_BezierSurface*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_BSplineSurface)))
		return RDC::OCC::Geom_BSplineSurface::CreateDowncasted((::Geom_BSplineSurface*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_RectangularTrimmedSurface)))
		return RDC::OCC::Geom_RectangularTrimmedSurface::CreateDowncasted((::Geom_RectangularTrimmedSurface*)instance);

	return gcnew RDC::OCC::Geom_BoundedSurface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_BezierSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_BezierSurface::Geom_BezierSurface(RDC::OCC::TColgp_Array2OfPnt^ SurfacePoles)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BezierSurface(*(::TColgp_Array2OfPnt*)SurfacePoles->NativeInstance);
}

RDC::OCC::Geom_BezierSurface::Geom_BezierSurface(RDC::OCC::TColgp_Array2OfPnt^ SurfacePoles, RDC::OCC::TColStd_Array2OfReal^ PoleWeights)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BezierSurface(*(::TColgp_Array2OfPnt*)SurfacePoles->NativeInstance, *(::TColStd_Array2OfReal*)PoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::ExchangeUV()
{
	((::Geom_BezierSurface*)_NativeInstance)->ExchangeUV();
}

void RDC::OCC::Geom_BezierSurface::Increase(int UDeg, int VDeg)
{
	((::Geom_BezierSurface*)_NativeInstance)->Increase(UDeg, VDeg);
}

void RDC::OCC::Geom_BezierSurface::InsertPoleColAfter(int VIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles)
{
	((::Geom_BezierSurface*)_NativeInstance)->InsertPoleColAfter(VIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::InsertPoleColAfter(int VIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles, RDC::OCC::TColStd_Array1OfReal^ CPoleWeights)
{
	((::Geom_BezierSurface*)_NativeInstance)->InsertPoleColAfter(VIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance, *(::TColStd_Array1OfReal*)CPoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::InsertPoleColBefore(int VIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles)
{
	((::Geom_BezierSurface*)_NativeInstance)->InsertPoleColBefore(VIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::InsertPoleColBefore(int VIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles, RDC::OCC::TColStd_Array1OfReal^ CPoleWeights)
{
	((::Geom_BezierSurface*)_NativeInstance)->InsertPoleColBefore(VIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance, *(::TColStd_Array1OfReal*)CPoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::InsertPoleRowAfter(int UIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles)
{
	((::Geom_BezierSurface*)_NativeInstance)->InsertPoleRowAfter(UIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::InsertPoleRowAfter(int UIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles, RDC::OCC::TColStd_Array1OfReal^ CPoleWeights)
{
	((::Geom_BezierSurface*)_NativeInstance)->InsertPoleRowAfter(UIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance, *(::TColStd_Array1OfReal*)CPoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::InsertPoleRowBefore(int UIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles)
{
	((::Geom_BezierSurface*)_NativeInstance)->InsertPoleRowBefore(UIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::InsertPoleRowBefore(int UIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles, RDC::OCC::TColStd_Array1OfReal^ CPoleWeights)
{
	((::Geom_BezierSurface*)_NativeInstance)->InsertPoleRowBefore(UIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance, *(::TColStd_Array1OfReal*)CPoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::RemovePoleCol(int VIndex)
{
	((::Geom_BezierSurface*)_NativeInstance)->RemovePoleCol(VIndex);
}

void RDC::OCC::Geom_BezierSurface::RemovePoleRow(int UIndex)
{
	((::Geom_BezierSurface*)_NativeInstance)->RemovePoleRow(UIndex);
}

void RDC::OCC::Geom_BezierSurface::Segment(double U1, double U2, double V1, double V2)
{
	((::Geom_BezierSurface*)_NativeInstance)->Segment(U1, U2, V1, V2);
}

void RDC::OCC::Geom_BezierSurface::SetPole(int UIndex, int VIndex, RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BezierSurface*)_NativeInstance)->SetPole(UIndex, VIndex, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_BezierSurface::SetPole(int UIndex, int VIndex, RDC::OCC::Pnt P, double Weight)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BezierSurface*)_NativeInstance)->SetPole(UIndex, VIndex, *(gp_Pnt*)pp_P, Weight);
}

void RDC::OCC::Geom_BezierSurface::SetPoleCol(int VIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles)
{
	((::Geom_BezierSurface*)_NativeInstance)->SetPoleCol(VIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::SetPoleCol(int VIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles, RDC::OCC::TColStd_Array1OfReal^ CPoleWeights)
{
	((::Geom_BezierSurface*)_NativeInstance)->SetPoleCol(VIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance, *(::TColStd_Array1OfReal*)CPoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::SetPoleRow(int UIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles)
{
	((::Geom_BezierSurface*)_NativeInstance)->SetPoleRow(UIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::SetPoleRow(int UIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles, RDC::OCC::TColStd_Array1OfReal^ CPoleWeights)
{
	((::Geom_BezierSurface*)_NativeInstance)->SetPoleRow(UIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance, *(::TColStd_Array1OfReal*)CPoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::SetWeight(int UIndex, int VIndex, double Weight)
{
	((::Geom_BezierSurface*)_NativeInstance)->SetWeight(UIndex, VIndex, Weight);
}

void RDC::OCC::Geom_BezierSurface::SetWeightCol(int VIndex, RDC::OCC::TColStd_Array1OfReal^ CPoleWeights)
{
	((::Geom_BezierSurface*)_NativeInstance)->SetWeightCol(VIndex, *(::TColStd_Array1OfReal*)CPoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::SetWeightRow(int UIndex, RDC::OCC::TColStd_Array1OfReal^ CPoleWeights)
{
	((::Geom_BezierSurface*)_NativeInstance)->SetWeightRow(UIndex, *(::TColStd_Array1OfReal*)CPoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BezierSurface::UReverse()
{
	((::Geom_BezierSurface*)_NativeInstance)->UReverse();
}

double RDC::OCC::Geom_BezierSurface::UReversedParameter(double U)
{
	double _result = ((::Geom_BezierSurface*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

void RDC::OCC::Geom_BezierSurface::VReverse()
{
	((::Geom_BezierSurface*)_NativeInstance)->VReverse();
}

double RDC::OCC::Geom_BezierSurface::VReversedParameter(double V)
{
	double _result = ((::Geom_BezierSurface*)_NativeInstance)->VReversedParameter(V);
	return _result;
}

void RDC::OCC::Geom_BezierSurface::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::Geom_BezierSurface*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_BezierSurface::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_BezierSurface*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

void RDC::OCC::Geom_BezierSurface::D0(double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BezierSurface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_BezierSurface::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_BezierSurface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_BezierSurface::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_BezierSurface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_BezierSurface::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_BezierSurface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_BezierSurface::DN(double U, double V, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_BezierSurface*)_NativeInstance)->DN(U, V, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

int RDC::OCC::Geom_BezierSurface::NbUPoles()
{
	int _result = ((::Geom_BezierSurface*)_NativeInstance)->NbUPoles();
	return _result;
}

int RDC::OCC::Geom_BezierSurface::NbVPoles()
{
	int _result = ((::Geom_BezierSurface*)_NativeInstance)->NbVPoles();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::Geom_BezierSurface::Pole(int UIndex, int VIndex)
{
	::gp_Pnt _nativeResult = ((::Geom_BezierSurface*)_NativeInstance)->Pole(UIndex, VIndex);
	return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::Geom_BezierSurface::Poles(RDC::OCC::TColgp_Array2OfPnt^ P)
{
	((::Geom_BezierSurface*)_NativeInstance)->Poles(*(::TColgp_Array2OfPnt*)P->NativeInstance);
}

RDC::OCC::TColgp_Array2OfPnt^ RDC::OCC::Geom_BezierSurface::Poles()
{
	::TColgp_Array2OfPnt* _result = new ::TColgp_Array2OfPnt();
	*_result = (::TColgp_Array2OfPnt)((::Geom_BezierSurface*)_NativeInstance)->Poles();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfPnt(_result);
}

int RDC::OCC::Geom_BezierSurface::UDegree()
{
	int _result = ((::Geom_BezierSurface*)_NativeInstance)->UDegree();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_BezierSurface::UIso(double U)
{
	Handle(::Geom_Curve) _result = ((::Geom_BezierSurface*)_NativeInstance)->UIso(U);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

int RDC::OCC::Geom_BezierSurface::VDegree()
{
	int _result = ((::Geom_BezierSurface*)_NativeInstance)->VDegree();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_BezierSurface::VIso(double V)
{
	Handle(::Geom_Curve) _result = ((::Geom_BezierSurface*)_NativeInstance)->VIso(V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

double RDC::OCC::Geom_BezierSurface::Weight(int UIndex, int VIndex)
{
	double _result = ((::Geom_BezierSurface*)_NativeInstance)->Weight(UIndex, VIndex);
	return _result;
}

void RDC::OCC::Geom_BezierSurface::Weights(RDC::OCC::TColStd_Array2OfReal^ W)
{
	((::Geom_BezierSurface*)_NativeInstance)->Weights(*(::TColStd_Array2OfReal*)W->NativeInstance);
}

RDC::OCC::TColStd_Array2OfReal^ RDC::OCC::Geom_BezierSurface::Weights()
{
	const ::TColStd_Array2OfReal* _result = ((::Geom_BezierSurface*)_NativeInstance)->Weights();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfReal((::TColStd_Array2OfReal*)_result);
}

bool RDC::OCC::Geom_BezierSurface::IsUClosed()
{
	bool _result = ((::Geom_BezierSurface*)_NativeInstance)->IsUClosed();
	return _result;
}

bool RDC::OCC::Geom_BezierSurface::IsVClosed()
{
	bool _result = ((::Geom_BezierSurface*)_NativeInstance)->IsVClosed();
	return _result;
}

bool RDC::OCC::Geom_BezierSurface::IsCNu(int N)
{
	bool _result = ((::Geom_BezierSurface*)_NativeInstance)->IsCNu(N);
	return _result;
}

bool RDC::OCC::Geom_BezierSurface::IsCNv(int N)
{
	bool _result = ((::Geom_BezierSurface*)_NativeInstance)->IsCNv(N);
	return _result;
}

bool RDC::OCC::Geom_BezierSurface::IsUPeriodic()
{
	bool _result = ((::Geom_BezierSurface*)_NativeInstance)->IsUPeriodic();
	return _result;
}

bool RDC::OCC::Geom_BezierSurface::IsVPeriodic()
{
	bool _result = ((::Geom_BezierSurface*)_NativeInstance)->IsVPeriodic();
	return _result;
}

bool RDC::OCC::Geom_BezierSurface::IsURational()
{
	bool _result = ((::Geom_BezierSurface*)_NativeInstance)->IsURational();
	return _result;
}

bool RDC::OCC::Geom_BezierSurface::IsVRational()
{
	bool _result = ((::Geom_BezierSurface*)_NativeInstance)->IsVRational();
	return _result;
}

void RDC::OCC::Geom_BezierSurface::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_BezierSurface*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

int RDC::OCC::Geom_BezierSurface::MaxDegree()
{
	int _result = ::Geom_BezierSurface::MaxDegree();
	return _result;
}

void RDC::OCC::Geom_BezierSurface::Resolution(double Tolerance3D, double% UTolerance, double% VTolerance)
{
	pin_ptr<double> pp_UTolerance = &UTolerance;
	pin_ptr<double> pp_VTolerance = &VTolerance;
	((::Geom_BezierSurface*)_NativeInstance)->Resolution(Tolerance3D, *(double*)pp_UTolerance, *(double*)pp_VTolerance);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_BezierSurface::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_BezierSurface*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_BezierSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_BezierSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_BezierSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_BezierSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_BezierSurface^ RDC::OCC::Geom_BezierSurface::CreateDowncasted(::Geom_BezierSurface* instance)
{
	return gcnew RDC::OCC::Geom_BezierSurface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_BSplineCurve
//---------------------------------------------------------------------

RDC::OCC::Geom_BSplineCurve::Geom_BSplineCurve(RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic)
	: RDC::OCC::Geom_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BSplineCurve(*(::TColgp_Array1OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, Periodic);
}

RDC::OCC::Geom_BSplineCurve::Geom_BSplineCurve(RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Multiplicities, int Degree)
	: RDC::OCC::Geom_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BSplineCurve(*(::TColgp_Array1OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, false);
}

RDC::OCC::Geom_BSplineCurve::Geom_BSplineCurve(RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic, bool CheckRational)
	: RDC::OCC::Geom_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BSplineCurve(*(::TColgp_Array1OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, Periodic, CheckRational);
}

RDC::OCC::Geom_BSplineCurve::Geom_BSplineCurve(RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic)
	: RDC::OCC::Geom_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BSplineCurve(*(::TColgp_Array1OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, Periodic, true);
}

RDC::OCC::Geom_BSplineCurve::Geom_BSplineCurve(RDC::OCC::TColgp_Array1OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Multiplicities, int Degree)
	: RDC::OCC::Geom_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BSplineCurve(*(::TColgp_Array1OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Multiplicities->NativeInstance, Degree, false, true);
}

void RDC::OCC::Geom_BSplineCurve::IncreaseDegree(int Degree)
{
	((::Geom_BSplineCurve*)_NativeInstance)->IncreaseDegree(Degree);
}

void RDC::OCC::Geom_BSplineCurve::IncreaseMultiplicity(int Index, int M)
{
	((::Geom_BSplineCurve*)_NativeInstance)->IncreaseMultiplicity(Index, M);
}

void RDC::OCC::Geom_BSplineCurve::IncreaseMultiplicity(int I1, int I2, int M)
{
	((::Geom_BSplineCurve*)_NativeInstance)->IncreaseMultiplicity(I1, I2, M);
}

void RDC::OCC::Geom_BSplineCurve::IncrementMultiplicity(int I1, int I2, int M)
{
	((::Geom_BSplineCurve*)_NativeInstance)->IncrementMultiplicity(I1, I2, M);
}

void RDC::OCC::Geom_BSplineCurve::InsertKnot(double U, int M, double ParametricTolerance, bool Add)
{
	((::Geom_BSplineCurve*)_NativeInstance)->InsertKnot(U, M, ParametricTolerance, Add);
}

void RDC::OCC::Geom_BSplineCurve::InsertKnot(double U, int M, double ParametricTolerance)
{
	((::Geom_BSplineCurve*)_NativeInstance)->InsertKnot(U, M, ParametricTolerance, true);
}

void RDC::OCC::Geom_BSplineCurve::InsertKnot(double U, int M)
{
	((::Geom_BSplineCurve*)_NativeInstance)->InsertKnot(U, M, 0., true);
}

void RDC::OCC::Geom_BSplineCurve::InsertKnot(double U)
{
	((::Geom_BSplineCurve*)_NativeInstance)->InsertKnot(U, 1, 0., true);
}

void RDC::OCC::Geom_BSplineCurve::InsertKnots(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double ParametricTolerance, bool Add)
{
	((::Geom_BSplineCurve*)_NativeInstance)->InsertKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, ParametricTolerance, Add);
}

void RDC::OCC::Geom_BSplineCurve::InsertKnots(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double ParametricTolerance)
{
	((::Geom_BSplineCurve*)_NativeInstance)->InsertKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, ParametricTolerance, false);
}

void RDC::OCC::Geom_BSplineCurve::InsertKnots(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults)
{
	((::Geom_BSplineCurve*)_NativeInstance)->InsertKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, 0., false);
}

bool RDC::OCC::Geom_BSplineCurve::RemoveKnot(int Index, int M, double Tolerance)
{
	bool _result = ((::Geom_BSplineCurve*)_NativeInstance)->RemoveKnot(Index, M, Tolerance);
	return _result;
}

void RDC::OCC::Geom_BSplineCurve::Reverse()
{
	((::Geom_BSplineCurve*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom_BSplineCurve::ReversedParameter(double U)
{
	double _result = ((::Geom_BSplineCurve*)_NativeInstance)->ReversedParameter(U);
	return _result;
}

void RDC::OCC::Geom_BSplineCurve::Segment(double U1, double U2, double theTolerance)
{
	((::Geom_BSplineCurve*)_NativeInstance)->Segment(U1, U2, theTolerance);
}

void RDC::OCC::Geom_BSplineCurve::Segment(double U1, double U2)
{
	((::Geom_BSplineCurve*)_NativeInstance)->Segment(U1, U2, ::Precision::PConfusion());
}

void RDC::OCC::Geom_BSplineCurve::SetKnot(int Index, double K)
{
	((::Geom_BSplineCurve*)_NativeInstance)->SetKnot(Index, K);
}

void RDC::OCC::Geom_BSplineCurve::SetKnots(RDC::OCC::TColStd_Array1OfReal^ K)
{
	((::Geom_BSplineCurve*)_NativeInstance)->SetKnots(*(::TColStd_Array1OfReal*)K->NativeInstance);
}

void RDC::OCC::Geom_BSplineCurve::SetKnot(int Index, double K, int M)
{
	((::Geom_BSplineCurve*)_NativeInstance)->SetKnot(Index, K, M);
}

void RDC::OCC::Geom_BSplineCurve::PeriodicNormalization(double% U)
{
	pin_ptr<double> pp_U = &U;
	((::Geom_BSplineCurve*)_NativeInstance)->PeriodicNormalization(*(double*)pp_U);
}

void RDC::OCC::Geom_BSplineCurve::SetPeriodic()
{
	((::Geom_BSplineCurve*)_NativeInstance)->SetPeriodic();
}

void RDC::OCC::Geom_BSplineCurve::SetOrigin(int Index)
{
	((::Geom_BSplineCurve*)_NativeInstance)->SetOrigin(Index);
}

void RDC::OCC::Geom_BSplineCurve::SetOrigin(double U, double Tol)
{
	((::Geom_BSplineCurve*)_NativeInstance)->SetOrigin(U, Tol);
}

void RDC::OCC::Geom_BSplineCurve::SetNotPeriodic()
{
	((::Geom_BSplineCurve*)_NativeInstance)->SetNotPeriodic();
}

void RDC::OCC::Geom_BSplineCurve::SetPole(int Index, RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BSplineCurve*)_NativeInstance)->SetPole(Index, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_BSplineCurve::SetPole(int Index, RDC::OCC::Pnt P, double Weight)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BSplineCurve*)_NativeInstance)->SetPole(Index, *(gp_Pnt*)pp_P, Weight);
}

void RDC::OCC::Geom_BSplineCurve::SetWeight(int Index, double Weight)
{
	((::Geom_BSplineCurve*)_NativeInstance)->SetWeight(Index, Weight);
}

void RDC::OCC::Geom_BSplineCurve::MovePoint(double U, RDC::OCC::Pnt P, int Index1, int Index2, int% FirstModifiedPole, int% LastModifiedPole)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<int> pp_FirstModifiedPole = &FirstModifiedPole;
	pin_ptr<int> pp_LastModifiedPole = &LastModifiedPole;
	((::Geom_BSplineCurve*)_NativeInstance)->MovePoint(U, *(gp_Pnt*)pp_P, Index1, Index2, *(int*)pp_FirstModifiedPole, *(int*)pp_LastModifiedPole);
}

void RDC::OCC::Geom_BSplineCurve::MovePointAndTangent(double U, RDC::OCC::Pnt P, RDC::OCC::Vec Tangent, double Tolerance, int StartingCondition, int EndingCondition, int% ErrorStatus)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_Tangent = &Tangent;
	pin_ptr<int> pp_ErrorStatus = &ErrorStatus;
	((::Geom_BSplineCurve*)_NativeInstance)->MovePointAndTangent(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Tangent, Tolerance, StartingCondition, EndingCondition, *(int*)pp_ErrorStatus);
}

bool RDC::OCC::Geom_BSplineCurve::IsCN(int N)
{
	bool _result = ((::Geom_BSplineCurve*)_NativeInstance)->IsCN(N);
	return _result;
}

bool RDC::OCC::Geom_BSplineCurve::IsG1(double theTf, double theTl, double theAngTol)
{
	bool _result = ((::Geom_BSplineCurve*)_NativeInstance)->IsG1(theTf, theTl, theAngTol);
	return _result;
}

bool RDC::OCC::Geom_BSplineCurve::IsClosed()
{
	bool _result = ((::Geom_BSplineCurve*)_NativeInstance)->IsClosed();
	return _result;
}

bool RDC::OCC::Geom_BSplineCurve::IsPeriodic()
{
	bool _result = ((::Geom_BSplineCurve*)_NativeInstance)->IsPeriodic();
	return _result;
}

bool RDC::OCC::Geom_BSplineCurve::IsRational()
{
	bool _result = ((::Geom_BSplineCurve*)_NativeInstance)->IsRational();
	return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_BSplineCurve::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_BSplineCurve*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::Geom_BSplineCurve::Degree()
{
	int _result = ((::Geom_BSplineCurve*)_NativeInstance)->Degree();
	return _result;
}

void RDC::OCC::Geom_BSplineCurve::D0(double U, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BSplineCurve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_BSplineCurve::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	((::Geom_BSplineCurve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::Geom_BSplineCurve::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	((::Geom_BSplineCurve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::Geom_BSplineCurve::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
	((::Geom_BSplineCurve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::Geom_BSplineCurve::DN(double U, int N)
{
	::gp_Vec _nativeResult = ((::Geom_BSplineCurve*)_NativeInstance)->DN(U, N);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_BSplineCurve::LocalValue(double U, int FromK1, int ToK2)
{
	::gp_Pnt _nativeResult = ((::Geom_BSplineCurve*)_NativeInstance)->LocalValue(U, FromK1, ToK2);
	return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::Geom_BSplineCurve::LocalD0(double U, int FromK1, int ToK2, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BSplineCurve*)_NativeInstance)->LocalD0(U, FromK1, ToK2, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_BSplineCurve::LocalD1(double U, int FromK1, int ToK2, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	((::Geom_BSplineCurve*)_NativeInstance)->LocalD1(U, FromK1, ToK2, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::Geom_BSplineCurve::LocalD2(double U, int FromK1, int ToK2, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	((::Geom_BSplineCurve*)_NativeInstance)->LocalD2(U, FromK1, ToK2, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::Geom_BSplineCurve::LocalD3(double U, int FromK1, int ToK2, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
	((::Geom_BSplineCurve*)_NativeInstance)->LocalD3(U, FromK1, ToK2, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::Geom_BSplineCurve::LocalDN(double U, int FromK1, int ToK2, int N)
{
	::gp_Vec _nativeResult = ((::Geom_BSplineCurve*)_NativeInstance)->LocalDN(U, FromK1, ToK2, N);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_BSplineCurve::EndPoint()
{
	::gp_Pnt _nativeResult = ((::Geom_BSplineCurve*)_NativeInstance)->EndPoint();
	return RDC::OCC::Pnt(_nativeResult);
}

int RDC::OCC::Geom_BSplineCurve::FirstUKnotIndex()
{
	int _result = ((::Geom_BSplineCurve*)_NativeInstance)->FirstUKnotIndex();
	return _result;
}

double RDC::OCC::Geom_BSplineCurve::FirstParameter()
{
	double _result = ((::Geom_BSplineCurve*)_NativeInstance)->FirstParameter();
	return _result;
}

double RDC::OCC::Geom_BSplineCurve::Knot(int Index)
{
	double _result = ((::Geom_BSplineCurve*)_NativeInstance)->Knot(Index);
	return _result;
}

void RDC::OCC::Geom_BSplineCurve::Knots(RDC::OCC::TColStd_Array1OfReal^ K)
{
	((::Geom_BSplineCurve*)_NativeInstance)->Knots(*(::TColStd_Array1OfReal*)K->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::Geom_BSplineCurve::Knots()
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = (::TColStd_Array1OfReal)((::Geom_BSplineCurve*)_NativeInstance)->Knots();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

void RDC::OCC::Geom_BSplineCurve::KnotSequence(RDC::OCC::TColStd_Array1OfReal^ K)
{
	((::Geom_BSplineCurve*)_NativeInstance)->KnotSequence(*(::TColStd_Array1OfReal*)K->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::Geom_BSplineCurve::KnotSequence()
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = (::TColStd_Array1OfReal)((::Geom_BSplineCurve*)_NativeInstance)->KnotSequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

RDC::OCC::GeomAbs_BSplKnotDistribution RDC::OCC::Geom_BSplineCurve::KnotDistribution()
{
	::GeomAbs_BSplKnotDistribution _result = ((::Geom_BSplineCurve*)_NativeInstance)->KnotDistribution();
	return (RDC::OCC::GeomAbs_BSplKnotDistribution)_result;
}

int RDC::OCC::Geom_BSplineCurve::LastUKnotIndex()
{
	int _result = ((::Geom_BSplineCurve*)_NativeInstance)->LastUKnotIndex();
	return _result;
}

double RDC::OCC::Geom_BSplineCurve::LastParameter()
{
	double _result = ((::Geom_BSplineCurve*)_NativeInstance)->LastParameter();
	return _result;
}

void RDC::OCC::Geom_BSplineCurve::LocateU(double U, double ParametricTolerance, int% I1, int% I2, bool WithKnotRepetition)
{
	pin_ptr<int> pp_I1 = &I1;
	pin_ptr<int> pp_I2 = &I2;
	((::Geom_BSplineCurve*)_NativeInstance)->LocateU(U, ParametricTolerance, *(int*)pp_I1, *(int*)pp_I2, WithKnotRepetition);
}

void RDC::OCC::Geom_BSplineCurve::LocateU(double U, double ParametricTolerance, int% I1, int% I2)
{
	pin_ptr<int> pp_I1 = &I1;
	pin_ptr<int> pp_I2 = &I2;
	((::Geom_BSplineCurve*)_NativeInstance)->LocateU(U, ParametricTolerance, *(int*)pp_I1, *(int*)pp_I2, false);
}

int RDC::OCC::Geom_BSplineCurve::Multiplicity(int Index)
{
	int _result = ((::Geom_BSplineCurve*)_NativeInstance)->Multiplicity(Index);
	return _result;
}

void RDC::OCC::Geom_BSplineCurve::Multiplicities(RDC::OCC::TColStd_Array1OfInteger^ M)
{
	((::Geom_BSplineCurve*)_NativeInstance)->Multiplicities(*(::TColStd_Array1OfInteger*)M->NativeInstance);
}

RDC::OCC::TColStd_Array1OfInteger^ RDC::OCC::Geom_BSplineCurve::Multiplicities()
{
	::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
	*_result = (::TColStd_Array1OfInteger)((::Geom_BSplineCurve*)_NativeInstance)->Multiplicities();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfInteger(_result);
}

int RDC::OCC::Geom_BSplineCurve::NbKnots()
{
	int _result = ((::Geom_BSplineCurve*)_NativeInstance)->NbKnots();
	return _result;
}

int RDC::OCC::Geom_BSplineCurve::NbPoles()
{
	int _result = ((::Geom_BSplineCurve*)_NativeInstance)->NbPoles();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::Geom_BSplineCurve::Pole(int Index)
{
	::gp_Pnt _nativeResult = ((::Geom_BSplineCurve*)_NativeInstance)->Pole(Index);
	return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::Geom_BSplineCurve::Poles(RDC::OCC::TColgp_Array1OfPnt^ P)
{
	((::Geom_BSplineCurve*)_NativeInstance)->Poles(*(::TColgp_Array1OfPnt*)P->NativeInstance);
}

RDC::OCC::TColgp_Array1OfPnt^ RDC::OCC::Geom_BSplineCurve::Poles()
{
	::TColgp_Array1OfPnt* _result = new ::TColgp_Array1OfPnt();
	*_result = (::TColgp_Array1OfPnt)((::Geom_BSplineCurve*)_NativeInstance)->Poles();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array1OfPnt(_result);
}

RDC::OCC::Pnt RDC::OCC::Geom_BSplineCurve::StartPoint()
{
	::gp_Pnt _nativeResult = ((::Geom_BSplineCurve*)_NativeInstance)->StartPoint();
	return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::Geom_BSplineCurve::Weight(int Index)
{
	double _result = ((::Geom_BSplineCurve*)_NativeInstance)->Weight(Index);
	return _result;
}

void RDC::OCC::Geom_BSplineCurve::Weights(RDC::OCC::TColStd_Array1OfReal^ W)
{
	((::Geom_BSplineCurve*)_NativeInstance)->Weights(*(::TColStd_Array1OfReal*)W->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::Geom_BSplineCurve::Weights()
{
	const ::TColStd_Array1OfReal* _result = ((::Geom_BSplineCurve*)_NativeInstance)->Weights();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal((::TColStd_Array1OfReal*)_result);
}

void RDC::OCC::Geom_BSplineCurve::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_BSplineCurve*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

int RDC::OCC::Geom_BSplineCurve::MaxDegree()
{
	int _result = ::Geom_BSplineCurve::MaxDegree();
	return _result;
}

void RDC::OCC::Geom_BSplineCurve::Resolution(double Tolerance3D, double% UTolerance)
{
	pin_ptr<double> pp_UTolerance = &UTolerance;
	((::Geom_BSplineCurve*)_NativeInstance)->Resolution(Tolerance3D, *(double*)pp_UTolerance);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_BSplineCurve::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_BSplineCurve*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

bool RDC::OCC::Geom_BSplineCurve::IsEqual(RDC::OCC::Geom_BSplineCurve^ theOther, double thePreci)
{
	bool _result = ((::Geom_BSplineCurve*)_NativeInstance)->IsEqual(Handle(::Geom_BSplineCurve)(theOther->NativeInstance), thePreci);
	return _result;
}

void RDC::OCC::Geom_BSplineCurve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_BSplineCurve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_BSplineCurve::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_BSplineCurve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_BSplineCurve^ RDC::OCC::Geom_BSplineCurve::CreateDowncasted(::Geom_BSplineCurve* instance)
{
	return gcnew RDC::OCC::Geom_BSplineCurve(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_BSplineSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_BSplineSurface::Geom_BSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool UPeriodic, bool VPeriodic)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BSplineSurface(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, *(::TColStd_Array1OfInteger*)UMults->NativeInstance, *(::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, UPeriodic, VPeriodic);
}

RDC::OCC::Geom_BSplineSurface::Geom_BSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool UPeriodic)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BSplineSurface(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, *(::TColStd_Array1OfInteger*)UMults->NativeInstance, *(::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, UPeriodic, false);
}

RDC::OCC::Geom_BSplineSurface::Geom_BSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BSplineSurface(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, *(::TColStd_Array1OfInteger*)UMults->NativeInstance, *(::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, false, false);
}

RDC::OCC::Geom_BSplineSurface::Geom_BSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool UPeriodic, bool VPeriodic)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BSplineSurface(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, *(::TColStd_Array1OfInteger*)UMults->NativeInstance, *(::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, UPeriodic, VPeriodic);
}

RDC::OCC::Geom_BSplineSurface::Geom_BSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool UPeriodic)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BSplineSurface(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, *(::TColStd_Array1OfInteger*)UMults->NativeInstance, *(::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, UPeriodic, false);
}

RDC::OCC::Geom_BSplineSurface::Geom_BSplineSurface(RDC::OCC::TColgp_Array2OfPnt^ Poles, RDC::OCC::TColStd_Array2OfReal^ Weights, RDC::OCC::TColStd_Array1OfReal^ UKnots, RDC::OCC::TColStd_Array1OfReal^ VKnots, RDC::OCC::TColStd_Array1OfInteger^ UMults, RDC::OCC::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_BSplineSurface(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, *(::TColStd_Array1OfInteger*)UMults->NativeInstance, *(::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, false, false);
}

void RDC::OCC::Geom_BSplineSurface::ExchangeUV()
{
	((::Geom_BSplineSurface*)_NativeInstance)->ExchangeUV();
}

void RDC::OCC::Geom_BSplineSurface::SetUPeriodic()
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetUPeriodic();
}

void RDC::OCC::Geom_BSplineSurface::SetVPeriodic()
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetVPeriodic();
}

void RDC::OCC::Geom_BSplineSurface::PeriodicNormalization(double% U, double% V)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	((::Geom_BSplineSurface*)_NativeInstance)->PeriodicNormalization(*(double*)pp_U, *(double*)pp_V);
}

void RDC::OCC::Geom_BSplineSurface::SetUOrigin(int Index)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetUOrigin(Index);
}

void RDC::OCC::Geom_BSplineSurface::SetVOrigin(int Index)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetVOrigin(Index);
}

void RDC::OCC::Geom_BSplineSurface::SetUNotPeriodic()
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetUNotPeriodic();
}

void RDC::OCC::Geom_BSplineSurface::SetVNotPeriodic()
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetVNotPeriodic();
}

void RDC::OCC::Geom_BSplineSurface::UReverse()
{
	((::Geom_BSplineSurface*)_NativeInstance)->UReverse();
}

void RDC::OCC::Geom_BSplineSurface::VReverse()
{
	((::Geom_BSplineSurface*)_NativeInstance)->VReverse();
}

double RDC::OCC::Geom_BSplineSurface::UReversedParameter(double U)
{
	double _result = ((::Geom_BSplineSurface*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

double RDC::OCC::Geom_BSplineSurface::VReversedParameter(double V)
{
	double _result = ((::Geom_BSplineSurface*)_NativeInstance)->VReversedParameter(V);
	return _result;
}

void RDC::OCC::Geom_BSplineSurface::IncreaseDegree(int UDegree, int VDegree)
{
	((::Geom_BSplineSurface*)_NativeInstance)->IncreaseDegree(UDegree, VDegree);
}

void RDC::OCC::Geom_BSplineSurface::InsertUKnots(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double ParametricTolerance, bool Add)
{
	((::Geom_BSplineSurface*)_NativeInstance)->InsertUKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, ParametricTolerance, Add);
}

void RDC::OCC::Geom_BSplineSurface::InsertUKnots(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double ParametricTolerance)
{
	((::Geom_BSplineSurface*)_NativeInstance)->InsertUKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, ParametricTolerance, true);
}

void RDC::OCC::Geom_BSplineSurface::InsertUKnots(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults)
{
	((::Geom_BSplineSurface*)_NativeInstance)->InsertUKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, 0., true);
}

void RDC::OCC::Geom_BSplineSurface::InsertVKnots(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double ParametricTolerance, bool Add)
{
	((::Geom_BSplineSurface*)_NativeInstance)->InsertVKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, ParametricTolerance, Add);
}

void RDC::OCC::Geom_BSplineSurface::InsertVKnots(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults, double ParametricTolerance)
{
	((::Geom_BSplineSurface*)_NativeInstance)->InsertVKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, ParametricTolerance, true);
}

void RDC::OCC::Geom_BSplineSurface::InsertVKnots(RDC::OCC::TColStd_Array1OfReal^ Knots, RDC::OCC::TColStd_Array1OfInteger^ Mults)
{
	((::Geom_BSplineSurface*)_NativeInstance)->InsertVKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, 0., true);
}

bool RDC::OCC::Geom_BSplineSurface::RemoveUKnot(int Index, int M, double Tolerance)
{
	bool _result = ((::Geom_BSplineSurface*)_NativeInstance)->RemoveUKnot(Index, M, Tolerance);
	return _result;
}

bool RDC::OCC::Geom_BSplineSurface::RemoveVKnot(int Index, int M, double Tolerance)
{
	bool _result = ((::Geom_BSplineSurface*)_NativeInstance)->RemoveVKnot(Index, M, Tolerance);
	return _result;
}

void RDC::OCC::Geom_BSplineSurface::IncreaseUMultiplicity(int UIndex, int M)
{
	((::Geom_BSplineSurface*)_NativeInstance)->IncreaseUMultiplicity(UIndex, M);
}

void RDC::OCC::Geom_BSplineSurface::IncreaseUMultiplicity(int FromI1, int ToI2, int M)
{
	((::Geom_BSplineSurface*)_NativeInstance)->IncreaseUMultiplicity(FromI1, ToI2, M);
}

void RDC::OCC::Geom_BSplineSurface::IncrementUMultiplicity(int FromI1, int ToI2, int Step)
{
	((::Geom_BSplineSurface*)_NativeInstance)->IncrementUMultiplicity(FromI1, ToI2, Step);
}

void RDC::OCC::Geom_BSplineSurface::IncreaseVMultiplicity(int VIndex, int M)
{
	((::Geom_BSplineSurface*)_NativeInstance)->IncreaseVMultiplicity(VIndex, M);
}

void RDC::OCC::Geom_BSplineSurface::IncreaseVMultiplicity(int FromI1, int ToI2, int M)
{
	((::Geom_BSplineSurface*)_NativeInstance)->IncreaseVMultiplicity(FromI1, ToI2, M);
}

void RDC::OCC::Geom_BSplineSurface::IncrementVMultiplicity(int FromI1, int ToI2, int Step)
{
	((::Geom_BSplineSurface*)_NativeInstance)->IncrementVMultiplicity(FromI1, ToI2, Step);
}

void RDC::OCC::Geom_BSplineSurface::InsertUKnot(double U, int M, double ParametricTolerance, bool Add)
{
	((::Geom_BSplineSurface*)_NativeInstance)->InsertUKnot(U, M, ParametricTolerance, Add);
}

void RDC::OCC::Geom_BSplineSurface::InsertUKnot(double U, int M, double ParametricTolerance)
{
	((::Geom_BSplineSurface*)_NativeInstance)->InsertUKnot(U, M, ParametricTolerance, true);
}

void RDC::OCC::Geom_BSplineSurface::InsertVKnot(double V, int M, double ParametricTolerance, bool Add)
{
	((::Geom_BSplineSurface*)_NativeInstance)->InsertVKnot(V, M, ParametricTolerance, Add);
}

void RDC::OCC::Geom_BSplineSurface::InsertVKnot(double V, int M, double ParametricTolerance)
{
	((::Geom_BSplineSurface*)_NativeInstance)->InsertVKnot(V, M, ParametricTolerance, true);
}

void RDC::OCC::Geom_BSplineSurface::Segment(double U1, double U2, double V1, double V2, double theUTolerance, double theVTolerance)
{
	((::Geom_BSplineSurface*)_NativeInstance)->Segment(U1, U2, V1, V2, theUTolerance, theVTolerance);
}

void RDC::OCC::Geom_BSplineSurface::Segment(double U1, double U2, double V1, double V2, double theUTolerance)
{
	((::Geom_BSplineSurface*)_NativeInstance)->Segment(U1, U2, V1, V2, theUTolerance, ::Precision::PConfusion());
}

void RDC::OCC::Geom_BSplineSurface::Segment(double U1, double U2, double V1, double V2)
{
	((::Geom_BSplineSurface*)_NativeInstance)->Segment(U1, U2, V1, V2, ::Precision::PConfusion(), ::Precision::PConfusion());
}

void RDC::OCC::Geom_BSplineSurface::CheckAndSegment(double U1, double U2, double V1, double V2, double theUTolerance, double theVTolerance)
{
	((::Geom_BSplineSurface*)_NativeInstance)->CheckAndSegment(U1, U2, V1, V2, theUTolerance, theVTolerance);
}

void RDC::OCC::Geom_BSplineSurface::CheckAndSegment(double U1, double U2, double V1, double V2, double theUTolerance)
{
	((::Geom_BSplineSurface*)_NativeInstance)->CheckAndSegment(U1, U2, V1, V2, theUTolerance, ::Precision::PConfusion());
}

void RDC::OCC::Geom_BSplineSurface::CheckAndSegment(double U1, double U2, double V1, double V2)
{
	((::Geom_BSplineSurface*)_NativeInstance)->CheckAndSegment(U1, U2, V1, V2, ::Precision::PConfusion(), ::Precision::PConfusion());
}

void RDC::OCC::Geom_BSplineSurface::SetUKnot(int UIndex, double K)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetUKnot(UIndex, K);
}

void RDC::OCC::Geom_BSplineSurface::SetUKnots(RDC::OCC::TColStd_Array1OfReal^ UK)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetUKnots(*(::TColStd_Array1OfReal*)UK->NativeInstance);
}

void RDC::OCC::Geom_BSplineSurface::SetUKnot(int UIndex, double K, int M)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetUKnot(UIndex, K, M);
}

void RDC::OCC::Geom_BSplineSurface::SetVKnot(int VIndex, double K)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetVKnot(VIndex, K);
}

void RDC::OCC::Geom_BSplineSurface::SetVKnots(RDC::OCC::TColStd_Array1OfReal^ VK)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetVKnots(*(::TColStd_Array1OfReal*)VK->NativeInstance);
}

void RDC::OCC::Geom_BSplineSurface::SetVKnot(int VIndex, double K, int M)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetVKnot(VIndex, K, M);
}

void RDC::OCC::Geom_BSplineSurface::LocateU(double U, double ParametricTolerance, int% I1, int% I2, bool WithKnotRepetition)
{
	pin_ptr<int> pp_I1 = &I1;
	pin_ptr<int> pp_I2 = &I2;
	((::Geom_BSplineSurface*)_NativeInstance)->LocateU(U, ParametricTolerance, *(int*)pp_I1, *(int*)pp_I2, WithKnotRepetition);
}

void RDC::OCC::Geom_BSplineSurface::LocateU(double U, double ParametricTolerance, int% I1, int% I2)
{
	pin_ptr<int> pp_I1 = &I1;
	pin_ptr<int> pp_I2 = &I2;
	((::Geom_BSplineSurface*)_NativeInstance)->LocateU(U, ParametricTolerance, *(int*)pp_I1, *(int*)pp_I2, false);
}

void RDC::OCC::Geom_BSplineSurface::LocateV(double V, double ParametricTolerance, int% I1, int% I2, bool WithKnotRepetition)
{
	pin_ptr<int> pp_I1 = &I1;
	pin_ptr<int> pp_I2 = &I2;
	((::Geom_BSplineSurface*)_NativeInstance)->LocateV(V, ParametricTolerance, *(int*)pp_I1, *(int*)pp_I2, WithKnotRepetition);
}

void RDC::OCC::Geom_BSplineSurface::LocateV(double V, double ParametricTolerance, int% I1, int% I2)
{
	pin_ptr<int> pp_I1 = &I1;
	pin_ptr<int> pp_I2 = &I2;
	((::Geom_BSplineSurface*)_NativeInstance)->LocateV(V, ParametricTolerance, *(int*)pp_I1, *(int*)pp_I2, false);
}

void RDC::OCC::Geom_BSplineSurface::SetPole(int UIndex, int VIndex, RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BSplineSurface*)_NativeInstance)->SetPole(UIndex, VIndex, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_BSplineSurface::SetPole(int UIndex, int VIndex, RDC::OCC::Pnt P, double Weight)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BSplineSurface*)_NativeInstance)->SetPole(UIndex, VIndex, *(gp_Pnt*)pp_P, Weight);
}

void RDC::OCC::Geom_BSplineSurface::SetPoleCol(int VIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetPoleCol(VIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance);
}

void RDC::OCC::Geom_BSplineSurface::SetPoleCol(int VIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles, RDC::OCC::TColStd_Array1OfReal^ CPoleWeights)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetPoleCol(VIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance, *(::TColStd_Array1OfReal*)CPoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BSplineSurface::SetPoleRow(int UIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles, RDC::OCC::TColStd_Array1OfReal^ CPoleWeights)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetPoleRow(UIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance, *(::TColStd_Array1OfReal*)CPoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BSplineSurface::SetPoleRow(int UIndex, RDC::OCC::TColgp_Array1OfPnt^ CPoles)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetPoleRow(UIndex, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance);
}

void RDC::OCC::Geom_BSplineSurface::SetWeight(int UIndex, int VIndex, double Weight)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetWeight(UIndex, VIndex, Weight);
}

void RDC::OCC::Geom_BSplineSurface::SetWeightCol(int VIndex, RDC::OCC::TColStd_Array1OfReal^ CPoleWeights)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetWeightCol(VIndex, *(::TColStd_Array1OfReal*)CPoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BSplineSurface::SetWeightRow(int UIndex, RDC::OCC::TColStd_Array1OfReal^ CPoleWeights)
{
	((::Geom_BSplineSurface*)_NativeInstance)->SetWeightRow(UIndex, *(::TColStd_Array1OfReal*)CPoleWeights->NativeInstance);
}

void RDC::OCC::Geom_BSplineSurface::MovePoint(double U, double V, RDC::OCC::Pnt P, int UIndex1, int UIndex2, int VIndex1, int VIndex2, int% UFirstIndex, int% ULastIndex, int% VFirstIndex, int% VLastIndex)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<int> pp_UFirstIndex = &UFirstIndex;
	pin_ptr<int> pp_ULastIndex = &ULastIndex;
	pin_ptr<int> pp_VFirstIndex = &VFirstIndex;
	pin_ptr<int> pp_VLastIndex = &VLastIndex;
	((::Geom_BSplineSurface*)_NativeInstance)->MovePoint(U, V, *(gp_Pnt*)pp_P, UIndex1, UIndex2, VIndex1, VIndex2, *(int*)pp_UFirstIndex, *(int*)pp_ULastIndex, *(int*)pp_VFirstIndex, *(int*)pp_VLastIndex);
}

bool RDC::OCC::Geom_BSplineSurface::IsUClosed()
{
	bool _result = ((::Geom_BSplineSurface*)_NativeInstance)->IsUClosed();
	return _result;
}

bool RDC::OCC::Geom_BSplineSurface::IsVClosed()
{
	bool _result = ((::Geom_BSplineSurface*)_NativeInstance)->IsVClosed();
	return _result;
}

bool RDC::OCC::Geom_BSplineSurface::IsCNu(int N)
{
	bool _result = ((::Geom_BSplineSurface*)_NativeInstance)->IsCNu(N);
	return _result;
}

bool RDC::OCC::Geom_BSplineSurface::IsCNv(int N)
{
	bool _result = ((::Geom_BSplineSurface*)_NativeInstance)->IsCNv(N);
	return _result;
}

bool RDC::OCC::Geom_BSplineSurface::IsUPeriodic()
{
	bool _result = ((::Geom_BSplineSurface*)_NativeInstance)->IsUPeriodic();
	return _result;
}

bool RDC::OCC::Geom_BSplineSurface::IsURational()
{
	bool _result = ((::Geom_BSplineSurface*)_NativeInstance)->IsURational();
	return _result;
}

bool RDC::OCC::Geom_BSplineSurface::IsVPeriodic()
{
	bool _result = ((::Geom_BSplineSurface*)_NativeInstance)->IsVPeriodic();
	return _result;
}

bool RDC::OCC::Geom_BSplineSurface::IsVRational()
{
	bool _result = ((::Geom_BSplineSurface*)_NativeInstance)->IsVRational();
	return _result;
}

void RDC::OCC::Geom_BSplineSurface::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::Geom_BSplineSurface*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_BSplineSurface::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_BSplineSurface*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

int RDC::OCC::Geom_BSplineSurface::FirstUKnotIndex()
{
	int _result = ((::Geom_BSplineSurface*)_NativeInstance)->FirstUKnotIndex();
	return _result;
}

int RDC::OCC::Geom_BSplineSurface::FirstVKnotIndex()
{
	int _result = ((::Geom_BSplineSurface*)_NativeInstance)->FirstVKnotIndex();
	return _result;
}

int RDC::OCC::Geom_BSplineSurface::LastUKnotIndex()
{
	int _result = ((::Geom_BSplineSurface*)_NativeInstance)->LastUKnotIndex();
	return _result;
}

int RDC::OCC::Geom_BSplineSurface::LastVKnotIndex()
{
	int _result = ((::Geom_BSplineSurface*)_NativeInstance)->LastVKnotIndex();
	return _result;
}

int RDC::OCC::Geom_BSplineSurface::NbUKnots()
{
	int _result = ((::Geom_BSplineSurface*)_NativeInstance)->NbUKnots();
	return _result;
}

int RDC::OCC::Geom_BSplineSurface::NbUPoles()
{
	int _result = ((::Geom_BSplineSurface*)_NativeInstance)->NbUPoles();
	return _result;
}

int RDC::OCC::Geom_BSplineSurface::NbVKnots()
{
	int _result = ((::Geom_BSplineSurface*)_NativeInstance)->NbVKnots();
	return _result;
}

int RDC::OCC::Geom_BSplineSurface::NbVPoles()
{
	int _result = ((::Geom_BSplineSurface*)_NativeInstance)->NbVPoles();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::Geom_BSplineSurface::Pole(int UIndex, int VIndex)
{
	::gp_Pnt _nativeResult = ((::Geom_BSplineSurface*)_NativeInstance)->Pole(UIndex, VIndex);
	return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::Geom_BSplineSurface::Poles(RDC::OCC::TColgp_Array2OfPnt^ P)
{
	((::Geom_BSplineSurface*)_NativeInstance)->Poles(*(::TColgp_Array2OfPnt*)P->NativeInstance);
}

RDC::OCC::TColgp_Array2OfPnt^ RDC::OCC::Geom_BSplineSurface::Poles()
{
	::TColgp_Array2OfPnt* _result = new ::TColgp_Array2OfPnt();
	*_result = (::TColgp_Array2OfPnt)((::Geom_BSplineSurface*)_NativeInstance)->Poles();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColgp_Array2OfPnt(_result);
}

int RDC::OCC::Geom_BSplineSurface::UDegree()
{
	int _result = ((::Geom_BSplineSurface*)_NativeInstance)->UDegree();
	return _result;
}

double RDC::OCC::Geom_BSplineSurface::UKnot(int UIndex)
{
	double _result = ((::Geom_BSplineSurface*)_NativeInstance)->UKnot(UIndex);
	return _result;
}

RDC::OCC::GeomAbs_BSplKnotDistribution RDC::OCC::Geom_BSplineSurface::UKnotDistribution()
{
	::GeomAbs_BSplKnotDistribution _result = ((::Geom_BSplineSurface*)_NativeInstance)->UKnotDistribution();
	return (RDC::OCC::GeomAbs_BSplKnotDistribution)_result;
}

void RDC::OCC::Geom_BSplineSurface::UKnots(RDC::OCC::TColStd_Array1OfReal^ Ku)
{
	((::Geom_BSplineSurface*)_NativeInstance)->UKnots(*(::TColStd_Array1OfReal*)Ku->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::Geom_BSplineSurface::UKnots()
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = (::TColStd_Array1OfReal)((::Geom_BSplineSurface*)_NativeInstance)->UKnots();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

void RDC::OCC::Geom_BSplineSurface::UKnotSequence(RDC::OCC::TColStd_Array1OfReal^ Ku)
{
	((::Geom_BSplineSurface*)_NativeInstance)->UKnotSequence(*(::TColStd_Array1OfReal*)Ku->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::Geom_BSplineSurface::UKnotSequence()
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = (::TColStd_Array1OfReal)((::Geom_BSplineSurface*)_NativeInstance)->UKnotSequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

int RDC::OCC::Geom_BSplineSurface::UMultiplicity(int UIndex)
{
	int _result = ((::Geom_BSplineSurface*)_NativeInstance)->UMultiplicity(UIndex);
	return _result;
}

void RDC::OCC::Geom_BSplineSurface::UMultiplicities(RDC::OCC::TColStd_Array1OfInteger^ Mu)
{
	((::Geom_BSplineSurface*)_NativeInstance)->UMultiplicities(*(::TColStd_Array1OfInteger*)Mu->NativeInstance);
}

RDC::OCC::TColStd_Array1OfInteger^ RDC::OCC::Geom_BSplineSurface::UMultiplicities()
{
	::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
	*_result = (::TColStd_Array1OfInteger)((::Geom_BSplineSurface*)_NativeInstance)->UMultiplicities();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfInteger(_result);
}

int RDC::OCC::Geom_BSplineSurface::VDegree()
{
	int _result = ((::Geom_BSplineSurface*)_NativeInstance)->VDegree();
	return _result;
}

double RDC::OCC::Geom_BSplineSurface::VKnot(int VIndex)
{
	double _result = ((::Geom_BSplineSurface*)_NativeInstance)->VKnot(VIndex);
	return _result;
}

RDC::OCC::GeomAbs_BSplKnotDistribution RDC::OCC::Geom_BSplineSurface::VKnotDistribution()
{
	::GeomAbs_BSplKnotDistribution _result = ((::Geom_BSplineSurface*)_NativeInstance)->VKnotDistribution();
	return (RDC::OCC::GeomAbs_BSplKnotDistribution)_result;
}

void RDC::OCC::Geom_BSplineSurface::VKnots(RDC::OCC::TColStd_Array1OfReal^ Kv)
{
	((::Geom_BSplineSurface*)_NativeInstance)->VKnots(*(::TColStd_Array1OfReal*)Kv->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::Geom_BSplineSurface::VKnots()
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = (::TColStd_Array1OfReal)((::Geom_BSplineSurface*)_NativeInstance)->VKnots();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

void RDC::OCC::Geom_BSplineSurface::VKnotSequence(RDC::OCC::TColStd_Array1OfReal^ Kv)
{
	((::Geom_BSplineSurface*)_NativeInstance)->VKnotSequence(*(::TColStd_Array1OfReal*)Kv->NativeInstance);
}

RDC::OCC::TColStd_Array1OfReal^ RDC::OCC::Geom_BSplineSurface::VKnotSequence()
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = (::TColStd_Array1OfReal)((::Geom_BSplineSurface*)_NativeInstance)->VKnotSequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfReal(_result);
}

int RDC::OCC::Geom_BSplineSurface::VMultiplicity(int VIndex)
{
	int _result = ((::Geom_BSplineSurface*)_NativeInstance)->VMultiplicity(VIndex);
	return _result;
}

void RDC::OCC::Geom_BSplineSurface::VMultiplicities(RDC::OCC::TColStd_Array1OfInteger^ Mv)
{
	((::Geom_BSplineSurface*)_NativeInstance)->VMultiplicities(*(::TColStd_Array1OfInteger*)Mv->NativeInstance);
}

RDC::OCC::TColStd_Array1OfInteger^ RDC::OCC::Geom_BSplineSurface::VMultiplicities()
{
	::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
	*_result = (::TColStd_Array1OfInteger)((::Geom_BSplineSurface*)_NativeInstance)->VMultiplicities();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array1OfInteger(_result);
}

double RDC::OCC::Geom_BSplineSurface::Weight(int UIndex, int VIndex)
{
	double _result = ((::Geom_BSplineSurface*)_NativeInstance)->Weight(UIndex, VIndex);
	return _result;
}

void RDC::OCC::Geom_BSplineSurface::Weights(RDC::OCC::TColStd_Array2OfReal^ W)
{
	((::Geom_BSplineSurface*)_NativeInstance)->Weights(*(::TColStd_Array2OfReal*)W->NativeInstance);
}

RDC::OCC::TColStd_Array2OfReal^ RDC::OCC::Geom_BSplineSurface::Weights()
{
	const ::TColStd_Array2OfReal* _result = ((::Geom_BSplineSurface*)_NativeInstance)->Weights();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::TColStd_Array2OfReal((::TColStd_Array2OfReal*)_result);
}

void RDC::OCC::Geom_BSplineSurface::D0(double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BSplineSurface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_BSplineSurface::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_BSplineSurface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_BSplineSurface::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_BSplineSurface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_BSplineSurface::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_BSplineSurface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_BSplineSurface::DN(double U, double V, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_BSplineSurface*)_NativeInstance)->DN(U, V, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_BSplineSurface::LocalD0(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_BSplineSurface*)_NativeInstance)->LocalD0(U, V, FromUK1, ToUK2, FromVK1, ToVK2, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_BSplineSurface::LocalD1(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_BSplineSurface*)_NativeInstance)->LocalD1(U, V, FromUK1, ToUK2, FromVK1, ToVK2, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_BSplineSurface::LocalD2(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_BSplineSurface*)_NativeInstance)->LocalD2(U, V, FromUK1, ToUK2, FromVK1, ToVK2, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_BSplineSurface::LocalD3(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_BSplineSurface*)_NativeInstance)->LocalD3(U, V, FromUK1, ToUK2, FromVK1, ToVK2, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_BSplineSurface::LocalDN(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_BSplineSurface*)_NativeInstance)->LocalDN(U, V, FromUK1, ToUK2, FromVK1, ToVK2, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_BSplineSurface::LocalValue(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2)
{
	::gp_Pnt _nativeResult = ((::Geom_BSplineSurface*)_NativeInstance)->LocalValue(U, V, FromUK1, ToUK2, FromVK1, ToVK2);
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_BSplineSurface::UIso(double U)
{
	Handle(::Geom_Curve) _result = ((::Geom_BSplineSurface*)_NativeInstance)->UIso(U);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_BSplineSurface::VIso(double V)
{
	Handle(::Geom_Curve) _result = ((::Geom_BSplineSurface*)_NativeInstance)->VIso(V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_BSplineSurface::UIso(double U, bool CheckRational)
{
	Handle(::Geom_Curve) _result = ((::Geom_BSplineSurface*)_NativeInstance)->UIso(U, CheckRational);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_BSplineSurface::VIso(double V, bool CheckRational)
{
	Handle(::Geom_Curve) _result = ((::Geom_BSplineSurface*)_NativeInstance)->VIso(V, CheckRational);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_BSplineSurface::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_BSplineSurface*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

int RDC::OCC::Geom_BSplineSurface::MaxDegree()
{
	int _result = ::Geom_BSplineSurface::MaxDegree();
	return _result;
}

void RDC::OCC::Geom_BSplineSurface::Resolution(double Tolerance3D, double% UTolerance, double% VTolerance)
{
	pin_ptr<double> pp_UTolerance = &UTolerance;
	pin_ptr<double> pp_VTolerance = &VTolerance;
	((::Geom_BSplineSurface*)_NativeInstance)->Resolution(Tolerance3D, *(double*)pp_UTolerance, *(double*)pp_VTolerance);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_BSplineSurface::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_BSplineSurface*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_BSplineSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_BSplineSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_BSplineSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_BSplineSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_BSplineSurface::CreateDowncasted(::Geom_BSplineSurface* instance)
{
	return gcnew RDC::OCC::Geom_BSplineSurface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Point
//---------------------------------------------------------------------

RDC::OCC::Geom_Point::Geom_Point()
	: RDC::OCC::Geom_Geometry(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom_Point::Coord(double% X, double% Y, double% Z)
{
	pin_ptr<double> pp_X = &X;
	pin_ptr<double> pp_Y = &Y;
	pin_ptr<double> pp_Z = &Z;
	((::Geom_Point*)_NativeInstance)->Coord(*(double*)pp_X, *(double*)pp_Y, *(double*)pp_Z);
}

RDC::OCC::Pnt RDC::OCC::Geom_Point::Pnt()
{
	::gp_Pnt _nativeResult = ((::Geom_Point*)_NativeInstance)->Pnt();
	return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::Geom_Point::X()
{
	double _result = ((::Geom_Point*)_NativeInstance)->X();
	return _result;
}

double RDC::OCC::Geom_Point::Y()
{
	double _result = ((::Geom_Point*)_NativeInstance)->Y();
	return _result;
}

double RDC::OCC::Geom_Point::Z()
{
	double _result = ((::Geom_Point*)_NativeInstance)->Z();
	return _result;
}

double RDC::OCC::Geom_Point::Distance(RDC::OCC::Geom_Point^ Other)
{
	double _result = ((::Geom_Point*)_NativeInstance)->Distance(Handle(::Geom_Point)(Other->NativeInstance));
	return _result;
}

double RDC::OCC::Geom_Point::SquareDistance(RDC::OCC::Geom_Point^ Other)
{
	double _result = ((::Geom_Point*)_NativeInstance)->SquareDistance(Handle(::Geom_Point)(Other->NativeInstance));
	return _result;
}

RDC::OCC::Geom_Point^ RDC::OCC::Geom_Point::CreateDowncasted(::Geom_Point* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom_CartesianPoint)))
		return RDC::OCC::Geom_CartesianPoint::CreateDowncasted((::Geom_CartesianPoint*)instance);

	return gcnew RDC::OCC::Geom_Point(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_CartesianPoint
//---------------------------------------------------------------------

RDC::OCC::Geom_CartesianPoint::Geom_CartesianPoint(RDC::OCC::Pnt P)
	: RDC::OCC::Geom_Point(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	NativeInstance = new ::Geom_CartesianPoint(*(gp_Pnt*)pp_P);
}

RDC::OCC::Geom_CartesianPoint::Geom_CartesianPoint(double X, double Y, double Z)
	: RDC::OCC::Geom_Point(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_CartesianPoint(X, Y, Z);
}

void RDC::OCC::Geom_CartesianPoint::SetCoord(double X, double Y, double Z)
{
	((::Geom_CartesianPoint*)_NativeInstance)->SetCoord(X, Y, Z);
}

void RDC::OCC::Geom_CartesianPoint::SetPnt(RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_CartesianPoint*)_NativeInstance)->SetPnt(*(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_CartesianPoint::SetX(double X)
{
	((::Geom_CartesianPoint*)_NativeInstance)->SetX(X);
}

void RDC::OCC::Geom_CartesianPoint::SetY(double Y)
{
	((::Geom_CartesianPoint*)_NativeInstance)->SetY(Y);
}

void RDC::OCC::Geom_CartesianPoint::SetZ(double Z)
{
	((::Geom_CartesianPoint*)_NativeInstance)->SetZ(Z);
}

void RDC::OCC::Geom_CartesianPoint::Coord(double% X, double% Y, double% Z)
{
	pin_ptr<double> pp_X = &X;
	pin_ptr<double> pp_Y = &Y;
	pin_ptr<double> pp_Z = &Z;
	((::Geom_CartesianPoint*)_NativeInstance)->Coord(*(double*)pp_X, *(double*)pp_Y, *(double*)pp_Z);
}

RDC::OCC::Pnt RDC::OCC::Geom_CartesianPoint::Pnt()
{
	::gp_Pnt _nativeResult = ((::Geom_CartesianPoint*)_NativeInstance)->Pnt();
	return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::Geom_CartesianPoint::X()
{
	double _result = ((::Geom_CartesianPoint*)_NativeInstance)->X();
	return _result;
}

double RDC::OCC::Geom_CartesianPoint::Y()
{
	double _result = ((::Geom_CartesianPoint*)_NativeInstance)->Y();
	return _result;
}

double RDC::OCC::Geom_CartesianPoint::Z()
{
	double _result = ((::Geom_CartesianPoint*)_NativeInstance)->Z();
	return _result;
}

void RDC::OCC::Geom_CartesianPoint::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_CartesianPoint*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_CartesianPoint::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_CartesianPoint*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_CartesianPoint^ RDC::OCC::Geom_CartesianPoint::CreateDowncasted(::Geom_CartesianPoint* instance)
{
	return gcnew RDC::OCC::Geom_CartesianPoint(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Conic
//---------------------------------------------------------------------

RDC::OCC::Geom_Conic::Geom_Conic()
	: RDC::OCC::Geom_Curve(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom_Conic::SetAxis(RDC::OCC::Ax1 theA1)
{
	pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
	((::Geom_Conic*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void RDC::OCC::Geom_Conic::SetLocation(RDC::OCC::Pnt theP)
{
	pin_ptr<RDC::OCC::Pnt> pp_theP = &theP;
	((::Geom_Conic*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theP);
}

void RDC::OCC::Geom_Conic::SetPosition(RDC::OCC::Ax2 theA2)
{
	pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
	((::Geom_Conic*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_theA2);
}

RDC::OCC::Ax1 RDC::OCC::Geom_Conic::Axis()
{
	::gp_Ax1 _nativeResult = ((::Geom_Conic*)_NativeInstance)->Axis();
	return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_Conic::Location()
{
	::gp_Pnt _nativeResult = ((::Geom_Conic*)_NativeInstance)->Location();
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Ax2 RDC::OCC::Geom_Conic::Position()
{
	::gp_Ax2 _nativeResult = ((::Geom_Conic*)_NativeInstance)->Position();
	return RDC::OCC::Ax2(_nativeResult);
}

double RDC::OCC::Geom_Conic::Eccentricity()
{
	double _result = ((::Geom_Conic*)_NativeInstance)->Eccentricity();
	return _result;
}

RDC::OCC::Ax1 RDC::OCC::Geom_Conic::XAxis()
{
	::gp_Ax1 _nativeResult = ((::Geom_Conic*)_NativeInstance)->XAxis();
	return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::Geom_Conic::YAxis()
{
	::gp_Ax1 _nativeResult = ((::Geom_Conic*)_NativeInstance)->YAxis();
	return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::Geom_Conic::Reverse()
{
	((::Geom_Conic*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom_Conic::ReversedParameter(double U)
{
	double _result = ((::Geom_Conic*)_NativeInstance)->ReversedParameter(U);
	return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_Conic::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_Conic*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

bool RDC::OCC::Geom_Conic::IsCN(int N)
{
	bool _result = ((::Geom_Conic*)_NativeInstance)->IsCN(N);
	return _result;
}

void RDC::OCC::Geom_Conic::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_Conic*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_Conic::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_Conic*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_Conic^ RDC::OCC::Geom_Conic::CreateDowncasted(::Geom_Conic* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom_Circle)))
		return RDC::OCC::Geom_Circle::CreateDowncasted((::Geom_Circle*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_Ellipse)))
		return RDC::OCC::Geom_Ellipse::CreateDowncasted((::Geom_Ellipse*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_Hyperbola)))
		return RDC::OCC::Geom_Hyperbola::CreateDowncasted((::Geom_Hyperbola*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_Parabola)))
		return RDC::OCC::Geom_Parabola::CreateDowncasted((::Geom_Parabola*)instance);

	return gcnew RDC::OCC::Geom_Conic(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Circle
//---------------------------------------------------------------------

RDC::OCC::Geom_Circle::Geom_Circle(RDC::OCC::gp_Circ^ C)
	: RDC::OCC::Geom_Conic(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_Circle(*(::gp_Circ*)C->NativeInstance);
}

RDC::OCC::Geom_Circle::Geom_Circle(RDC::OCC::Ax2 A2, double Radius)
	: RDC::OCC::Geom_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
	NativeInstance = new ::Geom_Circle(*(gp_Ax2*)pp_A2, Radius);
}

void RDC::OCC::Geom_Circle::SetCirc(RDC::OCC::gp_Circ^ C)
{
	((::Geom_Circle*)_NativeInstance)->SetCirc(*(::gp_Circ*)C->NativeInstance);
}

void RDC::OCC::Geom_Circle::SetRadius(double R)
{
	((::Geom_Circle*)_NativeInstance)->SetRadius(R);
}

RDC::OCC::gp_Circ^ RDC::OCC::Geom_Circle::Circ()
{
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::Geom_Circle*)_NativeInstance)->Circ();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Circ(_result);
}

double RDC::OCC::Geom_Circle::Radius()
{
	double _result = ((::Geom_Circle*)_NativeInstance)->Radius();
	return _result;
}

double RDC::OCC::Geom_Circle::ReversedParameter(double U)
{
	double _result = ((::Geom_Circle*)_NativeInstance)->ReversedParameter(U);
	return _result;
}

double RDC::OCC::Geom_Circle::Eccentricity()
{
	double _result = ((::Geom_Circle*)_NativeInstance)->Eccentricity();
	return _result;
}

double RDC::OCC::Geom_Circle::FirstParameter()
{
	double _result = ((::Geom_Circle*)_NativeInstance)->FirstParameter();
	return _result;
}

double RDC::OCC::Geom_Circle::LastParameter()
{
	double _result = ((::Geom_Circle*)_NativeInstance)->LastParameter();
	return _result;
}

bool RDC::OCC::Geom_Circle::IsClosed()
{
	bool _result = ((::Geom_Circle*)_NativeInstance)->IsClosed();
	return _result;
}

bool RDC::OCC::Geom_Circle::IsPeriodic()
{
	bool _result = ((::Geom_Circle*)_NativeInstance)->IsPeriodic();
	return _result;
}

void RDC::OCC::Geom_Circle::D0(double U, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_Circle*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_Circle::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	((::Geom_Circle*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::Geom_Circle::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	((::Geom_Circle*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::Geom_Circle::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
	((::Geom_Circle*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::Geom_Circle::DN(double U, int N)
{
	::gp_Vec _nativeResult = ((::Geom_Circle*)_NativeInstance)->DN(U, N);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_Circle::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_Circle*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Circle::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_Circle*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Circle::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_Circle*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_Circle::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_Circle*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_Circle^ RDC::OCC::Geom_Circle::CreateDowncasted(::Geom_Circle* instance)
{
	return gcnew RDC::OCC::Geom_Circle(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_ElementarySurface
//---------------------------------------------------------------------

RDC::OCC::Geom_ElementarySurface::Geom_ElementarySurface()
	: RDC::OCC::Geom_Surface(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom_ElementarySurface::SetAxis(RDC::OCC::Ax1 theA1)
{
	pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
	((::Geom_ElementarySurface*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void RDC::OCC::Geom_ElementarySurface::SetLocation(RDC::OCC::Pnt theLoc)
{
	pin_ptr<RDC::OCC::Pnt> pp_theLoc = &theLoc;
	((::Geom_ElementarySurface*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLoc);
}

void RDC::OCC::Geom_ElementarySurface::SetPosition(RDC::OCC::Ax3 theAx3)
{
	pin_ptr<RDC::OCC::Ax3> pp_theAx3 = &theAx3;
	((::Geom_ElementarySurface*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_theAx3);
}

RDC::OCC::Ax1 RDC::OCC::Geom_ElementarySurface::Axis()
{
	::gp_Ax1 _nativeResult = ((::Geom_ElementarySurface*)_NativeInstance)->Axis();
	return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_ElementarySurface::Location()
{
	::gp_Pnt _nativeResult = ((::Geom_ElementarySurface*)_NativeInstance)->Location();
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Ax3 RDC::OCC::Geom_ElementarySurface::Position()
{
	::gp_Ax3 _nativeResult = ((::Geom_ElementarySurface*)_NativeInstance)->Position();
	return RDC::OCC::Ax3(_nativeResult);
}

void RDC::OCC::Geom_ElementarySurface::UReverse()
{
	((::Geom_ElementarySurface*)_NativeInstance)->UReverse();
}

double RDC::OCC::Geom_ElementarySurface::UReversedParameter(double U)
{
	double _result = ((::Geom_ElementarySurface*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

void RDC::OCC::Geom_ElementarySurface::VReverse()
{
	((::Geom_ElementarySurface*)_NativeInstance)->VReverse();
}

double RDC::OCC::Geom_ElementarySurface::VReversedParameter(double V)
{
	double _result = ((::Geom_ElementarySurface*)_NativeInstance)->VReversedParameter(V);
	return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_ElementarySurface::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_ElementarySurface*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

bool RDC::OCC::Geom_ElementarySurface::IsCNu(int N)
{
	bool _result = ((::Geom_ElementarySurface*)_NativeInstance)->IsCNu(N);
	return _result;
}

bool RDC::OCC::Geom_ElementarySurface::IsCNv(int N)
{
	bool _result = ((::Geom_ElementarySurface*)_NativeInstance)->IsCNv(N);
	return _result;
}

void RDC::OCC::Geom_ElementarySurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_ElementarySurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_ElementarySurface::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_ElementarySurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_ElementarySurface^ RDC::OCC::Geom_ElementarySurface::CreateDowncasted(::Geom_ElementarySurface* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom_ConicalSurface)))
		return RDC::OCC::Geom_ConicalSurface::CreateDowncasted((::Geom_ConicalSurface*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_CylindricalSurface)))
		return RDC::OCC::Geom_CylindricalSurface::CreateDowncasted((::Geom_CylindricalSurface*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_Plane)))
		return RDC::OCC::Geom_Plane::CreateDowncasted((::Geom_Plane*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_SphericalSurface)))
		return RDC::OCC::Geom_SphericalSurface::CreateDowncasted((::Geom_SphericalSurface*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_ToroidalSurface)))
		return RDC::OCC::Geom_ToroidalSurface::CreateDowncasted((::Geom_ToroidalSurface*)instance);

	return gcnew RDC::OCC::Geom_ElementarySurface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_ConicalSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_ConicalSurface::Geom_ConicalSurface(RDC::OCC::Ax3 A3, double Ang, double Radius)
	: RDC::OCC::Geom_ElementarySurface(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax3> pp_A3 = &A3;
	NativeInstance = new ::Geom_ConicalSurface(*(gp_Ax3*)pp_A3, Ang, Radius);
}

RDC::OCC::Geom_ConicalSurface::Geom_ConicalSurface(RDC::OCC::gp_Cone^ C)
	: RDC::OCC::Geom_ElementarySurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_ConicalSurface(*(::gp_Cone*)C->NativeInstance);
}

void RDC::OCC::Geom_ConicalSurface::SetCone(RDC::OCC::gp_Cone^ C)
{
	((::Geom_ConicalSurface*)_NativeInstance)->SetCone(*(::gp_Cone*)C->NativeInstance);
}

void RDC::OCC::Geom_ConicalSurface::SetRadius(double R)
{
	((::Geom_ConicalSurface*)_NativeInstance)->SetRadius(R);
}

void RDC::OCC::Geom_ConicalSurface::SetSemiAngle(double Ang)
{
	((::Geom_ConicalSurface*)_NativeInstance)->SetSemiAngle(Ang);
}

RDC::OCC::gp_Cone^ RDC::OCC::Geom_ConicalSurface::Cone()
{
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::Geom_ConicalSurface*)_NativeInstance)->Cone();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Cone(_result);
}

double RDC::OCC::Geom_ConicalSurface::UReversedParameter(double U)
{
	double _result = ((::Geom_ConicalSurface*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

double RDC::OCC::Geom_ConicalSurface::VReversedParameter(double V)
{
	double _result = ((::Geom_ConicalSurface*)_NativeInstance)->VReversedParameter(V);
	return _result;
}

void RDC::OCC::Geom_ConicalSurface::VReverse()
{
	((::Geom_ConicalSurface*)_NativeInstance)->VReverse();
}

void RDC::OCC::Geom_ConicalSurface::TransformParameters(double% U, double% V, RDC::OCC::Trsf T)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_ConicalSurface*)_NativeInstance)->TransformParameters(*(double*)pp_U, *(double*)pp_V, *(gp_Trsf*)pp_T);
}

RDC::OCC::gp_GTrsf2d^ RDC::OCC::Geom_ConicalSurface::ParametricTransformation(RDC::OCC::Trsf T)
{
	::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	*_result = ((::Geom_ConicalSurface*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf2d(_result);
}

RDC::OCC::Pnt RDC::OCC::Geom_ConicalSurface::Apex()
{
	::gp_Pnt _nativeResult = ((::Geom_ConicalSurface*)_NativeInstance)->Apex();
	return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::Geom_ConicalSurface::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::Geom_ConicalSurface*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

void RDC::OCC::Geom_ConicalSurface::Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D)
{
	pin_ptr<double> pp_A1 = &A1;
	pin_ptr<double> pp_A2 = &A2;
	pin_ptr<double> pp_A3 = &A3;
	pin_ptr<double> pp_B1 = &B1;
	pin_ptr<double> pp_B2 = &B2;
	pin_ptr<double> pp_B3 = &B3;
	pin_ptr<double> pp_C1 = &C1;
	pin_ptr<double> pp_C2 = &C2;
	pin_ptr<double> pp_C3 = &C3;
	pin_ptr<double> pp_D = &D;
	((::Geom_ConicalSurface*)_NativeInstance)->Coefficients(*(double*)pp_A1, *(double*)pp_A2, *(double*)pp_A3, *(double*)pp_B1, *(double*)pp_B2, *(double*)pp_B3, *(double*)pp_C1, *(double*)pp_C2, *(double*)pp_C3, *(double*)pp_D);
}

double RDC::OCC::Geom_ConicalSurface::RefRadius()
{
	double _result = ((::Geom_ConicalSurface*)_NativeInstance)->RefRadius();
	return _result;
}

double RDC::OCC::Geom_ConicalSurface::SemiAngle()
{
	double _result = ((::Geom_ConicalSurface*)_NativeInstance)->SemiAngle();
	return _result;
}

bool RDC::OCC::Geom_ConicalSurface::IsUClosed()
{
	bool _result = ((::Geom_ConicalSurface*)_NativeInstance)->IsUClosed();
	return _result;
}

bool RDC::OCC::Geom_ConicalSurface::IsVClosed()
{
	bool _result = ((::Geom_ConicalSurface*)_NativeInstance)->IsVClosed();
	return _result;
}

bool RDC::OCC::Geom_ConicalSurface::IsUPeriodic()
{
	bool _result = ((::Geom_ConicalSurface*)_NativeInstance)->IsUPeriodic();
	return _result;
}

bool RDC::OCC::Geom_ConicalSurface::IsVPeriodic()
{
	bool _result = ((::Geom_ConicalSurface*)_NativeInstance)->IsVPeriodic();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_ConicalSurface::UIso(double U)
{
	Handle(::Geom_Curve) _result = ((::Geom_ConicalSurface*)_NativeInstance)->UIso(U);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_ConicalSurface::VIso(double V)
{
	Handle(::Geom_Curve) _result = ((::Geom_ConicalSurface*)_NativeInstance)->VIso(V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_ConicalSurface::D0(double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_ConicalSurface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_ConicalSurface::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_ConicalSurface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_ConicalSurface::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_ConicalSurface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_ConicalSurface::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_ConicalSurface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_ConicalSurface::DN(double U, double V, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_ConicalSurface*)_NativeInstance)->DN(U, V, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_ConicalSurface::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_ConicalSurface*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_ConicalSurface::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_ConicalSurface*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_ConicalSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_ConicalSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_ConicalSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_ConicalSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_ConicalSurface^ RDC::OCC::Geom_ConicalSurface::CreateDowncasted(::Geom_ConicalSurface* instance)
{
	return gcnew RDC::OCC::Geom_ConicalSurface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_CylindricalSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_CylindricalSurface::Geom_CylindricalSurface(RDC::OCC::Ax3 A3, double Radius)
	: RDC::OCC::Geom_ElementarySurface(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax3> pp_A3 = &A3;
	NativeInstance = new ::Geom_CylindricalSurface(*(gp_Ax3*)pp_A3, Radius);
}

RDC::OCC::Geom_CylindricalSurface::Geom_CylindricalSurface(RDC::OCC::gp_Cylinder^ C)
	: RDC::OCC::Geom_ElementarySurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_CylindricalSurface(*(::gp_Cylinder*)C->NativeInstance);
}

void RDC::OCC::Geom_CylindricalSurface::SetCylinder(RDC::OCC::gp_Cylinder^ C)
{
	((::Geom_CylindricalSurface*)_NativeInstance)->SetCylinder(*(::gp_Cylinder*)C->NativeInstance);
}

void RDC::OCC::Geom_CylindricalSurface::SetRadius(double R)
{
	((::Geom_CylindricalSurface*)_NativeInstance)->SetRadius(R);
}

RDC::OCC::gp_Cylinder^ RDC::OCC::Geom_CylindricalSurface::Cylinder()
{
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::Geom_CylindricalSurface*)_NativeInstance)->Cylinder();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Cylinder(_result);
}

double RDC::OCC::Geom_CylindricalSurface::UReversedParameter(double U)
{
	double _result = ((::Geom_CylindricalSurface*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

double RDC::OCC::Geom_CylindricalSurface::VReversedParameter(double V)
{
	double _result = ((::Geom_CylindricalSurface*)_NativeInstance)->VReversedParameter(V);
	return _result;
}

void RDC::OCC::Geom_CylindricalSurface::TransformParameters(double% U, double% V, RDC::OCC::Trsf T)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_CylindricalSurface*)_NativeInstance)->TransformParameters(*(double*)pp_U, *(double*)pp_V, *(gp_Trsf*)pp_T);
}

RDC::OCC::gp_GTrsf2d^ RDC::OCC::Geom_CylindricalSurface::ParametricTransformation(RDC::OCC::Trsf T)
{
	::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	*_result = ((::Geom_CylindricalSurface*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf2d(_result);
}

void RDC::OCC::Geom_CylindricalSurface::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::Geom_CylindricalSurface*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

void RDC::OCC::Geom_CylindricalSurface::Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D)
{
	pin_ptr<double> pp_A1 = &A1;
	pin_ptr<double> pp_A2 = &A2;
	pin_ptr<double> pp_A3 = &A3;
	pin_ptr<double> pp_B1 = &B1;
	pin_ptr<double> pp_B2 = &B2;
	pin_ptr<double> pp_B3 = &B3;
	pin_ptr<double> pp_C1 = &C1;
	pin_ptr<double> pp_C2 = &C2;
	pin_ptr<double> pp_C3 = &C3;
	pin_ptr<double> pp_D = &D;
	((::Geom_CylindricalSurface*)_NativeInstance)->Coefficients(*(double*)pp_A1, *(double*)pp_A2, *(double*)pp_A3, *(double*)pp_B1, *(double*)pp_B2, *(double*)pp_B3, *(double*)pp_C1, *(double*)pp_C2, *(double*)pp_C3, *(double*)pp_D);
}

double RDC::OCC::Geom_CylindricalSurface::Radius()
{
	double _result = ((::Geom_CylindricalSurface*)_NativeInstance)->Radius();
	return _result;
}

bool RDC::OCC::Geom_CylindricalSurface::IsUClosed()
{
	bool _result = ((::Geom_CylindricalSurface*)_NativeInstance)->IsUClosed();
	return _result;
}

bool RDC::OCC::Geom_CylindricalSurface::IsVClosed()
{
	bool _result = ((::Geom_CylindricalSurface*)_NativeInstance)->IsVClosed();
	return _result;
}

bool RDC::OCC::Geom_CylindricalSurface::IsUPeriodic()
{
	bool _result = ((::Geom_CylindricalSurface*)_NativeInstance)->IsUPeriodic();
	return _result;
}

bool RDC::OCC::Geom_CylindricalSurface::IsVPeriodic()
{
	bool _result = ((::Geom_CylindricalSurface*)_NativeInstance)->IsVPeriodic();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_CylindricalSurface::UIso(double U)
{
	Handle(::Geom_Curve) _result = ((::Geom_CylindricalSurface*)_NativeInstance)->UIso(U);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_CylindricalSurface::VIso(double V)
{
	Handle(::Geom_Curve) _result = ((::Geom_CylindricalSurface*)_NativeInstance)->VIso(V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_CylindricalSurface::D0(double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_CylindricalSurface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_CylindricalSurface::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_CylindricalSurface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_CylindricalSurface::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_CylindricalSurface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_CylindricalSurface::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_CylindricalSurface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_CylindricalSurface::DN(double U, double V, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_CylindricalSurface*)_NativeInstance)->DN(U, V, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_CylindricalSurface::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_CylindricalSurface*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_CylindricalSurface::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_CylindricalSurface*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_CylindricalSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_CylindricalSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_CylindricalSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_CylindricalSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_CylindricalSurface^ RDC::OCC::Geom_CylindricalSurface::CreateDowncasted(::Geom_CylindricalSurface* instance)
{
	return gcnew RDC::OCC::Geom_CylindricalSurface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Vector
//---------------------------------------------------------------------

RDC::OCC::Geom_Vector::Geom_Vector()
	: RDC::OCC::Geom_Geometry(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void RDC::OCC::Geom_Vector::Reverse()
{
	((::Geom_Vector*)_NativeInstance)->Reverse();
}

RDC::OCC::Geom_Vector^ RDC::OCC::Geom_Vector::Reversed()
{
	Handle(::Geom_Vector) _result = ((::Geom_Vector*)_NativeInstance)->Reversed();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Vector::CreateDowncasted(_result.get());
}

double RDC::OCC::Geom_Vector::Angle(RDC::OCC::Geom_Vector^ Other)
{
	double _result = ((::Geom_Vector*)_NativeInstance)->Angle(Handle(::Geom_Vector)(Other->NativeInstance));
	return _result;
}

double RDC::OCC::Geom_Vector::AngleWithRef(RDC::OCC::Geom_Vector^ Other, RDC::OCC::Geom_Vector^ VRef)
{
	double _result = ((::Geom_Vector*)_NativeInstance)->AngleWithRef(Handle(::Geom_Vector)(Other->NativeInstance), Handle(::Geom_Vector)(VRef->NativeInstance));
	return _result;
}

void RDC::OCC::Geom_Vector::Coord(double% X, double% Y, double% Z)
{
	pin_ptr<double> pp_X = &X;
	pin_ptr<double> pp_Y = &Y;
	pin_ptr<double> pp_Z = &Z;
	((::Geom_Vector*)_NativeInstance)->Coord(*(double*)pp_X, *(double*)pp_Y, *(double*)pp_Z);
}

double RDC::OCC::Geom_Vector::Magnitude()
{
	double _result = ((::Geom_Vector*)_NativeInstance)->Magnitude();
	return _result;
}

double RDC::OCC::Geom_Vector::SquareMagnitude()
{
	double _result = ((::Geom_Vector*)_NativeInstance)->SquareMagnitude();
	return _result;
}

double RDC::OCC::Geom_Vector::X()
{
	double _result = ((::Geom_Vector*)_NativeInstance)->X();
	return _result;
}

double RDC::OCC::Geom_Vector::Y()
{
	double _result = ((::Geom_Vector*)_NativeInstance)->Y();
	return _result;
}

double RDC::OCC::Geom_Vector::Z()
{
	double _result = ((::Geom_Vector*)_NativeInstance)->Z();
	return _result;
}

void RDC::OCC::Geom_Vector::Cross(RDC::OCC::Geom_Vector^ Other)
{
	((::Geom_Vector*)_NativeInstance)->Cross(Handle(::Geom_Vector)(Other->NativeInstance));
}

RDC::OCC::Geom_Vector^ RDC::OCC::Geom_Vector::Crossed(RDC::OCC::Geom_Vector^ Other)
{
	Handle(::Geom_Vector) _result = ((::Geom_Vector*)_NativeInstance)->Crossed(Handle(::Geom_Vector)(Other->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Vector::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Vector::CrossCross(RDC::OCC::Geom_Vector^ V1, RDC::OCC::Geom_Vector^ V2)
{
	((::Geom_Vector*)_NativeInstance)->CrossCross(Handle(::Geom_Vector)(V1->NativeInstance), Handle(::Geom_Vector)(V2->NativeInstance));
}

RDC::OCC::Geom_Vector^ RDC::OCC::Geom_Vector::CrossCrossed(RDC::OCC::Geom_Vector^ V1, RDC::OCC::Geom_Vector^ V2)
{
	Handle(::Geom_Vector) _result = ((::Geom_Vector*)_NativeInstance)->CrossCrossed(Handle(::Geom_Vector)(V1->NativeInstance), Handle(::Geom_Vector)(V2->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Vector::CreateDowncasted(_result.get());
}

double RDC::OCC::Geom_Vector::Dot(RDC::OCC::Geom_Vector^ Other)
{
	double _result = ((::Geom_Vector*)_NativeInstance)->Dot(Handle(::Geom_Vector)(Other->NativeInstance));
	return _result;
}

double RDC::OCC::Geom_Vector::DotCross(RDC::OCC::Geom_Vector^ V1, RDC::OCC::Geom_Vector^ V2)
{
	double _result = ((::Geom_Vector*)_NativeInstance)->DotCross(Handle(::Geom_Vector)(V1->NativeInstance), Handle(::Geom_Vector)(V2->NativeInstance));
	return _result;
}

RDC::OCC::Vec RDC::OCC::Geom_Vector::Vec()
{
	::gp_Vec _nativeResult = ((::Geom_Vector*)_NativeInstance)->Vec();
	return RDC::OCC::Vec(_nativeResult);
}

RDC::OCC::Geom_Vector^ RDC::OCC::Geom_Vector::CreateDowncasted(::Geom_Vector* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom_Direction)))
		return RDC::OCC::Geom_Direction::CreateDowncasted((::Geom_Direction*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_VectorWithMagnitude)))
		return RDC::OCC::Geom_VectorWithMagnitude::CreateDowncasted((::Geom_VectorWithMagnitude*)instance);

	return gcnew RDC::OCC::Geom_Vector(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Direction
//---------------------------------------------------------------------

RDC::OCC::Geom_Direction::Geom_Direction(double X, double Y, double Z)
	: RDC::OCC::Geom_Vector(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_Direction(X, Y, Z);
}

RDC::OCC::Geom_Direction::Geom_Direction(RDC::OCC::Dir V)
	: RDC::OCC::Geom_Vector(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	NativeInstance = new ::Geom_Direction(*(gp_Dir*)pp_V);
}

void RDC::OCC::Geom_Direction::SetCoord(double X, double Y, double Z)
{
	((::Geom_Direction*)_NativeInstance)->SetCoord(X, Y, Z);
}

void RDC::OCC::Geom_Direction::SetDir(RDC::OCC::Dir V)
{
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	((::Geom_Direction*)_NativeInstance)->SetDir(*(gp_Dir*)pp_V);
}

void RDC::OCC::Geom_Direction::SetX(double X)
{
	((::Geom_Direction*)_NativeInstance)->SetX(X);
}

void RDC::OCC::Geom_Direction::SetY(double Y)
{
	((::Geom_Direction*)_NativeInstance)->SetY(Y);
}

void RDC::OCC::Geom_Direction::SetZ(double Z)
{
	((::Geom_Direction*)_NativeInstance)->SetZ(Z);
}

RDC::OCC::Dir RDC::OCC::Geom_Direction::Dir()
{
	::gp_Dir _nativeResult = ((::Geom_Direction*)_NativeInstance)->Dir();
	return RDC::OCC::Dir(_nativeResult);
}

double RDC::OCC::Geom_Direction::Magnitude()
{
	double _result = ((::Geom_Direction*)_NativeInstance)->Magnitude();
	return _result;
}

double RDC::OCC::Geom_Direction::SquareMagnitude()
{
	double _result = ((::Geom_Direction*)_NativeInstance)->SquareMagnitude();
	return _result;
}

void RDC::OCC::Geom_Direction::Cross(RDC::OCC::Geom_Vector^ Other)
{
	((::Geom_Direction*)_NativeInstance)->Cross(Handle(::Geom_Vector)(Other->NativeInstance));
}

void RDC::OCC::Geom_Direction::CrossCross(RDC::OCC::Geom_Vector^ V1, RDC::OCC::Geom_Vector^ V2)
{
	((::Geom_Direction*)_NativeInstance)->CrossCross(Handle(::Geom_Vector)(V1->NativeInstance), Handle(::Geom_Vector)(V2->NativeInstance));
}

RDC::OCC::Geom_Vector^ RDC::OCC::Geom_Direction::Crossed(RDC::OCC::Geom_Vector^ Other)
{
	Handle(::Geom_Vector) _result = ((::Geom_Direction*)_NativeInstance)->Crossed(Handle(::Geom_Vector)(Other->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Vector::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Vector^ RDC::OCC::Geom_Direction::CrossCrossed(RDC::OCC::Geom_Vector^ V1, RDC::OCC::Geom_Vector^ V2)
{
	Handle(::Geom_Vector) _result = ((::Geom_Direction*)_NativeInstance)->CrossCrossed(Handle(::Geom_Vector)(V1->NativeInstance), Handle(::Geom_Vector)(V2->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Vector::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Direction::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_Direction*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Direction::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_Direction*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Direction^ RDC::OCC::Geom_Direction::CreateDowncasted(::Geom_Direction* instance)
{
	return gcnew RDC::OCC::Geom_Direction(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Ellipse
//---------------------------------------------------------------------

RDC::OCC::Geom_Ellipse::Geom_Ellipse(RDC::OCC::gp_Elips^ E)
	: RDC::OCC::Geom_Conic(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_Ellipse(*(::gp_Elips*)E->NativeInstance);
}

RDC::OCC::Geom_Ellipse::Geom_Ellipse(RDC::OCC::Ax2 A2, double MajorRadius, double MinorRadius)
	: RDC::OCC::Geom_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
	NativeInstance = new ::Geom_Ellipse(*(gp_Ax2*)pp_A2, MajorRadius, MinorRadius);
}

void RDC::OCC::Geom_Ellipse::SetElips(RDC::OCC::gp_Elips^ E)
{
	((::Geom_Ellipse*)_NativeInstance)->SetElips(*(::gp_Elips*)E->NativeInstance);
}

void RDC::OCC::Geom_Ellipse::SetMajorRadius(double MajorRadius)
{
	((::Geom_Ellipse*)_NativeInstance)->SetMajorRadius(MajorRadius);
}

void RDC::OCC::Geom_Ellipse::SetMinorRadius(double MinorRadius)
{
	((::Geom_Ellipse*)_NativeInstance)->SetMinorRadius(MinorRadius);
}

RDC::OCC::gp_Elips^ RDC::OCC::Geom_Ellipse::Elips()
{
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::Geom_Ellipse*)_NativeInstance)->Elips();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Elips(_result);
}

double RDC::OCC::Geom_Ellipse::ReversedParameter(double U)
{
	double _result = ((::Geom_Ellipse*)_NativeInstance)->ReversedParameter(U);
	return _result;
}

RDC::OCC::Ax1 RDC::OCC::Geom_Ellipse::Directrix1()
{
	::gp_Ax1 _nativeResult = ((::Geom_Ellipse*)_NativeInstance)->Directrix1();
	return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::Geom_Ellipse::Directrix2()
{
	::gp_Ax1 _nativeResult = ((::Geom_Ellipse*)_NativeInstance)->Directrix2();
	return RDC::OCC::Ax1(_nativeResult);
}

double RDC::OCC::Geom_Ellipse::Eccentricity()
{
	double _result = ((::Geom_Ellipse*)_NativeInstance)->Eccentricity();
	return _result;
}

double RDC::OCC::Geom_Ellipse::Focal()
{
	double _result = ((::Geom_Ellipse*)_NativeInstance)->Focal();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::Geom_Ellipse::Focus1()
{
	::gp_Pnt _nativeResult = ((::Geom_Ellipse*)_NativeInstance)->Focus1();
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_Ellipse::Focus2()
{
	::gp_Pnt _nativeResult = ((::Geom_Ellipse*)_NativeInstance)->Focus2();
	return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::Geom_Ellipse::MajorRadius()
{
	double _result = ((::Geom_Ellipse*)_NativeInstance)->MajorRadius();
	return _result;
}

double RDC::OCC::Geom_Ellipse::MinorRadius()
{
	double _result = ((::Geom_Ellipse*)_NativeInstance)->MinorRadius();
	return _result;
}

double RDC::OCC::Geom_Ellipse::Parameter()
{
	double _result = ((::Geom_Ellipse*)_NativeInstance)->Parameter();
	return _result;
}

double RDC::OCC::Geom_Ellipse::FirstParameter()
{
	double _result = ((::Geom_Ellipse*)_NativeInstance)->FirstParameter();
	return _result;
}

double RDC::OCC::Geom_Ellipse::LastParameter()
{
	double _result = ((::Geom_Ellipse*)_NativeInstance)->LastParameter();
	return _result;
}

bool RDC::OCC::Geom_Ellipse::IsClosed()
{
	bool _result = ((::Geom_Ellipse*)_NativeInstance)->IsClosed();
	return _result;
}

bool RDC::OCC::Geom_Ellipse::IsPeriodic()
{
	bool _result = ((::Geom_Ellipse*)_NativeInstance)->IsPeriodic();
	return _result;
}

void RDC::OCC::Geom_Ellipse::D0(double U, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_Ellipse*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_Ellipse::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	((::Geom_Ellipse*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::Geom_Ellipse::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	((::Geom_Ellipse*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::Geom_Ellipse::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
	((::Geom_Ellipse*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::Geom_Ellipse::DN(double U, int N)
{
	::gp_Vec _nativeResult = ((::Geom_Ellipse*)_NativeInstance)->DN(U, N);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_Ellipse::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_Ellipse*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Ellipse::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_Ellipse*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Ellipse::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_Ellipse*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_Ellipse::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_Ellipse*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_Ellipse^ RDC::OCC::Geom_Ellipse::CreateDowncasted(::Geom_Ellipse* instance)
{
	return gcnew RDC::OCC::Geom_Ellipse(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_HSequenceOfBSplineSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_HSequenceOfBSplineSurface::Geom_HSequenceOfBSplineSurface()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_HSequenceOfBSplineSurface();
}

RDC::OCC::Geom_HSequenceOfBSplineSurface::Geom_HSequenceOfBSplineSurface(RDC::OCC::Geom_SequenceOfBSplineSurface^ theOther)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_HSequenceOfBSplineSurface(*(::Geom_SequenceOfBSplineSurface*)theOther->NativeInstance);
}

RDC::OCC::Geom_SequenceOfBSplineSurface^ RDC::OCC::Geom_HSequenceOfBSplineSurface::Sequence()
{
	::Geom_SequenceOfBSplineSurface* _result = new ::Geom_SequenceOfBSplineSurface();
	*_result = (::Geom_SequenceOfBSplineSurface)((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Sequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Geom_SequenceOfBSplineSurface(_result);
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::Append(RDC::OCC::Geom_BSplineSurface^ theItem)
{
	((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Append(Handle(::Geom_BSplineSurface)(theItem->NativeInstance));
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::Append(RDC::OCC::Geom_SequenceOfBSplineSurface^ theSequence)
{
	((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Append(*(::Geom_SequenceOfBSplineSurface*)theSequence->NativeInstance);
}

RDC::OCC::Geom_SequenceOfBSplineSurface^ RDC::OCC::Geom_HSequenceOfBSplineSurface::ChangeSequence()
{
	::Geom_SequenceOfBSplineSurface* _result = new ::Geom_SequenceOfBSplineSurface();
	*_result = ((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->ChangeSequence();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::Geom_SequenceOfBSplineSurface(_result);
}

int RDC::OCC::Geom_HSequenceOfBSplineSurface::Size()
{
	int _result = ((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Size();
	return _result;
}

int RDC::OCC::Geom_HSequenceOfBSplineSurface::Length()
{
	int _result = ((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Length();
	return _result;
}

int RDC::OCC::Geom_HSequenceOfBSplineSurface::Lower()
{
	int _result = ((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Lower();
	return _result;
}

int RDC::OCC::Geom_HSequenceOfBSplineSurface::Upper()
{
	int _result = ((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Upper();
	return _result;
}

bool RDC::OCC::Geom_HSequenceOfBSplineSurface::IsEmpty()
{
	bool _result = ((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->IsEmpty();
	return _result;
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::Reverse()
{
	((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Reverse();
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::Exchange(int I, int J)
{
	((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Exchange(I, J);
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator)
{
	((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::Clear()
{
	((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Clear(0L);
}

RDC::OCC::Geom_HSequenceOfBSplineSurface^ RDC::OCC::Geom_HSequenceOfBSplineSurface::Assign(RDC::OCC::Geom_HSequenceOfBSplineSurface^ theOther)
{
	throw gcnew System::NotImplementedException();
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::Remove(RDC::OCC::Geom_HSequenceOfBSplineSurface::Iterator^ thePosition)
{
	((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Remove(*(::Geom_HSequenceOfBSplineSurface::Iterator*)thePosition->NativeInstance);
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::Prepend(RDC::OCC::Geom_BSplineSurface^ theItem)
{
	((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Prepend(Handle(::Geom_BSplineSurface)(theItem->NativeInstance));
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::InsertBefore(int theIndex, RDC::OCC::Geom_BSplineSurface^ theItem)
{
	((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->InsertBefore(theIndex, Handle(::Geom_BSplineSurface)(theItem->NativeInstance));
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::InsertAfter(RDC::OCC::Geom_HSequenceOfBSplineSurface::Iterator^ thePosition, RDC::OCC::Geom_BSplineSurface^ theItem)
{
	((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->InsertAfter(*(::Geom_HSequenceOfBSplineSurface::Iterator*)thePosition->NativeInstance, Handle(::Geom_BSplineSurface)(theItem->NativeInstance));
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::Split(int theIndex, RDC::OCC::Geom_HSequenceOfBSplineSurface^ theSeq)
{
	((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Split(theIndex, *(::Geom_HSequenceOfBSplineSurface*)theSeq->NativeInstance);
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_HSequenceOfBSplineSurface::First()
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->First();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_HSequenceOfBSplineSurface::ChangeFirst()
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->ChangeFirst();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_HSequenceOfBSplineSurface::Last()
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Last();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_HSequenceOfBSplineSurface::ChangeLast()
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->ChangeLast();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_HSequenceOfBSplineSurface::Value(int theIndex)
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->Value(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_HSequenceOfBSplineSurface::ChangeValue(int theIndex)
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->ChangeValue(theIndex);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::SetValue(int theIndex, RDC::OCC::Geom_BSplineSurface^ theItem)
{
	((::Geom_HSequenceOfBSplineSurface*)_NativeInstance)->SetValue(theIndex, Handle(::Geom_BSplineSurface)(theItem->NativeInstance));
}

RDC::OCC::Geom_HSequenceOfBSplineSurface^ RDC::OCC::Geom_HSequenceOfBSplineSurface::CreateDowncasted(::Geom_HSequenceOfBSplineSurface* instance)
{
	return gcnew RDC::OCC::Geom_HSequenceOfBSplineSurface(instance);
}

System::Collections::Generic::IEnumerator<RDC::OCC::Geom_BSplineSurface^>^ RDC::OCC::Geom_HSequenceOfBSplineSurface::GetEnumerator()
{
	return gcnew IndexEnumerator<RDC::OCC::Geom_BSplineSurface^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ RDC::OCC::Geom_HSequenceOfBSplineSurface::GetEnumerator2()
{
	return gcnew IndexEnumerator<RDC::OCC::Geom_BSplineSurface^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Geom_HSequenceOfBSplineSurface::Iterator
//---------------------------------------------------------------------

RDC::OCC::Geom_HSequenceOfBSplineSurface::Iterator::Iterator()
	: RDC::OCC::BaseClass<::Geom_HSequenceOfBSplineSurface::Iterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom_HSequenceOfBSplineSurface::Iterator();
}

bool RDC::OCC::Geom_HSequenceOfBSplineSurface::Iterator::More()
{
	bool _result = ((::Geom_HSequenceOfBSplineSurface::Iterator*)_NativeInstance)->More();
	return _result;
}

void RDC::OCC::Geom_HSequenceOfBSplineSurface::Iterator::Next()
{
	((::Geom_HSequenceOfBSplineSurface::Iterator*)_NativeInstance)->Next();
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_HSequenceOfBSplineSurface::Iterator::Value()
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_HSequenceOfBSplineSurface::Iterator*)_NativeInstance)->Value();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_BSplineSurface^ RDC::OCC::Geom_HSequenceOfBSplineSurface::Iterator::ChangeValue()
{
	Handle(::Geom_BSplineSurface) _result = ((::Geom_HSequenceOfBSplineSurface::Iterator*)_NativeInstance)->ChangeValue();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

bool RDC::OCC::Geom_HSequenceOfBSplineSurface::Iterator::IsEqual(RDC::OCC::Geom_HSequenceOfBSplineSurface::Iterator^ theOther)
{
	bool _result = ((::Geom_HSequenceOfBSplineSurface::Iterator*)_NativeInstance)->IsEqual(*(::Geom_HSequenceOfBSplineSurface::Iterator*)theOther->NativeInstance);
	return _result;
}

bool RDC::OCC::Geom_HSequenceOfBSplineSurface::Iterator::Equals(System::Object^ obj)
{
	if (ReferenceEquals(this, obj))
	{
		return true;
	}
	if (ReferenceEquals(nullptr, obj))
	{
		return false;
	}
	System::Type^ myType = RDC::OCC::Geom_HSequenceOfBSplineSurface::Iterator::GetType();
	System::Type^ objType = obj->GetType();
	if (myType->Equals(objType) || objType->IsSubclassOf(myType))
	{
		return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
	}
	return false;
}



//---------------------------------------------------------------------
//  Class  Geom_Hyperbola
//---------------------------------------------------------------------

RDC::OCC::Geom_Hyperbola::Geom_Hyperbola(RDC::OCC::gp_Hypr^ H)
	: RDC::OCC::Geom_Conic(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_Hyperbola(*(::gp_Hypr*)H->NativeInstance);
}

RDC::OCC::Geom_Hyperbola::Geom_Hyperbola(RDC::OCC::Ax2 A2, double MajorRadius, double MinorRadius)
	: RDC::OCC::Geom_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
	NativeInstance = new ::Geom_Hyperbola(*(gp_Ax2*)pp_A2, MajorRadius, MinorRadius);
}

void RDC::OCC::Geom_Hyperbola::SetHypr(RDC::OCC::gp_Hypr^ H)
{
	((::Geom_Hyperbola*)_NativeInstance)->SetHypr(*(::gp_Hypr*)H->NativeInstance);
}

void RDC::OCC::Geom_Hyperbola::SetMajorRadius(double MajorRadius)
{
	((::Geom_Hyperbola*)_NativeInstance)->SetMajorRadius(MajorRadius);
}

void RDC::OCC::Geom_Hyperbola::SetMinorRadius(double MinorRadius)
{
	((::Geom_Hyperbola*)_NativeInstance)->SetMinorRadius(MinorRadius);
}

RDC::OCC::gp_Hypr^ RDC::OCC::Geom_Hyperbola::Hypr()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::Geom_Hyperbola*)_NativeInstance)->Hypr();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

double RDC::OCC::Geom_Hyperbola::ReversedParameter(double U)
{
	double _result = ((::Geom_Hyperbola*)_NativeInstance)->ReversedParameter(U);
	return _result;
}

double RDC::OCC::Geom_Hyperbola::FirstParameter()
{
	double _result = ((::Geom_Hyperbola*)_NativeInstance)->FirstParameter();
	return _result;
}

double RDC::OCC::Geom_Hyperbola::LastParameter()
{
	double _result = ((::Geom_Hyperbola*)_NativeInstance)->LastParameter();
	return _result;
}

bool RDC::OCC::Geom_Hyperbola::IsClosed()
{
	bool _result = ((::Geom_Hyperbola*)_NativeInstance)->IsClosed();
	return _result;
}

bool RDC::OCC::Geom_Hyperbola::IsPeriodic()
{
	bool _result = ((::Geom_Hyperbola*)_NativeInstance)->IsPeriodic();
	return _result;
}

RDC::OCC::Ax1 RDC::OCC::Geom_Hyperbola::Asymptote1()
{
	::gp_Ax1 _nativeResult = ((::Geom_Hyperbola*)_NativeInstance)->Asymptote1();
	return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::Geom_Hyperbola::Asymptote2()
{
	::gp_Ax1 _nativeResult = ((::Geom_Hyperbola*)_NativeInstance)->Asymptote2();
	return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::gp_Hypr^ RDC::OCC::Geom_Hyperbola::ConjugateBranch1()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::Geom_Hyperbola*)_NativeInstance)->ConjugateBranch1();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

RDC::OCC::gp_Hypr^ RDC::OCC::Geom_Hyperbola::ConjugateBranch2()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::Geom_Hyperbola*)_NativeInstance)->ConjugateBranch2();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

RDC::OCC::Ax1 RDC::OCC::Geom_Hyperbola::Directrix1()
{
	::gp_Ax1 _nativeResult = ((::Geom_Hyperbola*)_NativeInstance)->Directrix1();
	return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Ax1 RDC::OCC::Geom_Hyperbola::Directrix2()
{
	::gp_Ax1 _nativeResult = ((::Geom_Hyperbola*)_NativeInstance)->Directrix2();
	return RDC::OCC::Ax1(_nativeResult);
}

double RDC::OCC::Geom_Hyperbola::Eccentricity()
{
	double _result = ((::Geom_Hyperbola*)_NativeInstance)->Eccentricity();
	return _result;
}

double RDC::OCC::Geom_Hyperbola::Focal()
{
	double _result = ((::Geom_Hyperbola*)_NativeInstance)->Focal();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::Geom_Hyperbola::Focus1()
{
	::gp_Pnt _nativeResult = ((::Geom_Hyperbola*)_NativeInstance)->Focus1();
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_Hyperbola::Focus2()
{
	::gp_Pnt _nativeResult = ((::Geom_Hyperbola*)_NativeInstance)->Focus2();
	return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::Geom_Hyperbola::MajorRadius()
{
	double _result = ((::Geom_Hyperbola*)_NativeInstance)->MajorRadius();
	return _result;
}

double RDC::OCC::Geom_Hyperbola::MinorRadius()
{
	double _result = ((::Geom_Hyperbola*)_NativeInstance)->MinorRadius();
	return _result;
}

RDC::OCC::gp_Hypr^ RDC::OCC::Geom_Hyperbola::OtherBranch()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::Geom_Hyperbola*)_NativeInstance)->OtherBranch();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Hypr(_result);
}

double RDC::OCC::Geom_Hyperbola::Parameter()
{
	double _result = ((::Geom_Hyperbola*)_NativeInstance)->Parameter();
	return _result;
}

void RDC::OCC::Geom_Hyperbola::D0(double U, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_Hyperbola*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_Hyperbola::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	((::Geom_Hyperbola*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::Geom_Hyperbola::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	((::Geom_Hyperbola*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::Geom_Hyperbola::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
	((::Geom_Hyperbola*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::Geom_Hyperbola::DN(double U, int N)
{
	::gp_Vec _nativeResult = ((::Geom_Hyperbola*)_NativeInstance)->DN(U, N);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_Hyperbola::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_Hyperbola*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Hyperbola::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_Hyperbola*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Hyperbola::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_Hyperbola*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_Hyperbola::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_Hyperbola*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_Hyperbola^ RDC::OCC::Geom_Hyperbola::CreateDowncasted(::Geom_Hyperbola* instance)
{
	return gcnew RDC::OCC::Geom_Hyperbola(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Line
//---------------------------------------------------------------------

RDC::OCC::Geom_Line::Geom_Line(RDC::OCC::Ax1 A1)
	: RDC::OCC::Geom_Curve(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax1> pp_A1 = &A1;
	NativeInstance = new ::Geom_Line(*(gp_Ax1*)pp_A1);
}

RDC::OCC::Geom_Line::Geom_Line(RDC::OCC::gp_Lin^ L)
	: RDC::OCC::Geom_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_Line(*(::gp_Lin*)L->NativeInstance);
}

RDC::OCC::Geom_Line::Geom_Line(RDC::OCC::Pnt P, RDC::OCC::Dir V)
	: RDC::OCC::Geom_Curve(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	NativeInstance = new ::Geom_Line(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_V);
}

void RDC::OCC::Geom_Line::SetLin(RDC::OCC::gp_Lin^ L)
{
	((::Geom_Line*)_NativeInstance)->SetLin(*(::gp_Lin*)L->NativeInstance);
}

void RDC::OCC::Geom_Line::SetDirection(RDC::OCC::Dir V)
{
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	((::Geom_Line*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_V);
}

void RDC::OCC::Geom_Line::SetLocation(RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_Line*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_Line::SetPosition(RDC::OCC::Ax1 A1)
{
	pin_ptr<RDC::OCC::Ax1> pp_A1 = &A1;
	((::Geom_Line*)_NativeInstance)->SetPosition(*(gp_Ax1*)pp_A1);
}

RDC::OCC::gp_Lin^ RDC::OCC::Geom_Line::Lin()
{
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::Geom_Line*)_NativeInstance)->Lin();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Lin(_result);
}

RDC::OCC::Ax1 RDC::OCC::Geom_Line::Position()
{
	::gp_Ax1 _nativeResult = ((::Geom_Line*)_NativeInstance)->Position();
	return RDC::OCC::Ax1(_nativeResult);
}

void RDC::OCC::Geom_Line::Reverse()
{
	((::Geom_Line*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom_Line::ReversedParameter(double U)
{
	double _result = ((::Geom_Line*)_NativeInstance)->ReversedParameter(U);
	return _result;
}

double RDC::OCC::Geom_Line::FirstParameter()
{
	double _result = ((::Geom_Line*)_NativeInstance)->FirstParameter();
	return _result;
}

double RDC::OCC::Geom_Line::LastParameter()
{
	double _result = ((::Geom_Line*)_NativeInstance)->LastParameter();
	return _result;
}

bool RDC::OCC::Geom_Line::IsClosed()
{
	bool _result = ((::Geom_Line*)_NativeInstance)->IsClosed();
	return _result;
}

bool RDC::OCC::Geom_Line::IsPeriodic()
{
	bool _result = ((::Geom_Line*)_NativeInstance)->IsPeriodic();
	return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_Line::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_Line*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

bool RDC::OCC::Geom_Line::IsCN(int N)
{
	bool _result = ((::Geom_Line*)_NativeInstance)->IsCN(N);
	return _result;
}

void RDC::OCC::Geom_Line::D0(double U, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_Line*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_Line::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	((::Geom_Line*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::Geom_Line::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	((::Geom_Line*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::Geom_Line::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
	((::Geom_Line*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::Geom_Line::DN(double U, int N)
{
	::gp_Vec _nativeResult = ((::Geom_Line*)_NativeInstance)->DN(U, N);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_Line::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_Line*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

double RDC::OCC::Geom_Line::TransformedParameter(double U, RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	double _result = ((::Geom_Line*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf*)pp_T);
	return _result;
}

double RDC::OCC::Geom_Line::ParametricTransformation(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	double _result = ((::Geom_Line*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result;
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Line::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_Line*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Line::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_Line*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_Line::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_Line*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_Line^ RDC::OCC::Geom_Line::CreateDowncasted(::Geom_Line* instance)
{
	return gcnew RDC::OCC::Geom_Line(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_OffsetCurve
//---------------------------------------------------------------------

RDC::OCC::Geom_OffsetCurve::Geom_OffsetCurve(RDC::OCC::Geom_Curve^ C, double Offset, RDC::OCC::Dir V, bool isNotCheckC0)
	: RDC::OCC::Geom_Curve(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	NativeInstance = new ::Geom_OffsetCurve(Handle(::Geom_Curve)(C->NativeInstance), Offset, *(gp_Dir*)pp_V, isNotCheckC0);
}

RDC::OCC::Geom_OffsetCurve::Geom_OffsetCurve(RDC::OCC::Geom_Curve^ C, double Offset, RDC::OCC::Dir V)
	: RDC::OCC::Geom_Curve(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	NativeInstance = new ::Geom_OffsetCurve(Handle(::Geom_Curve)(C->NativeInstance), Offset, *(gp_Dir*)pp_V, false);
}

void RDC::OCC::Geom_OffsetCurve::Reverse()
{
	((::Geom_OffsetCurve*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom_OffsetCurve::ReversedParameter(double U)
{
	double _result = ((::Geom_OffsetCurve*)_NativeInstance)->ReversedParameter(U);
	return _result;
}

void RDC::OCC::Geom_OffsetCurve::SetBasisCurve(RDC::OCC::Geom_Curve^ C, bool isNotCheckC0)
{
	((::Geom_OffsetCurve*)_NativeInstance)->SetBasisCurve(Handle(::Geom_Curve)(C->NativeInstance), isNotCheckC0);
}

void RDC::OCC::Geom_OffsetCurve::SetBasisCurve(RDC::OCC::Geom_Curve^ C)
{
	((::Geom_OffsetCurve*)_NativeInstance)->SetBasisCurve(Handle(::Geom_Curve)(C->NativeInstance), false);
}

void RDC::OCC::Geom_OffsetCurve::SetDirection(RDC::OCC::Dir V)
{
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	((::Geom_OffsetCurve*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_V);
}

void RDC::OCC::Geom_OffsetCurve::SetOffsetValue(double D)
{
	((::Geom_OffsetCurve*)_NativeInstance)->SetOffsetValue(D);
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_OffsetCurve::BasisCurve()
{
	Handle(::Geom_Curve) _result = ((::Geom_OffsetCurve*)_NativeInstance)->BasisCurve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_OffsetCurve::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_OffsetCurve*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

RDC::OCC::Dir RDC::OCC::Geom_OffsetCurve::Direction()
{
	::gp_Dir _nativeResult = ((::Geom_OffsetCurve*)_NativeInstance)->Direction();
	return RDC::OCC::Dir(_nativeResult);
}

void RDC::OCC::Geom_OffsetCurve::D0(double U, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_OffsetCurve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_OffsetCurve::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	((::Geom_OffsetCurve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::Geom_OffsetCurve::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	((::Geom_OffsetCurve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::Geom_OffsetCurve::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
	((::Geom_OffsetCurve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::Geom_OffsetCurve::DN(double U, int N)
{
	::gp_Vec _nativeResult = ((::Geom_OffsetCurve*)_NativeInstance)->DN(U, N);
	return RDC::OCC::Vec(_nativeResult);
}

double RDC::OCC::Geom_OffsetCurve::FirstParameter()
{
	double _result = ((::Geom_OffsetCurve*)_NativeInstance)->FirstParameter();
	return _result;
}

double RDC::OCC::Geom_OffsetCurve::LastParameter()
{
	double _result = ((::Geom_OffsetCurve*)_NativeInstance)->LastParameter();
	return _result;
}

double RDC::OCC::Geom_OffsetCurve::Offset()
{
	double _result = ((::Geom_OffsetCurve*)_NativeInstance)->Offset();
	return _result;
}

bool RDC::OCC::Geom_OffsetCurve::IsClosed()
{
	bool _result = ((::Geom_OffsetCurve*)_NativeInstance)->IsClosed();
	return _result;
}

bool RDC::OCC::Geom_OffsetCurve::IsCN(int N)
{
	bool _result = ((::Geom_OffsetCurve*)_NativeInstance)->IsCN(N);
	return _result;
}

bool RDC::OCC::Geom_OffsetCurve::IsPeriodic()
{
	bool _result = ((::Geom_OffsetCurve*)_NativeInstance)->IsPeriodic();
	return _result;
}

double RDC::OCC::Geom_OffsetCurve::Period()
{
	double _result = ((::Geom_OffsetCurve*)_NativeInstance)->Period();
	return _result;
}

void RDC::OCC::Geom_OffsetCurve::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_OffsetCurve*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

double RDC::OCC::Geom_OffsetCurve::TransformedParameter(double U, RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	double _result = ((::Geom_OffsetCurve*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf*)pp_T);
	return _result;
}

double RDC::OCC::Geom_OffsetCurve::ParametricTransformation(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	double _result = ((::Geom_OffsetCurve*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result;
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_OffsetCurve::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_OffsetCurve*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_OffsetCurve::GetBasisCurveContinuity()
{
	::GeomAbs_Shape _result = ((::Geom_OffsetCurve*)_NativeInstance)->GetBasisCurveContinuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

void RDC::OCC::Geom_OffsetCurve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_OffsetCurve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_OffsetCurve::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_OffsetCurve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_OffsetCurve^ RDC::OCC::Geom_OffsetCurve::CreateDowncasted(::Geom_OffsetCurve* instance)
{
	return gcnew RDC::OCC::Geom_OffsetCurve(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_OsculatingSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_OsculatingSurface::Geom_OsculatingSurface()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_OsculatingSurface();
}

RDC::OCC::Geom_OsculatingSurface::Geom_OsculatingSurface(RDC::OCC::Geom_Surface^ BS, double Tol)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_OsculatingSurface(Handle(::Geom_Surface)(BS->NativeInstance), Tol);
}

void RDC::OCC::Geom_OsculatingSurface::Init(RDC::OCC::Geom_Surface^ BS, double Tol)
{
	((::Geom_OsculatingSurface*)_NativeInstance)->Init(Handle(::Geom_Surface)(BS->NativeInstance), Tol);
}

RDC::OCC::Geom_Surface^ RDC::OCC::Geom_OsculatingSurface::BasisSurface()
{
	Handle(::Geom_Surface) _result = ((::Geom_OsculatingSurface*)_NativeInstance)->BasisSurface();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}

double RDC::OCC::Geom_OsculatingSurface::Tolerance()
{
	double _result = ((::Geom_OsculatingSurface*)_NativeInstance)->Tolerance();
	return _result;
}

bool RDC::OCC::Geom_OsculatingSurface::UOscSurf(double U, double V, bool% t, RDC::OCC::Geom_BSplineSurface^ L)
{
	pin_ptr<bool> pp_t = &t;
	Handle(::Geom_BSplineSurface) h_L = L->NativeInstance;
	bool _result = ((::Geom_OsculatingSurface*)_NativeInstance)->UOscSurf(U, V, *(bool*)pp_t, h_L);
	L->NativeInstance = h_L.get();
	return _result;
}

bool RDC::OCC::Geom_OsculatingSurface::VOscSurf(double U, double V, bool% t, RDC::OCC::Geom_BSplineSurface^ L)
{
	pin_ptr<bool> pp_t = &t;
	Handle(::Geom_BSplineSurface) h_L = L->NativeInstance;
	bool _result = ((::Geom_OsculatingSurface*)_NativeInstance)->VOscSurf(U, V, *(bool*)pp_t, h_L);
	L->NativeInstance = h_L.get();
	return _result;
}

void RDC::OCC::Geom_OsculatingSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_OsculatingSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_OsculatingSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_OsculatingSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_OsculatingSurface^ RDC::OCC::Geom_OsculatingSurface::CreateDowncasted(::Geom_OsculatingSurface* instance)
{
	return gcnew RDC::OCC::Geom_OsculatingSurface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_OffsetSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_OffsetSurface::Geom_OffsetSurface(RDC::OCC::Geom_Surface^ S, double Offset, bool isNotCheckC0)
	: RDC::OCC::Geom_Surface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_OffsetSurface(Handle(::Geom_Surface)(S->NativeInstance), Offset, isNotCheckC0);
}

RDC::OCC::Geom_OffsetSurface::Geom_OffsetSurface(RDC::OCC::Geom_Surface^ S, double Offset)
	: RDC::OCC::Geom_Surface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_OffsetSurface(Handle(::Geom_Surface)(S->NativeInstance), Offset, false);
}

void RDC::OCC::Geom_OffsetSurface::SetBasisSurface(RDC::OCC::Geom_Surface^ S, bool isNotCheckC0)
{
	((::Geom_OffsetSurface*)_NativeInstance)->SetBasisSurface(Handle(::Geom_Surface)(S->NativeInstance), isNotCheckC0);
}

void RDC::OCC::Geom_OffsetSurface::SetBasisSurface(RDC::OCC::Geom_Surface^ S)
{
	((::Geom_OffsetSurface*)_NativeInstance)->SetBasisSurface(Handle(::Geom_Surface)(S->NativeInstance), false);
}

void RDC::OCC::Geom_OffsetSurface::SetOffsetValue(double D)
{
	((::Geom_OffsetSurface*)_NativeInstance)->SetOffsetValue(D);
}

double RDC::OCC::Geom_OffsetSurface::Offset()
{
	double _result = ((::Geom_OffsetSurface*)_NativeInstance)->Offset();
	return _result;
}

RDC::OCC::Geom_Surface^ RDC::OCC::Geom_OffsetSurface::BasisSurface()
{
	Handle(::Geom_Surface) _result = ((::Geom_OffsetSurface*)_NativeInstance)->BasisSurface();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_OsculatingSurface^ RDC::OCC::Geom_OffsetSurface::OsculatingSurface()
{
	Handle(::Geom_OsculatingSurface) _result = ((::Geom_OffsetSurface*)_NativeInstance)->OsculatingSurface();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_OsculatingSurface::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_OffsetSurface::UReverse()
{
	((::Geom_OffsetSurface*)_NativeInstance)->UReverse();
}

double RDC::OCC::Geom_OffsetSurface::UReversedParameter(double U)
{
	double _result = ((::Geom_OffsetSurface*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

void RDC::OCC::Geom_OffsetSurface::VReverse()
{
	((::Geom_OffsetSurface*)_NativeInstance)->VReverse();
}

double RDC::OCC::Geom_OffsetSurface::VReversedParameter(double V)
{
	double _result = ((::Geom_OffsetSurface*)_NativeInstance)->VReversedParameter(V);
	return _result;
}

void RDC::OCC::Geom_OffsetSurface::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::Geom_OffsetSurface*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_OffsetSurface::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_OffsetSurface*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

bool RDC::OCC::Geom_OffsetSurface::IsCNu(int N)
{
	bool _result = ((::Geom_OffsetSurface*)_NativeInstance)->IsCNu(N);
	return _result;
}

bool RDC::OCC::Geom_OffsetSurface::IsCNv(int N)
{
	bool _result = ((::Geom_OffsetSurface*)_NativeInstance)->IsCNv(N);
	return _result;
}

bool RDC::OCC::Geom_OffsetSurface::IsUClosed()
{
	bool _result = ((::Geom_OffsetSurface*)_NativeInstance)->IsUClosed();
	return _result;
}

bool RDC::OCC::Geom_OffsetSurface::IsVClosed()
{
	bool _result = ((::Geom_OffsetSurface*)_NativeInstance)->IsVClosed();
	return _result;
}

bool RDC::OCC::Geom_OffsetSurface::IsUPeriodic()
{
	bool _result = ((::Geom_OffsetSurface*)_NativeInstance)->IsUPeriodic();
	return _result;
}

double RDC::OCC::Geom_OffsetSurface::UPeriod()
{
	double _result = ((::Geom_OffsetSurface*)_NativeInstance)->UPeriod();
	return _result;
}

bool RDC::OCC::Geom_OffsetSurface::IsVPeriodic()
{
	bool _result = ((::Geom_OffsetSurface*)_NativeInstance)->IsVPeriodic();
	return _result;
}

double RDC::OCC::Geom_OffsetSurface::VPeriod()
{
	double _result = ((::Geom_OffsetSurface*)_NativeInstance)->VPeriod();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_OffsetSurface::UIso(double U)
{
	Handle(::Geom_Curve) _result = ((::Geom_OffsetSurface*)_NativeInstance)->UIso(U);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_OffsetSurface::VIso(double V)
{
	Handle(::Geom_Curve) _result = ((::Geom_OffsetSurface*)_NativeInstance)->VIso(V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_OffsetSurface::D0(double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_OffsetSurface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_OffsetSurface::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_OffsetSurface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_OffsetSurface::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_OffsetSurface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_OffsetSurface::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_OffsetSurface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_OffsetSurface::DN(double U, double V, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_OffsetSurface*)_NativeInstance)->DN(U, V, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_OffsetSurface::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_OffsetSurface*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

void RDC::OCC::Geom_OffsetSurface::TransformParameters(double% U, double% V, RDC::OCC::Trsf T)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_OffsetSurface*)_NativeInstance)->TransformParameters(*(double*)pp_U, *(double*)pp_V, *(gp_Trsf*)pp_T);
}

RDC::OCC::gp_GTrsf2d^ RDC::OCC::Geom_OffsetSurface::ParametricTransformation(RDC::OCC::Trsf T)
{
	::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	*_result = ((::Geom_OffsetSurface*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf2d(_result);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_OffsetSurface::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_OffsetSurface*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Surface^ RDC::OCC::Geom_OffsetSurface::Surface()
{
	Handle(::Geom_Surface) _result = ((::Geom_OffsetSurface*)_NativeInstance)->Surface();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}

bool RDC::OCC::Geom_OffsetSurface::UOsculatingSurface(double U, double V, bool% IsOpposite, RDC::OCC::Geom_BSplineSurface^ UOsculSurf)
{
	pin_ptr<bool> pp_IsOpposite = &IsOpposite;
	Handle(::Geom_BSplineSurface) h_UOsculSurf = UOsculSurf->NativeInstance;
	bool _result = ((::Geom_OffsetSurface*)_NativeInstance)->UOsculatingSurface(U, V, *(bool*)pp_IsOpposite, h_UOsculSurf);
	UOsculSurf->NativeInstance = h_UOsculSurf.get();
	return _result;
}

bool RDC::OCC::Geom_OffsetSurface::VOsculatingSurface(double U, double V, bool% IsOpposite, RDC::OCC::Geom_BSplineSurface^ VOsculSurf)
{
	pin_ptr<bool> pp_IsOpposite = &IsOpposite;
	Handle(::Geom_BSplineSurface) h_VOsculSurf = VOsculSurf->NativeInstance;
	bool _result = ((::Geom_OffsetSurface*)_NativeInstance)->VOsculatingSurface(U, V, *(bool*)pp_IsOpposite, h_VOsculSurf);
	VOsculSurf->NativeInstance = h_VOsculSurf.get();
	return _result;
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_OffsetSurface::GetBasisSurfContinuity()
{
	::GeomAbs_Shape _result = ((::Geom_OffsetSurface*)_NativeInstance)->GetBasisSurfContinuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

void RDC::OCC::Geom_OffsetSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_OffsetSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_OffsetSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_OffsetSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_OffsetSurface^ RDC::OCC::Geom_OffsetSurface::CreateDowncasted(::Geom_OffsetSurface* instance)
{
	return gcnew RDC::OCC::Geom_OffsetSurface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Parabola
//---------------------------------------------------------------------

RDC::OCC::Geom_Parabola::Geom_Parabola(RDC::OCC::gp_Parab^ Prb)
	: RDC::OCC::Geom_Conic(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_Parabola(*(::gp_Parab*)Prb->NativeInstance);
}

RDC::OCC::Geom_Parabola::Geom_Parabola(RDC::OCC::Ax2 A2, double Focal)
	: RDC::OCC::Geom_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax2> pp_A2 = &A2;
	NativeInstance = new ::Geom_Parabola(*(gp_Ax2*)pp_A2, Focal);
}

RDC::OCC::Geom_Parabola::Geom_Parabola(RDC::OCC::Ax1 D, RDC::OCC::Pnt F)
	: RDC::OCC::Geom_Conic(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax1> pp_D = &D;
	pin_ptr<RDC::OCC::Pnt> pp_F = &F;
	NativeInstance = new ::Geom_Parabola(*(gp_Ax1*)pp_D, *(gp_Pnt*)pp_F);
}

void RDC::OCC::Geom_Parabola::SetFocal(double Focal)
{
	((::Geom_Parabola*)_NativeInstance)->SetFocal(Focal);
}

void RDC::OCC::Geom_Parabola::SetParab(RDC::OCC::gp_Parab^ Prb)
{
	((::Geom_Parabola*)_NativeInstance)->SetParab(*(::gp_Parab*)Prb->NativeInstance);
}

RDC::OCC::gp_Parab^ RDC::OCC::Geom_Parabola::Parab()
{
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::Geom_Parabola*)_NativeInstance)->Parab();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Parab(_result);
}

double RDC::OCC::Geom_Parabola::ReversedParameter(double U)
{
	double _result = ((::Geom_Parabola*)_NativeInstance)->ReversedParameter(U);
	return _result;
}

double RDC::OCC::Geom_Parabola::FirstParameter()
{
	double _result = ((::Geom_Parabola*)_NativeInstance)->FirstParameter();
	return _result;
}

double RDC::OCC::Geom_Parabola::LastParameter()
{
	double _result = ((::Geom_Parabola*)_NativeInstance)->LastParameter();
	return _result;
}

bool RDC::OCC::Geom_Parabola::IsClosed()
{
	bool _result = ((::Geom_Parabola*)_NativeInstance)->IsClosed();
	return _result;
}

bool RDC::OCC::Geom_Parabola::IsPeriodic()
{
	bool _result = ((::Geom_Parabola*)_NativeInstance)->IsPeriodic();
	return _result;
}

RDC::OCC::Ax1 RDC::OCC::Geom_Parabola::Directrix()
{
	::gp_Ax1 _nativeResult = ((::Geom_Parabola*)_NativeInstance)->Directrix();
	return RDC::OCC::Ax1(_nativeResult);
}

double RDC::OCC::Geom_Parabola::Eccentricity()
{
	double _result = ((::Geom_Parabola*)_NativeInstance)->Eccentricity();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::Geom_Parabola::Focus()
{
	::gp_Pnt _nativeResult = ((::Geom_Parabola*)_NativeInstance)->Focus();
	return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::Geom_Parabola::Focal()
{
	double _result = ((::Geom_Parabola*)_NativeInstance)->Focal();
	return _result;
}

double RDC::OCC::Geom_Parabola::Parameter()
{
	double _result = ((::Geom_Parabola*)_NativeInstance)->Parameter();
	return _result;
}

void RDC::OCC::Geom_Parabola::D0(double U, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_Parabola*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_Parabola::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	((::Geom_Parabola*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::Geom_Parabola::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	((::Geom_Parabola*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::Geom_Parabola::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
	((::Geom_Parabola*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::Geom_Parabola::DN(double U, int N)
{
	::gp_Vec _nativeResult = ((::Geom_Parabola*)_NativeInstance)->DN(U, N);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_Parabola::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_Parabola*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

double RDC::OCC::Geom_Parabola::TransformedParameter(double U, RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	double _result = ((::Geom_Parabola*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf*)pp_T);
	return _result;
}

double RDC::OCC::Geom_Parabola::ParametricTransformation(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	double _result = ((::Geom_Parabola*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result;
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Parabola::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_Parabola*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Parabola::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_Parabola*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_Parabola::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_Parabola*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_Parabola^ RDC::OCC::Geom_Parabola::CreateDowncasted(::Geom_Parabola* instance)
{
	return gcnew RDC::OCC::Geom_Parabola(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Plane
//---------------------------------------------------------------------

RDC::OCC::Geom_Plane::Geom_Plane(RDC::OCC::Ax3 A3)
	: RDC::OCC::Geom_ElementarySurface(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax3> pp_A3 = &A3;
	NativeInstance = new ::Geom_Plane(*(gp_Ax3*)pp_A3);
}

RDC::OCC::Geom_Plane::Geom_Plane(RDC::OCC::Pln Pl)
	: RDC::OCC::Geom_ElementarySurface(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
	NativeInstance = new ::Geom_Plane(*(gp_Pln*)pp_Pl);
}

RDC::OCC::Geom_Plane::Geom_Plane(RDC::OCC::Pnt P, RDC::OCC::Dir V)
	: RDC::OCC::Geom_ElementarySurface(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	NativeInstance = new ::Geom_Plane(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_V);
}

RDC::OCC::Geom_Plane::Geom_Plane(double A, double B, double C, double D)
	: RDC::OCC::Geom_ElementarySurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_Plane(A, B, C, D);
}

void RDC::OCC::Geom_Plane::SetPln(RDC::OCC::Pln Pl)
{
	pin_ptr<RDC::OCC::Pln> pp_Pl = &Pl;
	((::Geom_Plane*)_NativeInstance)->SetPln(*(gp_Pln*)pp_Pl);
}

RDC::OCC::Pln RDC::OCC::Geom_Plane::Pln()
{
	::gp_Pln _nativeResult = ((::Geom_Plane*)_NativeInstance)->Pln();
	return RDC::OCC::Pln(_nativeResult);
}

void RDC::OCC::Geom_Plane::UReverse()
{
	((::Geom_Plane*)_NativeInstance)->UReverse();
}

double RDC::OCC::Geom_Plane::UReversedParameter(double U)
{
	double _result = ((::Geom_Plane*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

void RDC::OCC::Geom_Plane::VReverse()
{
	((::Geom_Plane*)_NativeInstance)->VReverse();
}

double RDC::OCC::Geom_Plane::VReversedParameter(double V)
{
	double _result = ((::Geom_Plane*)_NativeInstance)->VReversedParameter(V);
	return _result;
}

void RDC::OCC::Geom_Plane::TransformParameters(double% U, double% V, RDC::OCC::Trsf T)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_Plane*)_NativeInstance)->TransformParameters(*(double*)pp_U, *(double*)pp_V, *(gp_Trsf*)pp_T);
}

RDC::OCC::gp_GTrsf2d^ RDC::OCC::Geom_Plane::ParametricTransformation(RDC::OCC::Trsf T)
{
	::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	*_result = ((::Geom_Plane*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf2d(_result);
}

void RDC::OCC::Geom_Plane::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::Geom_Plane*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

void RDC::OCC::Geom_Plane::Coefficients(double% A, double% B, double% C, double% D)
{
	pin_ptr<double> pp_A = &A;
	pin_ptr<double> pp_B = &B;
	pin_ptr<double> pp_C = &C;
	pin_ptr<double> pp_D = &D;
	((::Geom_Plane*)_NativeInstance)->Coefficients(*(double*)pp_A, *(double*)pp_B, *(double*)pp_C, *(double*)pp_D);
}

bool RDC::OCC::Geom_Plane::IsUClosed()
{
	bool _result = ((::Geom_Plane*)_NativeInstance)->IsUClosed();
	return _result;
}

bool RDC::OCC::Geom_Plane::IsVClosed()
{
	bool _result = ((::Geom_Plane*)_NativeInstance)->IsVClosed();
	return _result;
}

bool RDC::OCC::Geom_Plane::IsUPeriodic()
{
	bool _result = ((::Geom_Plane*)_NativeInstance)->IsUPeriodic();
	return _result;
}

bool RDC::OCC::Geom_Plane::IsVPeriodic()
{
	bool _result = ((::Geom_Plane*)_NativeInstance)->IsVPeriodic();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_Plane::UIso(double U)
{
	Handle(::Geom_Curve) _result = ((::Geom_Plane*)_NativeInstance)->UIso(U);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_Plane::VIso(double V)
{
	Handle(::Geom_Curve) _result = ((::Geom_Plane*)_NativeInstance)->VIso(V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Plane::D0(double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_Plane*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_Plane::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_Plane*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_Plane::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_Plane*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_Plane::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_Plane*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_Plane::DN(double U, double V, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_Plane*)_NativeInstance)->DN(U, V, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_Plane::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_Plane*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_Plane::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_Plane*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Plane::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_Plane*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_Plane::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_Plane*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_Plane^ RDC::OCC::Geom_Plane::CreateDowncasted(::Geom_Plane* instance)
{
	return gcnew RDC::OCC::Geom_Plane(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_RectangularTrimmedSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_RectangularTrimmedSurface::Geom_RectangularTrimmedSurface(RDC::OCC::Geom_Surface^ S, double U1, double U2, double V1, double V2, bool USense, bool VSense)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_RectangularTrimmedSurface(Handle(::Geom_Surface)(S->NativeInstance), U1, U2, V1, V2, USense, VSense);
}

RDC::OCC::Geom_RectangularTrimmedSurface::Geom_RectangularTrimmedSurface(RDC::OCC::Geom_Surface^ S, double U1, double U2, double V1, double V2, bool USense)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_RectangularTrimmedSurface(Handle(::Geom_Surface)(S->NativeInstance), U1, U2, V1, V2, USense, true);
}

RDC::OCC::Geom_RectangularTrimmedSurface::Geom_RectangularTrimmedSurface(RDC::OCC::Geom_Surface^ S, double U1, double U2, double V1, double V2)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_RectangularTrimmedSurface(Handle(::Geom_Surface)(S->NativeInstance), U1, U2, V1, V2, true, true);
}

RDC::OCC::Geom_RectangularTrimmedSurface::Geom_RectangularTrimmedSurface(RDC::OCC::Geom_Surface^ S, double Param1, double Param2, bool UTrim, bool Sense)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_RectangularTrimmedSurface(Handle(::Geom_Surface)(S->NativeInstance), Param1, Param2, UTrim, Sense);
}

RDC::OCC::Geom_RectangularTrimmedSurface::Geom_RectangularTrimmedSurface(RDC::OCC::Geom_Surface^ S, double Param1, double Param2, bool UTrim)
	: RDC::OCC::Geom_BoundedSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_RectangularTrimmedSurface(Handle(::Geom_Surface)(S->NativeInstance), Param1, Param2, UTrim, true);
}

void RDC::OCC::Geom_RectangularTrimmedSurface::SetTrim(double U1, double U2, double V1, double V2, bool USense, bool VSense)
{
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->SetTrim(U1, U2, V1, V2, USense, VSense);
}

void RDC::OCC::Geom_RectangularTrimmedSurface::SetTrim(double U1, double U2, double V1, double V2, bool USense)
{
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->SetTrim(U1, U2, V1, V2, USense, true);
}

void RDC::OCC::Geom_RectangularTrimmedSurface::SetTrim(double U1, double U2, double V1, double V2)
{
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->SetTrim(U1, U2, V1, V2, true, true);
}

void RDC::OCC::Geom_RectangularTrimmedSurface::SetTrim(double Param1, double Param2, bool UTrim, bool Sense)
{
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->SetTrim(Param1, Param2, UTrim, Sense);
}

void RDC::OCC::Geom_RectangularTrimmedSurface::SetTrim(double Param1, double Param2, bool UTrim)
{
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->SetTrim(Param1, Param2, UTrim, true);
}

RDC::OCC::Geom_Surface^ RDC::OCC::Geom_RectangularTrimmedSurface::BasisSurface()
{
	Handle(::Geom_Surface) _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->BasisSurface();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Surface::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_RectangularTrimmedSurface::UReverse()
{
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->UReverse();
}

double RDC::OCC::Geom_RectangularTrimmedSurface::UReversedParameter(double U)
{
	double _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

void RDC::OCC::Geom_RectangularTrimmedSurface::VReverse()
{
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->VReverse();
}

double RDC::OCC::Geom_RectangularTrimmedSurface::VReversedParameter(double V)
{
	double _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->VReversedParameter(V);
	return _result;
}

void RDC::OCC::Geom_RectangularTrimmedSurface::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_RectangularTrimmedSurface::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

bool RDC::OCC::Geom_RectangularTrimmedSurface::IsUClosed()
{
	bool _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->IsUClosed();
	return _result;
}

bool RDC::OCC::Geom_RectangularTrimmedSurface::IsVClosed()
{
	bool _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->IsVClosed();
	return _result;
}

bool RDC::OCC::Geom_RectangularTrimmedSurface::IsCNu(int N)
{
	bool _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->IsCNu(N);
	return _result;
}

bool RDC::OCC::Geom_RectangularTrimmedSurface::IsCNv(int N)
{
	bool _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->IsCNv(N);
	return _result;
}

bool RDC::OCC::Geom_RectangularTrimmedSurface::IsUPeriodic()
{
	bool _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->IsUPeriodic();
	return _result;
}

double RDC::OCC::Geom_RectangularTrimmedSurface::UPeriod()
{
	double _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->UPeriod();
	return _result;
}

bool RDC::OCC::Geom_RectangularTrimmedSurface::IsVPeriodic()
{
	bool _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->IsVPeriodic();
	return _result;
}

double RDC::OCC::Geom_RectangularTrimmedSurface::VPeriod()
{
	double _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->VPeriod();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_RectangularTrimmedSurface::UIso(double U)
{
	Handle(::Geom_Curve) _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->UIso(U);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_RectangularTrimmedSurface::VIso(double V)
{
	Handle(::Geom_Curve) _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->VIso(V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_RectangularTrimmedSurface::D0(double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_RectangularTrimmedSurface::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_RectangularTrimmedSurface::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_RectangularTrimmedSurface::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_RectangularTrimmedSurface::DN(double U, double V, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->DN(U, V, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_RectangularTrimmedSurface::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

void RDC::OCC::Geom_RectangularTrimmedSurface::TransformParameters(double% U, double% V, RDC::OCC::Trsf T)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->TransformParameters(*(double*)pp_U, *(double*)pp_V, *(gp_Trsf*)pp_T);
}

RDC::OCC::gp_GTrsf2d^ RDC::OCC::Geom_RectangularTrimmedSurface::ParametricTransformation(RDC::OCC::Trsf T)
{
	::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	*_result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf2d(_result);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_RectangularTrimmedSurface::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_RectangularTrimmedSurface*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_RectangularTrimmedSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_RectangularTrimmedSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_RectangularTrimmedSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_RectangularTrimmedSurface^ RDC::OCC::Geom_RectangularTrimmedSurface::CreateDowncasted(::Geom_RectangularTrimmedSurface* instance)
{
	return gcnew RDC::OCC::Geom_RectangularTrimmedSurface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_SphericalSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_SphericalSurface::Geom_SphericalSurface(RDC::OCC::Ax3 A3, double Radius)
	: RDC::OCC::Geom_ElementarySurface(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax3> pp_A3 = &A3;
	NativeInstance = new ::Geom_SphericalSurface(*(gp_Ax3*)pp_A3, Radius);
}

RDC::OCC::Geom_SphericalSurface::Geom_SphericalSurface(RDC::OCC::gp_Sphere^ S)
	: RDC::OCC::Geom_ElementarySurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_SphericalSurface(*(::gp_Sphere*)S->NativeInstance);
}

void RDC::OCC::Geom_SphericalSurface::SetRadius(double R)
{
	((::Geom_SphericalSurface*)_NativeInstance)->SetRadius(R);
}

void RDC::OCC::Geom_SphericalSurface::SetSphere(RDC::OCC::gp_Sphere^ S)
{
	((::Geom_SphericalSurface*)_NativeInstance)->SetSphere(*(::gp_Sphere*)S->NativeInstance);
}

RDC::OCC::gp_Sphere^ RDC::OCC::Geom_SphericalSurface::Sphere()
{
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::Geom_SphericalSurface*)_NativeInstance)->Sphere();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Sphere(_result);
}

double RDC::OCC::Geom_SphericalSurface::UReversedParameter(double U)
{
	double _result = ((::Geom_SphericalSurface*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

double RDC::OCC::Geom_SphericalSurface::VReversedParameter(double V)
{
	double _result = ((::Geom_SphericalSurface*)_NativeInstance)->VReversedParameter(V);
	return _result;
}

double RDC::OCC::Geom_SphericalSurface::Area()
{
	double _result = ((::Geom_SphericalSurface*)_NativeInstance)->Area();
	return _result;
}

void RDC::OCC::Geom_SphericalSurface::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::Geom_SphericalSurface*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

void RDC::OCC::Geom_SphericalSurface::Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D)
{
	pin_ptr<double> pp_A1 = &A1;
	pin_ptr<double> pp_A2 = &A2;
	pin_ptr<double> pp_A3 = &A3;
	pin_ptr<double> pp_B1 = &B1;
	pin_ptr<double> pp_B2 = &B2;
	pin_ptr<double> pp_B3 = &B3;
	pin_ptr<double> pp_C1 = &C1;
	pin_ptr<double> pp_C2 = &C2;
	pin_ptr<double> pp_C3 = &C3;
	pin_ptr<double> pp_D = &D;
	((::Geom_SphericalSurface*)_NativeInstance)->Coefficients(*(double*)pp_A1, *(double*)pp_A2, *(double*)pp_A3, *(double*)pp_B1, *(double*)pp_B2, *(double*)pp_B3, *(double*)pp_C1, *(double*)pp_C2, *(double*)pp_C3, *(double*)pp_D);
}

double RDC::OCC::Geom_SphericalSurface::Radius()
{
	double _result = ((::Geom_SphericalSurface*)_NativeInstance)->Radius();
	return _result;
}

double RDC::OCC::Geom_SphericalSurface::Volume()
{
	double _result = ((::Geom_SphericalSurface*)_NativeInstance)->Volume();
	return _result;
}

bool RDC::OCC::Geom_SphericalSurface::IsUClosed()
{
	bool _result = ((::Geom_SphericalSurface*)_NativeInstance)->IsUClosed();
	return _result;
}

bool RDC::OCC::Geom_SphericalSurface::IsVClosed()
{
	bool _result = ((::Geom_SphericalSurface*)_NativeInstance)->IsVClosed();
	return _result;
}

bool RDC::OCC::Geom_SphericalSurface::IsUPeriodic()
{
	bool _result = ((::Geom_SphericalSurface*)_NativeInstance)->IsUPeriodic();
	return _result;
}

bool RDC::OCC::Geom_SphericalSurface::IsVPeriodic()
{
	bool _result = ((::Geom_SphericalSurface*)_NativeInstance)->IsVPeriodic();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_SphericalSurface::UIso(double U)
{
	Handle(::Geom_Curve) _result = ((::Geom_SphericalSurface*)_NativeInstance)->UIso(U);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_SphericalSurface::VIso(double V)
{
	Handle(::Geom_Curve) _result = ((::Geom_SphericalSurface*)_NativeInstance)->VIso(V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_SphericalSurface::D0(double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_SphericalSurface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_SphericalSurface::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_SphericalSurface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_SphericalSurface::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_SphericalSurface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_SphericalSurface::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_SphericalSurface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_SphericalSurface::DN(double U, double V, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_SphericalSurface*)_NativeInstance)->DN(U, V, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_SphericalSurface::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_SphericalSurface*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_SphericalSurface::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_SphericalSurface*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_SphericalSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_SphericalSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_SphericalSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_SphericalSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_SphericalSurface^ RDC::OCC::Geom_SphericalSurface::CreateDowncasted(::Geom_SphericalSurface* instance)
{
	return gcnew RDC::OCC::Geom_SphericalSurface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_SweptSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_SweptSurface::Geom_SweptSurface()
	: RDC::OCC::Geom_Surface(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_SweptSurface::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_SweptSurface*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

RDC::OCC::Dir RDC::OCC::Geom_SweptSurface::Direction()
{
	::gp_Dir _nativeResult = ((::Geom_SweptSurface*)_NativeInstance)->Direction();
	return RDC::OCC::Dir(_nativeResult);
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_SweptSurface::BasisCurve()
{
	Handle(::Geom_Curve) _result = ((::Geom_SweptSurface*)_NativeInstance)->BasisCurve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_SweptSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_SweptSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_SweptSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_SweptSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_SweptSurface^ RDC::OCC::Geom_SweptSurface::CreateDowncasted(::Geom_SweptSurface* instance)
{
	if (instance == nullptr)
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom_SurfaceOfLinearExtrusion)))
		return RDC::OCC::Geom_SurfaceOfLinearExtrusion::CreateDowncasted((::Geom_SurfaceOfLinearExtrusion*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom_SurfaceOfRevolution)))
		return RDC::OCC::Geom_SurfaceOfRevolution::CreateDowncasted((::Geom_SurfaceOfRevolution*)instance);

	return gcnew RDC::OCC::Geom_SweptSurface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_SurfaceOfLinearExtrusion
//---------------------------------------------------------------------

RDC::OCC::Geom_SurfaceOfLinearExtrusion::Geom_SurfaceOfLinearExtrusion(RDC::OCC::Geom_Curve^ C, RDC::OCC::Dir V)
	: RDC::OCC::Geom_SweptSurface(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	NativeInstance = new ::Geom_SurfaceOfLinearExtrusion(Handle(::Geom_Curve)(C->NativeInstance), *(gp_Dir*)pp_V);
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::SetDirection(RDC::OCC::Dir V)
{
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_V);
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::SetBasisCurve(RDC::OCC::Geom_Curve^ C)
{
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->SetBasisCurve(Handle(::Geom_Curve)(C->NativeInstance));
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::UReverse()
{
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->UReverse();
}

double RDC::OCC::Geom_SurfaceOfLinearExtrusion::UReversedParameter(double U)
{
	double _result = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::VReverse()
{
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->VReverse();
}

double RDC::OCC::Geom_SurfaceOfLinearExtrusion::VReversedParameter(double V)
{
	double _result = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->VReversedParameter(V);
	return _result;
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

bool RDC::OCC::Geom_SurfaceOfLinearExtrusion::IsUClosed()
{
	bool _result = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->IsUClosed();
	return _result;
}

bool RDC::OCC::Geom_SurfaceOfLinearExtrusion::IsVClosed()
{
	bool _result = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->IsVClosed();
	return _result;
}

bool RDC::OCC::Geom_SurfaceOfLinearExtrusion::IsCNu(int N)
{
	bool _result = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->IsCNu(N);
	return _result;
}

bool RDC::OCC::Geom_SurfaceOfLinearExtrusion::IsCNv(int N)
{
	bool _result = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->IsCNv(N);
	return _result;
}

bool RDC::OCC::Geom_SurfaceOfLinearExtrusion::IsUPeriodic()
{
	bool _result = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->IsUPeriodic();
	return _result;
}

bool RDC::OCC::Geom_SurfaceOfLinearExtrusion::IsVPeriodic()
{
	bool _result = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->IsVPeriodic();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_SurfaceOfLinearExtrusion::UIso(double U)
{
	Handle(::Geom_Curve) _result = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->UIso(U);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_SurfaceOfLinearExtrusion::VIso(double V)
{
	Handle(::Geom_Curve) _result = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->VIso(V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::D0(double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_SurfaceOfLinearExtrusion::DN(double U, double V, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->DN(U, V, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::TransformParameters(double% U, double% V, RDC::OCC::Trsf T)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->TransformParameters(*(double*)pp_U, *(double*)pp_V, *(gp_Trsf*)pp_T);
}

RDC::OCC::gp_GTrsf2d^ RDC::OCC::Geom_SurfaceOfLinearExtrusion::ParametricTransformation(RDC::OCC::Trsf T)
{
	::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	*_result = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf2d(_result);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_SurfaceOfLinearExtrusion::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_SurfaceOfLinearExtrusion::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_SurfaceOfLinearExtrusion*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_SurfaceOfLinearExtrusion^ RDC::OCC::Geom_SurfaceOfLinearExtrusion::CreateDowncasted(::Geom_SurfaceOfLinearExtrusion* instance)
{
	return gcnew RDC::OCC::Geom_SurfaceOfLinearExtrusion(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_SurfaceOfRevolution
//---------------------------------------------------------------------

RDC::OCC::Geom_SurfaceOfRevolution::Geom_SurfaceOfRevolution(RDC::OCC::Geom_Curve^ C, RDC::OCC::Ax1 A1)
	: RDC::OCC::Geom_SweptSurface(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax1> pp_A1 = &A1;
	NativeInstance = new ::Geom_SurfaceOfRevolution(Handle(::Geom_Curve)(C->NativeInstance), *(gp_Ax1*)pp_A1);
}

void RDC::OCC::Geom_SurfaceOfRevolution::SetAxis(RDC::OCC::Ax1 A1)
{
	pin_ptr<RDC::OCC::Ax1> pp_A1 = &A1;
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_A1);
}

void RDC::OCC::Geom_SurfaceOfRevolution::SetDirection(RDC::OCC::Dir V)
{
	pin_ptr<RDC::OCC::Dir> pp_V = &V;
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_V);
}

void RDC::OCC::Geom_SurfaceOfRevolution::SetBasisCurve(RDC::OCC::Geom_Curve^ C)
{
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->SetBasisCurve(Handle(::Geom_Curve)(C->NativeInstance));
}

void RDC::OCC::Geom_SurfaceOfRevolution::SetLocation(RDC::OCC::Pnt P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_P);
}

RDC::OCC::Ax1 RDC::OCC::Geom_SurfaceOfRevolution::Axis()
{
	::gp_Ax1 _nativeResult = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->Axis();
	return RDC::OCC::Ax1(_nativeResult);
}

RDC::OCC::Pnt RDC::OCC::Geom_SurfaceOfRevolution::Location()
{
	::gp_Pnt _nativeResult = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->Location();
	return RDC::OCC::Pnt(_nativeResult);
}

RDC::OCC::Ax2 RDC::OCC::Geom_SurfaceOfRevolution::ReferencePlane()
{
	::gp_Ax2 _nativeResult = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->ReferencePlane();
	return RDC::OCC::Ax2(_nativeResult);
}

void RDC::OCC::Geom_SurfaceOfRevolution::UReverse()
{
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->UReverse();
}

double RDC::OCC::Geom_SurfaceOfRevolution::UReversedParameter(double U)
{
	double _result = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

void RDC::OCC::Geom_SurfaceOfRevolution::VReverse()
{
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->VReverse();
}

double RDC::OCC::Geom_SurfaceOfRevolution::VReversedParameter(double V)
{
	double _result = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->VReversedParameter(V);
	return _result;
}

void RDC::OCC::Geom_SurfaceOfRevolution::TransformParameters(double% U, double% V, RDC::OCC::Trsf T)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->TransformParameters(*(double*)pp_U, *(double*)pp_V, *(gp_Trsf*)pp_T);
}

RDC::OCC::gp_GTrsf2d^ RDC::OCC::Geom_SurfaceOfRevolution::ParametricTransformation(RDC::OCC::Trsf T)
{
	::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	*_result = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_GTrsf2d(_result);
}

void RDC::OCC::Geom_SurfaceOfRevolution::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

bool RDC::OCC::Geom_SurfaceOfRevolution::IsUClosed()
{
	bool _result = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->IsUClosed();
	return _result;
}

bool RDC::OCC::Geom_SurfaceOfRevolution::IsVClosed()
{
	bool _result = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->IsVClosed();
	return _result;
}

bool RDC::OCC::Geom_SurfaceOfRevolution::IsCNu(int N)
{
	bool _result = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->IsCNu(N);
	return _result;
}

bool RDC::OCC::Geom_SurfaceOfRevolution::IsCNv(int N)
{
	bool _result = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->IsCNv(N);
	return _result;
}

bool RDC::OCC::Geom_SurfaceOfRevolution::IsUPeriodic()
{
	bool _result = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->IsUPeriodic();
	return _result;
}

bool RDC::OCC::Geom_SurfaceOfRevolution::IsVPeriodic()
{
	bool _result = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->IsVPeriodic();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_SurfaceOfRevolution::UIso(double U)
{
	Handle(::Geom_Curve) _result = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->UIso(U);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_SurfaceOfRevolution::VIso(double V)
{
	Handle(::Geom_Curve) _result = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->VIso(V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_SurfaceOfRevolution::D0(double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_SurfaceOfRevolution::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_SurfaceOfRevolution::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_SurfaceOfRevolution::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_SurfaceOfRevolution::DN(double U, double V, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->DN(U, V, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_SurfaceOfRevolution::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_SurfaceOfRevolution::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_SurfaceOfRevolution*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_SurfaceOfRevolution::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_SurfaceOfRevolution::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_SurfaceOfRevolution*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_SurfaceOfRevolution^ RDC::OCC::Geom_SurfaceOfRevolution::CreateDowncasted(::Geom_SurfaceOfRevolution* instance)
{
	return gcnew RDC::OCC::Geom_SurfaceOfRevolution(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_ToroidalSurface
//---------------------------------------------------------------------

RDC::OCC::Geom_ToroidalSurface::Geom_ToroidalSurface(RDC::OCC::Ax3 A3, double MajorRadius, double MinorRadius)
	: RDC::OCC::Geom_ElementarySurface(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Ax3> pp_A3 = &A3;
	NativeInstance = new ::Geom_ToroidalSurface(*(gp_Ax3*)pp_A3, MajorRadius, MinorRadius);
}

RDC::OCC::Geom_ToroidalSurface::Geom_ToroidalSurface(RDC::OCC::gp_Torus^ T)
	: RDC::OCC::Geom_ElementarySurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_ToroidalSurface(*(::gp_Torus*)T->NativeInstance);
}

void RDC::OCC::Geom_ToroidalSurface::SetMajorRadius(double MajorRadius)
{
	((::Geom_ToroidalSurface*)_NativeInstance)->SetMajorRadius(MajorRadius);
}

void RDC::OCC::Geom_ToroidalSurface::SetMinorRadius(double MinorRadius)
{
	((::Geom_ToroidalSurface*)_NativeInstance)->SetMinorRadius(MinorRadius);
}

void RDC::OCC::Geom_ToroidalSurface::SetTorus(RDC::OCC::gp_Torus^ T)
{
	((::Geom_ToroidalSurface*)_NativeInstance)->SetTorus(*(::gp_Torus*)T->NativeInstance);
}

RDC::OCC::gp_Torus^ RDC::OCC::Geom_ToroidalSurface::Torus()
{
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::Geom_ToroidalSurface*)_NativeInstance)->Torus();
	return _result == nullptr ? nullptr : gcnew RDC::OCC::gp_Torus(_result);
}

double RDC::OCC::Geom_ToroidalSurface::UReversedParameter(double U)
{
	double _result = ((::Geom_ToroidalSurface*)_NativeInstance)->UReversedParameter(U);
	return _result;
}

double RDC::OCC::Geom_ToroidalSurface::VReversedParameter(double U)
{
	double _result = ((::Geom_ToroidalSurface*)_NativeInstance)->VReversedParameter(U);
	return _result;
}

double RDC::OCC::Geom_ToroidalSurface::Area()
{
	double _result = ((::Geom_ToroidalSurface*)_NativeInstance)->Area();
	return _result;
}

void RDC::OCC::Geom_ToroidalSurface::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::Geom_ToroidalSurface*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

void RDC::OCC::Geom_ToroidalSurface::Coefficients(RDC::OCC::TColStd_Array1OfReal^ Coef)
{
	((::Geom_ToroidalSurface*)_NativeInstance)->Coefficients(*(::TColStd_Array1OfReal*)Coef->NativeInstance);
}

double RDC::OCC::Geom_ToroidalSurface::MajorRadius()
{
	double _result = ((::Geom_ToroidalSurface*)_NativeInstance)->MajorRadius();
	return _result;
}

double RDC::OCC::Geom_ToroidalSurface::MinorRadius()
{
	double _result = ((::Geom_ToroidalSurface*)_NativeInstance)->MinorRadius();
	return _result;
}

double RDC::OCC::Geom_ToroidalSurface::Volume()
{
	double _result = ((::Geom_ToroidalSurface*)_NativeInstance)->Volume();
	return _result;
}

bool RDC::OCC::Geom_ToroidalSurface::IsUClosed()
{
	bool _result = ((::Geom_ToroidalSurface*)_NativeInstance)->IsUClosed();
	return _result;
}

bool RDC::OCC::Geom_ToroidalSurface::IsVClosed()
{
	bool _result = ((::Geom_ToroidalSurface*)_NativeInstance)->IsVClosed();
	return _result;
}

bool RDC::OCC::Geom_ToroidalSurface::IsUPeriodic()
{
	bool _result = ((::Geom_ToroidalSurface*)_NativeInstance)->IsUPeriodic();
	return _result;
}

bool RDC::OCC::Geom_ToroidalSurface::IsVPeriodic()
{
	bool _result = ((::Geom_ToroidalSurface*)_NativeInstance)->IsVPeriodic();
	return _result;
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_ToroidalSurface::UIso(double U)
{
	Handle(::Geom_Curve) _result = ((::Geom_ToroidalSurface*)_NativeInstance)->UIso(U);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_ToroidalSurface::VIso(double V)
{
	Handle(::Geom_Curve) _result = ((::Geom_ToroidalSurface*)_NativeInstance)->VIso(V);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_ToroidalSurface::D0(double U, double V, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_ToroidalSurface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_ToroidalSurface::D1(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	((::Geom_ToroidalSurface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void RDC::OCC::Geom_ToroidalSurface::D2(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	((::Geom_ToroidalSurface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void RDC::OCC::Geom_ToroidalSurface::D3(double U, double V, RDC::OCC::Pnt% P, RDC::OCC::Vec% D1U, RDC::OCC::Vec% D1V, RDC::OCC::Vec% D2U, RDC::OCC::Vec% D2V, RDC::OCC::Vec% D2UV, RDC::OCC::Vec% D3U, RDC::OCC::Vec% D3V, RDC::OCC::Vec% D3UUV, RDC::OCC::Vec% D3UVV)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_D1U = &D1U;
	pin_ptr<RDC::OCC::Vec> pp_D1V = &D1V;
	pin_ptr<RDC::OCC::Vec> pp_D2U = &D2U;
	pin_ptr<RDC::OCC::Vec> pp_D2V = &D2V;
	pin_ptr<RDC::OCC::Vec> pp_D2UV = &D2UV;
	pin_ptr<RDC::OCC::Vec> pp_D3U = &D3U;
	pin_ptr<RDC::OCC::Vec> pp_D3V = &D3V;
	pin_ptr<RDC::OCC::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<RDC::OCC::Vec> pp_D3UVV = &D3UVV;
	((::Geom_ToroidalSurface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

RDC::OCC::Vec RDC::OCC::Geom_ToroidalSurface::DN(double U, double V, int Nu, int Nv)
{
	::gp_Vec _nativeResult = ((::Geom_ToroidalSurface*)_NativeInstance)->DN(U, V, Nu, Nv);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_ToroidalSurface::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_ToroidalSurface*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_ToroidalSurface::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_ToroidalSurface*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_ToroidalSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_ToroidalSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_ToroidalSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_ToroidalSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_ToroidalSurface^ RDC::OCC::Geom_ToroidalSurface::CreateDowncasted(::Geom_ToroidalSurface* instance)
{
	return gcnew RDC::OCC::Geom_ToroidalSurface(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_Transformation
//---------------------------------------------------------------------

RDC::OCC::Geom_Transformation::Geom_Transformation()
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_Transformation();
}

RDC::OCC::Geom_Transformation::Geom_Transformation(RDC::OCC::Trsf T)
	: RDC::OCC::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	NativeInstance = new ::Geom_Transformation(*(gp_Trsf*)pp_T);
}

void RDC::OCC::Geom_Transformation::SetMirror(RDC::OCC::Pnt thePnt)
{
	pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
	((::Geom_Transformation*)_NativeInstance)->SetMirror(*(gp_Pnt*)pp_thePnt);
}

void RDC::OCC::Geom_Transformation::SetMirror(RDC::OCC::Ax1 theA1)
{
	pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
	((::Geom_Transformation*)_NativeInstance)->SetMirror(*(gp_Ax1*)pp_theA1);
}

void RDC::OCC::Geom_Transformation::SetMirror(RDC::OCC::Ax2 theA2)
{
	pin_ptr<RDC::OCC::Ax2> pp_theA2 = &theA2;
	((::Geom_Transformation*)_NativeInstance)->SetMirror(*(gp_Ax2*)pp_theA2);
}

void RDC::OCC::Geom_Transformation::SetRotation(RDC::OCC::Ax1 theA1, double theAng)
{
	pin_ptr<RDC::OCC::Ax1> pp_theA1 = &theA1;
	((::Geom_Transformation*)_NativeInstance)->SetRotation(*(gp_Ax1*)pp_theA1, theAng);
}

void RDC::OCC::Geom_Transformation::SetScale(RDC::OCC::Pnt thePnt, double theScale)
{
	pin_ptr<RDC::OCC::Pnt> pp_thePnt = &thePnt;
	((::Geom_Transformation*)_NativeInstance)->SetScale(*(gp_Pnt*)pp_thePnt, theScale);
}

void RDC::OCC::Geom_Transformation::SetTransformation(RDC::OCC::Ax3 theFromSystem1, RDC::OCC::Ax3 theToSystem2)
{
	pin_ptr<RDC::OCC::Ax3> pp_theFromSystem1 = &theFromSystem1;
	pin_ptr<RDC::OCC::Ax3> pp_theToSystem2 = &theToSystem2;
	((::Geom_Transformation*)_NativeInstance)->SetTransformation(*(gp_Ax3*)pp_theFromSystem1, *(gp_Ax3*)pp_theToSystem2);
}

void RDC::OCC::Geom_Transformation::SetTransformation(RDC::OCC::Ax3 theToSystem)
{
	pin_ptr<RDC::OCC::Ax3> pp_theToSystem = &theToSystem;
	((::Geom_Transformation*)_NativeInstance)->SetTransformation(*(gp_Ax3*)pp_theToSystem);
}

void RDC::OCC::Geom_Transformation::SetTranslation(RDC::OCC::Vec theVec)
{
	pin_ptr<RDC::OCC::Vec> pp_theVec = &theVec;
	((::Geom_Transformation*)_NativeInstance)->SetTranslation(*(gp_Vec*)pp_theVec);
}

void RDC::OCC::Geom_Transformation::SetTranslation(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
	((::Geom_Transformation*)_NativeInstance)->SetTranslation(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void RDC::OCC::Geom_Transformation::SetTrsf(RDC::OCC::Trsf theTrsf)
{
	pin_ptr<RDC::OCC::Trsf> pp_theTrsf = &theTrsf;
	((::Geom_Transformation*)_NativeInstance)->SetTrsf(*(gp_Trsf*)pp_theTrsf);
}

bool RDC::OCC::Geom_Transformation::IsNegative()
{
	bool _result = ((::Geom_Transformation*)_NativeInstance)->IsNegative();
	return _result;
}

RDC::OCC::TrsfForm RDC::OCC::Geom_Transformation::Form()
{
	::gp_TrsfForm _result = ((::Geom_Transformation*)_NativeInstance)->Form();
	return (RDC::OCC::TrsfForm)_result;
}

double RDC::OCC::Geom_Transformation::ScaleFactor()
{
	double _result = ((::Geom_Transformation*)_NativeInstance)->ScaleFactor();
	return _result;
}

RDC::OCC::Trsf RDC::OCC::Geom_Transformation::Trsf()
{
	::gp_Trsf _nativeResult = ((::Geom_Transformation*)_NativeInstance)->Trsf();
	return RDC::OCC::Trsf(_nativeResult);
}

double RDC::OCC::Geom_Transformation::Value(int theRow, int theCol)
{
	double _result = ((::Geom_Transformation*)_NativeInstance)->Value(theRow, theCol);
	return _result;
}

void RDC::OCC::Geom_Transformation::Invert()
{
	((::Geom_Transformation*)_NativeInstance)->Invert();
}

RDC::OCC::Geom_Transformation^ RDC::OCC::Geom_Transformation::Inverted()
{
	Handle(::Geom_Transformation) _result = ((::Geom_Transformation*)_NativeInstance)->Inverted();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Transformation::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_Transformation^ RDC::OCC::Geom_Transformation::Multiplied(RDC::OCC::Geom_Transformation^ Other)
{
	Handle(::Geom_Transformation) _result = ((::Geom_Transformation*)_NativeInstance)->Multiplied(Handle(::Geom_Transformation)(Other->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Transformation::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Transformation::Multiply(RDC::OCC::Geom_Transformation^ theOther)
{
	((::Geom_Transformation*)_NativeInstance)->Multiply(Handle(::Geom_Transformation)(theOther->NativeInstance));
}

void RDC::OCC::Geom_Transformation::Power(int N)
{
	((::Geom_Transformation*)_NativeInstance)->Power(N);
}

RDC::OCC::Geom_Transformation^ RDC::OCC::Geom_Transformation::Powered(int N)
{
	Handle(::Geom_Transformation) _result = ((::Geom_Transformation*)_NativeInstance)->Powered(N);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Transformation::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Transformation::PreMultiply(RDC::OCC::Geom_Transformation^ Other)
{
	((::Geom_Transformation*)_NativeInstance)->PreMultiply(Handle(::Geom_Transformation)(Other->NativeInstance));
}

void RDC::OCC::Geom_Transformation::Transforms(double% theX, double% theY, double% theZ)
{
	pin_ptr<double> pp_theX = &theX;
	pin_ptr<double> pp_theY = &theY;
	pin_ptr<double> pp_theZ = &theZ;
	((::Geom_Transformation*)_NativeInstance)->Transforms(*(double*)pp_theX, *(double*)pp_theY, *(double*)pp_theZ);
}

RDC::OCC::Geom_Transformation^ RDC::OCC::Geom_Transformation::Copy()
{
	Handle(::Geom_Transformation) _result = ((::Geom_Transformation*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Transformation::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_Transformation::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_Transformation*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_Transformation::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_Transformation*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_Transformation^ RDC::OCC::Geom_Transformation::CreateDowncasted(::Geom_Transformation* instance)
{
	return gcnew RDC::OCC::Geom_Transformation(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_TrimmedCurve
//---------------------------------------------------------------------

RDC::OCC::Geom_TrimmedCurve::Geom_TrimmedCurve(RDC::OCC::Geom_Curve^ C, double U1, double U2, bool Sense, bool theAdjustPeriodic)
	: RDC::OCC::Geom_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_TrimmedCurve(Handle(::Geom_Curve)(C->NativeInstance), U1, U2, Sense, theAdjustPeriodic);
}

RDC::OCC::Geom_TrimmedCurve::Geom_TrimmedCurve(RDC::OCC::Geom_Curve^ C, double U1, double U2, bool Sense)
	: RDC::OCC::Geom_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_TrimmedCurve(Handle(::Geom_Curve)(C->NativeInstance), U1, U2, Sense, true);
}

RDC::OCC::Geom_TrimmedCurve::Geom_TrimmedCurve(RDC::OCC::Geom_Curve^ C, double U1, double U2)
	: RDC::OCC::Geom_BoundedCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_TrimmedCurve(Handle(::Geom_Curve)(C->NativeInstance), U1, U2, true, true);
}

void RDC::OCC::Geom_TrimmedCurve::Reverse()
{
	((::Geom_TrimmedCurve*)_NativeInstance)->Reverse();
}

double RDC::OCC::Geom_TrimmedCurve::ReversedParameter(double U)
{
	double _result = ((::Geom_TrimmedCurve*)_NativeInstance)->ReversedParameter(U);
	return _result;
}

void RDC::OCC::Geom_TrimmedCurve::SetTrim(double U1, double U2, bool Sense, bool theAdjustPeriodic)
{
	((::Geom_TrimmedCurve*)_NativeInstance)->SetTrim(U1, U2, Sense, theAdjustPeriodic);
}

void RDC::OCC::Geom_TrimmedCurve::SetTrim(double U1, double U2, bool Sense)
{
	((::Geom_TrimmedCurve*)_NativeInstance)->SetTrim(U1, U2, Sense, true);
}

void RDC::OCC::Geom_TrimmedCurve::SetTrim(double U1, double U2)
{
	((::Geom_TrimmedCurve*)_NativeInstance)->SetTrim(U1, U2, true, true);
}

RDC::OCC::Geom_Curve^ RDC::OCC::Geom_TrimmedCurve::BasisCurve()
{
	Handle(::Geom_Curve) _result = ((::Geom_TrimmedCurve*)_NativeInstance)->BasisCurve();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Curve::CreateDowncasted(_result.get());
}

RDC::OCC::GeomAbs_Shape RDC::OCC::Geom_TrimmedCurve::Continuity()
{
	::GeomAbs_Shape _result = ((::Geom_TrimmedCurve*)_NativeInstance)->Continuity();
	return (RDC::OCC::GeomAbs_Shape)_result;
}

bool RDC::OCC::Geom_TrimmedCurve::IsCN(int N)
{
	bool _result = ((::Geom_TrimmedCurve*)_NativeInstance)->IsCN(N);
	return _result;
}

RDC::OCC::Pnt RDC::OCC::Geom_TrimmedCurve::EndPoint()
{
	::gp_Pnt _nativeResult = ((::Geom_TrimmedCurve*)_NativeInstance)->EndPoint();
	return RDC::OCC::Pnt(_nativeResult);
}

double RDC::OCC::Geom_TrimmedCurve::FirstParameter()
{
	double _result = ((::Geom_TrimmedCurve*)_NativeInstance)->FirstParameter();
	return _result;
}

bool RDC::OCC::Geom_TrimmedCurve::IsClosed()
{
	bool _result = ((::Geom_TrimmedCurve*)_NativeInstance)->IsClosed();
	return _result;
}

bool RDC::OCC::Geom_TrimmedCurve::IsPeriodic()
{
	bool _result = ((::Geom_TrimmedCurve*)_NativeInstance)->IsPeriodic();
	return _result;
}

double RDC::OCC::Geom_TrimmedCurve::Period()
{
	double _result = ((::Geom_TrimmedCurve*)_NativeInstance)->Period();
	return _result;
}

double RDC::OCC::Geom_TrimmedCurve::LastParameter()
{
	double _result = ((::Geom_TrimmedCurve*)_NativeInstance)->LastParameter();
	return _result;
}

RDC::OCC::Pnt RDC::OCC::Geom_TrimmedCurve::StartPoint()
{
	::gp_Pnt _nativeResult = ((::Geom_TrimmedCurve*)_NativeInstance)->StartPoint();
	return RDC::OCC::Pnt(_nativeResult);
}

void RDC::OCC::Geom_TrimmedCurve::D0(double U, RDC::OCC::Pnt% P)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	((::Geom_TrimmedCurve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void RDC::OCC::Geom_TrimmedCurve::D1(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	((::Geom_TrimmedCurve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void RDC::OCC::Geom_TrimmedCurve::D2(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	((::Geom_TrimmedCurve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void RDC::OCC::Geom_TrimmedCurve::D3(double U, RDC::OCC::Pnt% P, RDC::OCC::Vec% V1, RDC::OCC::Vec% V2, RDC::OCC::Vec% V3)
{
	pin_ptr<RDC::OCC::Pnt> pp_P = &P;
	pin_ptr<RDC::OCC::Vec> pp_V1 = &V1;
	pin_ptr<RDC::OCC::Vec> pp_V2 = &V2;
	pin_ptr<RDC::OCC::Vec> pp_V3 = &V3;
	((::Geom_TrimmedCurve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

RDC::OCC::Vec RDC::OCC::Geom_TrimmedCurve::DN(double U, int N)
{
	::gp_Vec _nativeResult = ((::Geom_TrimmedCurve*)_NativeInstance)->DN(U, N);
	return RDC::OCC::Vec(_nativeResult);
}

void RDC::OCC::Geom_TrimmedCurve::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_TrimmedCurve*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

double RDC::OCC::Geom_TrimmedCurve::TransformedParameter(double U, RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	double _result = ((::Geom_TrimmedCurve*)_NativeInstance)->TransformedParameter(U, *(gp_Trsf*)pp_T);
	return _result;
}

double RDC::OCC::Geom_TrimmedCurve::ParametricTransformation(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	double _result = ((::Geom_TrimmedCurve*)_NativeInstance)->ParametricTransformation(*(gp_Trsf*)pp_T);
	return _result;
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_TrimmedCurve::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_TrimmedCurve*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_TrimmedCurve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
	std::ostringstream oss_theOStream;
	((::Geom_TrimmedCurve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void RDC::OCC::Geom_TrimmedCurve::DumpJson(System::IO::TextWriter^ theOStream)
{
	std::ostringstream oss_theOStream;
	((::Geom_TrimmedCurve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
	theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

RDC::OCC::Geom_TrimmedCurve^ RDC::OCC::Geom_TrimmedCurve::CreateDowncasted(::Geom_TrimmedCurve* instance)
{
	return gcnew RDC::OCC::Geom_TrimmedCurve(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_UndefinedDerivative
//---------------------------------------------------------------------

RDC::OCC::Geom_UndefinedDerivative::Geom_UndefinedDerivative()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_UndefinedDerivative();
}

RDC::OCC::Geom_UndefinedDerivative::Geom_UndefinedDerivative(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Geom_UndefinedDerivative(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Geom_UndefinedDerivative::Geom_UndefinedDerivative(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Geom_UndefinedDerivative(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Geom_UndefinedDerivative::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Geom_UndefinedDerivative::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Geom_UndefinedDerivative::Raise()
{
	::Geom_UndefinedDerivative::Raise("");
}

RDC::OCC::Geom_UndefinedDerivative^ RDC::OCC::Geom_UndefinedDerivative::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Geom_UndefinedDerivative) _result = ::Geom_UndefinedDerivative::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_UndefinedDerivative::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_UndefinedDerivative^ RDC::OCC::Geom_UndefinedDerivative::NewInstance()
{
	Handle(::Geom_UndefinedDerivative) _result = ::Geom_UndefinedDerivative::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_UndefinedDerivative::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_UndefinedDerivative^ RDC::OCC::Geom_UndefinedDerivative::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Geom_UndefinedDerivative) _result = ::Geom_UndefinedDerivative::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_UndefinedDerivative::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_UndefinedDerivative^ RDC::OCC::Geom_UndefinedDerivative::CreateDowncasted(::Geom_UndefinedDerivative* instance)
{
	return gcnew RDC::OCC::Geom_UndefinedDerivative(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_UndefinedValue
//---------------------------------------------------------------------

RDC::OCC::Geom_UndefinedValue::Geom_UndefinedValue()
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_UndefinedValue();
}

RDC::OCC::Geom_UndefinedValue::Geom_UndefinedValue(System::String^ theMessage)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Geom_UndefinedValue(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

RDC::OCC::Geom_UndefinedValue::Geom_UndefinedValue(System::String^ theMessage, System::String^ theStackTrace)
	: RDC::OCC::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Geom_UndefinedValue(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void RDC::OCC::Geom_UndefinedValue::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Geom_UndefinedValue::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void RDC::OCC::Geom_UndefinedValue::Raise()
{
	::Geom_UndefinedValue::Raise("");
}

RDC::OCC::Geom_UndefinedValue^ RDC::OCC::Geom_UndefinedValue::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Geom_UndefinedValue) _result = ::Geom_UndefinedValue::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_UndefinedValue::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_UndefinedValue^ RDC::OCC::Geom_UndefinedValue::NewInstance()
{
	Handle(::Geom_UndefinedValue) _result = ::Geom_UndefinedValue::NewInstance("");
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_UndefinedValue::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_UndefinedValue^ RDC::OCC::Geom_UndefinedValue::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Geom_UndefinedValue) _result = ::Geom_UndefinedValue::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_UndefinedValue::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_UndefinedValue^ RDC::OCC::Geom_UndefinedValue::CreateDowncasted(::Geom_UndefinedValue* instance)
{
	return gcnew RDC::OCC::Geom_UndefinedValue(instance);
}



//---------------------------------------------------------------------
//  Class  Geom_VectorWithMagnitude
//---------------------------------------------------------------------

RDC::OCC::Geom_VectorWithMagnitude::Geom_VectorWithMagnitude(RDC::OCC::Vec V)
	: RDC::OCC::Geom_Vector(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Vec> pp_V = &V;
	NativeInstance = new ::Geom_VectorWithMagnitude(*(gp_Vec*)pp_V);
}

RDC::OCC::Geom_VectorWithMagnitude::Geom_VectorWithMagnitude(double X, double Y, double Z)
	: RDC::OCC::Geom_Vector(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom_VectorWithMagnitude(X, Y, Z);
}

RDC::OCC::Geom_VectorWithMagnitude::Geom_VectorWithMagnitude(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2)
	: RDC::OCC::Geom_Vector(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<RDC::OCC::Pnt> pp_P1 = &P1;
	pin_ptr<RDC::OCC::Pnt> pp_P2 = &P2;
	NativeInstance = new ::Geom_VectorWithMagnitude(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void RDC::OCC::Geom_VectorWithMagnitude::SetCoord(double X, double Y, double Z)
{
	((::Geom_VectorWithMagnitude*)_NativeInstance)->SetCoord(X, Y, Z);
}

void RDC::OCC::Geom_VectorWithMagnitude::SetVec(RDC::OCC::Vec V)
{
	pin_ptr<RDC::OCC::Vec> pp_V = &V;
	((::Geom_VectorWithMagnitude*)_NativeInstance)->SetVec(*(gp_Vec*)pp_V);
}

void RDC::OCC::Geom_VectorWithMagnitude::SetX(double X)
{
	((::Geom_VectorWithMagnitude*)_NativeInstance)->SetX(X);
}

void RDC::OCC::Geom_VectorWithMagnitude::SetY(double Y)
{
	((::Geom_VectorWithMagnitude*)_NativeInstance)->SetY(Y);
}

void RDC::OCC::Geom_VectorWithMagnitude::SetZ(double Z)
{
	((::Geom_VectorWithMagnitude*)_NativeInstance)->SetZ(Z);
}

double RDC::OCC::Geom_VectorWithMagnitude::Magnitude()
{
	double _result = ((::Geom_VectorWithMagnitude*)_NativeInstance)->Magnitude();
	return _result;
}

double RDC::OCC::Geom_VectorWithMagnitude::SquareMagnitude()
{
	double _result = ((::Geom_VectorWithMagnitude*)_NativeInstance)->SquareMagnitude();
	return _result;
}

void RDC::OCC::Geom_VectorWithMagnitude::Add(RDC::OCC::Geom_Vector^ Other)
{
	((::Geom_VectorWithMagnitude*)_NativeInstance)->Add(Handle(::Geom_Vector)(Other->NativeInstance));
}

RDC::OCC::Geom_VectorWithMagnitude^ RDC::OCC::Geom_VectorWithMagnitude::Added(RDC::OCC::Geom_Vector^ Other)
{
	Handle(::Geom_VectorWithMagnitude) _result = ((::Geom_VectorWithMagnitude*)_NativeInstance)->Added(Handle(::Geom_Vector)(Other->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_VectorWithMagnitude::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_VectorWithMagnitude::Cross(RDC::OCC::Geom_Vector^ Other)
{
	((::Geom_VectorWithMagnitude*)_NativeInstance)->Cross(Handle(::Geom_Vector)(Other->NativeInstance));
}

RDC::OCC::Geom_Vector^ RDC::OCC::Geom_VectorWithMagnitude::Crossed(RDC::OCC::Geom_Vector^ Other)
{
	Handle(::Geom_Vector) _result = ((::Geom_VectorWithMagnitude*)_NativeInstance)->Crossed(Handle(::Geom_Vector)(Other->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Vector::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_VectorWithMagnitude::CrossCross(RDC::OCC::Geom_Vector^ V1, RDC::OCC::Geom_Vector^ V2)
{
	((::Geom_VectorWithMagnitude*)_NativeInstance)->CrossCross(Handle(::Geom_Vector)(V1->NativeInstance), Handle(::Geom_Vector)(V2->NativeInstance));
}

RDC::OCC::Geom_Vector^ RDC::OCC::Geom_VectorWithMagnitude::CrossCrossed(RDC::OCC::Geom_Vector^ V1, RDC::OCC::Geom_Vector^ V2)
{
	Handle(::Geom_Vector) _result = ((::Geom_VectorWithMagnitude*)_NativeInstance)->CrossCrossed(Handle(::Geom_Vector)(V1->NativeInstance), Handle(::Geom_Vector)(V2->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Vector::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_VectorWithMagnitude::Divide(double Scalar)
{
	((::Geom_VectorWithMagnitude*)_NativeInstance)->Divide(Scalar);
}

RDC::OCC::Geom_VectorWithMagnitude^ RDC::OCC::Geom_VectorWithMagnitude::Divided(double Scalar)
{
	Handle(::Geom_VectorWithMagnitude) _result = ((::Geom_VectorWithMagnitude*)_NativeInstance)->Divided(Scalar);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_VectorWithMagnitude::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_VectorWithMagnitude^ RDC::OCC::Geom_VectorWithMagnitude::Multiplied(double Scalar)
{
	Handle(::Geom_VectorWithMagnitude) _result = ((::Geom_VectorWithMagnitude*)_NativeInstance)->Multiplied(Scalar);
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_VectorWithMagnitude::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_VectorWithMagnitude::Multiply(double Scalar)
{
	((::Geom_VectorWithMagnitude*)_NativeInstance)->Multiply(Scalar);
}

void RDC::OCC::Geom_VectorWithMagnitude::Normalize()
{
	((::Geom_VectorWithMagnitude*)_NativeInstance)->Normalize();
}

RDC::OCC::Geom_VectorWithMagnitude^ RDC::OCC::Geom_VectorWithMagnitude::Normalized()
{
	Handle(::Geom_VectorWithMagnitude) _result = ((::Geom_VectorWithMagnitude*)_NativeInstance)->Normalized();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_VectorWithMagnitude::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_VectorWithMagnitude::Subtract(RDC::OCC::Geom_Vector^ Other)
{
	((::Geom_VectorWithMagnitude*)_NativeInstance)->Subtract(Handle(::Geom_Vector)(Other->NativeInstance));
}

RDC::OCC::Geom_VectorWithMagnitude^ RDC::OCC::Geom_VectorWithMagnitude::Subtracted(RDC::OCC::Geom_Vector^ Other)
{
	Handle(::Geom_VectorWithMagnitude) _result = ((::Geom_VectorWithMagnitude*)_NativeInstance)->Subtracted(Handle(::Geom_Vector)(Other->NativeInstance));
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_VectorWithMagnitude::CreateDowncasted(_result.get());
}

void RDC::OCC::Geom_VectorWithMagnitude::Transform(RDC::OCC::Trsf T)
{
	pin_ptr<RDC::OCC::Trsf> pp_T = &T;
	((::Geom_VectorWithMagnitude*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

RDC::OCC::Geom_Geometry^ RDC::OCC::Geom_VectorWithMagnitude::Copy()
{
	Handle(::Geom_Geometry) _result = ((::Geom_VectorWithMagnitude*)_NativeInstance)->Copy();
	return _result.IsNull() ? nullptr : RDC::OCC::Geom_Geometry::CreateDowncasted(_result.get());
}

RDC::OCC::Geom_VectorWithMagnitude^ RDC::OCC::Geom_VectorWithMagnitude::CreateDowncasted(::Geom_VectorWithMagnitude* instance)
{
	return gcnew RDC::OCC::Geom_VectorWithMagnitude(instance);
}



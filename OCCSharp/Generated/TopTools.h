// Generated wrapper code for package TopTools

#pragma once

#include "NCollection.h"
#include "Standard.h"

namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Enum  TopTools_FormatVersion
//---------------------------------------------------------------------
/// <summary>
/// Defined TopTools format version
/// </summary>
public enum class TopTools_FormatVersion
{
    VERSION_1 = 1,
    VERSION_2 = 2,
    VERSION_3 = 3,
    CURRENT = 3
}; // enum  class TopTools_FormatVersion

//---------------------------------------------------------------------
//  Class  TopTools_ListOfShape
//---------------------------------------------------------------------
public ref class TopTools_ListOfShape sealed
    : public RDC::OCC::NCollection_BaseList
    , public IEnumerable<RDC::OCC::TopoDS_Shape^>
{

#ifdef Include_TopTools_ListOfShape_h
public:
    Include_TopTools_ListOfShape_h
#endif

public:
    TopTools_ListOfShape(::TopTools_ListOfShape* nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    TopTools_ListOfShape(::TopTools_ListOfShape& nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    property ::TopTools_ListOfShape* NativeInstance
    {
        ::TopTools_ListOfShape* get()
        {
            return static_cast<::TopTools_ListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_Shape^, ::TopTools_ListOfShape::Iterator>
    {

#ifdef Include_TopTools_ListOfShape_Iterator_h
    public:
        Include_TopTools_ListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_ListOfShape::Iterator* nativeInstance)
            : RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_Shape^, ::TopTools_ListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_ListOfShape::Iterator& nativeInstance)
            : RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_Shape^, ::TopTools_ListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_ListOfShape::Iterator* NativeInstance
        {
            ::TopTools_ListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_ListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More() override;
        void Next() override;
        RDC::OCC::TopoDS_Shape^ Value() override;
        RDC::OCC::TopoDS_Shape^ ChangeValue();
    }; // class Iterator

    TopTools_ListOfShape();
    TopTools_ListOfShape(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    RDC::OCC::TopTools_ListOfShape^ Assign(RDC::OCC::TopTools_ListOfShape^ theOther);
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    RDC::OCC::TopoDS_Shape^ First();
    RDC::OCC::TopoDS_Shape^ Last();
    RDC::OCC::TopoDS_Shape^ Append(RDC::OCC::TopoDS_Shape^ theItem);
    RDC::OCC::TopoDS_Shape^ Prepend(RDC::OCC::TopoDS_Shape^ theItem);
    void RemoveFirst();
    void Remove(RDC::OCC::TopTools_ListOfShape::Iterator^ theIter);
    RDC::OCC::TopoDS_Shape^ InsertBefore(RDC::OCC::TopoDS_Shape^ theItem, RDC::OCC::TopTools_ListOfShape::Iterator^ theIter);
    RDC::OCC::TopoDS_Shape^ InsertAfter(RDC::OCC::TopoDS_Shape^ theItem, RDC::OCC::TopTools_ListOfShape::Iterator^ theIter);
    void Reverse();
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_ListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_ListIteratorOfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_ListIteratorOfListOfShape sealed
    : public RDC::OCC::BaseClass<::TopTools_ListIteratorOfListOfShape>
{

#ifdef Include_TopTools_ListIteratorOfListOfShape_h
public:
    Include_TopTools_ListIteratorOfListOfShape_h
#endif

public:
    TopTools_ListIteratorOfListOfShape(::TopTools_ListIteratorOfListOfShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_ListIteratorOfListOfShape>( nativeInstance, true )
    {}

    TopTools_ListIteratorOfListOfShape(::TopTools_ListIteratorOfListOfShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_ListIteratorOfListOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_ListIteratorOfListOfShape* NativeInstance
    {
        ::TopTools_ListIteratorOfListOfShape* get()
        {
            return static_cast<::TopTools_ListIteratorOfListOfShape*>(_NativeInstance);
        }
    }

public:
    TopTools_ListIteratorOfListOfShape();
    TopTools_ListIteratorOfListOfShape(RDC::OCC::NCollection_BaseList^ theList);
    bool More();
    void Next();
    RDC::OCC::TopoDS_Shape^ Value();
    RDC::OCC::TopoDS_Shape^ ChangeValue();
}; // class TopTools_ListIteratorOfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_Array1OfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_Array1OfListOfShape sealed
    : public RDC::OCC::BaseClass<::TopTools_Array1OfListOfShape>
{

#ifdef Include_TopTools_Array1OfListOfShape_h
public:
    Include_TopTools_Array1OfListOfShape_h
#endif

public:
    TopTools_Array1OfListOfShape(::TopTools_Array1OfListOfShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_Array1OfListOfShape>( nativeInstance, true )
    {}

    TopTools_Array1OfListOfShape(::TopTools_Array1OfListOfShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_Array1OfListOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_Array1OfListOfShape* NativeInstance
    {
        ::TopTools_Array1OfListOfShape* get()
        {
            return static_cast<::TopTools_Array1OfListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_Array1OfListOfShape::Iterator>
    {

#ifdef Include_TopTools_Array1OfListOfShape_Iterator_h
    public:
        Include_TopTools_Array1OfListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_Array1OfListOfShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_Array1OfListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_Array1OfListOfShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_Array1OfListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_Array1OfListOfShape::Iterator* NativeInstance
        {
            ::TopTools_Array1OfListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_Array1OfListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TopTools_Array1OfListOfShape();
    TopTools_Array1OfListOfShape(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TopTools_Array1OfListOfShape(allocator_type theAlloc, int theLower, int theUpper, ) */
    /* Method skipped due to unknown mapping: void TopTools_Array1OfListOfShape(const_reference theBegin, int theLower, int theUpper, bool theUseBuffer, ) */
    /* Method skipped due to unknown mapping: void TopTools_Array1OfListOfShape(const_reference theBegin, int theLower, int theUpper, bool theUseBuffer, ) */
    /* Method skipped due to unknown mapping: void Init(const_reference theValue, ) */
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TopTools_Array1OfListOfShape^ Assign(RDC::OCC::TopTools_Array1OfListOfShape^ theOther);
    RDC::OCC::TopTools_Array1OfListOfShape^ Move(RDC::OCC::TopTools_Array1OfListOfShape^ theOther);
    /* Method skipped due to unknown mapping: const_reference First() */
    /* Method skipped due to unknown mapping: reference ChangeFirst() */
    /* Method skipped due to unknown mapping: const_reference Last() */
    /* Method skipped due to unknown mapping: reference ChangeLast() */
    /* Method skipped due to unknown mapping: const_reference Value(int theIndex, ) */
    /* Method skipped due to unknown mapping: reference ChangeValue(int theIndex, ) */
    /* Method skipped due to unknown mapping: void SetValue(int theIndex, value_type theItem, ) */
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
}; // class TopTools_Array1OfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_Array1OfShape
//---------------------------------------------------------------------
public ref class TopTools_Array1OfShape sealed
    : public RDC::OCC::BaseClass<::TopTools_Array1OfShape>
    , public IIndexEnumerable<RDC::OCC::TopoDS_Shape^>
{

#ifdef Include_TopTools_Array1OfShape_h
public:
    Include_TopTools_Array1OfShape_h
#endif

public:
    TopTools_Array1OfShape(::TopTools_Array1OfShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_Array1OfShape>( nativeInstance, true )
    {}

    TopTools_Array1OfShape(::TopTools_Array1OfShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_Array1OfShape>( &nativeInstance, false )
    {}

    property ::TopTools_Array1OfShape* NativeInstance
    {
        ::TopTools_Array1OfShape* get()
        {
            return static_cast<::TopTools_Array1OfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_Array1OfShape::Iterator>
    {

#ifdef Include_TopTools_Array1OfShape_Iterator_h
    public:
        Include_TopTools_Array1OfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_Array1OfShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_Array1OfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_Array1OfShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_Array1OfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_Array1OfShape::Iterator* NativeInstance
        {
            ::TopTools_Array1OfShape::Iterator* get()
            {
                return static_cast<::TopTools_Array1OfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TopTools_Array1OfShape();
    TopTools_Array1OfShape(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TopTools_Array1OfShape(allocator_type theAlloc, int theLower, int theUpper, ) */
    TopTools_Array1OfShape(RDC::OCC::TopoDS_Shape^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    TopTools_Array1OfShape(RDC::OCC::TopoDS_Shape^ theBegin, int theLower, int theUpper);
    void Init(RDC::OCC::TopoDS_Shape^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TopTools_Array1OfShape^ Assign(RDC::OCC::TopTools_Array1OfShape^ theOther);
    RDC::OCC::TopTools_Array1OfShape^ Move(RDC::OCC::TopTools_Array1OfShape^ theOther);
    RDC::OCC::TopoDS_Shape^ First();
    RDC::OCC::TopoDS_Shape^ ChangeFirst();
    RDC::OCC::TopoDS_Shape^ Last();
    RDC::OCC::TopoDS_Shape^ ChangeLast();
    virtual RDC::OCC::TopoDS_Shape^ Value(int theIndex);
    RDC::OCC::TopoDS_Shape^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TopoDS_Shape^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_Array1OfShape

//---------------------------------------------------------------------
//  Class  TopTools_Array2OfShape
//---------------------------------------------------------------------
public ref class TopTools_Array2OfShape sealed
    : public RDC::OCC::BaseClass<::TopTools_Array2OfShape>
{

#ifdef Include_TopTools_Array2OfShape_h
public:
    Include_TopTools_Array2OfShape_h
#endif

public:
    TopTools_Array2OfShape(::TopTools_Array2OfShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_Array2OfShape>( nativeInstance, true )
    {}

    TopTools_Array2OfShape(::TopTools_Array2OfShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_Array2OfShape>( &nativeInstance, false )
    {}

    property ::TopTools_Array2OfShape* NativeInstance
    {
        ::TopTools_Array2OfShape* get()
        {
            return static_cast<::TopTools_Array2OfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_Array2OfShape::Iterator>
    {

#ifdef Include_TopTools_Array2OfShape_Iterator_h
    public:
        Include_TopTools_Array2OfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_Array2OfShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_Array2OfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_Array2OfShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_Array2OfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_Array2OfShape::Iterator* NativeInstance
        {
            ::TopTools_Array2OfShape::Iterator* get()
            {
                return static_cast<::TopTools_Array2OfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TopTools_Array2OfShape();
    TopTools_Array2OfShape(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TopTools_Array2OfShape(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TopTools_Array2OfShape(RDC::OCC::TopoDS_Shape^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    RDC::OCC::TopTools_Array2OfShape^ Assign(RDC::OCC::TopTools_Array2OfShape^ theOther);
    RDC::OCC::TopTools_Array2OfShape^ Move(RDC::OCC::TopTools_Array2OfShape^ theOther);
    RDC::OCC::TopoDS_Shape^ Value(int theRow, int theCol);
    RDC::OCC::TopoDS_Shape^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, RDC::OCC::TopoDS_Shape^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(RDC::OCC::TopoDS_Shape^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TopoDS_Shape^ First();
    RDC::OCC::TopoDS_Shape^ ChangeFirst();
    RDC::OCC::TopoDS_Shape^ Last();
    RDC::OCC::TopoDS_Shape^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TopTools_Array2OfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfIntegerListOfShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfIntegerListOfShape sealed
    : public RDC::OCC::BaseClass<::TopTools_DataMapOfIntegerListOfShape>
{

#ifdef Include_TopTools_DataMapOfIntegerListOfShape_h
public:
    Include_TopTools_DataMapOfIntegerListOfShape_h
#endif

public:
    TopTools_DataMapOfIntegerListOfShape(::TopTools_DataMapOfIntegerListOfShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfIntegerListOfShape>( nativeInstance, true )
    {}

    TopTools_DataMapOfIntegerListOfShape(::TopTools_DataMapOfIntegerListOfShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfIntegerListOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfIntegerListOfShape* NativeInstance
    {
        ::TopTools_DataMapOfIntegerListOfShape* get()
        {
            return static_cast<::TopTools_DataMapOfIntegerListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_DataMapOfIntegerListOfShape::Iterator>
    {

#ifdef Include_TopTools_DataMapOfIntegerListOfShape_Iterator_h
    public:
        Include_TopTools_DataMapOfIntegerListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfIntegerListOfShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfIntegerListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfIntegerListOfShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfIntegerListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfIntegerListOfShape::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfIntegerListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfIntegerListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TopoDS_ListOfShape^ Value();
        RDC::OCC::TopoDS_ListOfShape^ ChangeValue();
        int Key();
    }; // class Iterator

    TopTools_DataMapOfIntegerListOfShape();
    TopTools_DataMapOfIntegerListOfShape(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfIntegerListOfShape(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_DataMapOfIntegerListOfShape^ theOther);
    RDC::OCC::TopTools_DataMapOfIntegerListOfShape^ Assign(RDC::OCC::TopTools_DataMapOfIntegerListOfShape^ theOther);
    void ReSize(int N);
    bool Bind(int theKey, RDC::OCC::TopoDS_ListOfShape^ theItem);
    RDC::OCC::TopoDS_ListOfShape^ Bound(int theKey, RDC::OCC::TopoDS_ListOfShape^ theItem);
    bool IsBound(int theKey);
    bool UnBind(int theKey);
    RDC::OCC::TopoDS_ListOfShape^ Seek(int theKey);
    RDC::OCC::TopoDS_ListOfShape^ Find(int theKey);
    RDC::OCC::TopoDS_ListOfShape^ ChangeSeek(int theKey);
    RDC::OCC::TopoDS_ListOfShape^ ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_DataMapOfIntegerListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfIntegerShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfIntegerShape sealed
    : public RDC::OCC::BaseClass<::TopTools_DataMapOfIntegerShape>
{

#ifdef Include_TopTools_DataMapOfIntegerShape_h
public:
    Include_TopTools_DataMapOfIntegerShape_h
#endif

public:
    TopTools_DataMapOfIntegerShape(::TopTools_DataMapOfIntegerShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfIntegerShape>( nativeInstance, true )
    {}

    TopTools_DataMapOfIntegerShape(::TopTools_DataMapOfIntegerShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfIntegerShape>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfIntegerShape* NativeInstance
    {
        ::TopTools_DataMapOfIntegerShape* get()
        {
            return static_cast<::TopTools_DataMapOfIntegerShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_DataMapOfIntegerShape::Iterator>
    {

#ifdef Include_TopTools_DataMapOfIntegerShape_Iterator_h
    public:
        Include_TopTools_DataMapOfIntegerShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfIntegerShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfIntegerShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfIntegerShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfIntegerShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfIntegerShape::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfIntegerShape::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfIntegerShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TopoDS_Shape^ Value();
        RDC::OCC::TopoDS_Shape^ ChangeValue();
        int Key();
    }; // class Iterator

    TopTools_DataMapOfIntegerShape();
    TopTools_DataMapOfIntegerShape(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfIntegerShape(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_DataMapOfIntegerShape^ theOther);
    RDC::OCC::TopTools_DataMapOfIntegerShape^ Assign(RDC::OCC::TopTools_DataMapOfIntegerShape^ theOther);
    void ReSize(int N);
    bool Bind(int theKey, RDC::OCC::TopoDS_Shape^ theItem);
    RDC::OCC::TopoDS_Shape^ Bound(int theKey, RDC::OCC::TopoDS_Shape^ theItem);
    bool IsBound(int theKey);
    bool UnBind(int theKey);
    RDC::OCC::TopoDS_Shape^ Seek(int theKey);
    RDC::OCC::TopoDS_Shape^ Find(int theKey);
    RDC::OCC::TopoDS_Shape^ ChangeSeek(int theKey);
    RDC::OCC::TopoDS_Shape^ ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_DataMapOfIntegerShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfOrientedShapeInteger
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfOrientedShapeInteger sealed
    : public RDC::OCC::BaseClass<::TopTools_DataMapOfOrientedShapeInteger>
{

#ifdef Include_TopTools_DataMapOfOrientedShapeInteger_h
public:
    Include_TopTools_DataMapOfOrientedShapeInteger_h
#endif

public:
    TopTools_DataMapOfOrientedShapeInteger(::TopTools_DataMapOfOrientedShapeInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfOrientedShapeInteger>( nativeInstance, true )
    {}

    TopTools_DataMapOfOrientedShapeInteger(::TopTools_DataMapOfOrientedShapeInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfOrientedShapeInteger>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfOrientedShapeInteger* NativeInstance
    {
        ::TopTools_DataMapOfOrientedShapeInteger* get()
        {
            return static_cast<::TopTools_DataMapOfOrientedShapeInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_DataMapOfOrientedShapeInteger::Iterator>
    {

#ifdef Include_TopTools_DataMapOfOrientedShapeInteger_Iterator_h
    public:
        Include_TopTools_DataMapOfOrientedShapeInteger_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfOrientedShapeInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfOrientedShapeInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfOrientedShapeInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfOrientedShapeInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfOrientedShapeInteger::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfOrientedShapeInteger::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfOrientedShapeInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TopTools_DataMapOfOrientedShapeInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TopTools_DataMapOfOrientedShapeInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        int Value();
        RDC::OCC::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfOrientedShapeInteger();
    TopTools_DataMapOfOrientedShapeInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfOrientedShapeInteger(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_DataMapOfOrientedShapeInteger^ theOther);
    RDC::OCC::TopTools_DataMapOfOrientedShapeInteger^ Assign(RDC::OCC::TopTools_DataMapOfOrientedShapeInteger^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::TopoDS_Shape^ theKey, int theItem);
    int Bound(RDC::OCC::TopoDS_Shape^ theKey, int theItem);
    bool IsBound(RDC::OCC::TopoDS_Shape^ theKey);
    bool UnBind(RDC::OCC::TopoDS_Shape^ theKey);
    int Seek(RDC::OCC::TopoDS_Shape^ theKey);
    int Find(RDC::OCC::TopoDS_Shape^ theKey);
    int ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey);
    int ChangeFind(RDC::OCC::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_DataMapOfOrientedShapeInteger

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfOrientedShapeShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfOrientedShapeShape sealed
    : public RDC::OCC::BaseClass<::TopTools_DataMapOfOrientedShapeShape>
{

#ifdef Include_TopTools_DataMapOfOrientedShapeShape_h
public:
    Include_TopTools_DataMapOfOrientedShapeShape_h
#endif

public:
    TopTools_DataMapOfOrientedShapeShape(::TopTools_DataMapOfOrientedShapeShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfOrientedShapeShape>( nativeInstance, true )
    {}

    TopTools_DataMapOfOrientedShapeShape(::TopTools_DataMapOfOrientedShapeShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfOrientedShapeShape>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfOrientedShapeShape* NativeInstance
    {
        ::TopTools_DataMapOfOrientedShapeShape* get()
        {
            return static_cast<::TopTools_DataMapOfOrientedShapeShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_DataMapOfOrientedShapeShape::Iterator>
    {

#ifdef Include_TopTools_DataMapOfOrientedShapeShape_Iterator_h
    public:
        Include_TopTools_DataMapOfOrientedShapeShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfOrientedShapeShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfOrientedShapeShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfOrientedShapeShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfOrientedShapeShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfOrientedShapeShape::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfOrientedShapeShape::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfOrientedShapeShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TopoDS_Shape^ Value();
        RDC::OCC::TopoDS_Shape^ ChangeValue();
        RDC::OCC::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfOrientedShapeShape();
    TopTools_DataMapOfOrientedShapeShape(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfOrientedShapeShape(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_DataMapOfOrientedShapeShape^ theOther);
    RDC::OCC::TopTools_DataMapOfOrientedShapeShape^ Assign(RDC::OCC::TopTools_DataMapOfOrientedShapeShape^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::TopoDS_Shape^ theItem);
    RDC::OCC::TopoDS_Shape^ Bound(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::TopoDS_Shape^ theItem);
    bool IsBound(RDC::OCC::TopoDS_Shape^ theKey);
    bool UnBind(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_Shape^ Seek(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_Shape^ Find(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_Shape^ ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_Shape^ ChangeFind(RDC::OCC::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_DataMapOfOrientedShapeShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeInteger
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeInteger sealed
    : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeInteger>
{

#ifdef Include_TopTools_DataMapOfShapeInteger_h
public:
    Include_TopTools_DataMapOfShapeInteger_h
#endif

public:
    TopTools_DataMapOfShapeInteger(::TopTools_DataMapOfShapeInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeInteger>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeInteger(::TopTools_DataMapOfShapeInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeInteger>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeInteger* NativeInstance
    {
        ::TopTools_DataMapOfShapeInteger* get()
        {
            return static_cast<::TopTools_DataMapOfShapeInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeInteger::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeInteger_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeInteger_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeInteger::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeInteger::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TopTools_DataMapOfShapeInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TopTools_DataMapOfShapeInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        int Value();
        RDC::OCC::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeInteger();
    TopTools_DataMapOfShapeInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeInteger(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_DataMapOfShapeInteger^ theOther);
    RDC::OCC::TopTools_DataMapOfShapeInteger^ Assign(RDC::OCC::TopTools_DataMapOfShapeInteger^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::TopoDS_Shape^ theKey, int theItem);
    int Bound(RDC::OCC::TopoDS_Shape^ theKey, int theItem);
    bool IsBound(RDC::OCC::TopoDS_Shape^ theKey);
    bool UnBind(RDC::OCC::TopoDS_Shape^ theKey);
    int Seek(RDC::OCC::TopoDS_Shape^ theKey);
    int Find(RDC::OCC::TopoDS_Shape^ theKey);
    int ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey);
    int ChangeFind(RDC::OCC::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_DataMapOfShapeInteger

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeListOfInteger
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeListOfInteger sealed
    : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeListOfInteger>
{

#ifdef Include_TopTools_DataMapOfShapeListOfInteger_h
public:
    Include_TopTools_DataMapOfShapeListOfInteger_h
#endif

public:
    TopTools_DataMapOfShapeListOfInteger(::TopTools_DataMapOfShapeListOfInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeListOfInteger>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeListOfInteger(::TopTools_DataMapOfShapeListOfInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeListOfInteger>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeListOfInteger* NativeInstance
    {
        ::TopTools_DataMapOfShapeListOfInteger* get()
        {
            return static_cast<::TopTools_DataMapOfShapeListOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeListOfInteger::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeListOfInteger_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeListOfInteger_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeListOfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeListOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeListOfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeListOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeListOfInteger::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeListOfInteger::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeListOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TColStd_ListOfInteger^ Value();
        RDC::OCC::TColStd_ListOfInteger^ ChangeValue();
        RDC::OCC::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeListOfInteger();
    TopTools_DataMapOfShapeListOfInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeListOfInteger(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_DataMapOfShapeListOfInteger^ theOther);
    RDC::OCC::TopTools_DataMapOfShapeListOfInteger^ Assign(RDC::OCC::TopTools_DataMapOfShapeListOfInteger^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::TColStd_ListOfInteger^ theItem);
    RDC::OCC::TColStd_ListOfInteger^ Bound(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::TColStd_ListOfInteger^ theItem);
    bool IsBound(RDC::OCC::TopoDS_Shape^ theKey);
    bool UnBind(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TColStd_ListOfInteger^ Seek(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TColStd_ListOfInteger^ Find(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TColStd_ListOfInteger^ ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TColStd_ListOfInteger^ ChangeFind(RDC::OCC::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_DataMapOfShapeListOfInteger

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeListOfShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeListOfShape sealed
    : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeListOfShape>
{

#ifdef Include_TopTools_DataMapOfShapeListOfShape_h
public:
    Include_TopTools_DataMapOfShapeListOfShape_h
#endif

public:
    TopTools_DataMapOfShapeListOfShape(::TopTools_DataMapOfShapeListOfShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeListOfShape>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeListOfShape(::TopTools_DataMapOfShapeListOfShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeListOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeListOfShape* NativeInstance
    {
        ::TopTools_DataMapOfShapeListOfShape* get()
        {
            return static_cast<::TopTools_DataMapOfShapeListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeListOfShape::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeListOfShape_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeListOfShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeListOfShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeListOfShape::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TopoDS_ListOfShape^ Value();
        RDC::OCC::TopoDS_ListOfShape^ ChangeValue();
        RDC::OCC::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeListOfShape();
    TopTools_DataMapOfShapeListOfShape(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeListOfShape(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_DataMapOfShapeListOfShape^ theOther);
    RDC::OCC::TopTools_DataMapOfShapeListOfShape^ Assign(RDC::OCC::TopTools_DataMapOfShapeListOfShape^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::TopoDS_ListOfShape^ theItem);
    RDC::OCC::TopoDS_ListOfShape^ Bound(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::TopoDS_ListOfShape^ theItem);
    bool IsBound(RDC::OCC::TopoDS_Shape^ theKey);
    bool UnBind(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_ListOfShape^ Seek(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_ListOfShape^ Find(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_ListOfShape^ ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_ListOfShape^ ChangeFind(RDC::OCC::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_DataMapOfShapeListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeReal
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeReal sealed
    : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeReal>
{

#ifdef Include_TopTools_DataMapOfShapeReal_h
public:
    Include_TopTools_DataMapOfShapeReal_h
#endif

public:
    TopTools_DataMapOfShapeReal(::TopTools_DataMapOfShapeReal* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeReal>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeReal(::TopTools_DataMapOfShapeReal& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeReal>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeReal* NativeInstance
    {
        ::TopTools_DataMapOfShapeReal* get()
        {
            return static_cast<::TopTools_DataMapOfShapeReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeReal::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeReal_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeReal_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeReal::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeReal::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeReal::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeReal::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeReal::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TopTools_DataMapOfShapeReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TopTools_DataMapOfShapeReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        double Value();
        RDC::OCC::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeReal();
    TopTools_DataMapOfShapeReal(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeReal(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_DataMapOfShapeReal^ theOther);
    RDC::OCC::TopTools_DataMapOfShapeReal^ Assign(RDC::OCC::TopTools_DataMapOfShapeReal^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::TopoDS_Shape^ theKey, double theItem);
    double Bound(RDC::OCC::TopoDS_Shape^ theKey, double theItem);
    bool IsBound(RDC::OCC::TopoDS_Shape^ theKey);
    bool UnBind(RDC::OCC::TopoDS_Shape^ theKey);
    double Seek(RDC::OCC::TopoDS_Shape^ theKey);
    double Find(RDC::OCC::TopoDS_Shape^ theKey);
    double ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey);
    double ChangeFind(RDC::OCC::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_DataMapOfShapeReal

//---------------------------------------------------------------------
//  Class  TopTools_SequenceOfShape
//---------------------------------------------------------------------
public ref class TopTools_SequenceOfShape sealed
    : public RDC::OCC::BaseClass<::TopTools_SequenceOfShape>
    , public IIndexEnumerable<RDC::OCC::TopoDS_Shape^>
{

#ifdef Include_TopTools_SequenceOfShape_h
public:
    Include_TopTools_SequenceOfShape_h
#endif

public:
    TopTools_SequenceOfShape(::TopTools_SequenceOfShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_SequenceOfShape>( nativeInstance, true )
    {}

    TopTools_SequenceOfShape(::TopTools_SequenceOfShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_SequenceOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_SequenceOfShape* NativeInstance
    {
        ::TopTools_SequenceOfShape* get()
        {
            return static_cast<::TopTools_SequenceOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_SequenceOfShape::Iterator>
    {

#ifdef Include_TopTools_SequenceOfShape_Iterator_h
    public:
        Include_TopTools_SequenceOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_SequenceOfShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_SequenceOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_SequenceOfShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_SequenceOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_SequenceOfShape::Iterator* NativeInstance
        {
            ::TopTools_SequenceOfShape::Iterator* get()
            {
                return static_cast<::TopTools_SequenceOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TopoDS_Shape^ Value();
        RDC::OCC::TopoDS_Shape^ ChangeValue();
        bool IsEqual(RDC::OCC::TopTools_SequenceOfShape::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TopTools_SequenceOfShape();
    TopTools_SequenceOfShape(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    int Length();
    int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    RDC::OCC::TopTools_SequenceOfShape^ Assign(RDC::OCC::TopTools_SequenceOfShape^ theOther);
    void Remove(RDC::OCC::TopTools_SequenceOfShape::Iterator^ thePosition);
    void Append(RDC::OCC::TopoDS_Shape^ theItem);
    void Prepend(RDC::OCC::TopoDS_Shape^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::TopoDS_Shape^ theItem);
    void InsertAfter(RDC::OCC::TopTools_SequenceOfShape::Iterator^ thePosition, RDC::OCC::TopoDS_Shape^ theItem);
    void Split(int theIndex, RDC::OCC::TopTools_SequenceOfShape^ theSeq);
    RDC::OCC::TopoDS_Shape^ First();
    RDC::OCC::TopoDS_Shape^ ChangeFirst();
    RDC::OCC::TopoDS_Shape^ Last();
    RDC::OCC::TopoDS_Shape^ ChangeLast();
    virtual RDC::OCC::TopoDS_Shape^ Value(int theIndex);
    RDC::OCC::TopoDS_Shape^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TopoDS_Shape^ theItem);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_SequenceOfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeSequenceOfShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeSequenceOfShape sealed
    : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>
{

#ifdef Include_TopTools_DataMapOfShapeSequenceOfShape_h
public:
    Include_TopTools_DataMapOfShapeSequenceOfShape_h
#endif

public:
    TopTools_DataMapOfShapeSequenceOfShape(::TopTools_DataMapOfShapeSequenceOfShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeSequenceOfShape(::TopTools_DataMapOfShapeSequenceOfShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeSequenceOfShape* NativeInstance
    {
        ::TopTools_DataMapOfShapeSequenceOfShape* get()
        {
            return static_cast<::TopTools_DataMapOfShapeSequenceOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeSequenceOfShape_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeSequenceOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeSequenceOfShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeSequenceOfShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeSequenceOfShape::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeSequenceOfShape::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeSequenceOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TopTools_SequenceOfShape^ Value();
        RDC::OCC::TopTools_SequenceOfShape^ ChangeValue();
        RDC::OCC::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeSequenceOfShape();
    TopTools_DataMapOfShapeSequenceOfShape(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeSequenceOfShape(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_DataMapOfShapeSequenceOfShape^ theOther);
    RDC::OCC::TopTools_DataMapOfShapeSequenceOfShape^ Assign(RDC::OCC::TopTools_DataMapOfShapeSequenceOfShape^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::TopTools_SequenceOfShape^ theItem);
    RDC::OCC::TopTools_SequenceOfShape^ Bound(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::TopTools_SequenceOfShape^ theItem);
    bool IsBound(RDC::OCC::TopoDS_Shape^ theKey);
    bool UnBind(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopTools_SequenceOfShape^ Seek(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopTools_SequenceOfShape^ Find(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopTools_SequenceOfShape^ ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopTools_SequenceOfShape^ ChangeFind(RDC::OCC::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_DataMapOfShapeSequenceOfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeShape sealed
    : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeShape>
{

#ifdef Include_TopTools_DataMapOfShapeShape_h
public:
    Include_TopTools_DataMapOfShapeShape_h
#endif

public:
    TopTools_DataMapOfShapeShape(::TopTools_DataMapOfShapeShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeShape>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeShape(::TopTools_DataMapOfShapeShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeShape>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeShape* NativeInstance
    {
        ::TopTools_DataMapOfShapeShape* get()
        {
            return static_cast<::TopTools_DataMapOfShapeShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeShape::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeShape_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeShape::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeShape::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TopoDS_Shape^ Value();
        RDC::OCC::TopoDS_Shape^ ChangeValue();
        RDC::OCC::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeShape();
    TopTools_DataMapOfShapeShape(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeShape(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_DataMapOfShapeShape^ theOther);
    RDC::OCC::TopTools_DataMapOfShapeShape^ Assign(RDC::OCC::TopTools_DataMapOfShapeShape^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::TopoDS_Shape^ theItem);
    RDC::OCC::TopoDS_Shape^ Bound(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::TopoDS_Shape^ theItem);
    bool IsBound(RDC::OCC::TopoDS_Shape^ theKey);
    bool UnBind(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_Shape^ Seek(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_Shape^ Find(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_Shape^ ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_Shape^ ChangeFind(RDC::OCC::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_DataMapOfShapeShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeBox
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeBox sealed
    : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeBox>
{

#ifdef Include_TopTools_DataMapOfShapeBox_h
public:
    Include_TopTools_DataMapOfShapeBox_h
#endif

public:
    TopTools_DataMapOfShapeBox(::TopTools_DataMapOfShapeBox* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeBox>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeBox(::TopTools_DataMapOfShapeBox& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeBox>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeBox* NativeInstance
    {
        ::TopTools_DataMapOfShapeBox* get()
        {
            return static_cast<::TopTools_DataMapOfShapeBox*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_DataMapOfShapeBox::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeBox_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeBox_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeBox::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeBox::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeBox::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_DataMapOfShapeBox::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeBox::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeBox::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeBox::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::Bnd_Box^ Value();
        RDC::OCC::Bnd_Box^ ChangeValue();
        RDC::OCC::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeBox();
    TopTools_DataMapOfShapeBox(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeBox(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_DataMapOfShapeBox^ theOther);
    RDC::OCC::TopTools_DataMapOfShapeBox^ Assign(RDC::OCC::TopTools_DataMapOfShapeBox^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::Bnd_Box^ theItem);
    RDC::OCC::Bnd_Box^ Bound(RDC::OCC::TopoDS_Shape^ theKey, RDC::OCC::Bnd_Box^ theItem);
    bool IsBound(RDC::OCC::TopoDS_Shape^ theKey);
    bool UnBind(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::Bnd_Box^ Seek(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::Bnd_Box^ Find(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::Bnd_Box^ ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::Bnd_Box^ ChangeFind(RDC::OCC::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_DataMapOfShapeBox

//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeAddress
//---------------------------------------------------------------------
public ref class TopTools_IndexedDataMapOfShapeAddress sealed
    : public RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeAddress>
{

#ifdef Include_TopTools_IndexedDataMapOfShapeAddress_h
public:
    Include_TopTools_IndexedDataMapOfShapeAddress_h
#endif

public:
    TopTools_IndexedDataMapOfShapeAddress(::TopTools_IndexedDataMapOfShapeAddress* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeAddress>( nativeInstance, true )
    {}

    TopTools_IndexedDataMapOfShapeAddress(::TopTools_IndexedDataMapOfShapeAddress& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeAddress>( &nativeInstance, false )
    {}

    property ::TopTools_IndexedDataMapOfShapeAddress* NativeInstance
    {
        ::TopTools_IndexedDataMapOfShapeAddress* get()
        {
            return static_cast<::TopTools_IndexedDataMapOfShapeAddress*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeAddress::Iterator>
    {

#ifdef Include_TopTools_IndexedDataMapOfShapeAddress_Iterator_h
    public:
        Include_TopTools_IndexedDataMapOfShapeAddress_Iterator_h
#endif

    public:
        Iterator(::TopTools_IndexedDataMapOfShapeAddress::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeAddress::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_IndexedDataMapOfShapeAddress::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeAddress::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_IndexedDataMapOfShapeAddress::Iterator* NativeInstance
        {
            ::TopTools_IndexedDataMapOfShapeAddress::Iterator* get()
            {
                return static_cast<::TopTools_IndexedDataMapOfShapeAddress::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        /* Method skipped due to unknown mapping: void * Value() */
        /* Method skipped due to unknown mapping: void * ChangeValue() */
        RDC::OCC::TopoDS_Shape^ Key();
        bool IsEqual(RDC::OCC::TopTools_IndexedDataMapOfShapeAddress::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TopTools_IndexedDataMapOfShapeAddress();
    TopTools_IndexedDataMapOfShapeAddress(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_IndexedDataMapOfShapeAddress(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_IndexedDataMapOfShapeAddress^ theOther);
    RDC::OCC::TopTools_IndexedDataMapOfShapeAddress^ Assign(RDC::OCC::TopTools_IndexedDataMapOfShapeAddress^ theOther);
    void ReSize(int N);
    /* Method skipped due to unknown mapping: int Add(TopoDS_Shape theKey1, void * theItem, ) */
    bool Contains(RDC::OCC::TopoDS_Shape^ theKey1);
    /* Method skipped due to unknown mapping: void Substitute(int theIndex, TopoDS_Shape theKey1, void * theItem, ) */
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_Shape^ FindKey(int theIndex);
    /* Method skipped due to unknown mapping: void * FindFromIndex(int theIndex, ) */
    /* Method skipped due to unknown mapping: void * ChangeFromIndex(int theIndex, ) */
    int FindIndex(RDC::OCC::TopoDS_Shape^ theKey1);
    /* Method skipped due to unknown mapping: void * FindFromKey(TopoDS_Shape theKey1, ) */
    /* Method skipped due to unknown mapping: void * ChangeFromKey(TopoDS_Shape theKey1, ) */
    /* Method skipped due to unknown mapping: void * Seek(TopoDS_Shape theKey1, ) */
    /* Method skipped due to unknown mapping: void * ChangeSeek(TopoDS_Shape theKey1, ) */
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_IndexedDataMapOfShapeAddress

//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeListOfShape
//---------------------------------------------------------------------
public ref class TopTools_IndexedDataMapOfShapeListOfShape sealed
    : public RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>
{

#ifdef Include_TopTools_IndexedDataMapOfShapeListOfShape_h
public:
    Include_TopTools_IndexedDataMapOfShapeListOfShape_h
#endif

public:
    TopTools_IndexedDataMapOfShapeListOfShape(::TopTools_IndexedDataMapOfShapeListOfShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>( nativeInstance, true )
    {}

    TopTools_IndexedDataMapOfShapeListOfShape(::TopTools_IndexedDataMapOfShapeListOfShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_IndexedDataMapOfShapeListOfShape* NativeInstance
    {
        ::TopTools_IndexedDataMapOfShapeListOfShape* get()
        {
            return static_cast<::TopTools_IndexedDataMapOfShapeListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape::Iterator>
    {

#ifdef Include_TopTools_IndexedDataMapOfShapeListOfShape_Iterator_h
    public:
        Include_TopTools_IndexedDataMapOfShapeListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_IndexedDataMapOfShapeListOfShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_IndexedDataMapOfShapeListOfShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_IndexedDataMapOfShapeListOfShape::Iterator* NativeInstance
        {
            ::TopTools_IndexedDataMapOfShapeListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_IndexedDataMapOfShapeListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TopoDS_ListOfShape^ Value();
        RDC::OCC::TopoDS_ListOfShape^ ChangeValue();
        RDC::OCC::TopoDS_Shape^ Key();
        bool IsEqual(RDC::OCC::TopTools_IndexedDataMapOfShapeListOfShape::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TopTools_IndexedDataMapOfShapeListOfShape();
    TopTools_IndexedDataMapOfShapeListOfShape(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_IndexedDataMapOfShapeListOfShape(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_IndexedDataMapOfShapeListOfShape^ theOther);
    RDC::OCC::TopTools_IndexedDataMapOfShapeListOfShape^ Assign(RDC::OCC::TopTools_IndexedDataMapOfShapeListOfShape^ theOther);
    void ReSize(int N);
    int Add(RDC::OCC::TopoDS_Shape^ theKey1, RDC::OCC::TopoDS_ListOfShape^ theItem);
    bool Contains(RDC::OCC::TopoDS_Shape^ theKey1);
    void Substitute(int theIndex, RDC::OCC::TopoDS_Shape^ theKey1, RDC::OCC::TopoDS_ListOfShape^ theItem);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_Shape^ FindKey(int theIndex);
    RDC::OCC::TopoDS_ListOfShape^ FindFromIndex(int theIndex);
    RDC::OCC::TopoDS_ListOfShape^ ChangeFromIndex(int theIndex);
    int FindIndex(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_ListOfShape^ FindFromKey(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_ListOfShape^ ChangeFromKey(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_ListOfShape^ Seek(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_ListOfShape^ ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_IndexedDataMapOfShapeListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeReal
//---------------------------------------------------------------------
public ref class TopTools_IndexedDataMapOfShapeReal sealed
    : public RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeReal>
{

#ifdef Include_TopTools_IndexedDataMapOfShapeReal_h
public:
    Include_TopTools_IndexedDataMapOfShapeReal_h
#endif

public:
    TopTools_IndexedDataMapOfShapeReal(::TopTools_IndexedDataMapOfShapeReal* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeReal>( nativeInstance, true )
    {}

    TopTools_IndexedDataMapOfShapeReal(::TopTools_IndexedDataMapOfShapeReal& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeReal>( &nativeInstance, false )
    {}

    property ::TopTools_IndexedDataMapOfShapeReal* NativeInstance
    {
        ::TopTools_IndexedDataMapOfShapeReal* get()
        {
            return static_cast<::TopTools_IndexedDataMapOfShapeReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeReal::Iterator>
    {

#ifdef Include_TopTools_IndexedDataMapOfShapeReal_Iterator_h
    public:
        Include_TopTools_IndexedDataMapOfShapeReal_Iterator_h
#endif

    public:
        Iterator(::TopTools_IndexedDataMapOfShapeReal::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_IndexedDataMapOfShapeReal::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeReal::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_IndexedDataMapOfShapeReal::Iterator* NativeInstance
        {
            ::TopTools_IndexedDataMapOfShapeReal::Iterator* get()
            {
                return static_cast<::TopTools_IndexedDataMapOfShapeReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TopTools_IndexedDataMapOfShapeReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TopTools_IndexedDataMapOfShapeReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        double Value();
        RDC::OCC::TopoDS_Shape^ Key();
        bool IsEqual(RDC::OCC::TopTools_IndexedDataMapOfShapeReal::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TopTools_IndexedDataMapOfShapeReal();
    TopTools_IndexedDataMapOfShapeReal(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_IndexedDataMapOfShapeReal(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_IndexedDataMapOfShapeReal^ theOther);
    RDC::OCC::TopTools_IndexedDataMapOfShapeReal^ Assign(RDC::OCC::TopTools_IndexedDataMapOfShapeReal^ theOther);
    void ReSize(int N);
    int Add(RDC::OCC::TopoDS_Shape^ theKey1, double theItem);
    bool Contains(RDC::OCC::TopoDS_Shape^ theKey1);
    void Substitute(int theIndex, RDC::OCC::TopoDS_Shape^ theKey1, double theItem);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_Shape^ FindKey(int theIndex);
    double FindFromIndex(int theIndex);
    double ChangeFromIndex(int theIndex);
    int FindIndex(RDC::OCC::TopoDS_Shape^ theKey1);
    double FindFromKey(RDC::OCC::TopoDS_Shape^ theKey1);
    double ChangeFromKey(RDC::OCC::TopoDS_Shape^ theKey1);
    double Seek(RDC::OCC::TopoDS_Shape^ theKey1);
    double ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_IndexedDataMapOfShapeReal

//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeShape
//---------------------------------------------------------------------
public ref class TopTools_IndexedDataMapOfShapeShape sealed
    : public RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeShape>
{

#ifdef Include_TopTools_IndexedDataMapOfShapeShape_h
public:
    Include_TopTools_IndexedDataMapOfShapeShape_h
#endif

public:
    TopTools_IndexedDataMapOfShapeShape(::TopTools_IndexedDataMapOfShapeShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeShape>( nativeInstance, true )
    {}

    TopTools_IndexedDataMapOfShapeShape(::TopTools_IndexedDataMapOfShapeShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeShape>( &nativeInstance, false )
    {}

    property ::TopTools_IndexedDataMapOfShapeShape* NativeInstance
    {
        ::TopTools_IndexedDataMapOfShapeShape* get()
        {
            return static_cast<::TopTools_IndexedDataMapOfShapeShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeShape::Iterator>
    {

#ifdef Include_TopTools_IndexedDataMapOfShapeShape_Iterator_h
    public:
        Include_TopTools_IndexedDataMapOfShapeShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_IndexedDataMapOfShapeShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_IndexedDataMapOfShapeShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_IndexedDataMapOfShapeShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_IndexedDataMapOfShapeShape::Iterator* NativeInstance
        {
            ::TopTools_IndexedDataMapOfShapeShape::Iterator* get()
            {
                return static_cast<::TopTools_IndexedDataMapOfShapeShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TopoDS_Shape^ Value();
        RDC::OCC::TopoDS_Shape^ ChangeValue();
        RDC::OCC::TopoDS_Shape^ Key();
        bool IsEqual(RDC::OCC::TopTools_IndexedDataMapOfShapeShape::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TopTools_IndexedDataMapOfShapeShape();
    TopTools_IndexedDataMapOfShapeShape(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_IndexedDataMapOfShapeShape(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_IndexedDataMapOfShapeShape^ theOther);
    RDC::OCC::TopTools_IndexedDataMapOfShapeShape^ Assign(RDC::OCC::TopTools_IndexedDataMapOfShapeShape^ theOther);
    void ReSize(int N);
    int Add(RDC::OCC::TopoDS_Shape^ theKey1, RDC::OCC::TopoDS_Shape^ theItem);
    bool Contains(RDC::OCC::TopoDS_Shape^ theKey1);
    void Substitute(int theIndex, RDC::OCC::TopoDS_Shape^ theKey1, RDC::OCC::TopoDS_Shape^ theItem);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_Shape^ FindKey(int theIndex);
    RDC::OCC::TopoDS_Shape^ FindFromIndex(int theIndex);
    RDC::OCC::TopoDS_Shape^ ChangeFromIndex(int theIndex);
    int FindIndex(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_Shape^ FindFromKey(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_Shape^ ChangeFromKey(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_Shape^ Seek(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_Shape^ ChangeSeek(RDC::OCC::TopoDS_Shape^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_IndexedDataMapOfShapeShape

//---------------------------------------------------------------------
//  Class  TopTools_IndexedMapOfOrientedShape
//---------------------------------------------------------------------
public ref class TopTools_IndexedMapOfOrientedShape sealed
    : public RDC::OCC::BaseClass<::TopTools_IndexedMapOfOrientedShape>
{

#ifdef Include_TopTools_IndexedMapOfOrientedShape_h
public:
    Include_TopTools_IndexedMapOfOrientedShape_h
#endif

public:
    TopTools_IndexedMapOfOrientedShape(::TopTools_IndexedMapOfOrientedShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_IndexedMapOfOrientedShape>( nativeInstance, true )
    {}

    TopTools_IndexedMapOfOrientedShape(::TopTools_IndexedMapOfOrientedShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_IndexedMapOfOrientedShape>( &nativeInstance, false )
    {}

    property ::TopTools_IndexedMapOfOrientedShape* NativeInstance
    {
        ::TopTools_IndexedMapOfOrientedShape* get()
        {
            return static_cast<::TopTools_IndexedMapOfOrientedShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_IndexedMapOfOrientedShape::Iterator>
    {

#ifdef Include_TopTools_IndexedMapOfOrientedShape_Iterator_h
    public:
        Include_TopTools_IndexedMapOfOrientedShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_IndexedMapOfOrientedShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_IndexedMapOfOrientedShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_IndexedMapOfOrientedShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_IndexedMapOfOrientedShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_IndexedMapOfOrientedShape::Iterator* NativeInstance
        {
            ::TopTools_IndexedMapOfOrientedShape::Iterator* get()
            {
                return static_cast<::TopTools_IndexedMapOfOrientedShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TopoDS_Shape^ Value();
        bool IsEqual(RDC::OCC::TopTools_IndexedMapOfOrientedShape::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TopTools_IndexedMapOfOrientedShape();
    TopTools_IndexedMapOfOrientedShape(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_IndexedMapOfOrientedShape(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_IndexedMapOfOrientedShape^ theOther);
    RDC::OCC::TopTools_IndexedMapOfOrientedShape^ Assign(RDC::OCC::TopTools_IndexedMapOfOrientedShape^ theOther);
    void ReSize(int theExtent);
    int Add(RDC::OCC::TopoDS_Shape^ theKey1);
    bool Contains(RDC::OCC::TopoDS_Shape^ theKey1);
    void Substitute(int theIndex, RDC::OCC::TopoDS_Shape^ theKey1);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    bool RemoveKey(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_Shape^ FindKey(int theIndex);
    int FindIndex(RDC::OCC::TopoDS_Shape^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TopTools_IndexedMapOfOrientedShape

//---------------------------------------------------------------------
//  Class  TopTools_IndexedMapOfShape
//---------------------------------------------------------------------
public ref class TopTools_IndexedMapOfShape sealed
    : public RDC::OCC::BaseClass<::TopTools_IndexedMapOfShape>
    , public IEnumerable<RDC::OCC::TopoDS_Shape^>
{

#ifdef Include_TopTools_IndexedMapOfShape_h
public:
    Include_TopTools_IndexedMapOfShape_h
#endif

public:
    TopTools_IndexedMapOfShape(::TopTools_IndexedMapOfShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_IndexedMapOfShape>( nativeInstance, true )
    {}

    TopTools_IndexedMapOfShape(::TopTools_IndexedMapOfShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_IndexedMapOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_IndexedMapOfShape* NativeInstance
    {
        ::TopTools_IndexedMapOfShape* get()
        {
            return static_cast<::TopTools_IndexedMapOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_Shape^, ::TopTools_IndexedMapOfShape::Iterator>
    {

#ifdef Include_TopTools_IndexedMapOfShape_Iterator_h
    public:
        Include_TopTools_IndexedMapOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_IndexedMapOfShape::Iterator* nativeInstance)
            : RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_Shape^, ::TopTools_IndexedMapOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_IndexedMapOfShape::Iterator& nativeInstance)
            : RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_Shape^, ::TopTools_IndexedMapOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_IndexedMapOfShape::Iterator* NativeInstance
        {
            ::TopTools_IndexedMapOfShape::Iterator* get()
            {
                return static_cast<::TopTools_IndexedMapOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More() override;
        void Next() override;
        RDC::OCC::TopoDS_Shape^ Value() override;
        bool IsEqual(RDC::OCC::TopTools_IndexedMapOfShape::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TopTools_IndexedMapOfShape();
    TopTools_IndexedMapOfShape(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_IndexedMapOfShape(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_IndexedMapOfShape^ theOther);
    RDC::OCC::TopTools_IndexedMapOfShape^ Assign(RDC::OCC::TopTools_IndexedMapOfShape^ theOther);
    void ReSize(int theExtent);
    int Add(RDC::OCC::TopoDS_Shape^ theKey1);
    bool Contains(RDC::OCC::TopoDS_Shape^ theKey1);
    void Substitute(int theIndex, RDC::OCC::TopoDS_Shape^ theKey1);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    bool RemoveKey(RDC::OCC::TopoDS_Shape^ theKey1);
    RDC::OCC::TopoDS_Shape^ FindKey(int theIndex);
    int FindIndex(RDC::OCC::TopoDS_Shape^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_IndexedMapOfShape

//---------------------------------------------------------------------
//  Class  TopTools_ListOfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_ListOfListOfShape sealed
    : public RDC::OCC::NCollection_BaseList
    , public IEnumerable<RDC::OCC::TopoDS_ListOfShape^>
{

#ifdef Include_TopTools_ListOfListOfShape_h
public:
    Include_TopTools_ListOfListOfShape_h
#endif

public:
    TopTools_ListOfListOfShape(::TopTools_ListOfListOfShape* nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    TopTools_ListOfListOfShape(::TopTools_ListOfListOfShape& nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    property ::TopTools_ListOfListOfShape* NativeInstance
    {
        ::TopTools_ListOfListOfShape* get()
        {
            return static_cast<::TopTools_ListOfListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_ListOfShape^, ::TopTools_ListOfListOfShape::Iterator>
    {

#ifdef Include_TopTools_ListOfListOfShape_Iterator_h
    public:
        Include_TopTools_ListOfListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_ListOfListOfShape::Iterator* nativeInstance)
            : RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_ListOfShape^, ::TopTools_ListOfListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_ListOfListOfShape::Iterator& nativeInstance)
            : RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_ListOfShape^, ::TopTools_ListOfListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_ListOfListOfShape::Iterator* NativeInstance
        {
            ::TopTools_ListOfListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_ListOfListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More() override;
        void Next() override;
        RDC::OCC::TopoDS_ListOfShape^ Value() override;
        RDC::OCC::TopoDS_ListOfShape^ ChangeValue();
    }; // class Iterator

    TopTools_ListOfListOfShape();
    TopTools_ListOfListOfShape(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    RDC::OCC::TopTools_ListOfListOfShape^ Assign(RDC::OCC::TopTools_ListOfListOfShape^ theOther);
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    RDC::OCC::TopoDS_ListOfShape^ First();
    RDC::OCC::TopoDS_ListOfShape^ Last();
    RDC::OCC::TopoDS_ListOfShape^ Append(RDC::OCC::TopoDS_ListOfShape^ theItem);
    RDC::OCC::TopoDS_ListOfShape^ Prepend(RDC::OCC::TopoDS_ListOfShape^ theItem);
    void RemoveFirst();
    void Remove(RDC::OCC::TopTools_ListOfListOfShape::Iterator^ theIter);
    RDC::OCC::TopoDS_ListOfShape^ InsertBefore(RDC::OCC::TopoDS_ListOfShape^ theItem, RDC::OCC::TopTools_ListOfListOfShape::Iterator^ theIter);
    RDC::OCC::TopoDS_ListOfShape^ InsertAfter(RDC::OCC::TopoDS_ListOfShape^ theItem, RDC::OCC::TopTools_ListOfListOfShape::Iterator^ theIter);
    void Reverse();
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TopoDS_ListOfShape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_ListOfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_ListIteratorOfListOfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_ListIteratorOfListOfListOfShape sealed
    : public RDC::OCC::BaseClass<::TopTools_ListIteratorOfListOfListOfShape>
{

#ifdef Include_TopTools_ListIteratorOfListOfListOfShape_h
public:
    Include_TopTools_ListIteratorOfListOfListOfShape_h
#endif

public:
    TopTools_ListIteratorOfListOfListOfShape(::TopTools_ListIteratorOfListOfListOfShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_ListIteratorOfListOfListOfShape>( nativeInstance, true )
    {}

    TopTools_ListIteratorOfListOfListOfShape(::TopTools_ListIteratorOfListOfListOfShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_ListIteratorOfListOfListOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_ListIteratorOfListOfListOfShape* NativeInstance
    {
        ::TopTools_ListIteratorOfListOfListOfShape* get()
        {
            return static_cast<::TopTools_ListIteratorOfListOfListOfShape*>(_NativeInstance);
        }
    }

public:
    TopTools_ListIteratorOfListOfListOfShape();
    TopTools_ListIteratorOfListOfListOfShape(RDC::OCC::NCollection_BaseList^ theList);
    bool More();
    void Next();
    RDC::OCC::TopoDS_ListOfShape^ Value();
    RDC::OCC::TopoDS_ListOfShape^ ChangeValue();
}; // class TopTools_ListIteratorOfListOfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_MapOfOrientedShape
//---------------------------------------------------------------------
public ref class TopTools_MapOfOrientedShape sealed
    : public RDC::OCC::BaseClass<::TopTools_MapOfOrientedShape>
{

#ifdef Include_TopTools_MapOfOrientedShape_h
public:
    Include_TopTools_MapOfOrientedShape_h
#endif

public:
    TopTools_MapOfOrientedShape(::TopTools_MapOfOrientedShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_MapOfOrientedShape>( nativeInstance, true )
    {}

    TopTools_MapOfOrientedShape(::TopTools_MapOfOrientedShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_MapOfOrientedShape>( &nativeInstance, false )
    {}

    property ::TopTools_MapOfOrientedShape* NativeInstance
    {
        ::TopTools_MapOfOrientedShape* get()
        {
            return static_cast<::TopTools_MapOfOrientedShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_MapOfOrientedShape::Iterator>
    {

#ifdef Include_TopTools_MapOfOrientedShape_Iterator_h
    public:
        Include_TopTools_MapOfOrientedShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_MapOfOrientedShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_MapOfOrientedShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_MapOfOrientedShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_MapOfOrientedShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_MapOfOrientedShape::Iterator* NativeInstance
        {
            ::TopTools_MapOfOrientedShape::Iterator* get()
            {
                return static_cast<::TopTools_MapOfOrientedShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TopoDS_Shape^ Value();
        RDC::OCC::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_MapOfOrientedShape();
    TopTools_MapOfOrientedShape(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_MapOfOrientedShape(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_MapOfOrientedShape^ theOther);
    RDC::OCC::TopTools_MapOfOrientedShape^ Assign(RDC::OCC::TopTools_MapOfOrientedShape^ theOther);
    void ReSize(int N);
    bool Add(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_Shape^ Added(RDC::OCC::TopoDS_Shape^ theKey);
    bool Contains(RDC::OCC::TopoDS_Shape^ theKey);
    bool Remove(RDC::OCC::TopoDS_Shape^ K);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
    bool IsEqual(RDC::OCC::TopTools_MapOfOrientedShape^ theOther);
    void Union(RDC::OCC::TopTools_MapOfOrientedShape^ theLeft, RDC::OCC::TopTools_MapOfOrientedShape^ theRight);
    bool Unite(RDC::OCC::TopTools_MapOfOrientedShape^ theOther);
    bool HasIntersection(RDC::OCC::TopTools_MapOfOrientedShape^ theMap);
    void Intersection(RDC::OCC::TopTools_MapOfOrientedShape^ theLeft, RDC::OCC::TopTools_MapOfOrientedShape^ theRight);
    bool Intersect(RDC::OCC::TopTools_MapOfOrientedShape^ theOther);
    void Subtraction(RDC::OCC::TopTools_MapOfOrientedShape^ theLeft, RDC::OCC::TopTools_MapOfOrientedShape^ theRight);
    bool Subtract(RDC::OCC::TopTools_MapOfOrientedShape^ theOther);
    void Difference(RDC::OCC::TopTools_MapOfOrientedShape^ theLeft, RDC::OCC::TopTools_MapOfOrientedShape^ theRight);
    bool Differ(RDC::OCC::TopTools_MapOfOrientedShape^ theOther);
    bool Equals(System::Object^ obj) override;
}; // class TopTools_MapOfOrientedShape

//---------------------------------------------------------------------
//  Class  TopTools_MapOfShape
//---------------------------------------------------------------------
public ref class TopTools_MapOfShape sealed
    : public RDC::OCC::BaseClass<::TopTools_MapOfShape>
    , public IEnumerable<RDC::OCC::TopoDS_Shape^>
{

#ifdef Include_TopTools_MapOfShape_h
public:
    Include_TopTools_MapOfShape_h
#endif

public:
    TopTools_MapOfShape(::TopTools_MapOfShape* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_MapOfShape>( nativeInstance, true )
    {}

    TopTools_MapOfShape(::TopTools_MapOfShape& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_MapOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_MapOfShape* NativeInstance
    {
        ::TopTools_MapOfShape* get()
        {
            return static_cast<::TopTools_MapOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_Shape^, ::TopTools_MapOfShape::Iterator>
    {

#ifdef Include_TopTools_MapOfShape_Iterator_h
    public:
        Include_TopTools_MapOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_MapOfShape::Iterator* nativeInstance)
            : RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_Shape^, ::TopTools_MapOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_MapOfShape::Iterator& nativeInstance)
            : RDC::OCC::IteratorEnumerator<RDC::OCC::TopoDS_Shape^, ::TopTools_MapOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_MapOfShape::Iterator* NativeInstance
        {
            ::TopTools_MapOfShape::Iterator* get()
            {
                return static_cast<::TopTools_MapOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More() override;
        void Next() override;
        RDC::OCC::TopoDS_Shape^ Value() override;
        RDC::OCC::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_MapOfShape();
    TopTools_MapOfShape(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TopTools_MapOfShape(int theNbBuckets);
    void Exchange(RDC::OCC::TopTools_MapOfShape^ theOther);
    RDC::OCC::TopTools_MapOfShape^ Assign(RDC::OCC::TopTools_MapOfShape^ theOther);
    void ReSize(int N);
    bool Add(RDC::OCC::TopoDS_Shape^ theKey);
    RDC::OCC::TopoDS_Shape^ Added(RDC::OCC::TopoDS_Shape^ theKey);
    bool Contains(RDC::OCC::TopoDS_Shape^ theKey);
    bool Remove(RDC::OCC::TopoDS_Shape^ K);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
    bool IsEqual(RDC::OCC::TopTools_MapOfShape^ theOther);
    void Union(RDC::OCC::TopTools_MapOfShape^ theLeft, RDC::OCC::TopTools_MapOfShape^ theRight);
    bool Unite(RDC::OCC::TopTools_MapOfShape^ theOther);
    bool HasIntersection(RDC::OCC::TopTools_MapOfShape^ theMap);
    void Intersection(RDC::OCC::TopTools_MapOfShape^ theLeft, RDC::OCC::TopTools_MapOfShape^ theRight);
    bool Intersect(RDC::OCC::TopTools_MapOfShape^ theOther);
    void Subtraction(RDC::OCC::TopTools_MapOfShape^ theLeft, RDC::OCC::TopTools_MapOfShape^ theRight);
    bool Subtract(RDC::OCC::TopTools_MapOfShape^ theOther);
    void Difference(RDC::OCC::TopTools_MapOfShape^ theLeft, RDC::OCC::TopTools_MapOfShape^ theRight);
    bool Differ(RDC::OCC::TopTools_MapOfShape^ theOther);
    bool Equals(System::Object^ obj) override;
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_MapOfShape

//---------------------------------------------------------------------
//  Class  TopTools
//---------------------------------------------------------------------
/// <summary>
/// The  TopTools package provides   utilities for the
/// topological data structure.
/// 
/// * ShapeMapHasher. Hash a  Shape base on the TShape
/// and the Location. The Orientation is not used.
/// 
/// * OrientedShapeMapHasher. Hash a Shape base on the
/// TShape ,the Location and the Orientation.
/// 
/// * Instantiations of TCollection for Shapes :
/// MapOfShape
/// IndexedMapOfShape
/// DataMapOfIntegerShape
/// DataMapOfShapeInteger
/// DataMapOfShapeReal
/// Array1OfShape
/// HArray1OfShape
/// SequenceOfShape
/// HSequenceOfShape
/// ListOfShape
/// Array1OfListShape
/// HArray1OfListShape
/// DataMapOfIntegerListOfShape
/// DataMapOfShapeListOfShape
/// DataMapOfShapeListOfInteger
/// IndexedDataMapOfShapeShape
/// IndexedDataMapOfShapeListOfShape
/// DataMapOfShapeShape
/// IndexedMapOfOrientedShape
/// DataMapOfShapeSequenceOfShape
/// IndexedDataMapOfShapeAddress
/// DataMapOfOrientedShapeShape
/// 
/// * LocationSet : to write sets of locations.
/// 
/// * ShapeSet : to writes sets of TShapes.
/// 
/// Package Methods :
/// 
/// Dump : To dump the topology of a Shape.
/// </summary>
public ref class TopTools sealed
    : public RDC::OCC::BaseClass<::TopTools>
{

#ifdef Include_TopTools_h
public:
    Include_TopTools_h
#endif

public:
    TopTools(::TopTools* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools>( nativeInstance, true )
    {}

    TopTools(::TopTools& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools>( &nativeInstance, false )
    {}

    property ::TopTools* NativeInstance
    {
        ::TopTools* get()
        {
            return static_cast<::TopTools*>(_NativeInstance);
        }
    }

public:
    TopTools();
    /// <summary>
    /// A set of Shapes. Can be dump, wrote or read.
    /// Dumps the topological structure  of <Sh>  on the
    /// stream <S>.
    /// </summary>
    static void Dump(RDC::OCC::TopoDS_Shape^ Sh, System::IO::TextWriter^ S);
    /// <summary>
    /// This is to bypass an extraction bug. It will force
    /// the  inclusion    of  Standard_Integer.hxx  itself
    /// including Standard_OStream.hxx  at   the   correct
    /// position.
    /// </summary>
    static void Dummy(int I);
}; // class TopTools

//---------------------------------------------------------------------
//  Class  TopTools_ShapeMapHasher
//---------------------------------------------------------------------
/// <summary>
/// Hash tool, used for generating maps of shapes in topology.
/// </summary>
public ref class TopTools_ShapeMapHasher sealed
    : public RDC::OCC::BaseClass<::TopTools_ShapeMapHasher>
{

#ifdef Include_TopTools_ShapeMapHasher_h
public:
    Include_TopTools_ShapeMapHasher_h
#endif

public:
    TopTools_ShapeMapHasher(::TopTools_ShapeMapHasher* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_ShapeMapHasher>( nativeInstance, true )
    {}

    TopTools_ShapeMapHasher(::TopTools_ShapeMapHasher& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_ShapeMapHasher>( &nativeInstance, false )
    {}

    property ::TopTools_ShapeMapHasher* NativeInstance
    {
        ::TopTools_ShapeMapHasher* get()
        {
            return static_cast<::TopTools_ShapeMapHasher*>(_NativeInstance);
        }
    }

public:
    TopTools_ShapeMapHasher();
}; // class TopTools_ShapeMapHasher

//---------------------------------------------------------------------
//  Class  TopTools_HArray1OfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_HArray1OfListOfShape sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_TopTools_HArray1OfListOfShape_h
public:
    Include_TopTools_HArray1OfListOfShape_h
#endif

public:
    TopTools_HArray1OfListOfShape(::TopTools_HArray1OfListOfShape* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TopTools_HArray1OfListOfShape(::TopTools_HArray1OfListOfShape& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TopTools_HArray1OfListOfShape* NativeInstance
    {
        ::TopTools_HArray1OfListOfShape* get()
        {
            return static_cast<::TopTools_HArray1OfListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_HArray1OfListOfShape::Iterator>
    {

#ifdef Include_TopTools_HArray1OfListOfShape_Iterator_h
    public:
        Include_TopTools_HArray1OfListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_HArray1OfListOfShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_HArray1OfListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_HArray1OfListOfShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_HArray1OfListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_HArray1OfListOfShape::Iterator* NativeInstance
        {
            ::TopTools_HArray1OfListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_HArray1OfListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TopTools_HArray1OfListOfShape();
    TopTools_HArray1OfListOfShape(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TopTools_HArray1OfListOfShape(int theLower, int theUpper, value_type theValue, ) */
    /* Method skipped due to unknown mapping: void TopTools_HArray1OfListOfShape(value_type theBegin, int theLower, int theUpper, bool parameter1, ) */
    TopTools_HArray1OfListOfShape(RDC::OCC::TopTools_Array1OfListOfShape^ theOther);
    RDC::OCC::TopTools_Array1OfListOfShape^ Array1();
    RDC::OCC::TopTools_Array1OfListOfShape^ ChangeArray1();
    /* Method skipped due to unknown mapping: void Init(const_reference theValue, ) */
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TopTools_HArray1OfListOfShape^ Assign(RDC::OCC::TopTools_HArray1OfListOfShape^ theOther);
    RDC::OCC::TopTools_HArray1OfListOfShape^ Move(RDC::OCC::TopTools_HArray1OfListOfShape^ theOther);
    /* Method skipped due to unknown mapping: const_reference First() */
    /* Method skipped due to unknown mapping: reference ChangeFirst() */
    /* Method skipped due to unknown mapping: const_reference Last() */
    /* Method skipped due to unknown mapping: reference ChangeLast() */
    /* Method skipped due to unknown mapping: const_reference Value(int theIndex, ) */
    /* Method skipped due to unknown mapping: reference ChangeValue(int theIndex, ) */
    /* Method skipped due to unknown mapping: void SetValue(int theIndex, value_type theItem, ) */
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static RDC::OCC::TopTools_HArray1OfListOfShape^ CreateDowncasted(::TopTools_HArray1OfListOfShape* instance);
}; // class TopTools_HArray1OfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_HArray1OfShape
//---------------------------------------------------------------------
public ref class TopTools_HArray1OfShape sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<RDC::OCC::TopoDS_Shape^>
{

#ifdef Include_TopTools_HArray1OfShape_h
public:
    Include_TopTools_HArray1OfShape_h
#endif

public:
    TopTools_HArray1OfShape(::TopTools_HArray1OfShape* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TopTools_HArray1OfShape(::TopTools_HArray1OfShape& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TopTools_HArray1OfShape* NativeInstance
    {
        ::TopTools_HArray1OfShape* get()
        {
            return static_cast<::TopTools_HArray1OfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_HArray1OfShape::Iterator>
    {

#ifdef Include_TopTools_HArray1OfShape_Iterator_h
    public:
        Include_TopTools_HArray1OfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_HArray1OfShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_HArray1OfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_HArray1OfShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_HArray1OfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_HArray1OfShape::Iterator* NativeInstance
        {
            ::TopTools_HArray1OfShape::Iterator* get()
            {
                return static_cast<::TopTools_HArray1OfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TopTools_HArray1OfShape();
    TopTools_HArray1OfShape(int theLower, int theUpper);
    TopTools_HArray1OfShape(int theLower, int theUpper, RDC::OCC::TopoDS_Shape^ theValue);
    TopTools_HArray1OfShape(RDC::OCC::TopoDS_Shape^ theBegin, int theLower, int theUpper, bool parameter1);
    TopTools_HArray1OfShape(RDC::OCC::TopTools_Array1OfShape^ theOther);
    RDC::OCC::TopTools_Array1OfShape^ Array1();
    RDC::OCC::TopTools_Array1OfShape^ ChangeArray1();
    void Init(RDC::OCC::TopoDS_Shape^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TopTools_HArray1OfShape^ Assign(RDC::OCC::TopTools_HArray1OfShape^ theOther);
    RDC::OCC::TopTools_HArray1OfShape^ Move(RDC::OCC::TopTools_HArray1OfShape^ theOther);
    RDC::OCC::TopoDS_Shape^ First();
    RDC::OCC::TopoDS_Shape^ ChangeFirst();
    RDC::OCC::TopoDS_Shape^ Last();
    RDC::OCC::TopoDS_Shape^ ChangeLast();
    virtual RDC::OCC::TopoDS_Shape^ Value(int theIndex);
    RDC::OCC::TopoDS_Shape^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TopoDS_Shape^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static RDC::OCC::TopTools_HArray1OfShape^ CreateDowncasted(::TopTools_HArray1OfShape* instance);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_HArray1OfShape

//---------------------------------------------------------------------
//  Class  TopTools_HArray2OfShape
//---------------------------------------------------------------------
public ref class TopTools_HArray2OfShape sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_TopTools_HArray2OfShape_h
public:
    Include_TopTools_HArray2OfShape_h
#endif

public:
    TopTools_HArray2OfShape(::TopTools_HArray2OfShape* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TopTools_HArray2OfShape(::TopTools_HArray2OfShape& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TopTools_HArray2OfShape* NativeInstance
    {
        ::TopTools_HArray2OfShape* get()
        {
            return static_cast<::TopTools_HArray2OfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_HArray2OfShape::Iterator>
    {

#ifdef Include_TopTools_HArray2OfShape_Iterator_h
    public:
        Include_TopTools_HArray2OfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_HArray2OfShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_HArray2OfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_HArray2OfShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_HArray2OfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_HArray2OfShape::Iterator* NativeInstance
        {
            ::TopTools_HArray2OfShape::Iterator* get()
            {
                return static_cast<::TopTools_HArray2OfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TopTools_HArray2OfShape(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TopTools_HArray2OfShape(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::TopoDS_Shape^ theValue);
    TopTools_HArray2OfShape(RDC::OCC::TopTools_Array2OfShape^ theOther);
    RDC::OCC::TopTools_Array2OfShape^ Array2();
    RDC::OCC::TopTools_Array2OfShape^ ChangeArray2();
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    RDC::OCC::TopTools_HArray2OfShape^ Assign(RDC::OCC::TopTools_HArray2OfShape^ theOther);
    RDC::OCC::TopTools_HArray2OfShape^ Move(RDC::OCC::TopTools_HArray2OfShape^ theOther);
    RDC::OCC::TopoDS_Shape^ Value(int theRow, int theCol);
    RDC::OCC::TopoDS_Shape^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, RDC::OCC::TopoDS_Shape^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(RDC::OCC::TopoDS_Shape^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TopoDS_Shape^ First();
    RDC::OCC::TopoDS_Shape^ ChangeFirst();
    RDC::OCC::TopoDS_Shape^ Last();
    RDC::OCC::TopoDS_Shape^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static RDC::OCC::TopTools_HArray2OfShape^ CreateDowncasted(::TopTools_HArray2OfShape* instance);
}; // class TopTools_HArray2OfShape

//---------------------------------------------------------------------
//  Class  TopTools_HSequenceOfShape
//---------------------------------------------------------------------
public ref class TopTools_HSequenceOfShape sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<RDC::OCC::TopoDS_Shape^>
{

#ifdef Include_TopTools_HSequenceOfShape_h
public:
    Include_TopTools_HSequenceOfShape_h
#endif

public:
    TopTools_HSequenceOfShape(::TopTools_HSequenceOfShape* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TopTools_HSequenceOfShape(::TopTools_HSequenceOfShape& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TopTools_HSequenceOfShape* NativeInstance
    {
        ::TopTools_HSequenceOfShape* get()
        {
            return static_cast<::TopTools_HSequenceOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TopTools_HSequenceOfShape::Iterator>
    {

#ifdef Include_TopTools_HSequenceOfShape_Iterator_h
    public:
        Include_TopTools_HSequenceOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_HSequenceOfShape::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_HSequenceOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_HSequenceOfShape::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TopTools_HSequenceOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_HSequenceOfShape::Iterator* NativeInstance
        {
            ::TopTools_HSequenceOfShape::Iterator* get()
            {
                return static_cast<::TopTools_HSequenceOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TopoDS_Shape^ Value();
        RDC::OCC::TopoDS_Shape^ ChangeValue();
        bool IsEqual(RDC::OCC::TopTools_HSequenceOfShape::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TopTools_HSequenceOfShape();
    TopTools_HSequenceOfShape(RDC::OCC::TopTools_SequenceOfShape^ theOther);
    RDC::OCC::TopTools_SequenceOfShape^ Sequence();
    void Append(RDC::OCC::TopoDS_Shape^ theItem);
    void Append(RDC::OCC::TopTools_SequenceOfShape^ theSequence);
    RDC::OCC::TopTools_SequenceOfShape^ ChangeSequence();
    int Size();
    int Length();
    int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    RDC::OCC::TopTools_HSequenceOfShape^ Assign(RDC::OCC::TopTools_HSequenceOfShape^ theOther);
    void Remove(RDC::OCC::TopTools_HSequenceOfShape::Iterator^ thePosition);
    void Prepend(RDC::OCC::TopoDS_Shape^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::TopoDS_Shape^ theItem);
    void InsertAfter(RDC::OCC::TopTools_HSequenceOfShape::Iterator^ thePosition, RDC::OCC::TopoDS_Shape^ theItem);
    void Split(int theIndex, RDC::OCC::TopTools_HSequenceOfShape^ theSeq);
    RDC::OCC::TopoDS_Shape^ First();
    RDC::OCC::TopoDS_Shape^ ChangeFirst();
    RDC::OCC::TopoDS_Shape^ Last();
    RDC::OCC::TopoDS_Shape^ ChangeLast();
    virtual RDC::OCC::TopoDS_Shape^ Value(int theIndex);
    RDC::OCC::TopoDS_Shape^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TopoDS_Shape^ theItem);
    static RDC::OCC::TopTools_HSequenceOfShape^ CreateDowncasted(::TopTools_HSequenceOfShape* instance);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_HSequenceOfShape

//---------------------------------------------------------------------
//  Class  TopTools_LocationSet
//---------------------------------------------------------------------
/// <summary>
/// The class LocationSet stores a set of location in
/// a relocatable state.
/// 
/// It can be created from Locations.
/// 
/// It can create Locations.
/// 
/// It can be write and read from a stream.
/// </summary>
public ref class TopTools_LocationSet sealed
    : public RDC::OCC::BaseClass<::TopTools_LocationSet>
{

#ifdef Include_TopTools_LocationSet_h
public:
    Include_TopTools_LocationSet_h
#endif

public:
    TopTools_LocationSet(::TopTools_LocationSet* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_LocationSet>( nativeInstance, true )
    {}

    TopTools_LocationSet(::TopTools_LocationSet& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_LocationSet>( &nativeInstance, false )
    {}

    property ::TopTools_LocationSet* NativeInstance
    {
        ::TopTools_LocationSet* get()
        {
            return static_cast<::TopTools_LocationSet*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns an empty set of locations.
    /// </summary>
    TopTools_LocationSet();
    /// <summary>
    /// Clears the content of the set.
    /// </summary>
    void Clear();
    /// <summary>
    /// Incorporate a new Location in the  set and returns
    /// its index.
    /// </summary>
    int Add(RDC::OCC::TopLoc_Location^ L);
    /// <summary>
    /// Returns the location of index <I>.
    /// </summary>
    RDC::OCC::TopLoc_Location^ Location(int I);
    /// <summary>
    /// Returns the index of <L>.
    /// </summary>
    int Index(RDC::OCC::TopLoc_Location^ L);
    /// <summary>
    /// Dumps the content of me on the stream <OS>.
    /// </summary>
    void Dump(System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes the content of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void Write(System::IO::TextWriter^ OS, RDC::OCC::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the content of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void Write(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theProgress, ) */
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theProgress, ) */
}; // class TopTools_LocationSet

//---------------------------------------------------------------------
//  Class  TopTools_MutexForShapeProvider
//---------------------------------------------------------------------
/// <summary>
/// Class TopTools_MutexForShapeProvider
/// This class is used to create and store mutexes associated with shapes.
/// </summary>
public ref class TopTools_MutexForShapeProvider sealed
    : public RDC::OCC::BaseClass<::TopTools_MutexForShapeProvider>
{

#ifdef Include_TopTools_MutexForShapeProvider_h
public:
    Include_TopTools_MutexForShapeProvider_h
#endif

public:
    TopTools_MutexForShapeProvider(::TopTools_MutexForShapeProvider* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_MutexForShapeProvider>( nativeInstance, true )
    {}

    TopTools_MutexForShapeProvider(::TopTools_MutexForShapeProvider& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_MutexForShapeProvider>( &nativeInstance, false )
    {}

    property ::TopTools_MutexForShapeProvider* NativeInstance
    {
        ::TopTools_MutexForShapeProvider* get()
        {
            return static_cast<::TopTools_MutexForShapeProvider*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor
    /// </summary>
    TopTools_MutexForShapeProvider();
    /// <summary>
    /// Creates and associates mutexes with each sub-shape of type theType in theShape.
    /// </summary>
    void CreateMutexesForSubShapes(RDC::OCC::TopoDS_Shape^ theShape, RDC::OCC::TopAbs_ShapeEnum theType);
    /// <summary>
    /// Creates and associates mutex with theShape
    /// </summary>
    void CreateMutexForShape(RDC::OCC::TopoDS_Shape^ theShape);
    /* Method skipped due to unknown mapping: Standard_Mutex GetMutex(TopoDS_Shape theShape, ) */
    /// <summary>
    /// Removes all mutexes
    /// </summary>
    void RemoveAllMutexes();
}; // class TopTools_MutexForShapeProvider

//---------------------------------------------------------------------
//  Class  TopTools_ShapeSet
//---------------------------------------------------------------------
/// <summary>
/// A ShapeSets    contains  a  Shape    and all   its
/// sub-shapes and locations.  It  can be dump,  write
/// and read.
/// 
/// Methods to handle the geometry can be redefined.
/// </summary>
public ref class TopTools_ShapeSet
    : public RDC::OCC::BaseClass<::TopTools_ShapeSet>
{

#ifdef Include_TopTools_ShapeSet_h
public:
    Include_TopTools_ShapeSet_h
#endif

protected:
    TopTools_ShapeSet(InitMode init)
        : RDC::OCC::BaseClass<::TopTools_ShapeSet>( init )
    {}

public:
    TopTools_ShapeSet(::TopTools_ShapeSet* nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_ShapeSet>( nativeInstance, true )
    {}

    TopTools_ShapeSet(::TopTools_ShapeSet& nativeInstance)
        : RDC::OCC::BaseClass<::TopTools_ShapeSet>( &nativeInstance, false )
    {}

    property ::TopTools_ShapeSet* NativeInstance
    {
        ::TopTools_ShapeSet* get()
        {
            return static_cast<::TopTools_ShapeSet*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Builds an empty ShapeSet.
    /// </summary>
    TopTools_ShapeSet();
    /// <summary>
    /// Sets the TopTools_FormatVersion
    /// </summary>
    void SetFormatNb(int theFormatNb);
    /// <summary>
    /// Returns the TopTools_FormatVersion
    /// </summary>
    int FormatNb();
    /// <summary>
    /// Clears the content of the set.  This method can be
    /// redefined.
    /// </summary>
    void Clear();
    /// <summary>
    /// Stores <S> and its sub-shape. Returns the index of <S>.
    /// The method AddGeometry is called on each sub-shape.
    /// </summary>
    int Add(RDC::OCC::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the sub-shape of index <I>.
    /// </summary>
    RDC::OCC::TopoDS_Shape^ Shape(int I);
    /// <summary>
    /// Returns the index of <S>.
    /// </summary>
    int Index(RDC::OCC::TopoDS_Shape^ S);
    RDC::OCC::TopTools_LocationSet^ Locations();
    RDC::OCC::TopTools_LocationSet^ ChangeLocations();
    /// <summary>
    /// Dumps the number of objects in me on the stream <OS>.
    /// (Number of shapes of each type)
    /// </summary>
    System::IO::TextWriter^ DumpExtent(System::IO::TextWriter^ OS);
    /// <summary>
    /// Dumps the number of objects in me in the string S
    /// (Number of shapes of each type)
    /// </summary>
    void DumpExtent(RDC::OCC::TCollection_AsciiString^ S);
    /// <summary>
    /// Dumps the content of me on the stream <OS>.
    /// 
    /// Dumps the shapes from first to last.
    /// For each Shape
    /// Dump the type, the flags, the subshapes
    /// calls DumpGeometry(S)
    /// 
    /// Dumps the geometry calling DumpGeometry.
    /// 
    /// Dumps the locations.
    /// </summary>
    void Dump(System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes the content of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// 
    /// Writes the locations.
    /// 
    /// Writes the geometry calling WriteGeometry.
    /// 
    /// Dumps the shapes from last to first.
    /// For each shape  :
    /// Write the type.
    /// calls WriteGeometry(S).
    /// Write the flags, the subshapes.
    /// </summary>
    void Write(System::IO::TextWriter^ OS, RDC::OCC::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the content of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// 
    /// Writes the locations.
    /// 
    /// Writes the geometry calling WriteGeometry.
    /// 
    /// Dumps the shapes from last to first.
    /// For each shape  :
    /// Write the type.
    /// calls WriteGeometry(S).
    /// Write the flags, the subshapes.
    /// </summary>
    void Write(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theProgress, ) */
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theProgress, ) */
    /// <summary>
    /// Dumps   on  <OS>    the  shape  <S>.   Dumps   the
    /// orientation, the index of the TShape and the index
    /// of the Location.
    /// </summary>
    void Dump(RDC::OCC::TopoDS_Shape^ S, System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes   on  <OS>   the shape   <S>.    Writes the
    /// orientation, the index of the TShape and the index
    /// of the Location.
    /// </summary>
    void Write(RDC::OCC::TopoDS_Shape^ S, System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void Read(TopoDS_Shape S, istream IS, ) */
    /// <summary>
    /// Stores the geometry of <S>.
    /// </summary>
    void AddGeometry(RDC::OCC::TopoDS_Shape^ S);
    /// <summary>
    /// Dumps the geometry of me on the stream <OS>.
    /// </summary>
    void DumpGeometry(System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes the geometry of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void WriteGeometry(System::IO::TextWriter^ OS, RDC::OCC::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the geometry of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void WriteGeometry(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theProgress, ) */
    /* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theProgress, ) */
    /// <summary>
    /// Dumps the geometry of <S> on the stream <OS>.
    /// </summary>
    void DumpGeometry(RDC::OCC::TopoDS_Shape^ S, System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes the geometry of <S>  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void WriteGeometry(RDC::OCC::TopoDS_Shape^ S, System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void ReadGeometry(TopAbs_ShapeEnum T, istream IS, TopoDS_Shape S, ) */
    /// <summary>
    /// Inserts  the shape <S2> in  the  shape <S1>.  This
    /// method must be   redefined  to  use   the  correct
    /// builder.
    /// </summary>
    void AddShapes(RDC::OCC::TopoDS_Shape^ S1, RDC::OCC::TopoDS_Shape^ S2);
    /// <summary>
    /// This method is   called after  each  new  completed
    /// shape. <T> is the  type. <S> is  the shape. In this
    /// class it does nothing, but it gives the opportunity
    /// in derived  classes to perform  extra  treatment on
    /// shapes.
    /// </summary>
    void Check(RDC::OCC::TopAbs_ShapeEnum T, RDC::OCC::TopoDS_Shape^ S);
    /// <summary>
    /// Returns number of shapes read from file.
    /// </summary>
    int NbShapes();
}; // class TopTools_ShapeSet

}; // namespace OCC
}; // namespace RDC

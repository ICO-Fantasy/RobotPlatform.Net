// Generated wrapper code for package TColStd

#pragma once

#include "NCollection.h"
#include "Standard.h"

namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Class  TColStd_Array1OfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_Array1OfAsciiString sealed
    : public RDC::OCC::BaseClass<::TColStd_Array1OfAsciiString>
    , public IIndexEnumerable<RDC::OCC::TCollection_AsciiString^>
{

#ifdef Include_TColStd_Array1OfAsciiString_h
public:
    Include_TColStd_Array1OfAsciiString_h
#endif

public:
    TColStd_Array1OfAsciiString(::TColStd_Array1OfAsciiString* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfAsciiString>( nativeInstance, true )
    {}

    TColStd_Array1OfAsciiString(::TColStd_Array1OfAsciiString& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfAsciiString>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfAsciiString* NativeInstance
    {
        ::TColStd_Array1OfAsciiString* get()
        {
            return static_cast<::TColStd_Array1OfAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array1OfAsciiString::Iterator>
    {

#ifdef Include_TColStd_Array1OfAsciiString_Iterator_h
    public:
        Include_TColStd_Array1OfAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfAsciiString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfAsciiString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfAsciiString::Iterator* NativeInstance
        {
            ::TColStd_Array1OfAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColStd_Array1OfAsciiString();
    TColStd_Array1OfAsciiString(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array1OfAsciiString(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColStd_Array1OfAsciiString(RDC::OCC::TCollection_AsciiString^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfAsciiString(RDC::OCC::TCollection_AsciiString^ theBegin, int theLower, int theUpper);
    void Init(RDC::OCC::TCollection_AsciiString^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_Array1OfAsciiString^ Assign(RDC::OCC::TColStd_Array1OfAsciiString^ theOther);
    RDC::OCC::TColStd_Array1OfAsciiString^ Move(RDC::OCC::TColStd_Array1OfAsciiString^ theOther);
    RDC::OCC::TCollection_AsciiString^ First();
    RDC::OCC::TCollection_AsciiString^ ChangeFirst();
    RDC::OCC::TCollection_AsciiString^ Last();
    RDC::OCC::TCollection_AsciiString^ ChangeLast();
    virtual RDC::OCC::TCollection_AsciiString^ Value(int theIndex);
    RDC::OCC::TCollection_AsciiString^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TCollection_AsciiString^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_AsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfBoolean
//---------------------------------------------------------------------
public ref class TColStd_Array1OfBoolean sealed
    : public RDC::OCC::BaseClass<::TColStd_Array1OfBoolean>
    , public IIndexEnumerable<bool>
{

#ifdef Include_TColStd_Array1OfBoolean_h
public:
    Include_TColStd_Array1OfBoolean_h
#endif

public:
    TColStd_Array1OfBoolean(::TColStd_Array1OfBoolean* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfBoolean>( nativeInstance, true )
    {}

    TColStd_Array1OfBoolean(::TColStd_Array1OfBoolean& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfBoolean>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfBoolean* NativeInstance
    {
        ::TColStd_Array1OfBoolean* get()
        {
            return static_cast<::TColStd_Array1OfBoolean*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array1OfBoolean::Iterator>
    {

#ifdef Include_TColStd_Array1OfBoolean_Iterator_h
    public:
        Include_TColStd_Array1OfBoolean_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfBoolean::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfBoolean::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfBoolean::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfBoolean::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfBoolean::Iterator* NativeInstance
        {
            ::TColStd_Array1OfBoolean::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfBoolean::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property bool ChangeFirst {
        bool get() {
            return ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeFirst();
        }
        void set(bool value) {
            ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property bool ChangeLast {
        bool get() {
            return ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeLast();
        }
        void set(bool value) {
            ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array1OfBoolean();
    TColStd_Array1OfBoolean(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array1OfBoolean(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColStd_Array1OfBoolean(bool theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfBoolean(bool theBegin, int theLower, int theUpper);
    void Init(bool theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_Array1OfBoolean^ Assign(RDC::OCC::TColStd_Array1OfBoolean^ theOther);
    RDC::OCC::TColStd_Array1OfBoolean^ Move(RDC::OCC::TColStd_Array1OfBoolean^ theOther);
    bool First();
    bool Last();
    virtual bool Value(int theIndex);
    bool ChangeValue(int theIndex);
    void SetValue(int theIndex, bool theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<bool>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfByte
//---------------------------------------------------------------------
public ref class TColStd_Array1OfByte sealed
    : public RDC::OCC::BaseClass<::TColStd_Array1OfByte>
    , public IIndexEnumerable<unsigned char>
{

#ifdef Include_TColStd_Array1OfByte_h
public:
    Include_TColStd_Array1OfByte_h
#endif

public:
    TColStd_Array1OfByte(::TColStd_Array1OfByte* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfByte>( nativeInstance, true )
    {}

    TColStd_Array1OfByte(::TColStd_Array1OfByte& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfByte>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfByte* NativeInstance
    {
        ::TColStd_Array1OfByte* get()
        {
            return static_cast<::TColStd_Array1OfByte*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array1OfByte::Iterator>
    {

#ifdef Include_TColStd_Array1OfByte_Iterator_h
    public:
        Include_TColStd_Array1OfByte_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfByte::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfByte::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfByte::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfByte::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfByte::Iterator* NativeInstance
        {
            ::TColStd_Array1OfByte::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfByte::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property unsigned char ChangeFirst {
        unsigned char get() {
            return ((::TColStd_Array1OfByte*)_NativeInstance)->ChangeFirst();
        }
        void set(unsigned char value) {
            ((::TColStd_Array1OfByte*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property unsigned char ChangeLast {
        unsigned char get() {
            return ((::TColStd_Array1OfByte*)_NativeInstance)->ChangeLast();
        }
        void set(unsigned char value) {
            ((::TColStd_Array1OfByte*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array1OfByte();
    TColStd_Array1OfByte(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array1OfByte(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColStd_Array1OfByte(unsigned char theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfByte(unsigned char theBegin, int theLower, int theUpper);
    void Init(unsigned char theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_Array1OfByte^ Assign(RDC::OCC::TColStd_Array1OfByte^ theOther);
    RDC::OCC::TColStd_Array1OfByte^ Move(RDC::OCC::TColStd_Array1OfByte^ theOther);
    unsigned char First();
    unsigned char Last();
    virtual unsigned char Value(int theIndex);
    unsigned char ChangeValue(int theIndex);
    void SetValue(int theIndex, unsigned char theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<unsigned char>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfByte

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfCharacter
//---------------------------------------------------------------------
public ref class TColStd_Array1OfCharacter sealed
    : public RDC::OCC::BaseClass<::TColStd_Array1OfCharacter>
    , public IIndexEnumerable<char>
{

#ifdef Include_TColStd_Array1OfCharacter_h
public:
    Include_TColStd_Array1OfCharacter_h
#endif

public:
    TColStd_Array1OfCharacter(::TColStd_Array1OfCharacter* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfCharacter>( nativeInstance, true )
    {}

    TColStd_Array1OfCharacter(::TColStd_Array1OfCharacter& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfCharacter>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfCharacter* NativeInstance
    {
        ::TColStd_Array1OfCharacter* get()
        {
            return static_cast<::TColStd_Array1OfCharacter*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array1OfCharacter::Iterator>
    {

#ifdef Include_TColStd_Array1OfCharacter_Iterator_h
    public:
        Include_TColStd_Array1OfCharacter_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfCharacter::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfCharacter::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfCharacter::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfCharacter::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfCharacter::Iterator* NativeInstance
        {
            ::TColStd_Array1OfCharacter::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfCharacter::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property char ChangeFirst {
        char get() {
            return ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeFirst();
        }
        void set(char value) {
            ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property char ChangeLast {
        char get() {
            return ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeLast();
        }
        void set(char value) {
            ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array1OfCharacter();
    TColStd_Array1OfCharacter(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array1OfCharacter(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColStd_Array1OfCharacter(char theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfCharacter(char theBegin, int theLower, int theUpper);
    void Init(char theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_Array1OfCharacter^ Assign(RDC::OCC::TColStd_Array1OfCharacter^ theOther);
    RDC::OCC::TColStd_Array1OfCharacter^ Move(RDC::OCC::TColStd_Array1OfCharacter^ theOther);
    char First();
    char Last();
    virtual char Value(int theIndex);
    char ChangeValue(int theIndex);
    void SetValue(int theIndex, char theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<char>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfCharacter

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfExtendedString
//---------------------------------------------------------------------
public ref class TColStd_Array1OfExtendedString sealed
    : public RDC::OCC::BaseClass<::TColStd_Array1OfExtendedString>
    , public IIndexEnumerable<RDC::OCC::TCollection_ExtendedString^>
{

#ifdef Include_TColStd_Array1OfExtendedString_h
public:
    Include_TColStd_Array1OfExtendedString_h
#endif

public:
    TColStd_Array1OfExtendedString(::TColStd_Array1OfExtendedString* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfExtendedString>( nativeInstance, true )
    {}

    TColStd_Array1OfExtendedString(::TColStd_Array1OfExtendedString& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfExtendedString>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfExtendedString* NativeInstance
    {
        ::TColStd_Array1OfExtendedString* get()
        {
            return static_cast<::TColStd_Array1OfExtendedString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array1OfExtendedString::Iterator>
    {

#ifdef Include_TColStd_Array1OfExtendedString_Iterator_h
    public:
        Include_TColStd_Array1OfExtendedString_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfExtendedString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfExtendedString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfExtendedString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfExtendedString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfExtendedString::Iterator* NativeInstance
        {
            ::TColStd_Array1OfExtendedString::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfExtendedString::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColStd_Array1OfExtendedString();
    TColStd_Array1OfExtendedString(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array1OfExtendedString(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColStd_Array1OfExtendedString(RDC::OCC::TCollection_ExtendedString^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfExtendedString(RDC::OCC::TCollection_ExtendedString^ theBegin, int theLower, int theUpper);
    void Init(RDC::OCC::TCollection_ExtendedString^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_Array1OfExtendedString^ Assign(RDC::OCC::TColStd_Array1OfExtendedString^ theOther);
    RDC::OCC::TColStd_Array1OfExtendedString^ Move(RDC::OCC::TColStd_Array1OfExtendedString^ theOther);
    RDC::OCC::TCollection_ExtendedString^ First();
    RDC::OCC::TCollection_ExtendedString^ ChangeFirst();
    RDC::OCC::TCollection_ExtendedString^ Last();
    RDC::OCC::TCollection_ExtendedString^ ChangeLast();
    virtual RDC::OCC::TCollection_ExtendedString^ Value(int theIndex);
    RDC::OCC::TCollection_ExtendedString^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TCollection_ExtendedString^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_ExtendedString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfInteger
//---------------------------------------------------------------------
public ref class TColStd_Array1OfInteger sealed
    : public RDC::OCC::BaseClass<::TColStd_Array1OfInteger>
    , public IIndexEnumerable<int>
{

#ifdef Include_TColStd_Array1OfInteger_h
public:
    Include_TColStd_Array1OfInteger_h
#endif

public:
    TColStd_Array1OfInteger(::TColStd_Array1OfInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfInteger>( nativeInstance, true )
    {}

    TColStd_Array1OfInteger(::TColStd_Array1OfInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfInteger* NativeInstance
    {
        ::TColStd_Array1OfInteger* get()
        {
            return static_cast<::TColStd_Array1OfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array1OfInteger::Iterator>
    {

#ifdef Include_TColStd_Array1OfInteger_Iterator_h
    public:
        Include_TColStd_Array1OfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfInteger::Iterator* NativeInstance
        {
            ::TColStd_Array1OfInteger::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property int ChangeFirst {
        int get() {
            return ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeFirst();
        }
        void set(int value) {
            ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property int ChangeLast {
        int get() {
            return ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeLast();
        }
        void set(int value) {
            ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array1OfInteger();
    TColStd_Array1OfInteger(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array1OfInteger(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColStd_Array1OfInteger(int theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfInteger(int theBegin, int theLower, int theUpper);
    void Init(int theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_Array1OfInteger^ Assign(RDC::OCC::TColStd_Array1OfInteger^ theOther);
    RDC::OCC::TColStd_Array1OfInteger^ Move(RDC::OCC::TColStd_Array1OfInteger^ theOther);
    int First();
    int Last();
    virtual int Value(int theIndex);
    int ChangeValue(int theIndex);
    void SetValue(int theIndex, int theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<int>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfInteger

//---------------------------------------------------------------------
//  Class  TColStd_ListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_ListOfInteger sealed
    : public RDC::OCC::NCollection_BaseList
    , public IEnumerable<int>
{

#ifdef Include_TColStd_ListOfInteger_h
public:
    Include_TColStd_ListOfInteger_h
#endif

public:
    TColStd_ListOfInteger(::TColStd_ListOfInteger* nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    TColStd_ListOfInteger(::TColStd_ListOfInteger& nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    property ::TColStd_ListOfInteger* NativeInstance
    {
        ::TColStd_ListOfInteger* get()
        {
            return static_cast<::TColStd_ListOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::IteratorEnumerator<int, ::TColStd_ListOfInteger::Iterator>
    {

#ifdef Include_TColStd_ListOfInteger_Iterator_h
    public:
        Include_TColStd_ListOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_ListOfInteger::Iterator* nativeInstance)
            : RDC::OCC::IteratorEnumerator<int, ::TColStd_ListOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_ListOfInteger::Iterator& nativeInstance)
            : RDC::OCC::IteratorEnumerator<int, ::TColStd_ListOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_ListOfInteger::Iterator* NativeInstance
        {
            ::TColStd_ListOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_ListOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_ListOfInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_ListOfInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More() override;
        void Next() override;
        int Value() override;
    }; // class Iterator

    TColStd_ListOfInteger();
    TColStd_ListOfInteger(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    RDC::OCC::TColStd_ListOfInteger^ Assign(RDC::OCC::TColStd_ListOfInteger^ theOther);
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    int First();
    int Last();
    int Append(int theItem);
    int Prepend(int theItem);
    void RemoveFirst();
    void Remove(RDC::OCC::TColStd_ListOfInteger::Iterator^ theIter);
    int InsertBefore(int theItem, RDC::OCC::TColStd_ListOfInteger::Iterator^ theIter);
    int InsertAfter(int theItem, RDC::OCC::TColStd_ListOfInteger::Iterator^ theIter);
    void Reverse();
    virtual System::Collections::Generic::IEnumerator<int>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_ListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_ListIteratorOfListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_ListIteratorOfListOfInteger sealed
    : public RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfInteger>
{

#ifdef Include_TColStd_ListIteratorOfListOfInteger_h
public:
    Include_TColStd_ListIteratorOfListOfInteger_h
#endif

public:
    TColStd_ListIteratorOfListOfInteger(::TColStd_ListIteratorOfListOfInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfInteger>( nativeInstance, true )
    {}

    TColStd_ListIteratorOfListOfInteger(::TColStd_ListIteratorOfListOfInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_ListIteratorOfListOfInteger* NativeInstance
    {
        ::TColStd_ListIteratorOfListOfInteger* get()
        {
            return static_cast<::TColStd_ListIteratorOfListOfInteger*>(_NativeInstance);
        }
    }

public:
    property int ChangeValue {
        int get() {
            return ((::TColStd_ListIteratorOfListOfInteger*)_NativeInstance)->ChangeValue();
        }
        void set(int value) {
            ((::TColStd_ListIteratorOfListOfInteger*)_NativeInstance)->ChangeValue() = value;
        }
    }

    TColStd_ListIteratorOfListOfInteger();
    TColStd_ListIteratorOfListOfInteger(RDC::OCC::NCollection_BaseList^ theList);
    bool More();
    void Next();
    int Value();
}; // class TColStd_ListIteratorOfListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_Array1OfListOfInteger sealed
    : public RDC::OCC::BaseClass<::TColStd_Array1OfListOfInteger>
{

#ifdef Include_TColStd_Array1OfListOfInteger_h
public:
    Include_TColStd_Array1OfListOfInteger_h
#endif

public:
    TColStd_Array1OfListOfInteger(::TColStd_Array1OfListOfInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfListOfInteger>( nativeInstance, true )
    {}

    TColStd_Array1OfListOfInteger(::TColStd_Array1OfListOfInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfListOfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfListOfInteger* NativeInstance
    {
        ::TColStd_Array1OfListOfInteger* get()
        {
            return static_cast<::TColStd_Array1OfListOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array1OfListOfInteger::Iterator>
    {

#ifdef Include_TColStd_Array1OfListOfInteger_Iterator_h
    public:
        Include_TColStd_Array1OfListOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfListOfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfListOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfListOfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfListOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfListOfInteger::Iterator* NativeInstance
        {
            ::TColStd_Array1OfListOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfListOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColStd_Array1OfListOfInteger();
    TColStd_Array1OfListOfInteger(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array1OfListOfInteger(allocator_type theAlloc, int theLower, int theUpper, ) */
    /* Method skipped due to unknown mapping: void TColStd_Array1OfListOfInteger(const_reference theBegin, int theLower, int theUpper, bool theUseBuffer, ) */
    /* Method skipped due to unknown mapping: void TColStd_Array1OfListOfInteger(const_reference theBegin, int theLower, int theUpper, bool theUseBuffer, ) */
    /* Method skipped due to unknown mapping: void Init(const_reference theValue, ) */
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_Array1OfListOfInteger^ Assign(RDC::OCC::TColStd_Array1OfListOfInteger^ theOther);
    RDC::OCC::TColStd_Array1OfListOfInteger^ Move(RDC::OCC::TColStd_Array1OfListOfInteger^ theOther);
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
}; // class TColStd_Array1OfListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfReal
//---------------------------------------------------------------------
public ref class TColStd_Array1OfReal sealed
    : public RDC::OCC::BaseClass<::TColStd_Array1OfReal>
    , public IIndexEnumerable<double>
{

#ifdef Include_TColStd_Array1OfReal_h
public:
    Include_TColStd_Array1OfReal_h
#endif

public:
    TColStd_Array1OfReal(::TColStd_Array1OfReal* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfReal>( nativeInstance, true )
    {}

    TColStd_Array1OfReal(::TColStd_Array1OfReal& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfReal>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfReal* NativeInstance
    {
        ::TColStd_Array1OfReal* get()
        {
            return static_cast<::TColStd_Array1OfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array1OfReal::Iterator>
    {

#ifdef Include_TColStd_Array1OfReal_Iterator_h
    public:
        Include_TColStd_Array1OfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfReal::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfReal::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfReal::Iterator* NativeInstance
        {
            ::TColStd_Array1OfReal::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property double ChangeFirst {
        double get() {
            return ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeFirst();
        }
        void set(double value) {
            ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property double ChangeLast {
        double get() {
            return ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeLast();
        }
        void set(double value) {
            ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array1OfReal();
    TColStd_Array1OfReal(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array1OfReal(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColStd_Array1OfReal(double theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfReal(double theBegin, int theLower, int theUpper);
    void Init(double theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_Array1OfReal^ Assign(RDC::OCC::TColStd_Array1OfReal^ theOther);
    RDC::OCC::TColStd_Array1OfReal^ Move(RDC::OCC::TColStd_Array1OfReal^ theOther);
    double First();
    double Last();
    virtual double Value(int theIndex);
    double ChangeValue(int theIndex);
    void SetValue(int theIndex, double theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<double>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfReal

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfTransient
//---------------------------------------------------------------------
public ref class TColStd_Array1OfTransient sealed
    : public RDC::OCC::BaseClass<::TColStd_Array1OfTransient>
    , public IIndexEnumerable<RDC::OCC::Standard_Transient^>
{

#ifdef Include_TColStd_Array1OfTransient_h
public:
    Include_TColStd_Array1OfTransient_h
#endif

public:
    TColStd_Array1OfTransient(::TColStd_Array1OfTransient* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfTransient>( nativeInstance, true )
    {}

    TColStd_Array1OfTransient(::TColStd_Array1OfTransient& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array1OfTransient>( &nativeInstance, false )
    {}

    property ::TColStd_Array1OfTransient* NativeInstance
    {
        ::TColStd_Array1OfTransient* get()
        {
            return static_cast<::TColStd_Array1OfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array1OfTransient::Iterator>
    {

#ifdef Include_TColStd_Array1OfTransient_Iterator_h
    public:
        Include_TColStd_Array1OfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array1OfTransient::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array1OfTransient::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array1OfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array1OfTransient::Iterator* NativeInstance
        {
            ::TColStd_Array1OfTransient::Iterator* get()
            {
                return static_cast<::TColStd_Array1OfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColStd_Array1OfTransient();
    TColStd_Array1OfTransient(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array1OfTransient(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColStd_Array1OfTransient(RDC::OCC::Standard_Transient^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColStd_Array1OfTransient(RDC::OCC::Standard_Transient^ theBegin, int theLower, int theUpper);
    void Init(RDC::OCC::Standard_Transient^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_Array1OfTransient^ Assign(RDC::OCC::TColStd_Array1OfTransient^ theOther);
    RDC::OCC::TColStd_Array1OfTransient^ Move(RDC::OCC::TColStd_Array1OfTransient^ theOther);
    RDC::OCC::Standard_Transient^ First();
    RDC::OCC::Standard_Transient^ ChangeFirst();
    RDC::OCC::Standard_Transient^ Last();
    RDC::OCC::Standard_Transient^ ChangeLast();
    virtual RDC::OCC::Standard_Transient^ Value(int theIndex);
    RDC::OCC::Standard_Transient^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::Standard_Transient^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::Standard_Transient^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_Array1OfTransient

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfBoolean
//---------------------------------------------------------------------
public ref class TColStd_Array2OfBoolean sealed
    : public RDC::OCC::BaseClass<::TColStd_Array2OfBoolean>
{

#ifdef Include_TColStd_Array2OfBoolean_h
public:
    Include_TColStd_Array2OfBoolean_h
#endif

public:
    TColStd_Array2OfBoolean(::TColStd_Array2OfBoolean* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array2OfBoolean>( nativeInstance, true )
    {}

    TColStd_Array2OfBoolean(::TColStd_Array2OfBoolean& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array2OfBoolean>( &nativeInstance, false )
    {}

    property ::TColStd_Array2OfBoolean* NativeInstance
    {
        ::TColStd_Array2OfBoolean* get()
        {
            return static_cast<::TColStd_Array2OfBoolean*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array2OfBoolean::Iterator>
    {

#ifdef Include_TColStd_Array2OfBoolean_Iterator_h
    public:
        Include_TColStd_Array2OfBoolean_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array2OfBoolean::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array2OfBoolean::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array2OfBoolean::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array2OfBoolean::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array2OfBoolean::Iterator* NativeInstance
        {
            ::TColStd_Array2OfBoolean::Iterator* get()
            {
                return static_cast<::TColStd_Array2OfBoolean::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property bool ChangeFirst {
        bool get() {
            return ((::TColStd_Array2OfBoolean*)_NativeInstance)->ChangeFirst();
        }
        void set(bool value) {
            ((::TColStd_Array2OfBoolean*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property bool ChangeLast {
        bool get() {
            return ((::TColStd_Array2OfBoolean*)_NativeInstance)->ChangeLast();
        }
        void set(bool value) {
            ((::TColStd_Array2OfBoolean*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array2OfBoolean();
    TColStd_Array2OfBoolean(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array2OfBoolean(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColStd_Array2OfBoolean(bool theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    RDC::OCC::TColStd_Array2OfBoolean^ Assign(RDC::OCC::TColStd_Array2OfBoolean^ theOther);
    RDC::OCC::TColStd_Array2OfBoolean^ Move(RDC::OCC::TColStd_Array2OfBoolean^ theOther);
    bool Value(int theRow, int theCol);
    bool ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, bool theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(bool theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    bool First();
    bool Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColStd_Array2OfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfCharacter
//---------------------------------------------------------------------
public ref class TColStd_Array2OfCharacter sealed
    : public RDC::OCC::BaseClass<::TColStd_Array2OfCharacter>
{

#ifdef Include_TColStd_Array2OfCharacter_h
public:
    Include_TColStd_Array2OfCharacter_h
#endif

public:
    TColStd_Array2OfCharacter(::TColStd_Array2OfCharacter* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array2OfCharacter>( nativeInstance, true )
    {}

    TColStd_Array2OfCharacter(::TColStd_Array2OfCharacter& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array2OfCharacter>( &nativeInstance, false )
    {}

    property ::TColStd_Array2OfCharacter* NativeInstance
    {
        ::TColStd_Array2OfCharacter* get()
        {
            return static_cast<::TColStd_Array2OfCharacter*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array2OfCharacter::Iterator>
    {

#ifdef Include_TColStd_Array2OfCharacter_Iterator_h
    public:
        Include_TColStd_Array2OfCharacter_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array2OfCharacter::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array2OfCharacter::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array2OfCharacter::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array2OfCharacter::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array2OfCharacter::Iterator* NativeInstance
        {
            ::TColStd_Array2OfCharacter::Iterator* get()
            {
                return static_cast<::TColStd_Array2OfCharacter::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property char ChangeFirst {
        char get() {
            return ((::TColStd_Array2OfCharacter*)_NativeInstance)->ChangeFirst();
        }
        void set(char value) {
            ((::TColStd_Array2OfCharacter*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property char ChangeLast {
        char get() {
            return ((::TColStd_Array2OfCharacter*)_NativeInstance)->ChangeLast();
        }
        void set(char value) {
            ((::TColStd_Array2OfCharacter*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array2OfCharacter();
    TColStd_Array2OfCharacter(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array2OfCharacter(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColStd_Array2OfCharacter(char theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    RDC::OCC::TColStd_Array2OfCharacter^ Assign(RDC::OCC::TColStd_Array2OfCharacter^ theOther);
    RDC::OCC::TColStd_Array2OfCharacter^ Move(RDC::OCC::TColStd_Array2OfCharacter^ theOther);
    char Value(int theRow, int theCol);
    char ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, char theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(char theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    char First();
    char Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColStd_Array2OfCharacter

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfInteger
//---------------------------------------------------------------------
public ref class TColStd_Array2OfInteger sealed
    : public RDC::OCC::BaseClass<::TColStd_Array2OfInteger>
{

#ifdef Include_TColStd_Array2OfInteger_h
public:
    Include_TColStd_Array2OfInteger_h
#endif

public:
    TColStd_Array2OfInteger(::TColStd_Array2OfInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array2OfInteger>( nativeInstance, true )
    {}

    TColStd_Array2OfInteger(::TColStd_Array2OfInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array2OfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_Array2OfInteger* NativeInstance
    {
        ::TColStd_Array2OfInteger* get()
        {
            return static_cast<::TColStd_Array2OfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array2OfInteger::Iterator>
    {

#ifdef Include_TColStd_Array2OfInteger_Iterator_h
    public:
        Include_TColStd_Array2OfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array2OfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array2OfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array2OfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array2OfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array2OfInteger::Iterator* NativeInstance
        {
            ::TColStd_Array2OfInteger::Iterator* get()
            {
                return static_cast<::TColStd_Array2OfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property int ChangeFirst {
        int get() {
            return ((::TColStd_Array2OfInteger*)_NativeInstance)->ChangeFirst();
        }
        void set(int value) {
            ((::TColStd_Array2OfInteger*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property int ChangeLast {
        int get() {
            return ((::TColStd_Array2OfInteger*)_NativeInstance)->ChangeLast();
        }
        void set(int value) {
            ((::TColStd_Array2OfInteger*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array2OfInteger();
    TColStd_Array2OfInteger(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array2OfInteger(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColStd_Array2OfInteger(int theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    RDC::OCC::TColStd_Array2OfInteger^ Assign(RDC::OCC::TColStd_Array2OfInteger^ theOther);
    RDC::OCC::TColStd_Array2OfInteger^ Move(RDC::OCC::TColStd_Array2OfInteger^ theOther);
    int Value(int theRow, int theCol);
    int ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, int theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(int theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    int First();
    int Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColStd_Array2OfInteger

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfReal
//---------------------------------------------------------------------
public ref class TColStd_Array2OfReal sealed
    : public RDC::OCC::BaseClass<::TColStd_Array2OfReal>
{

#ifdef Include_TColStd_Array2OfReal_h
public:
    Include_TColStd_Array2OfReal_h
#endif

public:
    TColStd_Array2OfReal(::TColStd_Array2OfReal* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array2OfReal>( nativeInstance, true )
    {}

    TColStd_Array2OfReal(::TColStd_Array2OfReal& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array2OfReal>( &nativeInstance, false )
    {}

    property ::TColStd_Array2OfReal* NativeInstance
    {
        ::TColStd_Array2OfReal* get()
        {
            return static_cast<::TColStd_Array2OfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array2OfReal::Iterator>
    {

#ifdef Include_TColStd_Array2OfReal_Iterator_h
    public:
        Include_TColStd_Array2OfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array2OfReal::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array2OfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array2OfReal::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array2OfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array2OfReal::Iterator* NativeInstance
        {
            ::TColStd_Array2OfReal::Iterator* get()
            {
                return static_cast<::TColStd_Array2OfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property double ChangeFirst {
        double get() {
            return ((::TColStd_Array2OfReal*)_NativeInstance)->ChangeFirst();
        }
        void set(double value) {
            ((::TColStd_Array2OfReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property double ChangeLast {
        double get() {
            return ((::TColStd_Array2OfReal*)_NativeInstance)->ChangeLast();
        }
        void set(double value) {
            ((::TColStd_Array2OfReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_Array2OfReal();
    TColStd_Array2OfReal(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array2OfReal(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColStd_Array2OfReal(double theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    RDC::OCC::TColStd_Array2OfReal^ Assign(RDC::OCC::TColStd_Array2OfReal^ theOther);
    RDC::OCC::TColStd_Array2OfReal^ Move(RDC::OCC::TColStd_Array2OfReal^ theOther);
    double Value(int theRow, int theCol);
    double ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, double theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(double theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    double First();
    double Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColStd_Array2OfReal

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfTransient
//---------------------------------------------------------------------
public ref class TColStd_Array2OfTransient sealed
    : public RDC::OCC::BaseClass<::TColStd_Array2OfTransient>
{

#ifdef Include_TColStd_Array2OfTransient_h
public:
    Include_TColStd_Array2OfTransient_h
#endif

public:
    TColStd_Array2OfTransient(::TColStd_Array2OfTransient* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array2OfTransient>( nativeInstance, true )
    {}

    TColStd_Array2OfTransient(::TColStd_Array2OfTransient& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_Array2OfTransient>( &nativeInstance, false )
    {}

    property ::TColStd_Array2OfTransient* NativeInstance
    {
        ::TColStd_Array2OfTransient* get()
        {
            return static_cast<::TColStd_Array2OfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_Array2OfTransient::Iterator>
    {

#ifdef Include_TColStd_Array2OfTransient_Iterator_h
    public:
        Include_TColStd_Array2OfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_Array2OfTransient::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array2OfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_Array2OfTransient::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_Array2OfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_Array2OfTransient::Iterator* NativeInstance
        {
            ::TColStd_Array2OfTransient::Iterator* get()
            {
                return static_cast<::TColStd_Array2OfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColStd_Array2OfTransient();
    TColStd_Array2OfTransient(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColStd_Array2OfTransient(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColStd_Array2OfTransient(RDC::OCC::Standard_Transient^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    RDC::OCC::TColStd_Array2OfTransient^ Assign(RDC::OCC::TColStd_Array2OfTransient^ theOther);
    RDC::OCC::TColStd_Array2OfTransient^ Move(RDC::OCC::TColStd_Array2OfTransient^ theOther);
    RDC::OCC::Standard_Transient^ Value(int theRow, int theCol);
    RDC::OCC::Standard_Transient^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, RDC::OCC::Standard_Transient^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(RDC::OCC::Standard_Transient^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::Standard_Transient^ First();
    RDC::OCC::Standard_Transient^ ChangeFirst();
    RDC::OCC::Standard_Transient^ Last();
    RDC::OCC::Standard_Transient^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColStd_Array2OfTransient

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfAsciiStringInteger
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfAsciiStringInteger sealed
    : public RDC::OCC::BaseClass<::TColStd_DataMapOfAsciiStringInteger>
{

#ifdef Include_TColStd_DataMapOfAsciiStringInteger_h
public:
    Include_TColStd_DataMapOfAsciiStringInteger_h
#endif

public:
    TColStd_DataMapOfAsciiStringInteger(::TColStd_DataMapOfAsciiStringInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfAsciiStringInteger>( nativeInstance, true )
    {}

    TColStd_DataMapOfAsciiStringInteger(::TColStd_DataMapOfAsciiStringInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfAsciiStringInteger>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfAsciiStringInteger* NativeInstance
    {
        ::TColStd_DataMapOfAsciiStringInteger* get()
        {
            return static_cast<::TColStd_DataMapOfAsciiStringInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_DataMapOfAsciiStringInteger::Iterator>
    {

#ifdef Include_TColStd_DataMapOfAsciiStringInteger_Iterator_h
    public:
        Include_TColStd_DataMapOfAsciiStringInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfAsciiStringInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfAsciiStringInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfAsciiStringInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfAsciiStringInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfAsciiStringInteger::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfAsciiStringInteger::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfAsciiStringInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_DataMapOfAsciiStringInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_DataMapOfAsciiStringInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        int Value();
        RDC::OCC::TCollection_AsciiString^ Key();
    }; // class Iterator

    TColStd_DataMapOfAsciiStringInteger();
    TColStd_DataMapOfAsciiStringInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfAsciiStringInteger(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_DataMapOfAsciiStringInteger^ theOther);
    RDC::OCC::TColStd_DataMapOfAsciiStringInteger^ Assign(RDC::OCC::TColStd_DataMapOfAsciiStringInteger^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::TCollection_AsciiString^ theKey, int theItem);
    int Bound(RDC::OCC::TCollection_AsciiString^ theKey, int theItem);
    bool IsBound(RDC::OCC::TCollection_AsciiString^ theKey);
    bool UnBind(RDC::OCC::TCollection_AsciiString^ theKey);
    int Seek(RDC::OCC::TCollection_AsciiString^ theKey);
    int Find(RDC::OCC::TCollection_AsciiString^ theKey);
    int ChangeSeek(RDC::OCC::TCollection_AsciiString^ theKey);
    int ChangeFind(RDC::OCC::TCollection_AsciiString^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TColStd_DataMapOfAsciiStringInteger

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerInteger
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfIntegerInteger sealed
    : public RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerInteger>
{

#ifdef Include_TColStd_DataMapOfIntegerInteger_h
public:
    Include_TColStd_DataMapOfIntegerInteger_h
#endif

public:
    TColStd_DataMapOfIntegerInteger(::TColStd_DataMapOfIntegerInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerInteger>( nativeInstance, true )
    {}

    TColStd_DataMapOfIntegerInteger(::TColStd_DataMapOfIntegerInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerInteger>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfIntegerInteger* NativeInstance
    {
        ::TColStd_DataMapOfIntegerInteger* get()
        {
            return static_cast<::TColStd_DataMapOfIntegerInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerInteger::Iterator>
    {

#ifdef Include_TColStd_DataMapOfIntegerInteger_Iterator_h
    public:
        Include_TColStd_DataMapOfIntegerInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfIntegerInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfIntegerInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfIntegerInteger::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfIntegerInteger::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfIntegerInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_DataMapOfIntegerInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_DataMapOfIntegerInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        int Value();
        int Key();
    }; // class Iterator

    TColStd_DataMapOfIntegerInteger();
    TColStd_DataMapOfIntegerInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfIntegerInteger(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_DataMapOfIntegerInteger^ theOther);
    RDC::OCC::TColStd_DataMapOfIntegerInteger^ Assign(RDC::OCC::TColStd_DataMapOfIntegerInteger^ theOther);
    void ReSize(int N);
    bool Bind(int theKey, int theItem);
    int Bound(int theKey, int theItem);
    bool IsBound(int theKey);
    bool UnBind(int theKey);
    int Seek(int theKey);
    int Find(int theKey);
    int ChangeSeek(int theKey);
    int ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TColStd_DataMapOfIntegerInteger

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfIntegerListOfInteger sealed
    : public RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerListOfInteger>
{

#ifdef Include_TColStd_DataMapOfIntegerListOfInteger_h
public:
    Include_TColStd_DataMapOfIntegerListOfInteger_h
#endif

public:
    TColStd_DataMapOfIntegerListOfInteger(::TColStd_DataMapOfIntegerListOfInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerListOfInteger>( nativeInstance, true )
    {}

    TColStd_DataMapOfIntegerListOfInteger(::TColStd_DataMapOfIntegerListOfInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerListOfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfIntegerListOfInteger* NativeInstance
    {
        ::TColStd_DataMapOfIntegerListOfInteger* get()
        {
            return static_cast<::TColStd_DataMapOfIntegerListOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerListOfInteger::Iterator>
    {

#ifdef Include_TColStd_DataMapOfIntegerListOfInteger_Iterator_h
    public:
        Include_TColStd_DataMapOfIntegerListOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfIntegerListOfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerListOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfIntegerListOfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerListOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfIntegerListOfInteger::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfIntegerListOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfIntegerListOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TColStd_ListOfInteger^ Value();
        RDC::OCC::TColStd_ListOfInteger^ ChangeValue();
        int Key();
    }; // class Iterator

    TColStd_DataMapOfIntegerListOfInteger();
    TColStd_DataMapOfIntegerListOfInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfIntegerListOfInteger(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_DataMapOfIntegerListOfInteger^ theOther);
    RDC::OCC::TColStd_DataMapOfIntegerListOfInteger^ Assign(RDC::OCC::TColStd_DataMapOfIntegerListOfInteger^ theOther);
    void ReSize(int N);
    bool Bind(int theKey, RDC::OCC::TColStd_ListOfInteger^ theItem);
    RDC::OCC::TColStd_ListOfInteger^ Bound(int theKey, RDC::OCC::TColStd_ListOfInteger^ theItem);
    bool IsBound(int theKey);
    bool UnBind(int theKey);
    RDC::OCC::TColStd_ListOfInteger^ Seek(int theKey);
    RDC::OCC::TColStd_ListOfInteger^ Find(int theKey);
    RDC::OCC::TColStd_ListOfInteger^ ChangeSeek(int theKey);
    RDC::OCC::TColStd_ListOfInteger^ ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TColStd_DataMapOfIntegerListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerReal
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfIntegerReal sealed
    : public RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerReal>
{

#ifdef Include_TColStd_DataMapOfIntegerReal_h
public:
    Include_TColStd_DataMapOfIntegerReal_h
#endif

public:
    TColStd_DataMapOfIntegerReal(::TColStd_DataMapOfIntegerReal* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerReal>( nativeInstance, true )
    {}

    TColStd_DataMapOfIntegerReal(::TColStd_DataMapOfIntegerReal& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerReal>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfIntegerReal* NativeInstance
    {
        ::TColStd_DataMapOfIntegerReal* get()
        {
            return static_cast<::TColStd_DataMapOfIntegerReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerReal::Iterator>
    {

#ifdef Include_TColStd_DataMapOfIntegerReal_Iterator_h
    public:
        Include_TColStd_DataMapOfIntegerReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfIntegerReal::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfIntegerReal::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfIntegerReal::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfIntegerReal::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfIntegerReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TColStd_DataMapOfIntegerReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TColStd_DataMapOfIntegerReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        double Value();
        int Key();
    }; // class Iterator

    TColStd_DataMapOfIntegerReal();
    TColStd_DataMapOfIntegerReal(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfIntegerReal(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_DataMapOfIntegerReal^ theOther);
    RDC::OCC::TColStd_DataMapOfIntegerReal^ Assign(RDC::OCC::TColStd_DataMapOfIntegerReal^ theOther);
    void ReSize(int N);
    bool Bind(int theKey, double theItem);
    double Bound(int theKey, double theItem);
    bool IsBound(int theKey);
    bool UnBind(int theKey);
    double Seek(int theKey);
    double Find(int theKey);
    double ChangeSeek(int theKey);
    double ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TColStd_DataMapOfIntegerReal

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerTransient
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfIntegerTransient sealed
    : public RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerTransient>
{

#ifdef Include_TColStd_DataMapOfIntegerTransient_h
public:
    Include_TColStd_DataMapOfIntegerTransient_h
#endif

public:
    TColStd_DataMapOfIntegerTransient(::TColStd_DataMapOfIntegerTransient* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerTransient>( nativeInstance, true )
    {}

    TColStd_DataMapOfIntegerTransient(::TColStd_DataMapOfIntegerTransient& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerTransient>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfIntegerTransient* NativeInstance
    {
        ::TColStd_DataMapOfIntegerTransient* get()
        {
            return static_cast<::TColStd_DataMapOfIntegerTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerTransient::Iterator>
    {

#ifdef Include_TColStd_DataMapOfIntegerTransient_Iterator_h
    public:
        Include_TColStd_DataMapOfIntegerTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfIntegerTransient::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfIntegerTransient::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfIntegerTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfIntegerTransient::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfIntegerTransient::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfIntegerTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::Standard_Transient^ Value();
        RDC::OCC::Standard_Transient^ ChangeValue();
        int Key();
    }; // class Iterator

    TColStd_DataMapOfIntegerTransient();
    TColStd_DataMapOfIntegerTransient(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfIntegerTransient(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_DataMapOfIntegerTransient^ theOther);
    RDC::OCC::TColStd_DataMapOfIntegerTransient^ Assign(RDC::OCC::TColStd_DataMapOfIntegerTransient^ theOther);
    void ReSize(int N);
    bool Bind(int theKey, RDC::OCC::Standard_Transient^ theItem);
    RDC::OCC::Standard_Transient^ Bound(int theKey, RDC::OCC::Standard_Transient^ theItem);
    bool IsBound(int theKey);
    bool UnBind(int theKey);
    RDC::OCC::Standard_Transient^ Seek(int theKey);
    RDC::OCC::Standard_Transient^ Find(int theKey);
    RDC::OCC::Standard_Transient^ ChangeSeek(int theKey);
    RDC::OCC::Standard_Transient^ ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TColStd_DataMapOfIntegerTransient

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfStringInteger
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfStringInteger sealed
    : public RDC::OCC::BaseClass<::TColStd_DataMapOfStringInteger>
{

#ifdef Include_TColStd_DataMapOfStringInteger_h
public:
    Include_TColStd_DataMapOfStringInteger_h
#endif

public:
    TColStd_DataMapOfStringInteger(::TColStd_DataMapOfStringInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfStringInteger>( nativeInstance, true )
    {}

    TColStd_DataMapOfStringInteger(::TColStd_DataMapOfStringInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfStringInteger>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfStringInteger* NativeInstance
    {
        ::TColStd_DataMapOfStringInteger* get()
        {
            return static_cast<::TColStd_DataMapOfStringInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_DataMapOfStringInteger::Iterator>
    {

#ifdef Include_TColStd_DataMapOfStringInteger_Iterator_h
    public:
        Include_TColStd_DataMapOfStringInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfStringInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfStringInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfStringInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfStringInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfStringInteger::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfStringInteger::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfStringInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_DataMapOfStringInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_DataMapOfStringInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        int Value();
        RDC::OCC::TCollection_ExtendedString^ Key();
    }; // class Iterator

    TColStd_DataMapOfStringInteger();
    TColStd_DataMapOfStringInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfStringInteger(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_DataMapOfStringInteger^ theOther);
    RDC::OCC::TColStd_DataMapOfStringInteger^ Assign(RDC::OCC::TColStd_DataMapOfStringInteger^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::TCollection_ExtendedString^ theKey, int theItem);
    int Bound(RDC::OCC::TCollection_ExtendedString^ theKey, int theItem);
    bool IsBound(RDC::OCC::TCollection_ExtendedString^ theKey);
    bool UnBind(RDC::OCC::TCollection_ExtendedString^ theKey);
    int Seek(RDC::OCC::TCollection_ExtendedString^ theKey);
    int Find(RDC::OCC::TCollection_ExtendedString^ theKey);
    int ChangeSeek(RDC::OCC::TCollection_ExtendedString^ theKey);
    int ChangeFind(RDC::OCC::TCollection_ExtendedString^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TColStd_DataMapOfStringInteger

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfTransientTransient
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfTransientTransient sealed
    : public RDC::OCC::BaseClass<::TColStd_DataMapOfTransientTransient>
{

#ifdef Include_TColStd_DataMapOfTransientTransient_h
public:
    Include_TColStd_DataMapOfTransientTransient_h
#endif

public:
    TColStd_DataMapOfTransientTransient(::TColStd_DataMapOfTransientTransient* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfTransientTransient>( nativeInstance, true )
    {}

    TColStd_DataMapOfTransientTransient(::TColStd_DataMapOfTransientTransient& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_DataMapOfTransientTransient>( &nativeInstance, false )
    {}

    property ::TColStd_DataMapOfTransientTransient* NativeInstance
    {
        ::TColStd_DataMapOfTransientTransient* get()
        {
            return static_cast<::TColStd_DataMapOfTransientTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_DataMapOfTransientTransient::Iterator>
    {

#ifdef Include_TColStd_DataMapOfTransientTransient_Iterator_h
    public:
        Include_TColStd_DataMapOfTransientTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_DataMapOfTransientTransient::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfTransientTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_DataMapOfTransientTransient::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_DataMapOfTransientTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_DataMapOfTransientTransient::Iterator* NativeInstance
        {
            ::TColStd_DataMapOfTransientTransient::Iterator* get()
            {
                return static_cast<::TColStd_DataMapOfTransientTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::Standard_Transient^ Value();
        RDC::OCC::Standard_Transient^ ChangeValue();
        RDC::OCC::Standard_Transient^ Key();
    }; // class Iterator

    TColStd_DataMapOfTransientTransient();
    TColStd_DataMapOfTransientTransient(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_DataMapOfTransientTransient(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_DataMapOfTransientTransient^ theOther);
    RDC::OCC::TColStd_DataMapOfTransientTransient^ Assign(RDC::OCC::TColStd_DataMapOfTransientTransient^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::Standard_Transient^ theKey, RDC::OCC::Standard_Transient^ theItem);
    RDC::OCC::Standard_Transient^ Bound(RDC::OCC::Standard_Transient^ theKey, RDC::OCC::Standard_Transient^ theItem);
    bool IsBound(RDC::OCC::Standard_Transient^ theKey);
    bool UnBind(RDC::OCC::Standard_Transient^ theKey);
    RDC::OCC::Standard_Transient^ Seek(RDC::OCC::Standard_Transient^ theKey);
    RDC::OCC::Standard_Transient^ Find(RDC::OCC::Standard_Transient^ theKey);
    RDC::OCC::Standard_Transient^ ChangeSeek(RDC::OCC::Standard_Transient^ theKey);
    RDC::OCC::Standard_Transient^ ChangeFind(RDC::OCC::Standard_Transient^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TColStd_DataMapOfTransientTransient

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfAsciiString sealed
    : public RDC::OCC::BaseClass<::TColStd_SequenceOfAsciiString>
    , public IIndexEnumerable<RDC::OCC::TCollection_AsciiString^>
{

#ifdef Include_TColStd_SequenceOfAsciiString_h
public:
    Include_TColStd_SequenceOfAsciiString_h
#endif

public:
    TColStd_SequenceOfAsciiString(::TColStd_SequenceOfAsciiString* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfAsciiString>( nativeInstance, true )
    {}

    TColStd_SequenceOfAsciiString(::TColStd_SequenceOfAsciiString& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfAsciiString>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfAsciiString* NativeInstance
    {
        ::TColStd_SequenceOfAsciiString* get()
        {
            return static_cast<::TColStd_SequenceOfAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_SequenceOfAsciiString::Iterator>
    {

#ifdef Include_TColStd_SequenceOfAsciiString_Iterator_h
    public:
        Include_TColStd_SequenceOfAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfAsciiString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfAsciiString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfAsciiString::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TCollection_AsciiString^ Value();
        RDC::OCC::TCollection_AsciiString^ ChangeValue();
        bool IsEqual(RDC::OCC::TColStd_SequenceOfAsciiString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_SequenceOfAsciiString();
    TColStd_SequenceOfAsciiString(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
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
    RDC::OCC::TColStd_SequenceOfAsciiString^ Assign(RDC::OCC::TColStd_SequenceOfAsciiString^ theOther);
    void Remove(RDC::OCC::TColStd_SequenceOfAsciiString::Iterator^ thePosition);
    void Append(RDC::OCC::TCollection_AsciiString^ theItem);
    void Prepend(RDC::OCC::TCollection_AsciiString^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::TCollection_AsciiString^ theItem);
    void InsertAfter(RDC::OCC::TColStd_SequenceOfAsciiString::Iterator^ thePosition, RDC::OCC::TCollection_AsciiString^ theItem);
    void Split(int theIndex, RDC::OCC::TColStd_SequenceOfAsciiString^ theSeq);
    RDC::OCC::TCollection_AsciiString^ First();
    RDC::OCC::TCollection_AsciiString^ ChangeFirst();
    RDC::OCC::TCollection_AsciiString^ Last();
    RDC::OCC::TCollection_AsciiString^ ChangeLast();
    virtual RDC::OCC::TCollection_AsciiString^ Value(int theIndex);
    RDC::OCC::TCollection_AsciiString^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TCollection_AsciiString^ theItem);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_AsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfExtendedString
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfExtendedString sealed
    : public RDC::OCC::BaseClass<::TColStd_SequenceOfExtendedString>
    , public IIndexEnumerable<RDC::OCC::TCollection_ExtendedString^>
{

#ifdef Include_TColStd_SequenceOfExtendedString_h
public:
    Include_TColStd_SequenceOfExtendedString_h
#endif

public:
    TColStd_SequenceOfExtendedString(::TColStd_SequenceOfExtendedString* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfExtendedString>( nativeInstance, true )
    {}

    TColStd_SequenceOfExtendedString(::TColStd_SequenceOfExtendedString& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfExtendedString>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfExtendedString* NativeInstance
    {
        ::TColStd_SequenceOfExtendedString* get()
        {
            return static_cast<::TColStd_SequenceOfExtendedString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_SequenceOfExtendedString::Iterator>
    {

#ifdef Include_TColStd_SequenceOfExtendedString_Iterator_h
    public:
        Include_TColStd_SequenceOfExtendedString_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfExtendedString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfExtendedString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfExtendedString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfExtendedString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfExtendedString::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfExtendedString::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfExtendedString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TCollection_ExtendedString^ Value();
        RDC::OCC::TCollection_ExtendedString^ ChangeValue();
        bool IsEqual(RDC::OCC::TColStd_SequenceOfExtendedString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_SequenceOfExtendedString();
    TColStd_SequenceOfExtendedString(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
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
    RDC::OCC::TColStd_SequenceOfExtendedString^ Assign(RDC::OCC::TColStd_SequenceOfExtendedString^ theOther);
    void Remove(RDC::OCC::TColStd_SequenceOfExtendedString::Iterator^ thePosition);
    void Append(RDC::OCC::TCollection_ExtendedString^ theItem);
    void Prepend(RDC::OCC::TCollection_ExtendedString^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::TCollection_ExtendedString^ theItem);
    void InsertAfter(RDC::OCC::TColStd_SequenceOfExtendedString::Iterator^ thePosition, RDC::OCC::TCollection_ExtendedString^ theItem);
    void Split(int theIndex, RDC::OCC::TColStd_SequenceOfExtendedString^ theSeq);
    RDC::OCC::TCollection_ExtendedString^ First();
    RDC::OCC::TCollection_ExtendedString^ ChangeFirst();
    RDC::OCC::TCollection_ExtendedString^ Last();
    RDC::OCC::TCollection_ExtendedString^ ChangeLast();
    virtual RDC::OCC::TCollection_ExtendedString^ Value(int theIndex);
    RDC::OCC::TCollection_ExtendedString^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TCollection_ExtendedString^ theItem);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_ExtendedString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHAsciiString
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfHAsciiString sealed
    : public RDC::OCC::BaseClass<::TColStd_SequenceOfHAsciiString>
    , public IIndexEnumerable<RDC::OCC::TCollection_HAsciiString^>
{

#ifdef Include_TColStd_SequenceOfHAsciiString_h
public:
    Include_TColStd_SequenceOfHAsciiString_h
#endif

public:
    TColStd_SequenceOfHAsciiString(::TColStd_SequenceOfHAsciiString* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfHAsciiString>( nativeInstance, true )
    {}

    TColStd_SequenceOfHAsciiString(::TColStd_SequenceOfHAsciiString& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfHAsciiString>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfHAsciiString* NativeInstance
    {
        ::TColStd_SequenceOfHAsciiString* get()
        {
            return static_cast<::TColStd_SequenceOfHAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_SequenceOfHAsciiString::Iterator>
    {

#ifdef Include_TColStd_SequenceOfHAsciiString_Iterator_h
    public:
        Include_TColStd_SequenceOfHAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfHAsciiString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfHAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfHAsciiString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfHAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfHAsciiString::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfHAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfHAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TCollection_HAsciiString^ Value();
        RDC::OCC::TCollection_HAsciiString^ ChangeValue();
        bool IsEqual(RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_SequenceOfHAsciiString();
    TColStd_SequenceOfHAsciiString(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
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
    RDC::OCC::TColStd_SequenceOfHAsciiString^ Assign(RDC::OCC::TColStd_SequenceOfHAsciiString^ theOther);
    void Remove(RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator^ thePosition);
    void Append(RDC::OCC::TCollection_HAsciiString^ theItem);
    void Prepend(RDC::OCC::TCollection_HAsciiString^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::TCollection_HAsciiString^ theItem);
    void InsertAfter(RDC::OCC::TColStd_SequenceOfHAsciiString::Iterator^ thePosition, RDC::OCC::TCollection_HAsciiString^ theItem);
    void Split(int theIndex, RDC::OCC::TColStd_SequenceOfHAsciiString^ theSeq);
    RDC::OCC::TCollection_HAsciiString^ First();
    RDC::OCC::TCollection_HAsciiString^ ChangeFirst();
    RDC::OCC::TCollection_HAsciiString^ Last();
    RDC::OCC::TCollection_HAsciiString^ ChangeLast();
    virtual RDC::OCC::TCollection_HAsciiString^ Value(int theIndex);
    RDC::OCC::TCollection_HAsciiString^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TCollection_HAsciiString^ theItem);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_HAsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfHAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHExtendedString
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfHExtendedString sealed
    : public RDC::OCC::BaseClass<::TColStd_SequenceOfHExtendedString>
    , public IIndexEnumerable<RDC::OCC::TCollection_HExtendedString^>
{

#ifdef Include_TColStd_SequenceOfHExtendedString_h
public:
    Include_TColStd_SequenceOfHExtendedString_h
#endif

public:
    TColStd_SequenceOfHExtendedString(::TColStd_SequenceOfHExtendedString* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfHExtendedString>( nativeInstance, true )
    {}

    TColStd_SequenceOfHExtendedString(::TColStd_SequenceOfHExtendedString& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfHExtendedString>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfHExtendedString* NativeInstance
    {
        ::TColStd_SequenceOfHExtendedString* get()
        {
            return static_cast<::TColStd_SequenceOfHExtendedString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_SequenceOfHExtendedString::Iterator>
    {

#ifdef Include_TColStd_SequenceOfHExtendedString_Iterator_h
    public:
        Include_TColStd_SequenceOfHExtendedString_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfHExtendedString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfHExtendedString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfHExtendedString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfHExtendedString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfHExtendedString::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfHExtendedString::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfHExtendedString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TCollection_HExtendedString^ Value();
        RDC::OCC::TCollection_HExtendedString^ ChangeValue();
        bool IsEqual(RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_SequenceOfHExtendedString();
    TColStd_SequenceOfHExtendedString(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
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
    RDC::OCC::TColStd_SequenceOfHExtendedString^ Assign(RDC::OCC::TColStd_SequenceOfHExtendedString^ theOther);
    void Remove(RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator^ thePosition);
    void Append(RDC::OCC::TCollection_HExtendedString^ theItem);
    void Prepend(RDC::OCC::TCollection_HExtendedString^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::TCollection_HExtendedString^ theItem);
    void InsertAfter(RDC::OCC::TColStd_SequenceOfHExtendedString::Iterator^ thePosition, RDC::OCC::TCollection_HExtendedString^ theItem);
    void Split(int theIndex, RDC::OCC::TColStd_SequenceOfHExtendedString^ theSeq);
    RDC::OCC::TCollection_HExtendedString^ First();
    RDC::OCC::TCollection_HExtendedString^ ChangeFirst();
    RDC::OCC::TCollection_HExtendedString^ Last();
    RDC::OCC::TCollection_HExtendedString^ ChangeLast();
    virtual RDC::OCC::TCollection_HExtendedString^ Value(int theIndex);
    RDC::OCC::TCollection_HExtendedString^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TCollection_HExtendedString^ theItem);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_HExtendedString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfHExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfInteger
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfInteger sealed
    : public RDC::OCC::BaseClass<::TColStd_SequenceOfInteger>
    , public IIndexEnumerable<int>
{

#ifdef Include_TColStd_SequenceOfInteger_h
public:
    Include_TColStd_SequenceOfInteger_h
#endif

public:
    TColStd_SequenceOfInteger(::TColStd_SequenceOfInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfInteger>( nativeInstance, true )
    {}

    TColStd_SequenceOfInteger(::TColStd_SequenceOfInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfInteger* NativeInstance
    {
        ::TColStd_SequenceOfInteger* get()
        {
            return static_cast<::TColStd_SequenceOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_SequenceOfInteger::Iterator>
    {

#ifdef Include_TColStd_SequenceOfInteger_Iterator_h
    public:
        Include_TColStd_SequenceOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfInteger::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_SequenceOfInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_SequenceOfInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        int Value();
        bool IsEqual(RDC::OCC::TColStd_SequenceOfInteger::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    property int ChangeFirst {
        int get() {
            return ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeFirst();
        }
        void set(int value) {
            ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property int ChangeLast {
        int get() {
            return ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeLast();
        }
        void set(int value) {
            ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_SequenceOfInteger();
    TColStd_SequenceOfInteger(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
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
    RDC::OCC::TColStd_SequenceOfInteger^ Assign(RDC::OCC::TColStd_SequenceOfInteger^ theOther);
    void Remove(RDC::OCC::TColStd_SequenceOfInteger::Iterator^ thePosition);
    void Append(int theItem);
    void Prepend(int theItem);
    void InsertBefore(int theIndex, int theItem);
    void InsertAfter(RDC::OCC::TColStd_SequenceOfInteger::Iterator^ thePosition, int theItem);
    void Split(int theIndex, RDC::OCC::TColStd_SequenceOfInteger^ theSeq);
    int First();
    int Last();
    virtual int Value(int theIndex);
    int ChangeValue(int theIndex);
    void SetValue(int theIndex, int theItem);
    virtual System::Collections::Generic::IEnumerator<int>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfReal
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfReal sealed
    : public RDC::OCC::BaseClass<::TColStd_SequenceOfReal>
    , public IIndexEnumerable<double>
{

#ifdef Include_TColStd_SequenceOfReal_h
public:
    Include_TColStd_SequenceOfReal_h
#endif

public:
    TColStd_SequenceOfReal(::TColStd_SequenceOfReal* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfReal>( nativeInstance, true )
    {}

    TColStd_SequenceOfReal(::TColStd_SequenceOfReal& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfReal>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfReal* NativeInstance
    {
        ::TColStd_SequenceOfReal* get()
        {
            return static_cast<::TColStd_SequenceOfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_SequenceOfReal::Iterator>
    {

#ifdef Include_TColStd_SequenceOfReal_Iterator_h
    public:
        Include_TColStd_SequenceOfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfReal::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfReal::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfReal::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfReal::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TColStd_SequenceOfReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TColStd_SequenceOfReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        double Value();
        bool IsEqual(RDC::OCC::TColStd_SequenceOfReal::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    property double ChangeFirst {
        double get() {
            return ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeFirst();
        }
        void set(double value) {
            ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property double ChangeLast {
        double get() {
            return ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeLast();
        }
        void set(double value) {
            ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_SequenceOfReal();
    TColStd_SequenceOfReal(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
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
    RDC::OCC::TColStd_SequenceOfReal^ Assign(RDC::OCC::TColStd_SequenceOfReal^ theOther);
    void Remove(RDC::OCC::TColStd_SequenceOfReal::Iterator^ thePosition);
    void Append(double theItem);
    void Prepend(double theItem);
    void InsertBefore(int theIndex, double theItem);
    void InsertAfter(RDC::OCC::TColStd_SequenceOfReal::Iterator^ thePosition, double theItem);
    void Split(int theIndex, RDC::OCC::TColStd_SequenceOfReal^ theSeq);
    double First();
    double Last();
    virtual double Value(int theIndex);
    double ChangeValue(int theIndex);
    void SetValue(int theIndex, double theItem);
    virtual System::Collections::Generic::IEnumerator<double>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfReal

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfTransient
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfTransient sealed
    : public RDC::OCC::BaseClass<::TColStd_SequenceOfTransient>
    , public IIndexEnumerable<RDC::OCC::Standard_Transient^>
{

#ifdef Include_TColStd_SequenceOfTransient_h
public:
    Include_TColStd_SequenceOfTransient_h
#endif

public:
    TColStd_SequenceOfTransient(::TColStd_SequenceOfTransient* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfTransient>( nativeInstance, true )
    {}

    TColStd_SequenceOfTransient(::TColStd_SequenceOfTransient& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfTransient>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfTransient* NativeInstance
    {
        ::TColStd_SequenceOfTransient* get()
        {
            return static_cast<::TColStd_SequenceOfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_SequenceOfTransient::Iterator>
    {

#ifdef Include_TColStd_SequenceOfTransient_Iterator_h
    public:
        Include_TColStd_SequenceOfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfTransient::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfTransient::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfTransient::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfTransient::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::Standard_Transient^ Value();
        RDC::OCC::Standard_Transient^ ChangeValue();
        bool IsEqual(RDC::OCC::TColStd_SequenceOfTransient::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_SequenceOfTransient();
    TColStd_SequenceOfTransient(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
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
    RDC::OCC::TColStd_SequenceOfTransient^ Assign(RDC::OCC::TColStd_SequenceOfTransient^ theOther);
    void Remove(RDC::OCC::TColStd_SequenceOfTransient::Iterator^ thePosition);
    void Append(RDC::OCC::Standard_Transient^ theItem);
    void Prepend(RDC::OCC::Standard_Transient^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::Standard_Transient^ theItem);
    void InsertAfter(RDC::OCC::TColStd_SequenceOfTransient::Iterator^ thePosition, RDC::OCC::Standard_Transient^ theItem);
    void Split(int theIndex, RDC::OCC::TColStd_SequenceOfTransient^ theSeq);
    RDC::OCC::Standard_Transient^ First();
    RDC::OCC::Standard_Transient^ ChangeFirst();
    RDC::OCC::Standard_Transient^ Last();
    RDC::OCC::Standard_Transient^ ChangeLast();
    virtual RDC::OCC::Standard_Transient^ Value(int theIndex);
    RDC::OCC::Standard_Transient^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::Standard_Transient^ theItem);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::Standard_Transient^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_IndexedDataMapOfStringString
//---------------------------------------------------------------------
public ref class TColStd_IndexedDataMapOfStringString sealed
    : public RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfStringString>
{

#ifdef Include_TColStd_IndexedDataMapOfStringString_h
public:
    Include_TColStd_IndexedDataMapOfStringString_h
#endif

public:
    TColStd_IndexedDataMapOfStringString(::TColStd_IndexedDataMapOfStringString* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfStringString>( nativeInstance, true )
    {}

    TColStd_IndexedDataMapOfStringString(::TColStd_IndexedDataMapOfStringString& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfStringString>( &nativeInstance, false )
    {}

    property ::TColStd_IndexedDataMapOfStringString* NativeInstance
    {
        ::TColStd_IndexedDataMapOfStringString* get()
        {
            return static_cast<::TColStd_IndexedDataMapOfStringString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfStringString::Iterator>
    {

#ifdef Include_TColStd_IndexedDataMapOfStringString_Iterator_h
    public:
        Include_TColStd_IndexedDataMapOfStringString_Iterator_h
#endif

    public:
        Iterator(::TColStd_IndexedDataMapOfStringString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfStringString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_IndexedDataMapOfStringString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfStringString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_IndexedDataMapOfStringString::Iterator* NativeInstance
        {
            ::TColStd_IndexedDataMapOfStringString::Iterator* get()
            {
                return static_cast<::TColStd_IndexedDataMapOfStringString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TCollection_AsciiString^ Value();
        RDC::OCC::TCollection_AsciiString^ ChangeValue();
        RDC::OCC::TCollection_AsciiString^ Key();
        bool IsEqual(RDC::OCC::TColStd_IndexedDataMapOfStringString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_IndexedDataMapOfStringString();
    TColStd_IndexedDataMapOfStringString(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_IndexedDataMapOfStringString(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_IndexedDataMapOfStringString^ theOther);
    RDC::OCC::TColStd_IndexedDataMapOfStringString^ Assign(RDC::OCC::TColStd_IndexedDataMapOfStringString^ theOther);
    void ReSize(int N);
    int Add(RDC::OCC::TCollection_AsciiString^ theKey1, RDC::OCC::TCollection_AsciiString^ theItem);
    bool Contains(RDC::OCC::TCollection_AsciiString^ theKey1);
    void Substitute(int theIndex, RDC::OCC::TCollection_AsciiString^ theKey1, RDC::OCC::TCollection_AsciiString^ theItem);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(RDC::OCC::TCollection_AsciiString^ theKey1);
    RDC::OCC::TCollection_AsciiString^ FindKey(int theIndex);
    RDC::OCC::TCollection_AsciiString^ FindFromIndex(int theIndex);
    RDC::OCC::TCollection_AsciiString^ ChangeFromIndex(int theIndex);
    int FindIndex(RDC::OCC::TCollection_AsciiString^ theKey1);
    RDC::OCC::TCollection_AsciiString^ FindFromKey(RDC::OCC::TCollection_AsciiString^ theKey1);
    RDC::OCC::TCollection_AsciiString^ ChangeFromKey(RDC::OCC::TCollection_AsciiString^ theKey1);
    RDC::OCC::TCollection_AsciiString^ Seek(RDC::OCC::TCollection_AsciiString^ theKey1);
    RDC::OCC::TCollection_AsciiString^ ChangeSeek(RDC::OCC::TCollection_AsciiString^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TColStd_IndexedDataMapOfStringString

//---------------------------------------------------------------------
//  Class  TColStd_IndexedDataMapOfTransientTransient
//---------------------------------------------------------------------
public ref class TColStd_IndexedDataMapOfTransientTransient sealed
    : public RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfTransientTransient>
{

#ifdef Include_TColStd_IndexedDataMapOfTransientTransient_h
public:
    Include_TColStd_IndexedDataMapOfTransientTransient_h
#endif

public:
    TColStd_IndexedDataMapOfTransientTransient(::TColStd_IndexedDataMapOfTransientTransient* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfTransientTransient>( nativeInstance, true )
    {}

    TColStd_IndexedDataMapOfTransientTransient(::TColStd_IndexedDataMapOfTransientTransient& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfTransientTransient>( &nativeInstance, false )
    {}

    property ::TColStd_IndexedDataMapOfTransientTransient* NativeInstance
    {
        ::TColStd_IndexedDataMapOfTransientTransient* get()
        {
            return static_cast<::TColStd_IndexedDataMapOfTransientTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfTransientTransient::Iterator>
    {

#ifdef Include_TColStd_IndexedDataMapOfTransientTransient_Iterator_h
    public:
        Include_TColStd_IndexedDataMapOfTransientTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_IndexedDataMapOfTransientTransient::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfTransientTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_IndexedDataMapOfTransientTransient::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_IndexedDataMapOfTransientTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_IndexedDataMapOfTransientTransient::Iterator* NativeInstance
        {
            ::TColStd_IndexedDataMapOfTransientTransient::Iterator* get()
            {
                return static_cast<::TColStd_IndexedDataMapOfTransientTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::Standard_Transient^ Value();
        RDC::OCC::Standard_Transient^ ChangeValue();
        RDC::OCC::Standard_Transient^ Key();
        bool IsEqual(RDC::OCC::TColStd_IndexedDataMapOfTransientTransient::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_IndexedDataMapOfTransientTransient();
    TColStd_IndexedDataMapOfTransientTransient(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_IndexedDataMapOfTransientTransient(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_IndexedDataMapOfTransientTransient^ theOther);
    RDC::OCC::TColStd_IndexedDataMapOfTransientTransient^ Assign(RDC::OCC::TColStd_IndexedDataMapOfTransientTransient^ theOther);
    void ReSize(int N);
    int Add(RDC::OCC::Standard_Transient^ theKey1, RDC::OCC::Standard_Transient^ theItem);
    bool Contains(RDC::OCC::Standard_Transient^ theKey1);
    void Substitute(int theIndex, RDC::OCC::Standard_Transient^ theKey1, RDC::OCC::Standard_Transient^ theItem);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(RDC::OCC::Standard_Transient^ theKey1);
    RDC::OCC::Standard_Transient^ FindKey(int theIndex);
    RDC::OCC::Standard_Transient^ FindFromIndex(int theIndex);
    RDC::OCC::Standard_Transient^ ChangeFromIndex(int theIndex);
    int FindIndex(RDC::OCC::Standard_Transient^ theKey1);
    RDC::OCC::Standard_Transient^ FindFromKey(RDC::OCC::Standard_Transient^ theKey1);
    RDC::OCC::Standard_Transient^ ChangeFromKey(RDC::OCC::Standard_Transient^ theKey1);
    RDC::OCC::Standard_Transient^ Seek(RDC::OCC::Standard_Transient^ theKey1);
    RDC::OCC::Standard_Transient^ ChangeSeek(RDC::OCC::Standard_Transient^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TColStd_IndexedDataMapOfTransientTransient

//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfInteger
//---------------------------------------------------------------------
public ref class TColStd_IndexedMapOfInteger sealed
    : public RDC::OCC::BaseClass<::TColStd_IndexedMapOfInteger>
{

#ifdef Include_TColStd_IndexedMapOfInteger_h
public:
    Include_TColStd_IndexedMapOfInteger_h
#endif

public:
    TColStd_IndexedMapOfInteger(::TColStd_IndexedMapOfInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_IndexedMapOfInteger>( nativeInstance, true )
    {}

    TColStd_IndexedMapOfInteger(::TColStd_IndexedMapOfInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_IndexedMapOfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_IndexedMapOfInteger* NativeInstance
    {
        ::TColStd_IndexedMapOfInteger* get()
        {
            return static_cast<::TColStd_IndexedMapOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_IndexedMapOfInteger::Iterator>
    {

#ifdef Include_TColStd_IndexedMapOfInteger_Iterator_h
    public:
        Include_TColStd_IndexedMapOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_IndexedMapOfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_IndexedMapOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_IndexedMapOfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_IndexedMapOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_IndexedMapOfInteger::Iterator* NativeInstance
        {
            ::TColStd_IndexedMapOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_IndexedMapOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        int Value();
        bool IsEqual(RDC::OCC::TColStd_IndexedMapOfInteger::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_IndexedMapOfInteger();
    TColStd_IndexedMapOfInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_IndexedMapOfInteger(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_IndexedMapOfInteger^ theOther);
    RDC::OCC::TColStd_IndexedMapOfInteger^ Assign(RDC::OCC::TColStd_IndexedMapOfInteger^ theOther);
    void ReSize(int theExtent);
    int Add(int theKey1);
    bool Contains(int theKey1);
    void Substitute(int theIndex, int theKey1);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    bool RemoveKey(int theKey1);
    int FindKey(int theIndex);
    int FindIndex(int theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TColStd_IndexedMapOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfReal
//---------------------------------------------------------------------
public ref class TColStd_IndexedMapOfReal sealed
    : public RDC::OCC::BaseClass<::TColStd_IndexedMapOfReal>
{

#ifdef Include_TColStd_IndexedMapOfReal_h
public:
    Include_TColStd_IndexedMapOfReal_h
#endif

public:
    TColStd_IndexedMapOfReal(::TColStd_IndexedMapOfReal* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_IndexedMapOfReal>( nativeInstance, true )
    {}

    TColStd_IndexedMapOfReal(::TColStd_IndexedMapOfReal& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_IndexedMapOfReal>( &nativeInstance, false )
    {}

    property ::TColStd_IndexedMapOfReal* NativeInstance
    {
        ::TColStd_IndexedMapOfReal* get()
        {
            return static_cast<::TColStd_IndexedMapOfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_IndexedMapOfReal::Iterator>
    {

#ifdef Include_TColStd_IndexedMapOfReal_Iterator_h
    public:
        Include_TColStd_IndexedMapOfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_IndexedMapOfReal::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_IndexedMapOfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_IndexedMapOfReal::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_IndexedMapOfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_IndexedMapOfReal::Iterator* NativeInstance
        {
            ::TColStd_IndexedMapOfReal::Iterator* get()
            {
                return static_cast<::TColStd_IndexedMapOfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        double Value();
        bool IsEqual(RDC::OCC::TColStd_IndexedMapOfReal::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_IndexedMapOfReal();
    TColStd_IndexedMapOfReal(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_IndexedMapOfReal(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_IndexedMapOfReal^ theOther);
    RDC::OCC::TColStd_IndexedMapOfReal^ Assign(RDC::OCC::TColStd_IndexedMapOfReal^ theOther);
    void ReSize(int theExtent);
    int Add(double theKey1);
    bool Contains(double theKey1);
    void Substitute(int theIndex, double theKey1);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    bool RemoveKey(double theKey1);
    double FindKey(int theIndex);
    int FindIndex(double theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TColStd_IndexedMapOfReal

//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfTransient
//---------------------------------------------------------------------
public ref class TColStd_IndexedMapOfTransient sealed
    : public RDC::OCC::BaseClass<::TColStd_IndexedMapOfTransient>
{

#ifdef Include_TColStd_IndexedMapOfTransient_h
public:
    Include_TColStd_IndexedMapOfTransient_h
#endif

public:
    TColStd_IndexedMapOfTransient(::TColStd_IndexedMapOfTransient* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_IndexedMapOfTransient>( nativeInstance, true )
    {}

    TColStd_IndexedMapOfTransient(::TColStd_IndexedMapOfTransient& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_IndexedMapOfTransient>( &nativeInstance, false )
    {}

    property ::TColStd_IndexedMapOfTransient* NativeInstance
    {
        ::TColStd_IndexedMapOfTransient* get()
        {
            return static_cast<::TColStd_IndexedMapOfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_IndexedMapOfTransient::Iterator>
    {

#ifdef Include_TColStd_IndexedMapOfTransient_Iterator_h
    public:
        Include_TColStd_IndexedMapOfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_IndexedMapOfTransient::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_IndexedMapOfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_IndexedMapOfTransient::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_IndexedMapOfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_IndexedMapOfTransient::Iterator* NativeInstance
        {
            ::TColStd_IndexedMapOfTransient::Iterator* get()
            {
                return static_cast<::TColStd_IndexedMapOfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::Standard_Transient^ Value();
        bool IsEqual(RDC::OCC::TColStd_IndexedMapOfTransient::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_IndexedMapOfTransient();
    TColStd_IndexedMapOfTransient(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_IndexedMapOfTransient(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_IndexedMapOfTransient^ theOther);
    RDC::OCC::TColStd_IndexedMapOfTransient^ Assign(RDC::OCC::TColStd_IndexedMapOfTransient^ theOther);
    void ReSize(int theExtent);
    int Add(RDC::OCC::Standard_Transient^ theKey1);
    bool Contains(RDC::OCC::Standard_Transient^ theKey1);
    void Substitute(int theIndex, RDC::OCC::Standard_Transient^ theKey1);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    bool RemoveKey(RDC::OCC::Standard_Transient^ theKey1);
    RDC::OCC::Standard_Transient^ FindKey(int theIndex);
    int FindIndex(RDC::OCC::Standard_Transient^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class TColStd_IndexedMapOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_ListOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_ListOfAsciiString sealed
    : public RDC::OCC::NCollection_BaseList
    , public IEnumerable<RDC::OCC::TCollection_AsciiString^>
{

#ifdef Include_TColStd_ListOfAsciiString_h
public:
    Include_TColStd_ListOfAsciiString_h
#endif

public:
    TColStd_ListOfAsciiString(::TColStd_ListOfAsciiString* nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    TColStd_ListOfAsciiString(::TColStd_ListOfAsciiString& nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    property ::TColStd_ListOfAsciiString* NativeInstance
    {
        ::TColStd_ListOfAsciiString* get()
        {
            return static_cast<::TColStd_ListOfAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::IteratorEnumerator<RDC::OCC::TCollection_AsciiString^, ::TColStd_ListOfAsciiString::Iterator>
    {

#ifdef Include_TColStd_ListOfAsciiString_Iterator_h
    public:
        Include_TColStd_ListOfAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_ListOfAsciiString::Iterator* nativeInstance)
            : RDC::OCC::IteratorEnumerator<RDC::OCC::TCollection_AsciiString^, ::TColStd_ListOfAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_ListOfAsciiString::Iterator& nativeInstance)
            : RDC::OCC::IteratorEnumerator<RDC::OCC::TCollection_AsciiString^, ::TColStd_ListOfAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_ListOfAsciiString::Iterator* NativeInstance
        {
            ::TColStd_ListOfAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_ListOfAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More() override;
        void Next() override;
        RDC::OCC::TCollection_AsciiString^ Value() override;
        RDC::OCC::TCollection_AsciiString^ ChangeValue();
    }; // class Iterator

    TColStd_ListOfAsciiString();
    TColStd_ListOfAsciiString(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    RDC::OCC::TColStd_ListOfAsciiString^ Assign(RDC::OCC::TColStd_ListOfAsciiString^ theOther);
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    RDC::OCC::TCollection_AsciiString^ First();
    RDC::OCC::TCollection_AsciiString^ Last();
    RDC::OCC::TCollection_AsciiString^ Append(RDC::OCC::TCollection_AsciiString^ theItem);
    RDC::OCC::TCollection_AsciiString^ Prepend(RDC::OCC::TCollection_AsciiString^ theItem);
    void RemoveFirst();
    void Remove(RDC::OCC::TColStd_ListOfAsciiString::Iterator^ theIter);
    RDC::OCC::TCollection_AsciiString^ InsertBefore(RDC::OCC::TCollection_AsciiString^ theItem, RDC::OCC::TColStd_ListOfAsciiString::Iterator^ theIter);
    RDC::OCC::TCollection_AsciiString^ InsertAfter(RDC::OCC::TCollection_AsciiString^ theItem, RDC::OCC::TColStd_ListOfAsciiString::Iterator^ theIter);
    void Reverse();
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_AsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_ListOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_ListIteratorOfListOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_ListIteratorOfListOfAsciiString sealed
    : public RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfAsciiString>
{

#ifdef Include_TColStd_ListIteratorOfListOfAsciiString_h
public:
    Include_TColStd_ListIteratorOfListOfAsciiString_h
#endif

public:
    TColStd_ListIteratorOfListOfAsciiString(::TColStd_ListIteratorOfListOfAsciiString* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfAsciiString>( nativeInstance, true )
    {}

    TColStd_ListIteratorOfListOfAsciiString(::TColStd_ListIteratorOfListOfAsciiString& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfAsciiString>( &nativeInstance, false )
    {}

    property ::TColStd_ListIteratorOfListOfAsciiString* NativeInstance
    {
        ::TColStd_ListIteratorOfListOfAsciiString* get()
        {
            return static_cast<::TColStd_ListIteratorOfListOfAsciiString*>(_NativeInstance);
        }
    }

public:
    TColStd_ListIteratorOfListOfAsciiString();
    TColStd_ListIteratorOfListOfAsciiString(RDC::OCC::NCollection_BaseList^ theList);
    bool More();
    void Next();
    RDC::OCC::TCollection_AsciiString^ Value();
    RDC::OCC::TCollection_AsciiString^ ChangeValue();
}; // class TColStd_ListIteratorOfListOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_ListOfReal
//---------------------------------------------------------------------
public ref class TColStd_ListOfReal sealed
    : public RDC::OCC::NCollection_BaseList
    , public IEnumerable<double>
{

#ifdef Include_TColStd_ListOfReal_h
public:
    Include_TColStd_ListOfReal_h
#endif

public:
    TColStd_ListOfReal(::TColStd_ListOfReal* nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    TColStd_ListOfReal(::TColStd_ListOfReal& nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    property ::TColStd_ListOfReal* NativeInstance
    {
        ::TColStd_ListOfReal* get()
        {
            return static_cast<::TColStd_ListOfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::IteratorEnumerator<double, ::TColStd_ListOfReal::Iterator>
    {

#ifdef Include_TColStd_ListOfReal_Iterator_h
    public:
        Include_TColStd_ListOfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_ListOfReal::Iterator* nativeInstance)
            : RDC::OCC::IteratorEnumerator<double, ::TColStd_ListOfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_ListOfReal::Iterator& nativeInstance)
            : RDC::OCC::IteratorEnumerator<double, ::TColStd_ListOfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_ListOfReal::Iterator* NativeInstance
        {
            ::TColStd_ListOfReal::Iterator* get()
            {
                return static_cast<::TColStd_ListOfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TColStd_ListOfReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TColStd_ListOfReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More() override;
        void Next() override;
        double Value() override;
    }; // class Iterator

    TColStd_ListOfReal();
    TColStd_ListOfReal(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    RDC::OCC::TColStd_ListOfReal^ Assign(RDC::OCC::TColStd_ListOfReal^ theOther);
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    double First();
    double Last();
    double Append(double theItem);
    double Prepend(double theItem);
    void RemoveFirst();
    void Remove(RDC::OCC::TColStd_ListOfReal::Iterator^ theIter);
    double InsertBefore(double theItem, RDC::OCC::TColStd_ListOfReal::Iterator^ theIter);
    double InsertAfter(double theItem, RDC::OCC::TColStd_ListOfReal::Iterator^ theIter);
    void Reverse();
    virtual System::Collections::Generic::IEnumerator<double>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_ListOfReal

//---------------------------------------------------------------------
//  Class  TColStd_ListIteratorOfListOfReal
//---------------------------------------------------------------------
public ref class TColStd_ListIteratorOfListOfReal sealed
    : public RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfReal>
{

#ifdef Include_TColStd_ListIteratorOfListOfReal_h
public:
    Include_TColStd_ListIteratorOfListOfReal_h
#endif

public:
    TColStd_ListIteratorOfListOfReal(::TColStd_ListIteratorOfListOfReal* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfReal>( nativeInstance, true )
    {}

    TColStd_ListIteratorOfListOfReal(::TColStd_ListIteratorOfListOfReal& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfReal>( &nativeInstance, false )
    {}

    property ::TColStd_ListIteratorOfListOfReal* NativeInstance
    {
        ::TColStd_ListIteratorOfListOfReal* get()
        {
            return static_cast<::TColStd_ListIteratorOfListOfReal*>(_NativeInstance);
        }
    }

public:
    property double ChangeValue {
        double get() {
            return ((::TColStd_ListIteratorOfListOfReal*)_NativeInstance)->ChangeValue();
        }
        void set(double value) {
            ((::TColStd_ListIteratorOfListOfReal*)_NativeInstance)->ChangeValue() = value;
        }
    }

    TColStd_ListIteratorOfListOfReal();
    TColStd_ListIteratorOfListOfReal(RDC::OCC::NCollection_BaseList^ theList);
    bool More();
    void Next();
    double Value();
}; // class TColStd_ListIteratorOfListOfReal

//---------------------------------------------------------------------
//  Class  TColStd_ListOfTransient
//---------------------------------------------------------------------
public ref class TColStd_ListOfTransient sealed
    : public RDC::OCC::NCollection_BaseList
{

#ifdef Include_TColStd_ListOfTransient_h
public:
    Include_TColStd_ListOfTransient_h
#endif

public:
    TColStd_ListOfTransient(::TColStd_ListOfTransient* nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    TColStd_ListOfTransient(::TColStd_ListOfTransient& nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    property ::TColStd_ListOfTransient* NativeInstance
    {
        ::TColStd_ListOfTransient* get()
        {
            return static_cast<::TColStd_ListOfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_ListOfTransient::Iterator>
    {

#ifdef Include_TColStd_ListOfTransient_Iterator_h
    public:
        Include_TColStd_ListOfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_ListOfTransient::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_ListOfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_ListOfTransient::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_ListOfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_ListOfTransient::Iterator* NativeInstance
        {
            ::TColStd_ListOfTransient::Iterator* get()
            {
                return static_cast<::TColStd_ListOfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::Standard_Transient^ Value();
        RDC::OCC::Standard_Transient^ ChangeValue();
    }; // class Iterator

    TColStd_ListOfTransient();
    TColStd_ListOfTransient(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    RDC::OCC::TColStd_ListOfTransient^ Assign(RDC::OCC::TColStd_ListOfTransient^ theOther);
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    RDC::OCC::Standard_Transient^ First();
    RDC::OCC::Standard_Transient^ Last();
    RDC::OCC::Standard_Transient^ Append(RDC::OCC::Standard_Transient^ theItem);
    RDC::OCC::Standard_Transient^ Prepend(RDC::OCC::Standard_Transient^ theItem);
    void RemoveFirst();
    void Remove(RDC::OCC::TColStd_ListOfTransient::Iterator^ theIter);
    RDC::OCC::Standard_Transient^ InsertBefore(RDC::OCC::Standard_Transient^ theItem, RDC::OCC::TColStd_ListOfTransient::Iterator^ theIter);
    RDC::OCC::Standard_Transient^ InsertAfter(RDC::OCC::Standard_Transient^ theItem, RDC::OCC::TColStd_ListOfTransient::Iterator^ theIter);
    void Reverse();
}; // class TColStd_ListOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_ListIteratorOfListOfTransient
//---------------------------------------------------------------------
public ref class TColStd_ListIteratorOfListOfTransient sealed
    : public RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfTransient>
{

#ifdef Include_TColStd_ListIteratorOfListOfTransient_h
public:
    Include_TColStd_ListIteratorOfListOfTransient_h
#endif

public:
    TColStd_ListIteratorOfListOfTransient(::TColStd_ListIteratorOfListOfTransient* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfTransient>( nativeInstance, true )
    {}

    TColStd_ListIteratorOfListOfTransient(::TColStd_ListIteratorOfListOfTransient& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_ListIteratorOfListOfTransient>( &nativeInstance, false )
    {}

    property ::TColStd_ListIteratorOfListOfTransient* NativeInstance
    {
        ::TColStd_ListIteratorOfListOfTransient* get()
        {
            return static_cast<::TColStd_ListIteratorOfListOfTransient*>(_NativeInstance);
        }
    }

public:
    TColStd_ListIteratorOfListOfTransient();
    TColStd_ListIteratorOfListOfTransient(RDC::OCC::NCollection_BaseList^ theList);
    bool More();
    void Next();
    RDC::OCC::Standard_Transient^ Value();
    RDC::OCC::Standard_Transient^ ChangeValue();
}; // class TColStd_ListIteratorOfListOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_MapOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_MapOfAsciiString sealed
    : public RDC::OCC::BaseClass<::TColStd_MapOfAsciiString>
{

#ifdef Include_TColStd_MapOfAsciiString_h
public:
    Include_TColStd_MapOfAsciiString_h
#endif

public:
    TColStd_MapOfAsciiString(::TColStd_MapOfAsciiString* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_MapOfAsciiString>( nativeInstance, true )
    {}

    TColStd_MapOfAsciiString(::TColStd_MapOfAsciiString& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_MapOfAsciiString>( &nativeInstance, false )
    {}

    property ::TColStd_MapOfAsciiString* NativeInstance
    {
        ::TColStd_MapOfAsciiString* get()
        {
            return static_cast<::TColStd_MapOfAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_MapOfAsciiString::Iterator>
    {

#ifdef Include_TColStd_MapOfAsciiString_Iterator_h
    public:
        Include_TColStd_MapOfAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_MapOfAsciiString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_MapOfAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_MapOfAsciiString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_MapOfAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_MapOfAsciiString::Iterator* NativeInstance
        {
            ::TColStd_MapOfAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_MapOfAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TCollection_AsciiString^ Value();
        RDC::OCC::TCollection_AsciiString^ Key();
    }; // class Iterator

    TColStd_MapOfAsciiString();
    TColStd_MapOfAsciiString(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_MapOfAsciiString(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_MapOfAsciiString^ theOther);
    RDC::OCC::TColStd_MapOfAsciiString^ Assign(RDC::OCC::TColStd_MapOfAsciiString^ theOther);
    void ReSize(int N);
    bool Add(RDC::OCC::TCollection_AsciiString^ theKey);
    RDC::OCC::TCollection_AsciiString^ Added(RDC::OCC::TCollection_AsciiString^ theKey);
    bool Contains(RDC::OCC::TCollection_AsciiString^ theKey);
    bool Remove(RDC::OCC::TCollection_AsciiString^ K);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
    bool IsEqual(RDC::OCC::TColStd_MapOfAsciiString^ theOther);
    void Union(RDC::OCC::TColStd_MapOfAsciiString^ theLeft, RDC::OCC::TColStd_MapOfAsciiString^ theRight);
    bool Unite(RDC::OCC::TColStd_MapOfAsciiString^ theOther);
    bool HasIntersection(RDC::OCC::TColStd_MapOfAsciiString^ theMap);
    void Intersection(RDC::OCC::TColStd_MapOfAsciiString^ theLeft, RDC::OCC::TColStd_MapOfAsciiString^ theRight);
    bool Intersect(RDC::OCC::TColStd_MapOfAsciiString^ theOther);
    void Subtraction(RDC::OCC::TColStd_MapOfAsciiString^ theLeft, RDC::OCC::TColStd_MapOfAsciiString^ theRight);
    bool Subtract(RDC::OCC::TColStd_MapOfAsciiString^ theOther);
    void Difference(RDC::OCC::TColStd_MapOfAsciiString^ theLeft, RDC::OCC::TColStd_MapOfAsciiString^ theRight);
    bool Differ(RDC::OCC::TColStd_MapOfAsciiString^ theOther);
    bool Equals(System::Object^ obj) override;
}; // class TColStd_MapOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_MapOfInteger
//---------------------------------------------------------------------
public ref class TColStd_MapOfInteger sealed
    : public RDC::OCC::BaseClass<::TColStd_MapOfInteger>
{

#ifdef Include_TColStd_MapOfInteger_h
public:
    Include_TColStd_MapOfInteger_h
#endif

public:
    TColStd_MapOfInteger(::TColStd_MapOfInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_MapOfInteger>( nativeInstance, true )
    {}

    TColStd_MapOfInteger(::TColStd_MapOfInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_MapOfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_MapOfInteger* NativeInstance
    {
        ::TColStd_MapOfInteger* get()
        {
            return static_cast<::TColStd_MapOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_MapOfInteger::Iterator>
    {

#ifdef Include_TColStd_MapOfInteger_Iterator_h
    public:
        Include_TColStd_MapOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_MapOfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_MapOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_MapOfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_MapOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_MapOfInteger::Iterator* NativeInstance
        {
            ::TColStd_MapOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_MapOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        int Value();
        int Key();
    }; // class Iterator

    TColStd_MapOfInteger();
    TColStd_MapOfInteger(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_MapOfInteger(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_MapOfInteger^ theOther);
    RDC::OCC::TColStd_MapOfInteger^ Assign(RDC::OCC::TColStd_MapOfInteger^ theOther);
    void ReSize(int N);
    bool Add(int theKey);
    int Added(int theKey);
    bool Contains(int theKey);
    bool Remove(int K);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
    bool IsEqual(RDC::OCC::TColStd_MapOfInteger^ theOther);
    void Union(RDC::OCC::TColStd_MapOfInteger^ theLeft, RDC::OCC::TColStd_MapOfInteger^ theRight);
    bool Unite(RDC::OCC::TColStd_MapOfInteger^ theOther);
    bool HasIntersection(RDC::OCC::TColStd_MapOfInteger^ theMap);
    void Intersection(RDC::OCC::TColStd_MapOfInteger^ theLeft, RDC::OCC::TColStd_MapOfInteger^ theRight);
    bool Intersect(RDC::OCC::TColStd_MapOfInteger^ theOther);
    void Subtraction(RDC::OCC::TColStd_MapOfInteger^ theLeft, RDC::OCC::TColStd_MapOfInteger^ theRight);
    bool Subtract(RDC::OCC::TColStd_MapOfInteger^ theOther);
    void Difference(RDC::OCC::TColStd_MapOfInteger^ theLeft, RDC::OCC::TColStd_MapOfInteger^ theRight);
    bool Differ(RDC::OCC::TColStd_MapOfInteger^ theOther);
    bool Equals(System::Object^ obj) override;
}; // class TColStd_MapOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_MapOfReal
//---------------------------------------------------------------------
public ref class TColStd_MapOfReal sealed
    : public RDC::OCC::BaseClass<::TColStd_MapOfReal>
{

#ifdef Include_TColStd_MapOfReal_h
public:
    Include_TColStd_MapOfReal_h
#endif

public:
    TColStd_MapOfReal(::TColStd_MapOfReal* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_MapOfReal>( nativeInstance, true )
    {}

    TColStd_MapOfReal(::TColStd_MapOfReal& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_MapOfReal>( &nativeInstance, false )
    {}

    property ::TColStd_MapOfReal* NativeInstance
    {
        ::TColStd_MapOfReal* get()
        {
            return static_cast<::TColStd_MapOfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_MapOfReal::Iterator>
    {

#ifdef Include_TColStd_MapOfReal_Iterator_h
    public:
        Include_TColStd_MapOfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_MapOfReal::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_MapOfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_MapOfReal::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_MapOfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_MapOfReal::Iterator* NativeInstance
        {
            ::TColStd_MapOfReal::Iterator* get()
            {
                return static_cast<::TColStd_MapOfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        double Value();
        double Key();
    }; // class Iterator

    TColStd_MapOfReal();
    TColStd_MapOfReal(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_MapOfReal(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_MapOfReal^ theOther);
    RDC::OCC::TColStd_MapOfReal^ Assign(RDC::OCC::TColStd_MapOfReal^ theOther);
    void ReSize(int N);
    bool Add(double theKey);
    double Added(double theKey);
    bool Contains(double theKey);
    bool Remove(double K);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
    bool IsEqual(RDC::OCC::TColStd_MapOfReal^ theOther);
    void Union(RDC::OCC::TColStd_MapOfReal^ theLeft, RDC::OCC::TColStd_MapOfReal^ theRight);
    bool Unite(RDC::OCC::TColStd_MapOfReal^ theOther);
    bool HasIntersection(RDC::OCC::TColStd_MapOfReal^ theMap);
    void Intersection(RDC::OCC::TColStd_MapOfReal^ theLeft, RDC::OCC::TColStd_MapOfReal^ theRight);
    bool Intersect(RDC::OCC::TColStd_MapOfReal^ theOther);
    void Subtraction(RDC::OCC::TColStd_MapOfReal^ theLeft, RDC::OCC::TColStd_MapOfReal^ theRight);
    bool Subtract(RDC::OCC::TColStd_MapOfReal^ theOther);
    void Difference(RDC::OCC::TColStd_MapOfReal^ theLeft, RDC::OCC::TColStd_MapOfReal^ theRight);
    bool Differ(RDC::OCC::TColStd_MapOfReal^ theOther);
    bool Equals(System::Object^ obj) override;
}; // class TColStd_MapOfReal

//---------------------------------------------------------------------
//  Class  TColStd_MapOfTransient
//---------------------------------------------------------------------
public ref class TColStd_MapOfTransient sealed
    : public RDC::OCC::BaseClass<::TColStd_MapOfTransient>
{

#ifdef Include_TColStd_MapOfTransient_h
public:
    Include_TColStd_MapOfTransient_h
#endif

public:
    TColStd_MapOfTransient(::TColStd_MapOfTransient* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_MapOfTransient>( nativeInstance, true )
    {}

    TColStd_MapOfTransient(::TColStd_MapOfTransient& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_MapOfTransient>( &nativeInstance, false )
    {}

    property ::TColStd_MapOfTransient* NativeInstance
    {
        ::TColStd_MapOfTransient* get()
        {
            return static_cast<::TColStd_MapOfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_MapOfTransient::Iterator>
    {

#ifdef Include_TColStd_MapOfTransient_Iterator_h
    public:
        Include_TColStd_MapOfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_MapOfTransient::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_MapOfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_MapOfTransient::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_MapOfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_MapOfTransient::Iterator* NativeInstance
        {
            ::TColStd_MapOfTransient::Iterator* get()
            {
                return static_cast<::TColStd_MapOfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::Standard_Transient^ Value();
        RDC::OCC::Standard_Transient^ Key();
    }; // class Iterator

    TColStd_MapOfTransient();
    TColStd_MapOfTransient(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    TColStd_MapOfTransient(int theNbBuckets);
    void Exchange(RDC::OCC::TColStd_MapOfTransient^ theOther);
    RDC::OCC::TColStd_MapOfTransient^ Assign(RDC::OCC::TColStd_MapOfTransient^ theOther);
    void ReSize(int N);
    bool Add(RDC::OCC::Standard_Transient^ theKey);
    RDC::OCC::Standard_Transient^ Added(RDC::OCC::Standard_Transient^ theKey);
    bool Contains(RDC::OCC::Standard_Transient^ theKey);
    bool Remove(RDC::OCC::Standard_Transient^ K);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
    bool IsEqual(RDC::OCC::TColStd_MapOfTransient^ theOther);
    void Union(RDC::OCC::TColStd_MapOfTransient^ theLeft, RDC::OCC::TColStd_MapOfTransient^ theRight);
    bool Unite(RDC::OCC::TColStd_MapOfTransient^ theOther);
    bool HasIntersection(RDC::OCC::TColStd_MapOfTransient^ theMap);
    void Intersection(RDC::OCC::TColStd_MapOfTransient^ theLeft, RDC::OCC::TColStd_MapOfTransient^ theRight);
    bool Intersect(RDC::OCC::TColStd_MapOfTransient^ theOther);
    void Subtraction(RDC::OCC::TColStd_MapOfTransient^ theLeft, RDC::OCC::TColStd_MapOfTransient^ theRight);
    bool Subtract(RDC::OCC::TColStd_MapOfTransient^ theOther);
    void Difference(RDC::OCC::TColStd_MapOfTransient^ theLeft, RDC::OCC::TColStd_MapOfTransient^ theRight);
    bool Differ(RDC::OCC::TColStd_MapOfTransient^ theOther);
    bool Equals(System::Object^ obj) override;
}; // class TColStd_MapOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAddress
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfAddress sealed
    : public RDC::OCC::BaseClass<::TColStd_SequenceOfAddress>
{

#ifdef Include_TColStd_SequenceOfAddress_h
public:
    Include_TColStd_SequenceOfAddress_h
#endif

public:
    TColStd_SequenceOfAddress(::TColStd_SequenceOfAddress* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfAddress>( nativeInstance, true )
    {}

    TColStd_SequenceOfAddress(::TColStd_SequenceOfAddress& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfAddress>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfAddress* NativeInstance
    {
        ::TColStd_SequenceOfAddress* get()
        {
            return static_cast<::TColStd_SequenceOfAddress*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_SequenceOfAddress::Iterator>
    {

#ifdef Include_TColStd_SequenceOfAddress_Iterator_h
    public:
        Include_TColStd_SequenceOfAddress_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfAddress::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfAddress::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfAddress::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfAddress::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfAddress::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfAddress::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfAddress::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        /* Method skipped due to unknown mapping: void * Value() */
        /* Method skipped due to unknown mapping: void * ChangeValue() */
        bool IsEqual(RDC::OCC::TColStd_SequenceOfAddress::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_SequenceOfAddress();
    TColStd_SequenceOfAddress(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
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
    RDC::OCC::TColStd_SequenceOfAddress^ Assign(RDC::OCC::TColStd_SequenceOfAddress^ theOther);
    void Remove(RDC::OCC::TColStd_SequenceOfAddress::Iterator^ thePosition);
    /* Method skipped due to unknown mapping: void Append(void * theItem, ) */
    /* Method skipped due to unknown mapping: void Prepend(void * theItem, ) */
    /* Method skipped due to unknown mapping: void InsertBefore(int theIndex, void * theItem, ) */
    /* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, void * theItem, ) */
    void Split(int theIndex, RDC::OCC::TColStd_SequenceOfAddress^ theSeq);
    /* Method skipped due to unknown mapping: void * First() */
    /* Method skipped due to unknown mapping: void * ChangeFirst() */
    /* Method skipped due to unknown mapping: void * Last() */
    /* Method skipped due to unknown mapping: void * ChangeLast() */
    /* Method skipped due to unknown mapping: void * Value(int theIndex, ) */
    /* Method skipped due to unknown mapping: void * ChangeValue(int theIndex, ) */
    /* Method skipped due to unknown mapping: void SetValue(int theIndex, void * theItem, ) */
}; // class TColStd_SequenceOfAddress

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfBoolean
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfBoolean sealed
    : public RDC::OCC::BaseClass<::TColStd_SequenceOfBoolean>
    , public IIndexEnumerable<bool>
{

#ifdef Include_TColStd_SequenceOfBoolean_h
public:
    Include_TColStd_SequenceOfBoolean_h
#endif

public:
    TColStd_SequenceOfBoolean(::TColStd_SequenceOfBoolean* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfBoolean>( nativeInstance, true )
    {}

    TColStd_SequenceOfBoolean(::TColStd_SequenceOfBoolean& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_SequenceOfBoolean>( &nativeInstance, false )
    {}

    property ::TColStd_SequenceOfBoolean* NativeInstance
    {
        ::TColStd_SequenceOfBoolean* get()
        {
            return static_cast<::TColStd_SequenceOfBoolean*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_SequenceOfBoolean::Iterator>
    {

#ifdef Include_TColStd_SequenceOfBoolean_Iterator_h
    public:
        Include_TColStd_SequenceOfBoolean_Iterator_h
#endif

    public:
        Iterator(::TColStd_SequenceOfBoolean::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfBoolean::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_SequenceOfBoolean::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_SequenceOfBoolean::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_SequenceOfBoolean::Iterator* NativeInstance
        {
            ::TColStd_SequenceOfBoolean::Iterator* get()
            {
                return static_cast<::TColStd_SequenceOfBoolean::Iterator*>(_NativeInstance);
            }
        }

    public:
        property bool ChangeValue {
            bool get() {
                return ((::TColStd_SequenceOfBoolean::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(bool value) {
                ((::TColStd_SequenceOfBoolean::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        bool Value();
        bool IsEqual(RDC::OCC::TColStd_SequenceOfBoolean::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    property bool ChangeFirst {
        bool get() {
            return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeFirst();
        }
        void set(bool value) {
            ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property bool ChangeLast {
        bool get() {
            return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeLast();
        }
        void set(bool value) {
            ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_SequenceOfBoolean();
    TColStd_SequenceOfBoolean(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
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
    RDC::OCC::TColStd_SequenceOfBoolean^ Assign(RDC::OCC::TColStd_SequenceOfBoolean^ theOther);
    void Remove(RDC::OCC::TColStd_SequenceOfBoolean::Iterator^ thePosition);
    void Append(bool theItem);
    void Prepend(bool theItem);
    void InsertBefore(int theIndex, bool theItem);
    void InsertAfter(RDC::OCC::TColStd_SequenceOfBoolean::Iterator^ thePosition, bool theItem);
    void Split(int theIndex, RDC::OCC::TColStd_SequenceOfBoolean^ theSeq);
    bool First();
    bool Last();
    virtual bool Value(int theIndex);
    bool ChangeValue(int theIndex);
    void SetValue(int theIndex, bool theItem);
    virtual System::Collections::Generic::IEnumerator<bool>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_SequenceOfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfAsciiString sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<RDC::OCC::TCollection_AsciiString^>
{

#ifdef Include_TColStd_HArray1OfAsciiString_h
public:
    Include_TColStd_HArray1OfAsciiString_h
#endif

public:
    TColStd_HArray1OfAsciiString(::TColStd_HArray1OfAsciiString* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfAsciiString(::TColStd_HArray1OfAsciiString& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfAsciiString* NativeInstance
    {
        ::TColStd_HArray1OfAsciiString* get()
        {
            return static_cast<::TColStd_HArray1OfAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray1OfAsciiString::Iterator>
    {

#ifdef Include_TColStd_HArray1OfAsciiString_Iterator_h
    public:
        Include_TColStd_HArray1OfAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfAsciiString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfAsciiString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfAsciiString::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColStd_HArray1OfAsciiString();
    TColStd_HArray1OfAsciiString(int theLower, int theUpper);
    TColStd_HArray1OfAsciiString(int theLower, int theUpper, RDC::OCC::TCollection_AsciiString^ theValue);
    TColStd_HArray1OfAsciiString(RDC::OCC::TCollection_AsciiString^ theBegin, int theLower, int theUpper, bool parameter1);
    TColStd_HArray1OfAsciiString(RDC::OCC::TColStd_Array1OfAsciiString^ theOther);
    RDC::OCC::TColStd_Array1OfAsciiString^ Array1();
    RDC::OCC::TColStd_Array1OfAsciiString^ ChangeArray1();
    void Init(RDC::OCC::TCollection_AsciiString^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_HArray1OfAsciiString^ Assign(RDC::OCC::TColStd_HArray1OfAsciiString^ theOther);
    RDC::OCC::TColStd_HArray1OfAsciiString^ Move(RDC::OCC::TColStd_HArray1OfAsciiString^ theOther);
    RDC::OCC::TCollection_AsciiString^ First();
    RDC::OCC::TCollection_AsciiString^ ChangeFirst();
    RDC::OCC::TCollection_AsciiString^ Last();
    RDC::OCC::TCollection_AsciiString^ ChangeLast();
    virtual RDC::OCC::TCollection_AsciiString^ Value(int theIndex);
    RDC::OCC::TCollection_AsciiString^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TCollection_AsciiString^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray1OfAsciiString^ CreateDowncasted(::TColStd_HArray1OfAsciiString* instance);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_AsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfBoolean
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfBoolean sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<bool>
{

#ifdef Include_TColStd_HArray1OfBoolean_h
public:
    Include_TColStd_HArray1OfBoolean_h
#endif

public:
    TColStd_HArray1OfBoolean(::TColStd_HArray1OfBoolean* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfBoolean(::TColStd_HArray1OfBoolean& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfBoolean* NativeInstance
    {
        ::TColStd_HArray1OfBoolean* get()
        {
            return static_cast<::TColStd_HArray1OfBoolean*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray1OfBoolean::Iterator>
    {

#ifdef Include_TColStd_HArray1OfBoolean_Iterator_h
    public:
        Include_TColStd_HArray1OfBoolean_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfBoolean::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfBoolean::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfBoolean::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfBoolean::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfBoolean::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfBoolean::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfBoolean::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property bool ChangeFirst {
        bool get() {
            return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeFirst();
        }
        void set(bool value) {
            ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property bool ChangeLast {
        bool get() {
            return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeLast();
        }
        void set(bool value) {
            ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_HArray1OfBoolean();
    TColStd_HArray1OfBoolean(int theLower, int theUpper);
    TColStd_HArray1OfBoolean(int theLower, int theUpper, bool theValue);
    TColStd_HArray1OfBoolean(bool theBegin, int theLower, int theUpper, bool parameter1);
    TColStd_HArray1OfBoolean(RDC::OCC::TColStd_Array1OfBoolean^ theOther);
    RDC::OCC::TColStd_Array1OfBoolean^ Array1();
    RDC::OCC::TColStd_Array1OfBoolean^ ChangeArray1();
    void Init(bool theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_HArray1OfBoolean^ Assign(RDC::OCC::TColStd_HArray1OfBoolean^ theOther);
    RDC::OCC::TColStd_HArray1OfBoolean^ Move(RDC::OCC::TColStd_HArray1OfBoolean^ theOther);
    bool First();
    bool Last();
    virtual bool Value(int theIndex);
    bool ChangeValue(int theIndex);
    void SetValue(int theIndex, bool theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray1OfBoolean^ CreateDowncasted(::TColStd_HArray1OfBoolean* instance);
    virtual System::Collections::Generic::IEnumerator<bool>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfByte
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfByte sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<unsigned char>
{

#ifdef Include_TColStd_HArray1OfByte_h
public:
    Include_TColStd_HArray1OfByte_h
#endif

public:
    TColStd_HArray1OfByte(::TColStd_HArray1OfByte* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfByte(::TColStd_HArray1OfByte& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfByte* NativeInstance
    {
        ::TColStd_HArray1OfByte* get()
        {
            return static_cast<::TColStd_HArray1OfByte*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray1OfByte::Iterator>
    {

#ifdef Include_TColStd_HArray1OfByte_Iterator_h
    public:
        Include_TColStd_HArray1OfByte_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfByte::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfByte::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfByte::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfByte::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfByte::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfByte::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfByte::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property unsigned char ChangeFirst {
        unsigned char get() {
            return ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeFirst();
        }
        void set(unsigned char value) {
            ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property unsigned char ChangeLast {
        unsigned char get() {
            return ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeLast();
        }
        void set(unsigned char value) {
            ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_HArray1OfByte();
    TColStd_HArray1OfByte(int theLower, int theUpper);
    TColStd_HArray1OfByte(int theLower, int theUpper, unsigned char theValue);
    TColStd_HArray1OfByte(unsigned char theBegin, int theLower, int theUpper, bool parameter1);
    TColStd_HArray1OfByte(RDC::OCC::TColStd_Array1OfByte^ theOther);
    RDC::OCC::TColStd_Array1OfByte^ Array1();
    RDC::OCC::TColStd_Array1OfByte^ ChangeArray1();
    void Init(unsigned char theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_HArray1OfByte^ Assign(RDC::OCC::TColStd_HArray1OfByte^ theOther);
    RDC::OCC::TColStd_HArray1OfByte^ Move(RDC::OCC::TColStd_HArray1OfByte^ theOther);
    unsigned char First();
    unsigned char Last();
    virtual unsigned char Value(int theIndex);
    unsigned char ChangeValue(int theIndex);
    void SetValue(int theIndex, unsigned char theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray1OfByte^ CreateDowncasted(::TColStd_HArray1OfByte* instance);
    virtual System::Collections::Generic::IEnumerator<unsigned char>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfByte

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfCharacter
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfCharacter sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<char>
{

#ifdef Include_TColStd_HArray1OfCharacter_h
public:
    Include_TColStd_HArray1OfCharacter_h
#endif

public:
    TColStd_HArray1OfCharacter(::TColStd_HArray1OfCharacter* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfCharacter(::TColStd_HArray1OfCharacter& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfCharacter* NativeInstance
    {
        ::TColStd_HArray1OfCharacter* get()
        {
            return static_cast<::TColStd_HArray1OfCharacter*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray1OfCharacter::Iterator>
    {

#ifdef Include_TColStd_HArray1OfCharacter_Iterator_h
    public:
        Include_TColStd_HArray1OfCharacter_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfCharacter::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfCharacter::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfCharacter::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfCharacter::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfCharacter::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfCharacter::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfCharacter::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property char ChangeFirst {
        char get() {
            return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeFirst();
        }
        void set(char value) {
            ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property char ChangeLast {
        char get() {
            return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeLast();
        }
        void set(char value) {
            ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_HArray1OfCharacter();
    TColStd_HArray1OfCharacter(int theLower, int theUpper);
    TColStd_HArray1OfCharacter(int theLower, int theUpper, char theValue);
    TColStd_HArray1OfCharacter(char theBegin, int theLower, int theUpper, bool parameter1);
    TColStd_HArray1OfCharacter(RDC::OCC::TColStd_Array1OfCharacter^ theOther);
    RDC::OCC::TColStd_Array1OfCharacter^ Array1();
    RDC::OCC::TColStd_Array1OfCharacter^ ChangeArray1();
    void Init(char theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_HArray1OfCharacter^ Assign(RDC::OCC::TColStd_HArray1OfCharacter^ theOther);
    RDC::OCC::TColStd_HArray1OfCharacter^ Move(RDC::OCC::TColStd_HArray1OfCharacter^ theOther);
    char First();
    char Last();
    virtual char Value(int theIndex);
    char ChangeValue(int theIndex);
    void SetValue(int theIndex, char theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray1OfCharacter^ CreateDowncasted(::TColStd_HArray1OfCharacter* instance);
    virtual System::Collections::Generic::IEnumerator<char>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfCharacter

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfExtendedString
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfExtendedString sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<RDC::OCC::TCollection_ExtendedString^>
{

#ifdef Include_TColStd_HArray1OfExtendedString_h
public:
    Include_TColStd_HArray1OfExtendedString_h
#endif

public:
    TColStd_HArray1OfExtendedString(::TColStd_HArray1OfExtendedString* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfExtendedString(::TColStd_HArray1OfExtendedString& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfExtendedString* NativeInstance
    {
        ::TColStd_HArray1OfExtendedString* get()
        {
            return static_cast<::TColStd_HArray1OfExtendedString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray1OfExtendedString::Iterator>
    {

#ifdef Include_TColStd_HArray1OfExtendedString_Iterator_h
    public:
        Include_TColStd_HArray1OfExtendedString_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfExtendedString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfExtendedString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfExtendedString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfExtendedString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfExtendedString::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfExtendedString::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfExtendedString::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColStd_HArray1OfExtendedString();
    TColStd_HArray1OfExtendedString(int theLower, int theUpper);
    TColStd_HArray1OfExtendedString(int theLower, int theUpper, RDC::OCC::TCollection_ExtendedString^ theValue);
    TColStd_HArray1OfExtendedString(RDC::OCC::TCollection_ExtendedString^ theBegin, int theLower, int theUpper, bool parameter1);
    TColStd_HArray1OfExtendedString(RDC::OCC::TColStd_Array1OfExtendedString^ theOther);
    RDC::OCC::TColStd_Array1OfExtendedString^ Array1();
    RDC::OCC::TColStd_Array1OfExtendedString^ ChangeArray1();
    void Init(RDC::OCC::TCollection_ExtendedString^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_HArray1OfExtendedString^ Assign(RDC::OCC::TColStd_HArray1OfExtendedString^ theOther);
    RDC::OCC::TColStd_HArray1OfExtendedString^ Move(RDC::OCC::TColStd_HArray1OfExtendedString^ theOther);
    RDC::OCC::TCollection_ExtendedString^ First();
    RDC::OCC::TCollection_ExtendedString^ ChangeFirst();
    RDC::OCC::TCollection_ExtendedString^ Last();
    RDC::OCC::TCollection_ExtendedString^ ChangeLast();
    virtual RDC::OCC::TCollection_ExtendedString^ Value(int theIndex);
    RDC::OCC::TCollection_ExtendedString^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TCollection_ExtendedString^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray1OfExtendedString^ CreateDowncasted(::TColStd_HArray1OfExtendedString* instance);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_ExtendedString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfInteger
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfInteger sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<int>
{

#ifdef Include_TColStd_HArray1OfInteger_h
public:
    Include_TColStd_HArray1OfInteger_h
#endif

public:
    TColStd_HArray1OfInteger(::TColStd_HArray1OfInteger* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfInteger(::TColStd_HArray1OfInteger& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfInteger* NativeInstance
    {
        ::TColStd_HArray1OfInteger* get()
        {
            return static_cast<::TColStd_HArray1OfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray1OfInteger::Iterator>
    {

#ifdef Include_TColStd_HArray1OfInteger_Iterator_h
    public:
        Include_TColStd_HArray1OfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfInteger::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfInteger::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property int ChangeFirst {
        int get() {
            return ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeFirst();
        }
        void set(int value) {
            ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property int ChangeLast {
        int get() {
            return ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeLast();
        }
        void set(int value) {
            ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_HArray1OfInteger();
    TColStd_HArray1OfInteger(int theLower, int theUpper);
    TColStd_HArray1OfInteger(int theLower, int theUpper, int theValue);
    TColStd_HArray1OfInteger(int theBegin, int theLower, int theUpper, bool parameter1);
    TColStd_HArray1OfInteger(RDC::OCC::TColStd_Array1OfInteger^ theOther);
    RDC::OCC::TColStd_Array1OfInteger^ Array1();
    RDC::OCC::TColStd_Array1OfInteger^ ChangeArray1();
    void Init(int theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_HArray1OfInteger^ Assign(RDC::OCC::TColStd_HArray1OfInteger^ theOther);
    RDC::OCC::TColStd_HArray1OfInteger^ Move(RDC::OCC::TColStd_HArray1OfInteger^ theOther);
    int First();
    int Last();
    virtual int Value(int theIndex);
    int ChangeValue(int theIndex);
    void SetValue(int theIndex, int theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray1OfInteger^ CreateDowncasted(::TColStd_HArray1OfInteger* instance);
    virtual System::Collections::Generic::IEnumerator<int>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfListOfInteger sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_TColStd_HArray1OfListOfInteger_h
public:
    Include_TColStd_HArray1OfListOfInteger_h
#endif

public:
    TColStd_HArray1OfListOfInteger(::TColStd_HArray1OfListOfInteger* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfListOfInteger(::TColStd_HArray1OfListOfInteger& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfListOfInteger* NativeInstance
    {
        ::TColStd_HArray1OfListOfInteger* get()
        {
            return static_cast<::TColStd_HArray1OfListOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray1OfListOfInteger::Iterator>
    {

#ifdef Include_TColStd_HArray1OfListOfInteger_Iterator_h
    public:
        Include_TColStd_HArray1OfListOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfListOfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfListOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfListOfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfListOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfListOfInteger::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfListOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfListOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColStd_HArray1OfListOfInteger();
    TColStd_HArray1OfListOfInteger(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColStd_HArray1OfListOfInteger(int theLower, int theUpper, value_type theValue, ) */
    /* Method skipped due to unknown mapping: void TColStd_HArray1OfListOfInteger(value_type theBegin, int theLower, int theUpper, bool parameter1, ) */
    TColStd_HArray1OfListOfInteger(RDC::OCC::TColStd_Array1OfListOfInteger^ theOther);
    RDC::OCC::TColStd_Array1OfListOfInteger^ Array1();
    RDC::OCC::TColStd_Array1OfListOfInteger^ ChangeArray1();
    /* Method skipped due to unknown mapping: void Init(const_reference theValue, ) */
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_HArray1OfListOfInteger^ Assign(RDC::OCC::TColStd_HArray1OfListOfInteger^ theOther);
    RDC::OCC::TColStd_HArray1OfListOfInteger^ Move(RDC::OCC::TColStd_HArray1OfListOfInteger^ theOther);
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
    static RDC::OCC::TColStd_HArray1OfListOfInteger^ CreateDowncasted(::TColStd_HArray1OfListOfInteger* instance);
}; // class TColStd_HArray1OfListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfReal
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfReal sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<double>
{

#ifdef Include_TColStd_HArray1OfReal_h
public:
    Include_TColStd_HArray1OfReal_h
#endif

public:
    TColStd_HArray1OfReal(::TColStd_HArray1OfReal* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfReal(::TColStd_HArray1OfReal& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfReal* NativeInstance
    {
        ::TColStd_HArray1OfReal* get()
        {
            return static_cast<::TColStd_HArray1OfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray1OfReal::Iterator>
    {

#ifdef Include_TColStd_HArray1OfReal_Iterator_h
    public:
        Include_TColStd_HArray1OfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfReal::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfReal::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfReal::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfReal::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property double ChangeFirst {
        double get() {
            return ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeFirst();
        }
        void set(double value) {
            ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property double ChangeLast {
        double get() {
            return ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeLast();
        }
        void set(double value) {
            ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_HArray1OfReal();
    TColStd_HArray1OfReal(int theLower, int theUpper);
    TColStd_HArray1OfReal(int theLower, int theUpper, double theValue);
    TColStd_HArray1OfReal(double theBegin, int theLower, int theUpper, bool parameter1);
    TColStd_HArray1OfReal(RDC::OCC::TColStd_Array1OfReal^ theOther);
    RDC::OCC::TColStd_Array1OfReal^ Array1();
    RDC::OCC::TColStd_Array1OfReal^ ChangeArray1();
    void Init(double theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_HArray1OfReal^ Assign(RDC::OCC::TColStd_HArray1OfReal^ theOther);
    RDC::OCC::TColStd_HArray1OfReal^ Move(RDC::OCC::TColStd_HArray1OfReal^ theOther);
    double First();
    double Last();
    virtual double Value(int theIndex);
    double ChangeValue(int theIndex);
    void SetValue(int theIndex, double theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray1OfReal^ CreateDowncasted(::TColStd_HArray1OfReal* instance);
    virtual System::Collections::Generic::IEnumerator<double>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfReal

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfTransient
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfTransient sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<RDC::OCC::Standard_Transient^>
{

#ifdef Include_TColStd_HArray1OfTransient_h
public:
    Include_TColStd_HArray1OfTransient_h
#endif

public:
    TColStd_HArray1OfTransient(::TColStd_HArray1OfTransient* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray1OfTransient(::TColStd_HArray1OfTransient& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray1OfTransient* NativeInstance
    {
        ::TColStd_HArray1OfTransient* get()
        {
            return static_cast<::TColStd_HArray1OfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray1OfTransient::Iterator>
    {

#ifdef Include_TColStd_HArray1OfTransient_Iterator_h
    public:
        Include_TColStd_HArray1OfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray1OfTransient::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray1OfTransient::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray1OfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray1OfTransient::Iterator* NativeInstance
        {
            ::TColStd_HArray1OfTransient::Iterator* get()
            {
                return static_cast<::TColStd_HArray1OfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColStd_HArray1OfTransient();
    TColStd_HArray1OfTransient(int theLower, int theUpper);
    TColStd_HArray1OfTransient(int theLower, int theUpper, RDC::OCC::Standard_Transient^ theValue);
    TColStd_HArray1OfTransient(RDC::OCC::Standard_Transient^ theBegin, int theLower, int theUpper, bool parameter1);
    TColStd_HArray1OfTransient(RDC::OCC::TColStd_Array1OfTransient^ theOther);
    RDC::OCC::TColStd_Array1OfTransient^ Array1();
    RDC::OCC::TColStd_Array1OfTransient^ ChangeArray1();
    void Init(RDC::OCC::Standard_Transient^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::TColStd_HArray1OfTransient^ Assign(RDC::OCC::TColStd_HArray1OfTransient^ theOther);
    RDC::OCC::TColStd_HArray1OfTransient^ Move(RDC::OCC::TColStd_HArray1OfTransient^ theOther);
    RDC::OCC::Standard_Transient^ First();
    RDC::OCC::Standard_Transient^ ChangeFirst();
    RDC::OCC::Standard_Transient^ Last();
    RDC::OCC::Standard_Transient^ ChangeLast();
    virtual RDC::OCC::Standard_Transient^ Value(int theIndex);
    RDC::OCC::Standard_Transient^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::Standard_Transient^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray1OfTransient^ CreateDowncasted(::TColStd_HArray1OfTransient* instance);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::Standard_Transient^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HArray1OfTransient

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfBoolean
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfBoolean sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfBoolean_h
public:
    Include_TColStd_HArray2OfBoolean_h
#endif

public:
    TColStd_HArray2OfBoolean(::TColStd_HArray2OfBoolean* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray2OfBoolean(::TColStd_HArray2OfBoolean& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray2OfBoolean* NativeInstance
    {
        ::TColStd_HArray2OfBoolean* get()
        {
            return static_cast<::TColStd_HArray2OfBoolean*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray2OfBoolean::Iterator>
    {

#ifdef Include_TColStd_HArray2OfBoolean_Iterator_h
    public:
        Include_TColStd_HArray2OfBoolean_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray2OfBoolean::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray2OfBoolean::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray2OfBoolean::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray2OfBoolean::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray2OfBoolean::Iterator* NativeInstance
        {
            ::TColStd_HArray2OfBoolean::Iterator* get()
            {
                return static_cast<::TColStd_HArray2OfBoolean::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property bool ChangeFirst {
        bool get() {
            return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeFirst();
        }
        void set(bool value) {
            ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property bool ChangeLast {
        bool get() {
            return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeLast();
        }
        void set(bool value) {
            ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_HArray2OfBoolean(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColStd_HArray2OfBoolean(int theRowLow, int theRowUpp, int theColLow, int theColUpp, bool theValue);
    TColStd_HArray2OfBoolean(RDC::OCC::TColStd_Array2OfBoolean^ theOther);
    RDC::OCC::TColStd_Array2OfBoolean^ Array2();
    RDC::OCC::TColStd_Array2OfBoolean^ ChangeArray2();
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
    RDC::OCC::TColStd_HArray2OfBoolean^ Assign(RDC::OCC::TColStd_HArray2OfBoolean^ theOther);
    RDC::OCC::TColStd_HArray2OfBoolean^ Move(RDC::OCC::TColStd_HArray2OfBoolean^ theOther);
    bool Value(int theRow, int theCol);
    bool ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, bool theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(bool theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    bool First();
    bool Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray2OfBoolean^ CreateDowncasted(::TColStd_HArray2OfBoolean* instance);
}; // class TColStd_HArray2OfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfCharacter
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfCharacter sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfCharacter_h
public:
    Include_TColStd_HArray2OfCharacter_h
#endif

public:
    TColStd_HArray2OfCharacter(::TColStd_HArray2OfCharacter* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray2OfCharacter(::TColStd_HArray2OfCharacter& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray2OfCharacter* NativeInstance
    {
        ::TColStd_HArray2OfCharacter* get()
        {
            return static_cast<::TColStd_HArray2OfCharacter*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray2OfCharacter::Iterator>
    {

#ifdef Include_TColStd_HArray2OfCharacter_Iterator_h
    public:
        Include_TColStd_HArray2OfCharacter_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray2OfCharacter::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray2OfCharacter::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray2OfCharacter::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray2OfCharacter::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray2OfCharacter::Iterator* NativeInstance
        {
            ::TColStd_HArray2OfCharacter::Iterator* get()
            {
                return static_cast<::TColStd_HArray2OfCharacter::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property char ChangeFirst {
        char get() {
            return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeFirst();
        }
        void set(char value) {
            ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property char ChangeLast {
        char get() {
            return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeLast();
        }
        void set(char value) {
            ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_HArray2OfCharacter(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColStd_HArray2OfCharacter(int theRowLow, int theRowUpp, int theColLow, int theColUpp, char theValue);
    TColStd_HArray2OfCharacter(RDC::OCC::TColStd_Array2OfCharacter^ theOther);
    RDC::OCC::TColStd_Array2OfCharacter^ Array2();
    RDC::OCC::TColStd_Array2OfCharacter^ ChangeArray2();
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
    RDC::OCC::TColStd_HArray2OfCharacter^ Assign(RDC::OCC::TColStd_HArray2OfCharacter^ theOther);
    RDC::OCC::TColStd_HArray2OfCharacter^ Move(RDC::OCC::TColStd_HArray2OfCharacter^ theOther);
    char Value(int theRow, int theCol);
    char ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, char theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(char theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    char First();
    char Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray2OfCharacter^ CreateDowncasted(::TColStd_HArray2OfCharacter* instance);
}; // class TColStd_HArray2OfCharacter

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfInteger
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfInteger sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfInteger_h
public:
    Include_TColStd_HArray2OfInteger_h
#endif

public:
    TColStd_HArray2OfInteger(::TColStd_HArray2OfInteger* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray2OfInteger(::TColStd_HArray2OfInteger& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray2OfInteger* NativeInstance
    {
        ::TColStd_HArray2OfInteger* get()
        {
            return static_cast<::TColStd_HArray2OfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray2OfInteger::Iterator>
    {

#ifdef Include_TColStd_HArray2OfInteger_Iterator_h
    public:
        Include_TColStd_HArray2OfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray2OfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray2OfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray2OfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray2OfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray2OfInteger::Iterator* NativeInstance
        {
            ::TColStd_HArray2OfInteger::Iterator* get()
            {
                return static_cast<::TColStd_HArray2OfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property int ChangeFirst {
        int get() {
            return ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeFirst();
        }
        void set(int value) {
            ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property int ChangeLast {
        int get() {
            return ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeLast();
        }
        void set(int value) {
            ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_HArray2OfInteger(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColStd_HArray2OfInteger(int theRowLow, int theRowUpp, int theColLow, int theColUpp, int theValue);
    TColStd_HArray2OfInteger(RDC::OCC::TColStd_Array2OfInteger^ theOther);
    RDC::OCC::TColStd_Array2OfInteger^ Array2();
    RDC::OCC::TColStd_Array2OfInteger^ ChangeArray2();
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
    RDC::OCC::TColStd_HArray2OfInteger^ Assign(RDC::OCC::TColStd_HArray2OfInteger^ theOther);
    RDC::OCC::TColStd_HArray2OfInteger^ Move(RDC::OCC::TColStd_HArray2OfInteger^ theOther);
    int Value(int theRow, int theCol);
    int ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, int theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(int theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    int First();
    int Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray2OfInteger^ CreateDowncasted(::TColStd_HArray2OfInteger* instance);
}; // class TColStd_HArray2OfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfReal
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfReal sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfReal_h
public:
    Include_TColStd_HArray2OfReal_h
#endif

public:
    TColStd_HArray2OfReal(::TColStd_HArray2OfReal* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray2OfReal(::TColStd_HArray2OfReal& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray2OfReal* NativeInstance
    {
        ::TColStd_HArray2OfReal* get()
        {
            return static_cast<::TColStd_HArray2OfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray2OfReal::Iterator>
    {

#ifdef Include_TColStd_HArray2OfReal_Iterator_h
    public:
        Include_TColStd_HArray2OfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray2OfReal::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray2OfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray2OfReal::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray2OfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray2OfReal::Iterator* NativeInstance
        {
            ::TColStd_HArray2OfReal::Iterator* get()
            {
                return static_cast<::TColStd_HArray2OfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property double ChangeFirst {
        double get() {
            return ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeFirst();
        }
        void set(double value) {
            ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property double ChangeLast {
        double get() {
            return ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeLast();
        }
        void set(double value) {
            ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_HArray2OfReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColStd_HArray2OfReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp, double theValue);
    TColStd_HArray2OfReal(RDC::OCC::TColStd_Array2OfReal^ theOther);
    RDC::OCC::TColStd_Array2OfReal^ Array2();
    RDC::OCC::TColStd_Array2OfReal^ ChangeArray2();
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
    RDC::OCC::TColStd_HArray2OfReal^ Assign(RDC::OCC::TColStd_HArray2OfReal^ theOther);
    RDC::OCC::TColStd_HArray2OfReal^ Move(RDC::OCC::TColStd_HArray2OfReal^ theOther);
    double Value(int theRow, int theCol);
    double ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, double theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(double theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    double First();
    double Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray2OfReal^ CreateDowncasted(::TColStd_HArray2OfReal* instance);
}; // class TColStd_HArray2OfReal

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfTransient
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfTransient sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfTransient_h
public:
    Include_TColStd_HArray2OfTransient_h
#endif

public:
    TColStd_HArray2OfTransient(::TColStd_HArray2OfTransient* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HArray2OfTransient(::TColStd_HArray2OfTransient& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HArray2OfTransient* NativeInstance
    {
        ::TColStd_HArray2OfTransient* get()
        {
            return static_cast<::TColStd_HArray2OfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HArray2OfTransient::Iterator>
    {

#ifdef Include_TColStd_HArray2OfTransient_Iterator_h
    public:
        Include_TColStd_HArray2OfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_HArray2OfTransient::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray2OfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HArray2OfTransient::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HArray2OfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HArray2OfTransient::Iterator* NativeInstance
        {
            ::TColStd_HArray2OfTransient::Iterator* get()
            {
                return static_cast<::TColStd_HArray2OfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColStd_HArray2OfTransient(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColStd_HArray2OfTransient(int theRowLow, int theRowUpp, int theColLow, int theColUpp, RDC::OCC::Standard_Transient^ theValue);
    TColStd_HArray2OfTransient(RDC::OCC::TColStd_Array2OfTransient^ theOther);
    RDC::OCC::TColStd_Array2OfTransient^ Array2();
    RDC::OCC::TColStd_Array2OfTransient^ ChangeArray2();
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
    RDC::OCC::TColStd_HArray2OfTransient^ Assign(RDC::OCC::TColStd_HArray2OfTransient^ theOther);
    RDC::OCC::TColStd_HArray2OfTransient^ Move(RDC::OCC::TColStd_HArray2OfTransient^ theOther);
    RDC::OCC::Standard_Transient^ Value(int theRow, int theCol);
    RDC::OCC::Standard_Transient^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, RDC::OCC::Standard_Transient^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(RDC::OCC::Standard_Transient^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    RDC::OCC::Standard_Transient^ First();
    RDC::OCC::Standard_Transient^ ChangeFirst();
    RDC::OCC::Standard_Transient^ Last();
    RDC::OCC::Standard_Transient^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static RDC::OCC::TColStd_HArray2OfTransient^ CreateDowncasted(::TColStd_HArray2OfTransient* instance);
}; // class TColStd_HArray2OfTransient

//---------------------------------------------------------------------
//  Class  TColStd_PackedMapOfInteger
//---------------------------------------------------------------------
/// <summary>
/// /**
/// * Optimized Map of integer values. Each block of 32 integers is stored in 8 bytes in memory.
/// */
/// </summary>
public ref class TColStd_PackedMapOfInteger sealed
    : public RDC::OCC::BaseClass<::TColStd_PackedMapOfInteger>
{

#ifdef Include_TColStd_PackedMapOfInteger_h
public:
    Include_TColStd_PackedMapOfInteger_h
#endif

public:
    TColStd_PackedMapOfInteger(::TColStd_PackedMapOfInteger* nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_PackedMapOfInteger>( nativeInstance, true )
    {}

    TColStd_PackedMapOfInteger(::TColStd_PackedMapOfInteger& nativeInstance)
        : RDC::OCC::BaseClass<::TColStd_PackedMapOfInteger>( &nativeInstance, false )
    {}

    property ::TColStd_PackedMapOfInteger* NativeInstance
    {
        ::TColStd_PackedMapOfInteger* get()
        {
            return static_cast<::TColStd_PackedMapOfInteger*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Iterator of class TColStd_PackedMapOfInteger.
    /// </summary>
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_PackedMapOfInteger::Iterator>
    {

#ifdef Include_TColStd_PackedMapOfInteger_Iterator_h
    public:
        Include_TColStd_PackedMapOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_PackedMapOfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_PackedMapOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_PackedMapOfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_PackedMapOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_PackedMapOfInteger::Iterator* NativeInstance
        {
            ::TColStd_PackedMapOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_PackedMapOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        /// <summary>
        /// Empty Constructor.
        /// </summary>
        Iterator();
        /// <summary>
        /// Constructor.
        /// </summary>
        Iterator(RDC::OCC::TColStd_PackedMapOfInteger^ theMap);
        /// <summary>
        /// Re-initialize with the same or another Map instance.
        /// </summary>
        void Initialize(RDC::OCC::TColStd_PackedMapOfInteger^ theMap);
        /// <summary>
        /// Restart the iteration
        /// </summary>
        void Reset();
        /// <summary>
        /// Query the iterated key.
        /// </summary>
        int Key();
        /// <summary>
        /// Return TRUE if iterator points to the node.
        /// </summary>
        bool More();
        /// <summary>
        /// Increment the iterator
        /// </summary>
        void Next();
    }; // class Iterator

    /// <summary>
    /// Constructor
    /// </summary>
    TColStd_PackedMapOfInteger(int theNbBuckets);
    /// <summary>
    /// Constructor
    /// </summary>
    TColStd_PackedMapOfInteger();
    RDC::OCC::TColStd_PackedMapOfInteger^ Assign(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1);
    void ReSize(int NbBuckets);
    void Clear();
    bool Add(int aKey);
    bool Contains(int aKey);
    bool Remove(int aKey);
    /// <summary>
    /// Returns the number of map buckets (not that since integers are packed in this map, the number is smaller than extent).
    /// </summary>
    int NbBuckets();
    /// <summary>
    /// Returns map extent.
    /// </summary>
    int Extent();
    /// <summary>
    /// Returns TRUE if map is empty.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// /**
    /// * Query the minimal contained key value.
    /// */
    /// </summary>
    int GetMinimalMapped();
    /// <summary>
    /// /**
    /// * Query the maximal contained key value.
    /// */
    /// </summary>
    int GetMaximalMapped();
    /// <summary>
    /// Prints useful statistics about the map.
    /// It can be used to test the quality of the hashcoding.
    /// </summary>
    void Statistics(System::IO::TextWriter^ theStream);
    /// <summary>
    /// /**
    /// * Sets this Map to be the result of union (aka addition, fuse, merge, boolean OR) operation between two given Maps.
    /// * The new Map contains the values that are contained either in the first map or in the second map or in both.
    /// * All previous contents of this Map is cleared. This map (result of the boolean operation) can also be passed as one of operands.
    /// */
    /// </summary>
    void Union(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1, RDC::OCC::TColStd_PackedMapOfInteger^ parameter2);
    /// <summary>
    /// /**
    /// * Apply to this Map the boolean operation union (aka addition, fuse, merge, boolean OR) with another (given) Map.
    /// * The result contains the values that were previously contained in this map or contained in the given (operand) map.
    /// * This algorithm is similar to method Union().
    /// * @return True if content of this map is changed
    /// */
    /// </summary>
    bool Unite(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1);
    /// <summary>
    /// /**
    /// * Sets this Map to be the result of intersection (aka multiplication, common, boolean AND) operation between two given Maps.
    /// * The new Map contains only the values that are contained in both map operands.
    /// * All previous contents of this Map is cleared. This same map (result of the boolean operation) can also be used as one of operands.
    /// * The order of operands makes no difference; the method minimizes internally the number of iterations using the smallest map for the loop.
    /// */
    /// </summary>
    void Intersection(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1, RDC::OCC::TColStd_PackedMapOfInteger^ parameter2);
    /// <summary>
    /// /**
    /// * Apply to this Map the intersection operation (aka multiplication, common,  boolean AND) with another (given) Map.
    /// * The result contains only the values that are contained in both this and the given maps.
    /// * This algorithm is similar to method Intersection().
    /// * @return True if content of this map is changed
    /// */
    /// </summary>
    bool Intersect(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1);
    /// <summary>
    /// /**
    /// * Sets this Map to be the result of subtraction
    /// * (aka set-theoretic difference, relative complement, exclude, cut, boolean NOT) operation between two given Maps.
    /// * The new Map contains only the values that are contained in the first map operands and not contained in the second one.
    /// * All previous contents of this Map is cleared.
    /// * This map (result of the boolean operation) can also be used as the first operand.
    /// */
    /// </summary>
    void Subtraction(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1, RDC::OCC::TColStd_PackedMapOfInteger^ parameter2);
    /// <summary>
    /// /**
    /// * Apply to this Map the subtraction (aka set-theoretic difference, relative complement, exclude, cut, boolean NOT) operation with another (given) Map.
    /// * The result contains only the values that were previously contained in this map and not contained in this map.
    /// * This algorithm is similar to method Subtract() with two operands.
    /// * @return True if contents of this map is changed
    /// */
    /// </summary>
    bool Subtract(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1);
    /// <summary>
    /// /**
    /// * Sets this Map to be the result of symmetric difference (aka exclusive disjunction, boolean XOR) operation between two given Maps.
    /// * The new Map contains the values that are contained only in the first or the second operand maps but not in both.
    /// * All previous contents of this Map is cleared.
    /// * This map (result of the boolean operation) can also be used as one of operands.
    /// */
    /// </summary>
    void Difference(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1, RDC::OCC::TColStd_PackedMapOfInteger^ parameter2);
    /// <summary>
    /// /**
    /// * Apply to this Map the symmetric difference (aka exclusive disjunction, boolean XOR) operation with another (given) Map.
    /// * The result contains the values that are contained only in this or the operand map, but not in both.
    /// * This algorithm is similar to method Difference().
    /// * @return True if contents of this map is changed
    /// */
    /// </summary>
    bool Differ(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1);
    /// <summary>
    /// /**
    /// * Returns True if this map is equal to the given one, i.e. they contain the
    /// * same sets of elements
    /// */
    /// </summary>
    bool IsEqual(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1);
    /// <summary>
    /// /**
    /// * Returns True if this map is subset of the given one, i.e. all elements
    /// * contained in this map is contained also in the operand map.
    /// * if this map is empty that this method returns true for any operand map.
    /// */
    /// </summary>
    bool IsSubset(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1);
    /// <summary>
    /// /**
    /// * Returns True if this map has common items with the given one.
    /// */
    /// </summary>
    bool HasIntersection(RDC::OCC::TColStd_PackedMapOfInteger^ parameter1);
    bool Equals(System::Object^ obj) override;
}; // class TColStd_PackedMapOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HPackedMapOfInteger
//---------------------------------------------------------------------
/// <summary>
/// Extension of TColStd_PackedMapOfInteger class to be manipulated by handle.
/// </summary>
public ref class TColStd_HPackedMapOfInteger sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_TColStd_HPackedMapOfInteger_h
public:
    Include_TColStd_HPackedMapOfInteger_h
#endif

public:
    TColStd_HPackedMapOfInteger(::TColStd_HPackedMapOfInteger* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HPackedMapOfInteger(::TColStd_HPackedMapOfInteger& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HPackedMapOfInteger* NativeInstance
    {
        ::TColStd_HPackedMapOfInteger* get()
        {
            return static_cast<::TColStd_HPackedMapOfInteger*>(_NativeInstance);
        }
    }

public:
    TColStd_HPackedMapOfInteger(int NbBuckets);
    TColStd_HPackedMapOfInteger();
    TColStd_HPackedMapOfInteger(RDC::OCC::TColStd_PackedMapOfInteger^ theOther);
    RDC::OCC::TColStd_PackedMapOfInteger^ Map();
    RDC::OCC::TColStd_PackedMapOfInteger^ ChangeMap();
    static RDC::OCC::TColStd_HPackedMapOfInteger^ CreateDowncasted(::TColStd_HPackedMapOfInteger* instance);
}; // class TColStd_HPackedMapOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfAsciiString sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<RDC::OCC::TCollection_AsciiString^>
{

#ifdef Include_TColStd_HSequenceOfAsciiString_h
public:
    Include_TColStd_HSequenceOfAsciiString_h
#endif

public:
    TColStd_HSequenceOfAsciiString(::TColStd_HSequenceOfAsciiString* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfAsciiString(::TColStd_HSequenceOfAsciiString& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfAsciiString* NativeInstance
    {
        ::TColStd_HSequenceOfAsciiString* get()
        {
            return static_cast<::TColStd_HSequenceOfAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HSequenceOfAsciiString::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfAsciiString_Iterator_h
    public:
        Include_TColStd_HSequenceOfAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfAsciiString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfAsciiString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfAsciiString::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TCollection_AsciiString^ Value();
        RDC::OCC::TCollection_AsciiString^ ChangeValue();
        bool IsEqual(RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_HSequenceOfAsciiString();
    TColStd_HSequenceOfAsciiString(RDC::OCC::TColStd_SequenceOfAsciiString^ theOther);
    RDC::OCC::TColStd_SequenceOfAsciiString^ Sequence();
    void Append(RDC::OCC::TCollection_AsciiString^ theItem);
    void Append(RDC::OCC::TColStd_SequenceOfAsciiString^ theSequence);
    RDC::OCC::TColStd_SequenceOfAsciiString^ ChangeSequence();
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
    RDC::OCC::TColStd_HSequenceOfAsciiString^ Assign(RDC::OCC::TColStd_HSequenceOfAsciiString^ theOther);
    void Remove(RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator^ thePosition);
    void Prepend(RDC::OCC::TCollection_AsciiString^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::TCollection_AsciiString^ theItem);
    void InsertAfter(RDC::OCC::TColStd_HSequenceOfAsciiString::Iterator^ thePosition, RDC::OCC::TCollection_AsciiString^ theItem);
    void Split(int theIndex, RDC::OCC::TColStd_HSequenceOfAsciiString^ theSeq);
    RDC::OCC::TCollection_AsciiString^ First();
    RDC::OCC::TCollection_AsciiString^ ChangeFirst();
    RDC::OCC::TCollection_AsciiString^ Last();
    RDC::OCC::TCollection_AsciiString^ ChangeLast();
    virtual RDC::OCC::TCollection_AsciiString^ Value(int theIndex);
    RDC::OCC::TCollection_AsciiString^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TCollection_AsciiString^ theItem);
    static RDC::OCC::TColStd_HSequenceOfAsciiString^ CreateDowncasted(::TColStd_HSequenceOfAsciiString* instance);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_AsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfExtendedString
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfExtendedString sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<RDC::OCC::TCollection_ExtendedString^>
{

#ifdef Include_TColStd_HSequenceOfExtendedString_h
public:
    Include_TColStd_HSequenceOfExtendedString_h
#endif

public:
    TColStd_HSequenceOfExtendedString(::TColStd_HSequenceOfExtendedString* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfExtendedString(::TColStd_HSequenceOfExtendedString& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfExtendedString* NativeInstance
    {
        ::TColStd_HSequenceOfExtendedString* get()
        {
            return static_cast<::TColStd_HSequenceOfExtendedString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HSequenceOfExtendedString::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfExtendedString_Iterator_h
    public:
        Include_TColStd_HSequenceOfExtendedString_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfExtendedString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfExtendedString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfExtendedString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfExtendedString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfExtendedString::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfExtendedString::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfExtendedString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TCollection_ExtendedString^ Value();
        RDC::OCC::TCollection_ExtendedString^ ChangeValue();
        bool IsEqual(RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_HSequenceOfExtendedString();
    TColStd_HSequenceOfExtendedString(RDC::OCC::TColStd_SequenceOfExtendedString^ theOther);
    RDC::OCC::TColStd_SequenceOfExtendedString^ Sequence();
    void Append(RDC::OCC::TCollection_ExtendedString^ theItem);
    void Append(RDC::OCC::TColStd_SequenceOfExtendedString^ theSequence);
    RDC::OCC::TColStd_SequenceOfExtendedString^ ChangeSequence();
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
    RDC::OCC::TColStd_HSequenceOfExtendedString^ Assign(RDC::OCC::TColStd_HSequenceOfExtendedString^ theOther);
    void Remove(RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator^ thePosition);
    void Prepend(RDC::OCC::TCollection_ExtendedString^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::TCollection_ExtendedString^ theItem);
    void InsertAfter(RDC::OCC::TColStd_HSequenceOfExtendedString::Iterator^ thePosition, RDC::OCC::TCollection_ExtendedString^ theItem);
    void Split(int theIndex, RDC::OCC::TColStd_HSequenceOfExtendedString^ theSeq);
    RDC::OCC::TCollection_ExtendedString^ First();
    RDC::OCC::TCollection_ExtendedString^ ChangeFirst();
    RDC::OCC::TCollection_ExtendedString^ Last();
    RDC::OCC::TCollection_ExtendedString^ ChangeLast();
    virtual RDC::OCC::TCollection_ExtendedString^ Value(int theIndex);
    RDC::OCC::TCollection_ExtendedString^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TCollection_ExtendedString^ theItem);
    static RDC::OCC::TColStd_HSequenceOfExtendedString^ CreateDowncasted(::TColStd_HSequenceOfExtendedString* instance);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_ExtendedString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHAsciiString
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfHAsciiString sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<RDC::OCC::TCollection_HAsciiString^>
{

#ifdef Include_TColStd_HSequenceOfHAsciiString_h
public:
    Include_TColStd_HSequenceOfHAsciiString_h
#endif

public:
    TColStd_HSequenceOfHAsciiString(::TColStd_HSequenceOfHAsciiString* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfHAsciiString(::TColStd_HSequenceOfHAsciiString& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfHAsciiString* NativeInstance
    {
        ::TColStd_HSequenceOfHAsciiString* get()
        {
            return static_cast<::TColStd_HSequenceOfHAsciiString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HSequenceOfHAsciiString::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfHAsciiString_Iterator_h
    public:
        Include_TColStd_HSequenceOfHAsciiString_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfHAsciiString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfHAsciiString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfHAsciiString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfHAsciiString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfHAsciiString::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfHAsciiString::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfHAsciiString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TCollection_HAsciiString^ Value();
        RDC::OCC::TCollection_HAsciiString^ ChangeValue();
        bool IsEqual(RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_HSequenceOfHAsciiString();
    TColStd_HSequenceOfHAsciiString(RDC::OCC::TColStd_SequenceOfHAsciiString^ theOther);
    RDC::OCC::TColStd_SequenceOfHAsciiString^ Sequence();
    void Append(RDC::OCC::TCollection_HAsciiString^ theItem);
    void Append(RDC::OCC::TColStd_SequenceOfHAsciiString^ theSequence);
    RDC::OCC::TColStd_SequenceOfHAsciiString^ ChangeSequence();
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
    RDC::OCC::TColStd_HSequenceOfHAsciiString^ Assign(RDC::OCC::TColStd_HSequenceOfHAsciiString^ theOther);
    void Remove(RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator^ thePosition);
    void Prepend(RDC::OCC::TCollection_HAsciiString^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::TCollection_HAsciiString^ theItem);
    void InsertAfter(RDC::OCC::TColStd_HSequenceOfHAsciiString::Iterator^ thePosition, RDC::OCC::TCollection_HAsciiString^ theItem);
    void Split(int theIndex, RDC::OCC::TColStd_HSequenceOfHAsciiString^ theSeq);
    RDC::OCC::TCollection_HAsciiString^ First();
    RDC::OCC::TCollection_HAsciiString^ ChangeFirst();
    RDC::OCC::TCollection_HAsciiString^ Last();
    RDC::OCC::TCollection_HAsciiString^ ChangeLast();
    virtual RDC::OCC::TCollection_HAsciiString^ Value(int theIndex);
    RDC::OCC::TCollection_HAsciiString^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TCollection_HAsciiString^ theItem);
    static RDC::OCC::TColStd_HSequenceOfHAsciiString^ CreateDowncasted(::TColStd_HSequenceOfHAsciiString* instance);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_HAsciiString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfHAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHExtendedString
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfHExtendedString sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<RDC::OCC::TCollection_HExtendedString^>
{

#ifdef Include_TColStd_HSequenceOfHExtendedString_h
public:
    Include_TColStd_HSequenceOfHExtendedString_h
#endif

public:
    TColStd_HSequenceOfHExtendedString(::TColStd_HSequenceOfHExtendedString* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfHExtendedString(::TColStd_HSequenceOfHExtendedString& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfHExtendedString* NativeInstance
    {
        ::TColStd_HSequenceOfHExtendedString* get()
        {
            return static_cast<::TColStd_HSequenceOfHExtendedString*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HSequenceOfHExtendedString::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfHExtendedString_Iterator_h
    public:
        Include_TColStd_HSequenceOfHExtendedString_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfHExtendedString::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfHExtendedString::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfHExtendedString::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfHExtendedString::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfHExtendedString::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfHExtendedString::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfHExtendedString::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TCollection_HExtendedString^ Value();
        RDC::OCC::TCollection_HExtendedString^ ChangeValue();
        bool IsEqual(RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_HSequenceOfHExtendedString();
    TColStd_HSequenceOfHExtendedString(RDC::OCC::TColStd_SequenceOfHExtendedString^ theOther);
    RDC::OCC::TColStd_SequenceOfHExtendedString^ Sequence();
    void Append(RDC::OCC::TCollection_HExtendedString^ theItem);
    void Append(RDC::OCC::TColStd_SequenceOfHExtendedString^ theSequence);
    RDC::OCC::TColStd_SequenceOfHExtendedString^ ChangeSequence();
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
    RDC::OCC::TColStd_HSequenceOfHExtendedString^ Assign(RDC::OCC::TColStd_HSequenceOfHExtendedString^ theOther);
    void Remove(RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator^ thePosition);
    void Prepend(RDC::OCC::TCollection_HExtendedString^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::TCollection_HExtendedString^ theItem);
    void InsertAfter(RDC::OCC::TColStd_HSequenceOfHExtendedString::Iterator^ thePosition, RDC::OCC::TCollection_HExtendedString^ theItem);
    void Split(int theIndex, RDC::OCC::TColStd_HSequenceOfHExtendedString^ theSeq);
    RDC::OCC::TCollection_HExtendedString^ First();
    RDC::OCC::TCollection_HExtendedString^ ChangeFirst();
    RDC::OCC::TCollection_HExtendedString^ Last();
    RDC::OCC::TCollection_HExtendedString^ ChangeLast();
    virtual RDC::OCC::TCollection_HExtendedString^ Value(int theIndex);
    RDC::OCC::TCollection_HExtendedString^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::TCollection_HExtendedString^ theItem);
    static RDC::OCC::TColStd_HSequenceOfHExtendedString^ CreateDowncasted(::TColStd_HSequenceOfHExtendedString* instance);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::TCollection_HExtendedString^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfHExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfInteger
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfInteger sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<int>
{

#ifdef Include_TColStd_HSequenceOfInteger_h
public:
    Include_TColStd_HSequenceOfInteger_h
#endif

public:
    TColStd_HSequenceOfInteger(::TColStd_HSequenceOfInteger* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfInteger(::TColStd_HSequenceOfInteger& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfInteger* NativeInstance
    {
        ::TColStd_HSequenceOfInteger* get()
        {
            return static_cast<::TColStd_HSequenceOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HSequenceOfInteger::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfInteger_Iterator_h
    public:
        Include_TColStd_HSequenceOfInteger_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfInteger::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfInteger::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfInteger::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfInteger::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TColStd_HSequenceOfInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TColStd_HSequenceOfInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        int Value();
        bool IsEqual(RDC::OCC::TColStd_HSequenceOfInteger::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    property int ChangeFirst {
        int get() {
            return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeFirst();
        }
        void set(int value) {
            ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property int ChangeLast {
        int get() {
            return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeLast();
        }
        void set(int value) {
            ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_HSequenceOfInteger();
    TColStd_HSequenceOfInteger(RDC::OCC::TColStd_SequenceOfInteger^ theOther);
    RDC::OCC::TColStd_SequenceOfInteger^ Sequence();
    void Append(int theItem);
    void Append(RDC::OCC::TColStd_SequenceOfInteger^ theSequence);
    RDC::OCC::TColStd_SequenceOfInteger^ ChangeSequence();
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
    RDC::OCC::TColStd_HSequenceOfInteger^ Assign(RDC::OCC::TColStd_HSequenceOfInteger^ theOther);
    void Remove(RDC::OCC::TColStd_HSequenceOfInteger::Iterator^ thePosition);
    void Prepend(int theItem);
    void InsertBefore(int theIndex, int theItem);
    void InsertAfter(RDC::OCC::TColStd_HSequenceOfInteger::Iterator^ thePosition, int theItem);
    void Split(int theIndex, RDC::OCC::TColStd_HSequenceOfInteger^ theSeq);
    int First();
    int Last();
    virtual int Value(int theIndex);
    int ChangeValue(int theIndex);
    void SetValue(int theIndex, int theItem);
    static RDC::OCC::TColStd_HSequenceOfInteger^ CreateDowncasted(::TColStd_HSequenceOfInteger* instance);
    virtual System::Collections::Generic::IEnumerator<int>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfReal
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfReal sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<double>
{

#ifdef Include_TColStd_HSequenceOfReal_h
public:
    Include_TColStd_HSequenceOfReal_h
#endif

public:
    TColStd_HSequenceOfReal(::TColStd_HSequenceOfReal* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfReal(::TColStd_HSequenceOfReal& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfReal* NativeInstance
    {
        ::TColStd_HSequenceOfReal* get()
        {
            return static_cast<::TColStd_HSequenceOfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HSequenceOfReal::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfReal_Iterator_h
    public:
        Include_TColStd_HSequenceOfReal_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfReal::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfReal::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfReal::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfReal::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfReal::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TColStd_HSequenceOfReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TColStd_HSequenceOfReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        double Value();
        bool IsEqual(RDC::OCC::TColStd_HSequenceOfReal::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    property double ChangeFirst {
        double get() {
            return ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeFirst();
        }
        void set(double value) {
            ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property double ChangeLast {
        double get() {
            return ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeLast();
        }
        void set(double value) {
            ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TColStd_HSequenceOfReal();
    TColStd_HSequenceOfReal(RDC::OCC::TColStd_SequenceOfReal^ theOther);
    RDC::OCC::TColStd_SequenceOfReal^ Sequence();
    void Append(double theItem);
    void Append(RDC::OCC::TColStd_SequenceOfReal^ theSequence);
    RDC::OCC::TColStd_SequenceOfReal^ ChangeSequence();
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
    RDC::OCC::TColStd_HSequenceOfReal^ Assign(RDC::OCC::TColStd_HSequenceOfReal^ theOther);
    void Remove(RDC::OCC::TColStd_HSequenceOfReal::Iterator^ thePosition);
    void Prepend(double theItem);
    void InsertBefore(int theIndex, double theItem);
    void InsertAfter(RDC::OCC::TColStd_HSequenceOfReal::Iterator^ thePosition, double theItem);
    void Split(int theIndex, RDC::OCC::TColStd_HSequenceOfReal^ theSeq);
    double First();
    double Last();
    virtual double Value(int theIndex);
    double ChangeValue(int theIndex);
    void SetValue(int theIndex, double theItem);
    static RDC::OCC::TColStd_HSequenceOfReal^ CreateDowncasted(::TColStd_HSequenceOfReal* instance);
    virtual System::Collections::Generic::IEnumerator<double>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfReal

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfTransient
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfTransient sealed
    : public RDC::OCC::Standard_Transient
    , public IIndexEnumerable<RDC::OCC::Standard_Transient^>
{

#ifdef Include_TColStd_HSequenceOfTransient_h
public:
    Include_TColStd_HSequenceOfTransient_h
#endif

public:
    TColStd_HSequenceOfTransient(::TColStd_HSequenceOfTransient* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    TColStd_HSequenceOfTransient(::TColStd_HSequenceOfTransient& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::TColStd_HSequenceOfTransient* NativeInstance
    {
        ::TColStd_HSequenceOfTransient* get()
        {
            return static_cast<::TColStd_HSequenceOfTransient*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::TColStd_HSequenceOfTransient::Iterator>
    {

#ifdef Include_TColStd_HSequenceOfTransient_Iterator_h
    public:
        Include_TColStd_HSequenceOfTransient_Iterator_h
#endif

    public:
        Iterator(::TColStd_HSequenceOfTransient::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfTransient::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColStd_HSequenceOfTransient::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::TColStd_HSequenceOfTransient::Iterator>( &nativeInstance, false )
        {}

        property ::TColStd_HSequenceOfTransient::Iterator* NativeInstance
        {
            ::TColStd_HSequenceOfTransient::Iterator* get()
            {
                return static_cast<::TColStd_HSequenceOfTransient::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::Standard_Transient^ Value();
        RDC::OCC::Standard_Transient^ ChangeValue();
        bool IsEqual(RDC::OCC::TColStd_HSequenceOfTransient::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColStd_HSequenceOfTransient();
    TColStd_HSequenceOfTransient(RDC::OCC::TColStd_SequenceOfTransient^ theOther);
    RDC::OCC::TColStd_SequenceOfTransient^ Sequence();
    void Append(RDC::OCC::Standard_Transient^ theItem);
    void Append(RDC::OCC::TColStd_SequenceOfTransient^ theSequence);
    RDC::OCC::TColStd_SequenceOfTransient^ ChangeSequence();
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
    RDC::OCC::TColStd_HSequenceOfTransient^ Assign(RDC::OCC::TColStd_HSequenceOfTransient^ theOther);
    void Remove(RDC::OCC::TColStd_HSequenceOfTransient::Iterator^ thePosition);
    void Prepend(RDC::OCC::Standard_Transient^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::Standard_Transient^ theItem);
    void InsertAfter(RDC::OCC::TColStd_HSequenceOfTransient::Iterator^ thePosition, RDC::OCC::Standard_Transient^ theItem);
    void Split(int theIndex, RDC::OCC::TColStd_HSequenceOfTransient^ theSeq);
    RDC::OCC::Standard_Transient^ First();
    RDC::OCC::Standard_Transient^ ChangeFirst();
    RDC::OCC::Standard_Transient^ Last();
    RDC::OCC::Standard_Transient^ ChangeLast();
    virtual RDC::OCC::Standard_Transient^ Value(int theIndex);
    RDC::OCC::Standard_Transient^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::Standard_Transient^ theItem);
    static RDC::OCC::TColStd_HSequenceOfTransient^ CreateDowncasted(::TColStd_HSequenceOfTransient* instance);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::Standard_Transient^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColStd_HSequenceOfTransient

}; // namespace OCC
}; // namespace RDC

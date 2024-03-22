// Generated wrapper code for package SelectMgr

#pragma once

#include "NCollection.h"
#include "SelectBasics.h"
#include "PrsMgr.h"

namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Enum  SelectMgr_FilterType
//---------------------------------------------------------------------
/// <summary>
/// Enumeration defines the filter type.
/// </summary>
public enum class SelectMgr_FilterType
{
    AND = 0,
    OR = 1
}; // enum  class SelectMgr_FilterType

//---------------------------------------------------------------------
//  Enum  SelectMgr_SelectionType
//---------------------------------------------------------------------
/// <summary>
/// Possible selection types
/// </summary>
public enum class SelectMgr_SelectionType
{
    Unknown = -1,
    Point = 0,
    Box = 1,
    Polyline = 2
}; // enum  class SelectMgr_SelectionType

//---------------------------------------------------------------------
//  Enum  SelectMgr_StateOfSelection
//---------------------------------------------------------------------
/// <summary>
/// different state of a Selection in a ViewerSelector...
/// </summary>
public enum class SelectMgr_StateOfSelection
{
    Any = -2,
    Unknown = -1,
    Deactivated = 0,
    Activated = 1
}; // enum  class SelectMgr_StateOfSelection

//---------------------------------------------------------------------
//  Enum  SelectMgr_TypeOfBVHUpdate
//---------------------------------------------------------------------
/// <summary>
/// Keeps track for BVH update state for each SelectMgr_Selection entity in a following way:
/// - Add        : 2nd level BVH does not contain any of the selection's sensitive entities and they must be
/// added;
/// - Remove     : all sensitive entities of the selection must be removed from 2nd level BVH;
/// - Renew      : 2nd level BVH already contains sensitives of the selection, but the its complete update
/// and removal is required. Therefore, sensitives of the selection with this type of update
/// must be removed from 2nd level BVH and added after recomputation.
/// - Invalidate : the 2nd level BVH needs to be rebuilt;
/// - None       : entities of the selection are up to date.
/// </summary>
public enum class SelectMgr_TypeOfBVHUpdate
{
    TBU_Add = 0,
    TBU_Remove = 1,
    TBU_Renew = 2,
    TBU_Invalidate = 3,
    TBU_None = 4
}; // enum  class SelectMgr_TypeOfBVHUpdate

//---------------------------------------------------------------------
//  Enum  SelectMgr_TypeOfUpdate
//---------------------------------------------------------------------
/// <summary>
/// Provides values for types of update, including
/// -   full
/// -   partial
/// -   none.
/// </summary>
public enum class SelectMgr_TypeOfUpdate
{
    Full = 0,
    Partial = 1,
    None = 2
}; // enum  class SelectMgr_TypeOfUpdate

//---------------------------------------------------------------------
//  Enum  SelectMgr_PickingStrategy
//---------------------------------------------------------------------
/// <summary>
/// Enumeration defines picking strategy - which entities detected by picking line will be accepted, considering selection filters.
/// </summary>
public enum class SelectMgr_PickingStrategy
{
    FirstAcceptable = 0,
    OnlyTopmost = 1
}; // enum  class SelectMgr_PickingStrategy

//---------------------------------------------------------------------
//  Enum  SelectMgr_TypeOfDepthTolerance
//---------------------------------------------------------------------
/// <summary>
/// Define the type of depth tolerance for considering picked entities to lie on the same depth (distance from eye to entity).
/// </summary>
/// @sa SelectMgr_SortCriterion, SelectMgr_ViewerSelector
public enum class SelectMgr_TypeOfDepthTolerance
{
    Uniform = 0,
    UniformPixels = 1,
    SensitivityFactor = 2
}; // enum  class SelectMgr_TypeOfDepthTolerance

//---------------------------------------------------------------------
//  Class  SelectMgr_ListOfFilter
//---------------------------------------------------------------------
public ref class SelectMgr_ListOfFilter sealed
    : public RDC::OCC::NCollection_BaseList
{

#ifdef Include_SelectMgr_ListOfFilter_h
public:
    Include_SelectMgr_ListOfFilter_h
#endif

public:
    SelectMgr_ListOfFilter(::SelectMgr_ListOfFilter* nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    SelectMgr_ListOfFilter(::SelectMgr_ListOfFilter& nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    property ::SelectMgr_ListOfFilter* NativeInstance
    {
        ::SelectMgr_ListOfFilter* get()
        {
            return static_cast<::SelectMgr_ListOfFilter*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::SelectMgr_ListOfFilter::Iterator>
    {

#ifdef Include_SelectMgr_ListOfFilter_Iterator_h
    public:
        Include_SelectMgr_ListOfFilter_Iterator_h
#endif

    public:
        Iterator(::SelectMgr_ListOfFilter::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_ListOfFilter::Iterator>( nativeInstance, true )
        {}

        Iterator(::SelectMgr_ListOfFilter::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_ListOfFilter::Iterator>( &nativeInstance, false )
        {}

        property ::SelectMgr_ListOfFilter::Iterator* NativeInstance
        {
            ::SelectMgr_ListOfFilter::Iterator* get()
            {
                return static_cast<::SelectMgr_ListOfFilter::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::SelectMgr_Filter^ Value();
        RDC::OCC::SelectMgr_Filter^ ChangeValue();
    }; // class Iterator

    SelectMgr_ListOfFilter();
    SelectMgr_ListOfFilter(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    RDC::OCC::SelectMgr_ListOfFilter^ Assign(RDC::OCC::SelectMgr_ListOfFilter^ theOther);
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    RDC::OCC::SelectMgr_Filter^ First();
    RDC::OCC::SelectMgr_Filter^ Last();
    RDC::OCC::SelectMgr_Filter^ Append(RDC::OCC::SelectMgr_Filter^ theItem);
    RDC::OCC::SelectMgr_Filter^ Prepend(RDC::OCC::SelectMgr_Filter^ theItem);
    void RemoveFirst();
    void Remove(RDC::OCC::SelectMgr_ListOfFilter::Iterator^ theIter);
    RDC::OCC::SelectMgr_Filter^ InsertBefore(RDC::OCC::SelectMgr_Filter^ theItem, RDC::OCC::SelectMgr_ListOfFilter::Iterator^ theIter);
    RDC::OCC::SelectMgr_Filter^ InsertAfter(RDC::OCC::SelectMgr_Filter^ theItem, RDC::OCC::SelectMgr_ListOfFilter::Iterator^ theIter);
    void Reverse();
}; // class SelectMgr_ListOfFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_ListIteratorOfListOfFilter
//---------------------------------------------------------------------
public ref class SelectMgr_ListIteratorOfListOfFilter sealed
    : public RDC::OCC::BaseClass<::SelectMgr_ListIteratorOfListOfFilter>
{

#ifdef Include_SelectMgr_ListIteratorOfListOfFilter_h
public:
    Include_SelectMgr_ListIteratorOfListOfFilter_h
#endif

public:
    SelectMgr_ListIteratorOfListOfFilter(::SelectMgr_ListIteratorOfListOfFilter* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_ListIteratorOfListOfFilter>( nativeInstance, true )
    {}

    SelectMgr_ListIteratorOfListOfFilter(::SelectMgr_ListIteratorOfListOfFilter& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_ListIteratorOfListOfFilter>( &nativeInstance, false )
    {}

    property ::SelectMgr_ListIteratorOfListOfFilter* NativeInstance
    {
        ::SelectMgr_ListIteratorOfListOfFilter* get()
        {
            return static_cast<::SelectMgr_ListIteratorOfListOfFilter*>(_NativeInstance);
        }
    }

public:
    SelectMgr_ListIteratorOfListOfFilter();
    SelectMgr_ListIteratorOfListOfFilter(RDC::OCC::NCollection_BaseList^ theList);
    bool More();
    void Next();
    RDC::OCC::SelectMgr_Filter^ Value();
    RDC::OCC::SelectMgr_Filter^ ChangeValue();
}; // class SelectMgr_ListIteratorOfListOfFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_Vec3
//---------------------------------------------------------------------
public ref class SelectMgr_Vec3 sealed
    : public RDC::OCC::BaseClass<::SelectMgr_Vec3>
{

#ifdef Include_SelectMgr_Vec3_h
public:
    Include_SelectMgr_Vec3_h
#endif

public:
    SelectMgr_Vec3(::SelectMgr_Vec3* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_Vec3>( nativeInstance, true )
    {}

    SelectMgr_Vec3(::SelectMgr_Vec3& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_Vec3>( &nativeInstance, false )
    {}

    property ::SelectMgr_Vec3* NativeInstance
    {
        ::SelectMgr_Vec3* get()
        {
            return static_cast<::SelectMgr_Vec3*>(_NativeInstance);
        }
    }

public:
    SelectMgr_Vec3();
    SelectMgr_Vec3(double theValue);
    SelectMgr_Vec3(double theX, double theY, double theZ);
    SelectMgr_Vec3(RDC::OCC::Graphic3d_Vec2d^ theVec2, double theZ);
    SelectMgr_Vec3(RDC::OCC::Graphic3d_Vec2d^ theVec2);
    static int Length();
    void SetValues(double theX, double theY, double theZ);
    double x();
    double r();
    double y();
    double g();
    double z();
    double b();
    RDC::OCC::Graphic3d_Vec2d^ xy();
    RDC::OCC::Graphic3d_Vec2d^ yx();
    RDC::OCC::Graphic3d_Vec2d^ xz();
    RDC::OCC::Graphic3d_Vec2d^ zx();
    RDC::OCC::Graphic3d_Vec2d^ yz();
    RDC::OCC::Graphic3d_Vec2d^ zy();
    RDC::OCC::SelectMgr_Vec3^ xyz();
    RDC::OCC::SelectMgr_Vec3^ xzy();
    RDC::OCC::SelectMgr_Vec3^ yxz();
    RDC::OCC::SelectMgr_Vec3^ yzx();
    RDC::OCC::SelectMgr_Vec3^ zyx();
    RDC::OCC::SelectMgr_Vec3^ zxy();
    bool IsEqual(RDC::OCC::SelectMgr_Vec3^ theOther);
    double GetData();
    double ChangeData();
    void Multiply(double theFactor);
    RDC::OCC::SelectMgr_Vec3^ Multiplied(double theFactor);
    RDC::OCC::SelectMgr_Vec3^ cwiseMin(RDC::OCC::SelectMgr_Vec3^ theVec);
    RDC::OCC::SelectMgr_Vec3^ cwiseMax(RDC::OCC::SelectMgr_Vec3^ theVec);
    RDC::OCC::SelectMgr_Vec3^ cwiseAbs();
    double maxComp();
    double minComp();
    double Dot(RDC::OCC::SelectMgr_Vec3^ theOther);
    double Modulus();
    double SquareModulus();
    void Normalize();
    RDC::OCC::SelectMgr_Vec3^ Normalized();
    static RDC::OCC::SelectMgr_Vec3^ Cross(RDC::OCC::SelectMgr_Vec3^ theVec1, RDC::OCC::SelectMgr_Vec3^ theVec2);
    static RDC::OCC::SelectMgr_Vec3^ GetLERP(RDC::OCC::SelectMgr_Vec3^ theFrom, RDC::OCC::SelectMgr_Vec3^ theTo, double theT);
    static RDC::OCC::SelectMgr_Vec3^ DX();
    static RDC::OCC::SelectMgr_Vec3^ DY();
    static RDC::OCC::SelectMgr_Vec3^ DZ();
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class SelectMgr_Vec3

//---------------------------------------------------------------------
//  Class  SelectMgr_Vec4
//---------------------------------------------------------------------
public ref class SelectMgr_Vec4 sealed
    : public RDC::OCC::BaseClass<::SelectMgr_Vec4>
{

#ifdef Include_SelectMgr_Vec4_h
public:
    Include_SelectMgr_Vec4_h
#endif

public:
    SelectMgr_Vec4(::SelectMgr_Vec4* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_Vec4>( nativeInstance, true )
    {}

    SelectMgr_Vec4(::SelectMgr_Vec4& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_Vec4>( &nativeInstance, false )
    {}

    property ::SelectMgr_Vec4* NativeInstance
    {
        ::SelectMgr_Vec4* get()
        {
            return static_cast<::SelectMgr_Vec4*>(_NativeInstance);
        }
    }

public:
    SelectMgr_Vec4();
    SelectMgr_Vec4(double theValue);
    SelectMgr_Vec4(double theX, double theY, double theZ, double theW);
    SelectMgr_Vec4(RDC::OCC::Graphic3d_Vec2d^ theVec2);
    SelectMgr_Vec4(RDC::OCC::Graphic3d_Vec3d^ theVec3, double theW);
    SelectMgr_Vec4(RDC::OCC::Graphic3d_Vec3d^ theVec3);
    static int Length();
    void SetValues(double theX, double theY, double theZ, double theW);
    double x();
    double r();
    double y();
    double g();
    double z();
    double b();
    double w();
    double a();
    RDC::OCC::Graphic3d_Vec2d^ xy();
    RDC::OCC::Graphic3d_Vec2d^ yx();
    RDC::OCC::Graphic3d_Vec2d^ xz();
    RDC::OCC::Graphic3d_Vec2d^ zx();
    RDC::OCC::Graphic3d_Vec2d^ xw();
    RDC::OCC::Graphic3d_Vec2d^ wx();
    RDC::OCC::Graphic3d_Vec2d^ yz();
    RDC::OCC::Graphic3d_Vec2d^ zy();
    RDC::OCC::Graphic3d_Vec2d^ yw();
    RDC::OCC::Graphic3d_Vec2d^ wy();
    RDC::OCC::Graphic3d_Vec2d^ zw();
    RDC::OCC::Graphic3d_Vec2d^ wz();
    RDC::OCC::Graphic3d_Vec3d^ xyz();
    RDC::OCC::Graphic3d_Vec3d^ xzy();
    RDC::OCC::Graphic3d_Vec3d^ yxz();
    RDC::OCC::Graphic3d_Vec3d^ yzx();
    RDC::OCC::Graphic3d_Vec3d^ zyx();
    RDC::OCC::Graphic3d_Vec3d^ zxy();
    RDC::OCC::Graphic3d_Vec3d^ xyw();
    RDC::OCC::Graphic3d_Vec3d^ xwy();
    RDC::OCC::Graphic3d_Vec3d^ yxw();
    RDC::OCC::Graphic3d_Vec3d^ ywx();
    RDC::OCC::Graphic3d_Vec3d^ wyx();
    RDC::OCC::Graphic3d_Vec3d^ wxy();
    RDC::OCC::Graphic3d_Vec3d^ xzw();
    RDC::OCC::Graphic3d_Vec3d^ xwz();
    RDC::OCC::Graphic3d_Vec3d^ zxw();
    RDC::OCC::Graphic3d_Vec3d^ zwx();
    RDC::OCC::Graphic3d_Vec3d^ wzx();
    RDC::OCC::Graphic3d_Vec3d^ wxz();
    RDC::OCC::Graphic3d_Vec3d^ yzw();
    RDC::OCC::Graphic3d_Vec3d^ ywz();
    RDC::OCC::Graphic3d_Vec3d^ zyw();
    RDC::OCC::Graphic3d_Vec3d^ zwy();
    RDC::OCC::Graphic3d_Vec3d^ wzy();
    RDC::OCC::Graphic3d_Vec3d^ wyz();
    RDC::OCC::Graphic3d_Vec3d^ rgb();
    RDC::OCC::Graphic3d_Vec3d^ rbg();
    RDC::OCC::Graphic3d_Vec3d^ grb();
    RDC::OCC::Graphic3d_Vec3d^ gbr();
    RDC::OCC::Graphic3d_Vec3d^ bgr();
    RDC::OCC::Graphic3d_Vec3d^ brg();
    bool IsEqual(RDC::OCC::SelectMgr_Vec4^ theOther);
    double GetData();
    double ChangeData();
    void Multiply(double theFactor);
    RDC::OCC::SelectMgr_Vec4^ Multiplied(double theFactor);
    RDC::OCC::SelectMgr_Vec4^ cwiseMin(RDC::OCC::SelectMgr_Vec4^ theVec);
    RDC::OCC::SelectMgr_Vec4^ cwiseMax(RDC::OCC::SelectMgr_Vec4^ theVec);
    RDC::OCC::SelectMgr_Vec4^ cwiseAbs();
    double maxComp();
    double minComp();
    double Dot(RDC::OCC::SelectMgr_Vec4^ theOther);
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class SelectMgr_Vec4

//---------------------------------------------------------------------
//  Class  SelectMgr_Mat4
//---------------------------------------------------------------------
public ref class SelectMgr_Mat4 sealed
    : public RDC::OCC::BaseClass<::SelectMgr_Mat4>
{

#ifdef Include_SelectMgr_Mat4_h
public:
    Include_SelectMgr_Mat4_h
#endif

public:
    SelectMgr_Mat4(::SelectMgr_Mat4* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_Mat4>( nativeInstance, true )
    {}

    SelectMgr_Mat4(::SelectMgr_Mat4& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_Mat4>( &nativeInstance, false )
    {}

    property ::SelectMgr_Mat4* NativeInstance
    {
        ::SelectMgr_Mat4* get()
        {
            return static_cast<::SelectMgr_Mat4*>(_NativeInstance);
        }
    }

public:
    SelectMgr_Mat4();
    static long long unsigned int Rows();
    static long long unsigned int Cols();
    static RDC::OCC::SelectMgr_Mat4^ Identity();
    static RDC::OCC::SelectMgr_Mat4^ Zero();
    double GetValue(long long unsigned int theRow, long long unsigned int theCol);
    double ChangeValue(long long unsigned int theRow, long long unsigned int theCol);
    void SetValue(long long unsigned int theRow, long long unsigned int theCol, double theValue);
    RDC::OCC::Graphic3d_Vec4d^ GetRow(long long unsigned int theRow);
    void SetRow(long long unsigned int theRow, RDC::OCC::Graphic3d_Vec3d^ theVec);
    RDC::OCC::Graphic3d_Vec4d^ GetColumn(long long unsigned int theCol);
    void SetColumn(long long unsigned int theCol, RDC::OCC::Graphic3d_Vec3d^ theVec);
    RDC::OCC::Graphic3d_Vec4d^ GetDiagonal();
    void SetDiagonal(RDC::OCC::Graphic3d_Vec3d^ theVec);
    /* Method skipped due to unknown mapping: NCollection_Mat3<double> GetMat3() */
    void InitZero();
    bool IsZero();
    void InitIdentity();
    bool IsIdentity();
    bool IsEqual(RDC::OCC::SelectMgr_Mat4^ theOther);
    double GetData();
    double ChangeData();
    static RDC::OCC::SelectMgr_Mat4^ Multiply(RDC::OCC::SelectMgr_Mat4^ theMatA, RDC::OCC::SelectMgr_Mat4^ theMatB);
    RDC::OCC::SelectMgr_Mat4^ Multiplied(RDC::OCC::SelectMgr_Mat4^ theMat);
    void Divide(double theFactor);
    RDC::OCC::SelectMgr_Mat4^ Divided(double theScalar);
    void Add(RDC::OCC::SelectMgr_Mat4^ theMat);
    void Subtract(RDC::OCC::SelectMgr_Mat4^ theMat);
    RDC::OCC::SelectMgr_Mat4^ Added(RDC::OCC::SelectMgr_Mat4^ theMat);
    RDC::OCC::SelectMgr_Mat4^ Subtracted(RDC::OCC::SelectMgr_Mat4^ theMat);
    RDC::OCC::SelectMgr_Mat4^ Negated();
    void Translate(RDC::OCC::Graphic3d_Vec3d^ theVec);
    RDC::OCC::SelectMgr_Mat4^ Transposed();
    void Transpose();
    bool Inverted(RDC::OCC::SelectMgr_Mat4^ theOutMx, double% theDet);
    double DeterminantMat3();
    RDC::OCC::SelectMgr_Mat4^ Adjoint();
    static RDC::OCC::SelectMgr_Mat4^ Map(double% theData);
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int parameter1, ) */
    bool Equals(System::Object^ obj) override;
}; // class SelectMgr_Mat4

//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfSelection
//---------------------------------------------------------------------
public ref class SelectMgr_SequenceOfSelection sealed
    : public RDC::OCC::BaseClass<::SelectMgr_SequenceOfSelection>
    , public IIndexEnumerable<RDC::OCC::SelectMgr_Selection^>
{

#ifdef Include_SelectMgr_SequenceOfSelection_h
public:
    Include_SelectMgr_SequenceOfSelection_h
#endif

public:
    SelectMgr_SequenceOfSelection(::SelectMgr_SequenceOfSelection* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_SequenceOfSelection>( nativeInstance, true )
    {}

    SelectMgr_SequenceOfSelection(::SelectMgr_SequenceOfSelection& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_SequenceOfSelection>( &nativeInstance, false )
    {}

    property ::SelectMgr_SequenceOfSelection* NativeInstance
    {
        ::SelectMgr_SequenceOfSelection* get()
        {
            return static_cast<::SelectMgr_SequenceOfSelection*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::SelectMgr_SequenceOfSelection::Iterator>
    {

#ifdef Include_SelectMgr_SequenceOfSelection_Iterator_h
    public:
        Include_SelectMgr_SequenceOfSelection_Iterator_h
#endif

    public:
        Iterator(::SelectMgr_SequenceOfSelection::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_SequenceOfSelection::Iterator>( nativeInstance, true )
        {}

        Iterator(::SelectMgr_SequenceOfSelection::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_SequenceOfSelection::Iterator>( &nativeInstance, false )
        {}

        property ::SelectMgr_SequenceOfSelection::Iterator* NativeInstance
        {
            ::SelectMgr_SequenceOfSelection::Iterator* get()
            {
                return static_cast<::SelectMgr_SequenceOfSelection::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::SelectMgr_Selection^ Value();
        RDC::OCC::SelectMgr_Selection^ ChangeValue();
        bool IsEqual(RDC::OCC::SelectMgr_SequenceOfSelection::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    SelectMgr_SequenceOfSelection();
    SelectMgr_SequenceOfSelection(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
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
    RDC::OCC::SelectMgr_SequenceOfSelection^ Assign(RDC::OCC::SelectMgr_SequenceOfSelection^ theOther);
    void Remove(RDC::OCC::SelectMgr_SequenceOfSelection::Iterator^ thePosition);
    void Append(RDC::OCC::SelectMgr_Selection^ theItem);
    void Prepend(RDC::OCC::SelectMgr_Selection^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::SelectMgr_Selection^ theItem);
    void InsertAfter(RDC::OCC::SelectMgr_SequenceOfSelection::Iterator^ thePosition, RDC::OCC::SelectMgr_Selection^ theItem);
    void Split(int theIndex, RDC::OCC::SelectMgr_SequenceOfSelection^ theSeq);
    RDC::OCC::SelectMgr_Selection^ First();
    RDC::OCC::SelectMgr_Selection^ ChangeFirst();
    RDC::OCC::SelectMgr_Selection^ Last();
    RDC::OCC::SelectMgr_Selection^ ChangeLast();
    virtual RDC::OCC::SelectMgr_Selection^ Value(int theIndex);
    RDC::OCC::SelectMgr_Selection^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::SelectMgr_Selection^ theItem);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::SelectMgr_Selection^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class SelectMgr_SequenceOfSelection

//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfOwner
//---------------------------------------------------------------------
public ref class SelectMgr_SequenceOfOwner sealed
    : public RDC::OCC::BaseClass<::SelectMgr_SequenceOfOwner>
    , public IIndexEnumerable<RDC::OCC::SelectMgr_EntityOwner^>
{

#ifdef Include_SelectMgr_SequenceOfOwner_h
public:
    Include_SelectMgr_SequenceOfOwner_h
#endif

public:
    SelectMgr_SequenceOfOwner(::SelectMgr_SequenceOfOwner* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_SequenceOfOwner>( nativeInstance, true )
    {}

    SelectMgr_SequenceOfOwner(::SelectMgr_SequenceOfOwner& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_SequenceOfOwner>( &nativeInstance, false )
    {}

    property ::SelectMgr_SequenceOfOwner* NativeInstance
    {
        ::SelectMgr_SequenceOfOwner* get()
        {
            return static_cast<::SelectMgr_SequenceOfOwner*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::SelectMgr_SequenceOfOwner::Iterator>
    {

#ifdef Include_SelectMgr_SequenceOfOwner_Iterator_h
    public:
        Include_SelectMgr_SequenceOfOwner_Iterator_h
#endif

    public:
        Iterator(::SelectMgr_SequenceOfOwner::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_SequenceOfOwner::Iterator>( nativeInstance, true )
        {}

        Iterator(::SelectMgr_SequenceOfOwner::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_SequenceOfOwner::Iterator>( &nativeInstance, false )
        {}

        property ::SelectMgr_SequenceOfOwner::Iterator* NativeInstance
        {
            ::SelectMgr_SequenceOfOwner::Iterator* get()
            {
                return static_cast<::SelectMgr_SequenceOfOwner::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::SelectMgr_EntityOwner^ Value();
        RDC::OCC::SelectMgr_EntityOwner^ ChangeValue();
        bool IsEqual(RDC::OCC::SelectMgr_SequenceOfOwner::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    SelectMgr_SequenceOfOwner();
    SelectMgr_SequenceOfOwner(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
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
    RDC::OCC::SelectMgr_SequenceOfOwner^ Assign(RDC::OCC::SelectMgr_SequenceOfOwner^ theOther);
    void Remove(RDC::OCC::SelectMgr_SequenceOfOwner::Iterator^ thePosition);
    void Append(RDC::OCC::SelectMgr_EntityOwner^ theItem);
    void Prepend(RDC::OCC::SelectMgr_EntityOwner^ theItem);
    void InsertBefore(int theIndex, RDC::OCC::SelectMgr_EntityOwner^ theItem);
    void InsertAfter(RDC::OCC::SelectMgr_SequenceOfOwner::Iterator^ thePosition, RDC::OCC::SelectMgr_EntityOwner^ theItem);
    void Split(int theIndex, RDC::OCC::SelectMgr_SequenceOfOwner^ theSeq);
    RDC::OCC::SelectMgr_EntityOwner^ First();
    RDC::OCC::SelectMgr_EntityOwner^ ChangeFirst();
    RDC::OCC::SelectMgr_EntityOwner^ Last();
    RDC::OCC::SelectMgr_EntityOwner^ ChangeLast();
    virtual RDC::OCC::SelectMgr_EntityOwner^ Value(int theIndex);
    RDC::OCC::SelectMgr_EntityOwner^ ChangeValue(int theIndex);
    void SetValue(int theIndex, RDC::OCC::SelectMgr_EntityOwner^ theItem);
    virtual System::Collections::Generic::IEnumerator<RDC::OCC::SelectMgr_EntityOwner^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class SelectMgr_SequenceOfOwner

//---------------------------------------------------------------------
//  Class  SelectMgr_IndexedDataMapOfOwnerCriterion
//---------------------------------------------------------------------
public ref class SelectMgr_IndexedDataMapOfOwnerCriterion sealed
    : public RDC::OCC::BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>
{

#ifdef Include_SelectMgr_IndexedDataMapOfOwnerCriterion_h
public:
    Include_SelectMgr_IndexedDataMapOfOwnerCriterion_h
#endif

public:
    SelectMgr_IndexedDataMapOfOwnerCriterion(::SelectMgr_IndexedDataMapOfOwnerCriterion* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>( nativeInstance, true )
    {}

    SelectMgr_IndexedDataMapOfOwnerCriterion(::SelectMgr_IndexedDataMapOfOwnerCriterion& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>( &nativeInstance, false )
    {}

    property ::SelectMgr_IndexedDataMapOfOwnerCriterion* NativeInstance
    {
        ::SelectMgr_IndexedDataMapOfOwnerCriterion* get()
        {
            return static_cast<::SelectMgr_IndexedDataMapOfOwnerCriterion*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion::Iterator>
    {

#ifdef Include_SelectMgr_IndexedDataMapOfOwnerCriterion_Iterator_h
    public:
        Include_SelectMgr_IndexedDataMapOfOwnerCriterion_Iterator_h
#endif

    public:
        Iterator(::SelectMgr_IndexedDataMapOfOwnerCriterion::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion::Iterator>( nativeInstance, true )
        {}

        Iterator(::SelectMgr_IndexedDataMapOfOwnerCriterion::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion::Iterator>( &nativeInstance, false )
        {}

        property ::SelectMgr_IndexedDataMapOfOwnerCriterion::Iterator* NativeInstance
        {
            ::SelectMgr_IndexedDataMapOfOwnerCriterion::Iterator* get()
            {
                return static_cast<::SelectMgr_IndexedDataMapOfOwnerCriterion::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::SelectMgr_SortCriterion^ Value();
        RDC::OCC::SelectMgr_SortCriterion^ ChangeValue();
        RDC::OCC::SelectMgr_EntityOwner^ Key();
        bool IsEqual(RDC::OCC::SelectMgr_IndexedDataMapOfOwnerCriterion::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    SelectMgr_IndexedDataMapOfOwnerCriterion();
    SelectMgr_IndexedDataMapOfOwnerCriterion(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    SelectMgr_IndexedDataMapOfOwnerCriterion(int theNbBuckets);
    void Exchange(RDC::OCC::SelectMgr_IndexedDataMapOfOwnerCriterion^ theOther);
    RDC::OCC::SelectMgr_IndexedDataMapOfOwnerCriterion^ Assign(RDC::OCC::SelectMgr_IndexedDataMapOfOwnerCriterion^ theOther);
    void ReSize(int N);
    int Add(RDC::OCC::SelectMgr_EntityOwner^ theKey1, RDC::OCC::SelectMgr_SortCriterion^ theItem);
    bool Contains(RDC::OCC::SelectMgr_EntityOwner^ theKey1);
    void Substitute(int theIndex, RDC::OCC::SelectMgr_EntityOwner^ theKey1, RDC::OCC::SelectMgr_SortCriterion^ theItem);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(RDC::OCC::SelectMgr_EntityOwner^ theKey1);
    RDC::OCC::SelectMgr_EntityOwner^ FindKey(int theIndex);
    RDC::OCC::SelectMgr_SortCriterion^ FindFromIndex(int theIndex);
    RDC::OCC::SelectMgr_SortCriterion^ ChangeFromIndex(int theIndex);
    int FindIndex(RDC::OCC::SelectMgr_EntityOwner^ theKey1);
    RDC::OCC::SelectMgr_SortCriterion^ FindFromKey(RDC::OCC::SelectMgr_EntityOwner^ theKey1);
    RDC::OCC::SelectMgr_SortCriterion^ ChangeFromKey(RDC::OCC::SelectMgr_EntityOwner^ theKey1);
    RDC::OCC::SelectMgr_SortCriterion^ Seek(RDC::OCC::SelectMgr_EntityOwner^ theKey1);
    RDC::OCC::SelectMgr_SortCriterion^ ChangeSeek(RDC::OCC::SelectMgr_EntityOwner^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class SelectMgr_IndexedDataMapOfOwnerCriterion

//---------------------------------------------------------------------
//  Class  SelectMgr_MapOfObjectSensitives
//---------------------------------------------------------------------
public ref class SelectMgr_MapOfObjectSensitives sealed
    : public RDC::OCC::BaseClass<::SelectMgr_MapOfObjectSensitives>
{

#ifdef Include_SelectMgr_MapOfObjectSensitives_h
public:
    Include_SelectMgr_MapOfObjectSensitives_h
#endif

public:
    SelectMgr_MapOfObjectSensitives(::SelectMgr_MapOfObjectSensitives* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_MapOfObjectSensitives>( nativeInstance, true )
    {}

    SelectMgr_MapOfObjectSensitives(::SelectMgr_MapOfObjectSensitives& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_MapOfObjectSensitives>( &nativeInstance, false )
    {}

    property ::SelectMgr_MapOfObjectSensitives* NativeInstance
    {
        ::SelectMgr_MapOfObjectSensitives* get()
        {
            return static_cast<::SelectMgr_MapOfObjectSensitives*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::SelectMgr_MapOfObjectSensitives::Iterator>
    {

#ifdef Include_SelectMgr_MapOfObjectSensitives_Iterator_h
    public:
        Include_SelectMgr_MapOfObjectSensitives_Iterator_h
#endif

    public:
        Iterator(::SelectMgr_MapOfObjectSensitives::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_MapOfObjectSensitives::Iterator>( nativeInstance, true )
        {}

        Iterator(::SelectMgr_MapOfObjectSensitives::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_MapOfObjectSensitives::Iterator>( &nativeInstance, false )
        {}

        property ::SelectMgr_MapOfObjectSensitives::Iterator* NativeInstance
        {
            ::SelectMgr_MapOfObjectSensitives::Iterator* get()
            {
                return static_cast<::SelectMgr_MapOfObjectSensitives::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        /* Method skipped due to unknown mapping: SelectMgr_SensitiveEntitySet Value() */
        /* Method skipped due to unknown mapping: SelectMgr_SensitiveEntitySet ChangeValue() */
        RDC::OCC::SelectMgr_SelectableObject^ Key();
    }; // class Iterator

    SelectMgr_MapOfObjectSensitives();
    SelectMgr_MapOfObjectSensitives(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    SelectMgr_MapOfObjectSensitives(int theNbBuckets);
    void Exchange(RDC::OCC::SelectMgr_MapOfObjectSensitives^ theOther);
    RDC::OCC::SelectMgr_MapOfObjectSensitives^ Assign(RDC::OCC::SelectMgr_MapOfObjectSensitives^ theOther);
    void ReSize(int N);
    /* Method skipped due to unknown mapping: bool Bind(SelectMgr_SelectableObject theKey, SelectMgr_SensitiveEntitySet theItem, ) */
    /* Method skipped due to unknown mapping: SelectMgr_SensitiveEntitySet Bound(SelectMgr_SelectableObject theKey, SelectMgr_SensitiveEntitySet theItem, ) */
    bool IsBound(RDC::OCC::SelectMgr_SelectableObject^ theKey);
    bool UnBind(RDC::OCC::SelectMgr_SelectableObject^ theKey);
    /* Method skipped due to unknown mapping: SelectMgr_SensitiveEntitySet Seek(SelectMgr_SelectableObject theKey, ) */
    /* Method skipped due to unknown mapping: SelectMgr_SensitiveEntitySet Find(SelectMgr_SelectableObject theKey, ) */
    /* Method skipped due to unknown mapping: SelectMgr_SensitiveEntitySet ChangeSeek(SelectMgr_SelectableObject theKey, ) */
    /* Method skipped due to unknown mapping: SelectMgr_SensitiveEntitySet ChangeFind(SelectMgr_SelectableObject theKey, ) */
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class SelectMgr_MapOfObjectSensitives

//---------------------------------------------------------------------
//  Class  SelectMgr_FrustumCache
//---------------------------------------------------------------------
public ref class SelectMgr_FrustumCache sealed
    : public RDC::OCC::BaseClass<::SelectMgr_FrustumCache>
{

#ifdef Include_SelectMgr_FrustumCache_h
public:
    Include_SelectMgr_FrustumCache_h
#endif

public:
    SelectMgr_FrustumCache(::SelectMgr_FrustumCache* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_FrustumCache>( nativeInstance, true )
    {}

    SelectMgr_FrustumCache(::SelectMgr_FrustumCache& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_FrustumCache>( &nativeInstance, false )
    {}

    property ::SelectMgr_FrustumCache* NativeInstance
    {
        ::SelectMgr_FrustumCache* get()
        {
            return static_cast<::SelectMgr_FrustumCache*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::SelectMgr_FrustumCache::Iterator>
    {

#ifdef Include_SelectMgr_FrustumCache_Iterator_h
    public:
        Include_SelectMgr_FrustumCache_Iterator_h
#endif

    public:
        Iterator(::SelectMgr_FrustumCache::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_FrustumCache::Iterator>( nativeInstance, true )
        {}

        Iterator(::SelectMgr_FrustumCache::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_FrustumCache::Iterator>( &nativeInstance, false )
        {}

        property ::SelectMgr_FrustumCache::Iterator* NativeInstance
        {
            ::SelectMgr_FrustumCache::Iterator* get()
            {
                return static_cast<::SelectMgr_FrustumCache::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::SelectMgr_SelectingVolumeManager^ Value();
        RDC::OCC::SelectMgr_SelectingVolumeManager^ ChangeValue();
        int Key();
    }; // class Iterator

    SelectMgr_FrustumCache();
    SelectMgr_FrustumCache(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    SelectMgr_FrustumCache(int theNbBuckets);
    void Exchange(RDC::OCC::SelectMgr_FrustumCache^ theOther);
    RDC::OCC::SelectMgr_FrustumCache^ Assign(RDC::OCC::SelectMgr_FrustumCache^ theOther);
    void ReSize(int N);
    bool Bind(int theKey, RDC::OCC::SelectMgr_SelectingVolumeManager^ theItem);
    RDC::OCC::SelectMgr_SelectingVolumeManager^ Bound(int theKey, RDC::OCC::SelectMgr_SelectingVolumeManager^ theItem);
    bool IsBound(int theKey);
    bool UnBind(int theKey);
    RDC::OCC::SelectMgr_SelectingVolumeManager^ Seek(int theKey);
    RDC::OCC::SelectMgr_SelectingVolumeManager^ Find(int theKey);
    RDC::OCC::SelectMgr_SelectingVolumeManager^ ChangeSeek(int theKey);
    RDC::OCC::SelectMgr_SelectingVolumeManager^ ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class SelectMgr_FrustumCache

//---------------------------------------------------------------------
//  Class  SelectMgr_IndexedMapOfHSensitive
//---------------------------------------------------------------------
public ref class SelectMgr_IndexedMapOfHSensitive sealed
    : public RDC::OCC::BaseClass<::SelectMgr_IndexedMapOfHSensitive>
{

#ifdef Include_SelectMgr_IndexedMapOfHSensitive_h
public:
    Include_SelectMgr_IndexedMapOfHSensitive_h
#endif

public:
    SelectMgr_IndexedMapOfHSensitive(::SelectMgr_IndexedMapOfHSensitive* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_IndexedMapOfHSensitive>( nativeInstance, true )
    {}

    SelectMgr_IndexedMapOfHSensitive(::SelectMgr_IndexedMapOfHSensitive& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_IndexedMapOfHSensitive>( &nativeInstance, false )
    {}

    property ::SelectMgr_IndexedMapOfHSensitive* NativeInstance
    {
        ::SelectMgr_IndexedMapOfHSensitive* get()
        {
            return static_cast<::SelectMgr_IndexedMapOfHSensitive*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::SelectMgr_IndexedMapOfHSensitive::Iterator>
    {

#ifdef Include_SelectMgr_IndexedMapOfHSensitive_Iterator_h
    public:
        Include_SelectMgr_IndexedMapOfHSensitive_Iterator_h
#endif

    public:
        Iterator(::SelectMgr_IndexedMapOfHSensitive::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_IndexedMapOfHSensitive::Iterator>( nativeInstance, true )
        {}

        Iterator(::SelectMgr_IndexedMapOfHSensitive::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_IndexedMapOfHSensitive::Iterator>( &nativeInstance, false )
        {}

        property ::SelectMgr_IndexedMapOfHSensitive::Iterator* NativeInstance
        {
            ::SelectMgr_IndexedMapOfHSensitive::Iterator* get()
            {
                return static_cast<::SelectMgr_IndexedMapOfHSensitive::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::SelectMgr_SensitiveEntity^ Value();
        bool IsEqual(RDC::OCC::SelectMgr_IndexedMapOfHSensitive::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    SelectMgr_IndexedMapOfHSensitive();
    SelectMgr_IndexedMapOfHSensitive(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    SelectMgr_IndexedMapOfHSensitive(int theNbBuckets);
    void Exchange(RDC::OCC::SelectMgr_IndexedMapOfHSensitive^ theOther);
    RDC::OCC::SelectMgr_IndexedMapOfHSensitive^ Assign(RDC::OCC::SelectMgr_IndexedMapOfHSensitive^ theOther);
    void ReSize(int theExtent);
    int Add(RDC::OCC::SelectMgr_SensitiveEntity^ theKey1);
    bool Contains(RDC::OCC::SelectMgr_SensitiveEntity^ theKey1);
    void Substitute(int theIndex, RDC::OCC::SelectMgr_SensitiveEntity^ theKey1);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    bool RemoveKey(RDC::OCC::SelectMgr_SensitiveEntity^ theKey1);
    RDC::OCC::SelectMgr_SensitiveEntity^ FindKey(int theIndex);
    int FindIndex(RDC::OCC::SelectMgr_SensitiveEntity^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class SelectMgr_IndexedMapOfHSensitive

//---------------------------------------------------------------------
//  Class  SelectMgr_MapOfOwners
//---------------------------------------------------------------------
public ref class SelectMgr_MapOfOwners sealed
    : public RDC::OCC::BaseClass<::SelectMgr_MapOfOwners>
{

#ifdef Include_SelectMgr_MapOfOwners_h
public:
    Include_SelectMgr_MapOfOwners_h
#endif

public:
    SelectMgr_MapOfOwners(::SelectMgr_MapOfOwners* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_MapOfOwners>( nativeInstance, true )
    {}

    SelectMgr_MapOfOwners(::SelectMgr_MapOfOwners& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_MapOfOwners>( &nativeInstance, false )
    {}

    property ::SelectMgr_MapOfOwners* NativeInstance
    {
        ::SelectMgr_MapOfOwners* get()
        {
            return static_cast<::SelectMgr_MapOfOwners*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::SelectMgr_MapOfOwners::Iterator>
    {

#ifdef Include_SelectMgr_MapOfOwners_Iterator_h
    public:
        Include_SelectMgr_MapOfOwners_Iterator_h
#endif

    public:
        Iterator(::SelectMgr_MapOfOwners::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_MapOfOwners::Iterator>( nativeInstance, true )
        {}

        Iterator(::SelectMgr_MapOfOwners::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_MapOfOwners::Iterator>( &nativeInstance, false )
        {}

        property ::SelectMgr_MapOfOwners::Iterator* NativeInstance
        {
            ::SelectMgr_MapOfOwners::Iterator* get()
            {
                return static_cast<::SelectMgr_MapOfOwners::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::SelectMgr_MapOfOwners::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::SelectMgr_MapOfOwners::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        int Value();
        RDC::OCC::SelectMgr_EntityOwner^ Key();
    }; // class Iterator

    SelectMgr_MapOfOwners();
    SelectMgr_MapOfOwners(int theNbBuckets, RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    SelectMgr_MapOfOwners(int theNbBuckets);
    void Exchange(RDC::OCC::SelectMgr_MapOfOwners^ theOther);
    RDC::OCC::SelectMgr_MapOfOwners^ Assign(RDC::OCC::SelectMgr_MapOfOwners^ theOther);
    void ReSize(int N);
    bool Bind(RDC::OCC::SelectMgr_EntityOwner^ theKey, int theItem);
    int Bound(RDC::OCC::SelectMgr_EntityOwner^ theKey, int theItem);
    bool IsBound(RDC::OCC::SelectMgr_EntityOwner^ theKey);
    bool UnBind(RDC::OCC::SelectMgr_EntityOwner^ theKey);
    int Seek(RDC::OCC::SelectMgr_EntityOwner^ theKey);
    int Find(RDC::OCC::SelectMgr_EntityOwner^ theKey);
    int ChangeSeek(RDC::OCC::SelectMgr_EntityOwner^ theKey);
    int ChangeFind(RDC::OCC::SelectMgr_EntityOwner^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class SelectMgr_MapOfOwners

//---------------------------------------------------------------------
//  Class  SelectMgr_TriangFrustums
//---------------------------------------------------------------------
public ref class SelectMgr_TriangFrustums sealed
    : public RDC::OCC::NCollection_BaseList
{

#ifdef Include_SelectMgr_TriangFrustums_h
public:
    Include_SelectMgr_TriangFrustums_h
#endif

public:
    SelectMgr_TriangFrustums(::SelectMgr_TriangFrustums* nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    SelectMgr_TriangFrustums(::SelectMgr_TriangFrustums& nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    property ::SelectMgr_TriangFrustums* NativeInstance
    {
        ::SelectMgr_TriangFrustums* get()
        {
            return static_cast<::SelectMgr_TriangFrustums*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::SelectMgr_TriangFrustums::Iterator>
    {

#ifdef Include_SelectMgr_TriangFrustums_Iterator_h
    public:
        Include_SelectMgr_TriangFrustums_Iterator_h
#endif

    public:
        Iterator(::SelectMgr_TriangFrustums::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_TriangFrustums::Iterator>( nativeInstance, true )
        {}

        Iterator(::SelectMgr_TriangFrustums::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_TriangFrustums::Iterator>( &nativeInstance, false )
        {}

        property ::SelectMgr_TriangFrustums::Iterator* NativeInstance
        {
            ::SelectMgr_TriangFrustums::Iterator* get()
            {
                return static_cast<::SelectMgr_TriangFrustums::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::SelectMgr_TriangularFrustum^ Value();
        RDC::OCC::SelectMgr_TriangularFrustum^ ChangeValue();
    }; // class Iterator

    SelectMgr_TriangFrustums();
    SelectMgr_TriangFrustums(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    RDC::OCC::SelectMgr_TriangFrustums^ Assign(RDC::OCC::SelectMgr_TriangFrustums^ theOther);
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    RDC::OCC::SelectMgr_TriangularFrustum^ First();
    RDC::OCC::SelectMgr_TriangularFrustum^ Last();
    RDC::OCC::SelectMgr_TriangularFrustum^ Append(RDC::OCC::SelectMgr_TriangularFrustum^ theItem);
    RDC::OCC::SelectMgr_TriangularFrustum^ Prepend(RDC::OCC::SelectMgr_TriangularFrustum^ theItem);
    void RemoveFirst();
    void Remove(RDC::OCC::SelectMgr_TriangFrustums::Iterator^ theIter);
    RDC::OCC::SelectMgr_TriangularFrustum^ InsertBefore(RDC::OCC::SelectMgr_TriangularFrustum^ theItem, RDC::OCC::SelectMgr_TriangFrustums::Iterator^ theIter);
    RDC::OCC::SelectMgr_TriangularFrustum^ InsertAfter(RDC::OCC::SelectMgr_TriangularFrustum^ theItem, RDC::OCC::SelectMgr_TriangFrustums::Iterator^ theIter);
    void Reverse();
}; // class SelectMgr_TriangFrustums

//---------------------------------------------------------------------
//  Class  SelectMgr_Selection
//---------------------------------------------------------------------
/// <summary>
/// Represents the state of a given selection mode for a
/// Selectable Object. Contains all the sensitive entities available for this mode.
/// An interactive object can have an indefinite number of
/// modes of selection, each representing a
/// "decomposition" into sensitive primitives; each
/// primitive has an Owner (SelectMgr_EntityOwner)
/// which allows us to identify the exact entity which has
/// been detected. Each Selection mode is identified by
/// an index. The set of sensitive primitives which
/// correspond to a given mode is stocked in a
/// SelectMgr_Selection object. By Convention, the
/// default selection mode which allows us to grasp the
/// Interactive object in its entirety will be mode 0.
/// AIS_Trihedron : 4 selection modes
/// -   mode 0 : selection of a trihedron
/// -   mode 1 : selection of the origin of the trihedron
/// -   mode 2 : selection of the axes
/// -   mode 3 : selection of the planes XOY, YOZ, XOZ
/// when you activate one of modes 1 2 3 4 , you pick AIS objects of type:
/// -   AIS_Point
/// -   AIS_Axis (and information on the type of axis)
/// -   AIS_Plane (and information on the type of plane).
/// AIS_PlaneTrihedron offers 3 selection modes:
/// -   mode 0 : selection of the whole trihedron
/// -   mode 1 : selection of the origin of the trihedron
/// -   mode 2 : selection of the axes - same remarks as for the Trihedron.
/// AIS_Shape : 7 maximum selection modes, depending
/// on the complexity of the shape :
/// -   mode 0 : selection of the AIS_Shape
/// -   mode 1 : selection of the vertices
/// -   mode 2 : selection of the edges
/// -   mode 3 : selection of the wires
/// -   mode 4 : selection of the faces
/// -   mode 5 : selection of the shells
/// -   mode 6 :   selection of the constituent solids.
/// </summary>
public ref class SelectMgr_Selection sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_SelectMgr_Selection_h
public:
    Include_SelectMgr_Selection_h
#endif

public:
    SelectMgr_Selection(::SelectMgr_Selection* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    SelectMgr_Selection(::SelectMgr_Selection& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::SelectMgr_Selection* NativeInstance
    {
        ::SelectMgr_Selection* get()
        {
            return static_cast<::SelectMgr_Selection*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a selection object defined by the selection mode IdMode.
    /// The default setting 0 is the selection mode for a shape in its entirety.
    /// </summary>
    SelectMgr_Selection(int theModeIdx);
    /// <summary>
    /// Constructs a selection object defined by the selection mode IdMode.
    /// The default setting 0 is the selection mode for a shape in its entirety.
    /// </summary>
    SelectMgr_Selection();
    void Destroy();
    /* Method skipped due to unknown mapping: void Add(Select3D_SensitiveEntity theSensitive, ) */
    /// <summary>
    /// empties the selection from all the stored entities
    /// </summary>
    void Clear();
    /// <summary>
    /// returns true if no sensitive entity is stored.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// returns the selection mode represented by this selection
    /// </summary>
    int Mode();
    /* Method skipped due to unknown mapping: NCollection_DynamicArray<opencascade::handle<SelectMgr_SensitiveEntity>> Entities() */
    /* Method skipped due to unknown mapping: NCollection_DynamicArray<opencascade::handle<SelectMgr_SensitiveEntity>> ChangeEntities() */
    /// <summary>
    /// Returns the flag UpdateFlag.
    /// This flage gives the update status of this framework
    /// in a ViewerSelector object:
    /// -   full
    /// -   partial, or
    /// -   none.
    /// </summary>
    RDC::OCC::SelectMgr_TypeOfUpdate UpdateStatus();
    void UpdateStatus(RDC::OCC::SelectMgr_TypeOfUpdate theStatus);
    void UpdateBVHStatus(RDC::OCC::SelectMgr_TypeOfBVHUpdate theStatus);
    RDC::OCC::SelectMgr_TypeOfBVHUpdate BVHUpdateStatus();
    /// <summary>
    /// Returns status of selection
    /// </summary>
    RDC::OCC::SelectMgr_StateOfSelection GetSelectionState();
    /// <summary>
    /// Sets status of selection
    /// </summary>
    void SetSelectionState(RDC::OCC::SelectMgr_StateOfSelection theState);
    /// <summary>
    /// Returns sensitivity of the selection
    /// </summary>
    int Sensitivity();
    /// <summary>
    /// Changes sensitivity of the selection and all its entities to the given value.
    /// IMPORTANT: This method does not update any outer selection structures, so for
    /// proper updates use SelectMgr_SelectionManager::SetSelectionSensitivity method.
    /// </summary>
    void SetSensitivity(int theNewSens);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::SelectMgr_Selection^ CreateDowncasted(::SelectMgr_Selection* instance);
}; // class SelectMgr_Selection

//---------------------------------------------------------------------
//  Class  SelectMgr
//---------------------------------------------------------------------
/// <summary>
/// Auxiliary tools for SelectMgr package.
/// </summary>
public ref class SelectMgr sealed
    : public RDC::OCC::BaseClass<::SelectMgr>
{

#ifdef Include_SelectMgr_h
public:
    Include_SelectMgr_h
#endif

public:
    SelectMgr(::SelectMgr* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr>( nativeInstance, true )
    {}

    SelectMgr(::SelectMgr& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr>( &nativeInstance, false )
    {}

    property ::SelectMgr* NativeInstance
    {
        ::SelectMgr* get()
        {
            return static_cast<::SelectMgr*>(_NativeInstance);
        }
    }

public:
    SelectMgr();
    /// <summary>
    /// Compute debug presentation for sensitive objects.
    /// </summary>
    static void ComputeSensitivePrs(RDC::OCC::Graphic3d_Structure^ theStructure, RDC::OCC::SelectMgr_Selection^ theSel, RDC::OCC::Trsf theLoc, RDC::OCC::Graphic3d_TransformPers^ theTrsfPers);
}; // class SelectMgr

//---------------------------------------------------------------------
//  Class  SelectMgr_EntityOwner
//---------------------------------------------------------------------
/// <summary>
/// A framework to define classes of owners of sensitive primitives.
/// The owner is the link between application and selection data structures.
/// For the application to make its own objects selectable, it must define owner classes inheriting this framework.
/// </summary>
public ref class SelectMgr_EntityOwner
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_SelectMgr_EntityOwner_h
public:
    Include_SelectMgr_EntityOwner_h
#endif

protected:
    SelectMgr_EntityOwner(InitMode init)
        : RDC::OCC::Standard_Transient( init )
    {}

public:
    SelectMgr_EntityOwner(::SelectMgr_EntityOwner* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    SelectMgr_EntityOwner(::SelectMgr_EntityOwner& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::SelectMgr_EntityOwner* NativeInstance
    {
        ::SelectMgr_EntityOwner* get()
        {
            return static_cast<::SelectMgr_EntityOwner*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the selection priority aPriority.
    /// </summary>
    SelectMgr_EntityOwner(int aPriority);
    /// <summary>
    /// Initializes the selection priority aPriority.
    /// </summary>
    SelectMgr_EntityOwner();
    /// <summary>
    /// Constructs a framework with the selectable object
    /// anSO being attributed the selection priority aPriority.
    /// </summary>
    SelectMgr_EntityOwner(RDC::OCC::SelectMgr_SelectableObject^ aSO, int aPriority);
    /// <summary>
    /// Constructs a framework with the selectable object
    /// anSO being attributed the selection priority aPriority.
    /// </summary>
    SelectMgr_EntityOwner(RDC::OCC::SelectMgr_SelectableObject^ aSO);
    /// <summary>
    /// Constructs a framework from existing one
    /// anSO being attributed the selection priority aPriority.
    /// </summary>
    SelectMgr_EntityOwner(RDC::OCC::SelectMgr_EntityOwner^ theOwner, int aPriority);
    /// <summary>
    /// Return selection priority (within range [0-9]) for results with the same depth; 0 by default.
    /// Example - selection of shapes:
    /// the owners are selectable objects (presentations) a user can give vertex priority [3], edges [2] faces [1] shape [0],
    /// so that if during selection one vertex one edge and one face are simultaneously detected, the vertex will only be hilighted.
    /// </summary>
    int Priority();
    /// <summary>
    /// Sets the selectable priority of the owner within range [0-9].
    /// </summary>
    void SetPriority(int thePriority);
    /// <summary>
    /// Returns true if there is a selectable object to serve as an owner.
    /// </summary>
    bool HasSelectable();
    /// <summary>
    /// Returns a selectable object detected in the working context.
    /// </summary>
    RDC::OCC::SelectMgr_SelectableObject^ Selectable();
    /// <summary>
    /// Sets the selectable object.
    /// </summary>
    void SetSelectable(RDC::OCC::SelectMgr_SelectableObject^ theSelObj);
    /// <summary>
    /// Handle mouse button click event.
    /// Does nothing by default and returns FALSE.
    /// </summary>
    /// <param name="thePoint">
    ///      mouse cursor position
    /// </param>
    /// <param name="theButton">
    ///     clicked button
    /// </param>
    /// <param name="theModifiers">
    ///  key modifiers
    /// </param>
    /// <param name="theIsDoubleClick">
    /// flag indicating double mouse click
    /// </param>
    /// <returns>
    /// TRUE if object handled click
    /// </returns>
    bool HandleMouseClick(RDC::OCC::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick);
    /// <summary>
    /// Returns true if the presentation manager highlights selections corresponding to the selection mode.
    /// </summary>
    bool IsHilighted(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, int theMode);
    /// <summary>
    /// Returns true if the presentation manager highlights selections corresponding to the selection mode.
    /// </summary>
    bool IsHilighted(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr);
    /// <summary>
    /// Highlights selectable object's presentation with display mode in presentation manager with given highlight style.
    /// Also a check for auto-highlight is performed - if selectable object manages highlighting on its own,
    /// execution will be passed to SelectMgr_SelectableObject::HilightOwnerWithColor method.
    /// </summary>
    void HilightWithColor(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, RDC::OCC::Prs3d_Drawer^ theStyle, int theMode);
    /// <summary>
    /// Highlights selectable object's presentation with display mode in presentation manager with given highlight style.
    /// Also a check for auto-highlight is performed - if selectable object manages highlighting on its own,
    /// execution will be passed to SelectMgr_SelectableObject::HilightOwnerWithColor method.
    /// </summary>
    void HilightWithColor(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, RDC::OCC::Prs3d_Drawer^ theStyle);
    /// <summary>
    /// Removes highlighting from the owner of a detected selectable object in the presentation manager.
    /// This object could be the owner of a sensitive primitive.
    /// </summary>
    /// <param name="thePrsMgr">
    /// presentation manager
    /// </param>
    /// <param name="theMode">
    ///   obsolete argument for compatibility, should be ignored by implementations
    /// </param>
    void Unhilight(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, int theMode);
    /// <summary>
    /// Removes highlighting from the owner of a detected selectable object in the presentation manager.
    /// This object could be the owner of a sensitive primitive.
    /// </summary>
    /// <param name="thePrsMgr">
    /// presentation manager
    /// </param>
    /// <param name="theMode">
    ///   obsolete argument for compatibility, should be ignored by implementations
    /// </param>
    void Unhilight(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr);
    /// <summary>
    /// Clears the owners matching the value of the selection
    /// mode aMode from the presentation manager object aPM.
    /// </summary>
    void Clear(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, int theMode);
    /// <summary>
    /// Clears the owners matching the value of the selection
    /// mode aMode from the presentation manager object aPM.
    /// </summary>
    void Clear(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr);
    /// <summary>
    /// Returns TRUE if selectable has transformation.
    /// </summary>
    bool HasLocation();
    /// <summary>
    /// Returns transformation of selectable.
    /// </summary>
    RDC::OCC::TopLoc_Location^ Location();
    /// <summary>
    /// Change owner location (callback for handling change of location of selectable object).
    /// </summary>
    void SetLocation(RDC::OCC::TopLoc_Location^ theLocation);
    /// <summary>
    /// </summary>
    /// <returns>
    /// Standard_True if the owner is selected.
    /// </returns>
    bool IsSelected();
    /// <summary>
    /// Set the state of the owner.
    /// </summary>
    /// <param name="theIsSelected">
    /// [in] shows if owner is selected.
    /// </param>
    void SetSelected(bool theIsSelected);
    /// <summary>
    /// If the object needs to be selected, it returns true.
    /// </summary>
    /// <param name="in]">
    /// theSelScheme  selection scheme
    /// </param>
    /// <param name="in]">
    /// theIsDetected flag of object detection
    /// </param>
    bool Select(RDC::OCC::AIS_SelectionScheme theSelScheme, bool theIsDetected);
    /// <summary>
    /// Returns selection state.
    /// </summary>
    int State();
    /// <summary>
    /// Set the state of the owner.
    /// The method is deprecated. Use SetSelected() instead.
    /// </summary>
    void State(int theStatus);
    /// <summary>
    /// if owner is not auto hilighted, for group contains many such owners will be called one method HilightSelected of SelectableObject
    /// </summary>
    bool IsAutoHilight();
    /// <summary>
    /// if this method returns TRUE the owner will always call method Hilight for SelectableObject when the owner is detected.
    /// By default it always return FALSE.
    /// </summary>
    bool IsForcedHilight();
    /// <summary>
    /// Set Z layer ID and update all presentations.
    /// </summary>
    void SetZLayer(int theLayerId);
    /// <summary>
    /// Implements immediate application of location transformation of parent object to dynamic highlight structure
    /// </summary>
    void UpdateHighlightTrsf(RDC::OCC::V3d_Viewer^ theViewer, RDC::OCC::PrsMgr_PresentationManager^ theManager, int theDispMode);
    /// <summary>
    /// Returns true if pointer to selectable object of this owner is equal to the given one
    /// </summary>
    bool IsSameSelectable(RDC::OCC::SelectMgr_SelectableObject^ theOther);
    /// <summary>
    /// Returns TRUE if this owner points to a part of object and FALSE for entire object.
    /// </summary>
    bool ComesFromDecomposition();
    /// <summary>
    /// Sets flag indicating this owner points to a part of object (TRUE) or to entire object (FALSE).
    /// </summary>
    void SetComesFromDecomposition(bool theIsFromDecomposition);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// Sets the selectable object.
    /// </summary>
    void Set(RDC::OCC::SelectMgr_SelectableObject^ theSelObj);
    /// <summary>
    /// sets the selectable priority of the owner
    /// </summary>
    void Set(int thePriority);
    static RDC::OCC::SelectMgr_EntityOwner^ CreateDowncasted(::SelectMgr_EntityOwner* instance);
}; // class SelectMgr_EntityOwner

//---------------------------------------------------------------------
//  Class  SelectMgr_Filter
//---------------------------------------------------------------------
/// <summary>
/// The root class to define filter objects for selection.
/// Advance handling of objects requires the services of
/// filters. These only allow dynamic detection and
/// selection of objects which correspond to the criteria defined in each.
/// Eight standard filters inheriting SelectMgr_Filter are
/// defined in Open CASCADE.
/// You can create your own filters by defining new filter
/// classes inheriting this framework. You use these
/// filters by loading them into an AIS interactive context.
/// </summary>
public ref class SelectMgr_Filter
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_SelectMgr_Filter_h
public:
    Include_SelectMgr_Filter_h
#endif

protected:
    SelectMgr_Filter(InitMode init)
        : RDC::OCC::Standard_Transient( init )
    {}

public:
    SelectMgr_Filter(::SelectMgr_Filter* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    SelectMgr_Filter(::SelectMgr_Filter& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::SelectMgr_Filter* NativeInstance
    {
        ::SelectMgr_Filter* get()
        {
            return static_cast<::SelectMgr_Filter*>(_NativeInstance);
        }
    }

public:
    SelectMgr_Filter();
    /// <summary>
    /// Indicates that the selected Interactive Object
    /// passes the filter. The owner, anObj, can be either
    /// direct or user. A direct owner is the corresponding
    /// construction element, whereas a user is the
    /// compound shape of which the entity forms a part.
    /// When an object is detected by the mouse - in AIS,
    /// this is done through a context selector - its owner
    /// is passed to the filter as an argument.
    /// If the object returns Standard_True, it is kept; if
    /// not, it is rejected.
    /// If you are creating a filter class inheriting this
    /// framework, and the daughter class is to be used in
    /// an AIS local context, you will need to implement the
    /// virtual function ActsOn.
    /// </summary>
    bool IsOk(RDC::OCC::SelectMgr_EntityOwner^ anObj);
    /// <summary>
    /// Returns true in an AIS local context, if this filter
    /// operates on a type of subshape defined in a filter
    /// class inheriting this framework.
    /// This function completes IsOk in an AIS local context.
    /// </summary>
    bool ActsOn(RDC::OCC::TopAbs_ShapeEnum aStandardMode);
    static RDC::OCC::SelectMgr_Filter^ CreateDowncasted(::SelectMgr_Filter* instance);
}; // class SelectMgr_Filter

//---------------------------------------------------------------------
//  Class  SelectMgr_CompositionFilter
//---------------------------------------------------------------------
/// <summary>
/// A framework to define a compound filter composed of
/// two or more simple filters.
/// </summary>
public ref class SelectMgr_CompositionFilter
    : public RDC::OCC::SelectMgr_Filter
{

#ifdef Include_SelectMgr_CompositionFilter_h
public:
    Include_SelectMgr_CompositionFilter_h
#endif

protected:
    SelectMgr_CompositionFilter(InitMode init)
        : RDC::OCC::SelectMgr_Filter( init )
    {}

public:
    SelectMgr_CompositionFilter(::SelectMgr_CompositionFilter* nativeInstance)
        : RDC::OCC::SelectMgr_Filter( nativeInstance )
    {}

    SelectMgr_CompositionFilter(::SelectMgr_CompositionFilter& nativeInstance)
        : RDC::OCC::SelectMgr_Filter( nativeInstance )
    {}

    property ::SelectMgr_CompositionFilter* NativeInstance
    {
        ::SelectMgr_CompositionFilter* get()
        {
            return static_cast<::SelectMgr_CompositionFilter*>(_NativeInstance);
        }
    }

public:
    SelectMgr_CompositionFilter();
    /// <summary>
    /// Adds the filter afilter to a filter object created by a
    /// filter class inheriting this framework.
    /// </summary>
    void Add(RDC::OCC::SelectMgr_Filter^ afilter);
    /// <summary>
    /// Removes the filter aFilter from this framework.
    /// </summary>
    void Remove(RDC::OCC::SelectMgr_Filter^ aFilter);
    /// <summary>
    /// Returns true if this framework is empty.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Returns true if the filter aFilter is in this framework.
    /// </summary>
    bool IsIn(RDC::OCC::SelectMgr_Filter^ aFilter);
    /// <summary>
    /// Returns the list of stored filters from this framework.
    /// </summary>
    RDC::OCC::SelectMgr_ListOfFilter^ StoredFilters();
    /// <summary>
    /// Clears the filters used in this framework.
    /// </summary>
    void Clear();
    bool ActsOn(RDC::OCC::TopAbs_ShapeEnum aStandardMode);
    static RDC::OCC::SelectMgr_CompositionFilter^ CreateDowncasted(::SelectMgr_CompositionFilter* instance);
}; // class SelectMgr_CompositionFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_AndFilter
//---------------------------------------------------------------------
/// <summary>
/// A framework to define a selection filter for two or
/// more types of entity.
/// </summary>
public ref class SelectMgr_AndFilter sealed
    : public RDC::OCC::SelectMgr_CompositionFilter
{

#ifdef Include_SelectMgr_AndFilter_h
public:
    Include_SelectMgr_AndFilter_h
#endif

public:
    SelectMgr_AndFilter(::SelectMgr_AndFilter* nativeInstance)
        : RDC::OCC::SelectMgr_CompositionFilter( nativeInstance )
    {}

    SelectMgr_AndFilter(::SelectMgr_AndFilter& nativeInstance)
        : RDC::OCC::SelectMgr_CompositionFilter( nativeInstance )
    {}

    property ::SelectMgr_AndFilter* NativeInstance
    {
        ::SelectMgr_AndFilter* get()
        {
            return static_cast<::SelectMgr_AndFilter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty selection filter object for two or
    /// more types of entity.
    /// </summary>
    SelectMgr_AndFilter();
    bool IsOk(RDC::OCC::SelectMgr_EntityOwner^ anobj);
    static RDC::OCC::SelectMgr_AndFilter^ CreateDowncasted(::SelectMgr_AndFilter* instance);
}; // class SelectMgr_AndFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_AndOrFilter
//---------------------------------------------------------------------
/// <summary>
/// A framework to define an OR or AND selection filter.
/// To use an AND selection filter call SetUseOrFilter with False parameter.
/// By default the OR selection filter is used.
/// </summary>
public ref class SelectMgr_AndOrFilter sealed
    : public RDC::OCC::SelectMgr_CompositionFilter
{

#ifdef Include_SelectMgr_AndOrFilter_h
public:
    Include_SelectMgr_AndOrFilter_h
#endif

public:
    SelectMgr_AndOrFilter(::SelectMgr_AndOrFilter* nativeInstance)
        : RDC::OCC::SelectMgr_CompositionFilter( nativeInstance )
    {}

    SelectMgr_AndOrFilter(::SelectMgr_AndOrFilter& nativeInstance)
        : RDC::OCC::SelectMgr_CompositionFilter( nativeInstance )
    {}

    property ::SelectMgr_AndOrFilter* NativeInstance
    {
        ::SelectMgr_AndOrFilter* get()
        {
            return static_cast<::SelectMgr_AndOrFilter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty selection filter.
    /// </summary>
    SelectMgr_AndOrFilter(RDC::OCC::SelectMgr_FilterType theFilterType);
    /// <summary>
    /// Indicates that the selected Interactive Object passes the filter.
    /// </summary>
    bool IsOk(RDC::OCC::SelectMgr_EntityOwner^ theObj);
    /* Method skipped due to unknown mapping: void SetDisabledObjects(NCollection_Shared<NCollection_Map<const Standard_Transient *, NCollection_DefaultHasher<const Standard_Transient *>>, void theObjects, ) */
    /// <summary>
    /// </summary>
    /// <returns>
    /// a selection filter type (@sa SelectMgr_FilterType).
    /// </returns>
    RDC::OCC::SelectMgr_FilterType FilterType();
    /// <summary>
    /// Sets a selection filter type.
    /// SelectMgr_FilterType_OR selection filter is used be default.
    /// </summary>
    /// <param name="theFilterType">
    /// the filter type.
    /// </param>
    void SetFilterType(RDC::OCC::SelectMgr_FilterType theFilterType);
    static RDC::OCC::SelectMgr_AndOrFilter^ CreateDowncasted(::SelectMgr_AndOrFilter* instance);
}; // class SelectMgr_AndOrFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_FrustumBuilder
//---------------------------------------------------------------------
/// <summary>
/// The purpose of this class is to provide unified interface for building
/// selecting frustum depending on current camera projection and orientation
/// matrices, window size and viewport parameters.
/// </summary>
public ref class SelectMgr_FrustumBuilder sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_SelectMgr_FrustumBuilder_h
public:
    Include_SelectMgr_FrustumBuilder_h
#endif

public:
    SelectMgr_FrustumBuilder(::SelectMgr_FrustumBuilder* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    SelectMgr_FrustumBuilder(::SelectMgr_FrustumBuilder& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::SelectMgr_FrustumBuilder* NativeInstance
    {
        ::SelectMgr_FrustumBuilder* get()
        {
            return static_cast<::SelectMgr_FrustumBuilder*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates new frustum builder with empty matrices
    /// </summary>
    SelectMgr_FrustumBuilder();
    /// <summary>
    /// Returns current camera
    /// </summary>
    RDC::OCC::Graphic3d_Camera^ Camera();
    /// <summary>
    /// Stores current camera
    /// </summary>
    void SetCamera(RDC::OCC::Graphic3d_Camera^ theCamera);
    /// <summary>
    /// Stores current window width and height
    /// </summary>
    void SetWindowSize(int theWidth, int theHeight);
    /// <summary>
    /// Stores current viewport coordinates
    /// </summary>
    void SetViewport(double theX, double theY, double theWidth, double theHeight);
    void InvalidateViewport();
    void WindowSize(int% theWidth, int% theHeight);
    /// <summary>
    /// Calculates signed distance between plane with equation
    /// theEq and point thePnt
    /// </summary>
    double SignedPlanePntDist(RDC::OCC::SelectMgr_Vec3^ theEq, RDC::OCC::SelectMgr_Vec3^ thePnt);
    /// <summary>
    /// Projects 2d screen point onto view frustum plane:
    /// theZ = 0 - near plane,
    /// theZ = 1 - far plane
    /// </summary>
    RDC::OCC::Pnt ProjectPntOnViewPlane(double theX, double theY, double theZ);
    static RDC::OCC::SelectMgr_FrustumBuilder^ CreateDowncasted(::SelectMgr_FrustumBuilder* instance);
}; // class SelectMgr_FrustumBuilder

//---------------------------------------------------------------------
//  Class  SelectMgr_ViewClipRange
//---------------------------------------------------------------------
/// <summary>
/// Class for handling depth clipping range.
/// It is used to perform checks in case if global (for the whole view)
/// clipping planes are defined inside of SelectMgr_RectangularFrustum class methods.
/// </summary>
public ref class SelectMgr_ViewClipRange sealed
    : public RDC::OCC::BaseClass<::SelectMgr_ViewClipRange>
{

#ifdef Include_SelectMgr_ViewClipRange_h
public:
    Include_SelectMgr_ViewClipRange_h
#endif

public:
    SelectMgr_ViewClipRange(::SelectMgr_ViewClipRange* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_ViewClipRange>( nativeInstance, true )
    {}

    SelectMgr_ViewClipRange(::SelectMgr_ViewClipRange& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_ViewClipRange>( &nativeInstance, false )
    {}

    property ::SelectMgr_ViewClipRange* NativeInstance
    {
        ::SelectMgr_ViewClipRange* get()
        {
            return static_cast<::SelectMgr_ViewClipRange*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an empty clip range.
    /// </summary>
    SelectMgr_ViewClipRange();
    /// <summary>
    /// Check if the given depth is not within clipping range(s),
    /// e.g. TRUE means depth is clipped.
    /// </summary>
    bool IsClipped(double theDepth);
    /// <summary>
    /// Calculates the min not clipped value from the range.
    /// Returns FALSE if the whole range is clipped.
    /// </summary>
    bool GetNearestDepth(RDC::OCC::Bnd_Range^ theRange, double% theDepth);
    /// <summary>
    /// Clears clipping range.
    /// </summary>
    void SetVoid();
    /// <summary>
    /// Add clipping planes. Planes and picking ray should be defined in the same coordinate system.
    /// </summary>
    void AddClippingPlanes(RDC::OCC::Graphic3d_SequenceOfHClipPlane^ thePlanes, RDC::OCC::Ax1 thePickRay);
    /// <summary>
    /// Returns the main unclipped range; [-inf, inf] by default.
    /// </summary>
    RDC::OCC::Bnd_Range^ ChangeUnclipRange();
    /// <summary>
    /// Adds a clipping sub-range (for clipping chains).
    /// </summary>
    void AddClipSubRange(RDC::OCC::Bnd_Range^ theRange);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class SelectMgr_ViewClipRange

//---------------------------------------------------------------------
//  Class  SelectMgr_BaseIntersector
//---------------------------------------------------------------------
/// <summary>
/// This class is an interface for different types of selecting intersector,
/// defining different selection types, like point, box or polyline
/// selection. It contains signatures of functions for detection of
/// overlap by sensitive entity and initializes some data for building
/// the selecting intersector
/// </summary>
public ref class SelectMgr_BaseIntersector
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_SelectMgr_BaseIntersector_h
public:
    Include_SelectMgr_BaseIntersector_h
#endif

protected:
    SelectMgr_BaseIntersector(InitMode init)
        : RDC::OCC::Standard_Transient( init )
    {}

public:
    SelectMgr_BaseIntersector(::SelectMgr_BaseIntersector* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    SelectMgr_BaseIntersector(::SelectMgr_BaseIntersector& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::SelectMgr_BaseIntersector* NativeInstance
    {
        ::SelectMgr_BaseIntersector* get()
        {
            return static_cast<::SelectMgr_BaseIntersector*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates new empty selecting volume
    /// </summary>
    SelectMgr_BaseIntersector();
    /// <summary>
    /// Builds intersector according to internal parameters
    /// </summary>
    void Build();
    /// <summary>
    /// Returns selection type of this intersector
    /// </summary>
    RDC::OCC::SelectMgr_SelectionType GetSelectionType();
    /// <summary>
    /// Checks if it is possible to scale this intersector.
    /// </summary>
    bool IsScalable();
    /// <summary>
    /// Sets pixel tolerance.
    /// It makes sense only for scalable intersectors (built on a single point).
    /// This method does nothing for the base class.
    /// </summary>
    void SetPixelTolerance(int theTol);
    /// <summary>
    /// Note that this method does not perform any checks on type of the frustum.
    /// </summary>
    /// <param name="theScaleFactor">
    /// [in] scale factor for new intersector or negative value if undefined;
    /// IMPORTANT: scaling makes sense only for scalable ::IsScalable() intersectors (built on a single point)!
    /// </param>
    /// <param name="theTrsf">
    /// [in] transformation for new intersector or gp_Identity if undefined
    /// </param>
    /// <param name="theBuilder">
    /// [in] an optional argument that represents corresponding settings for re-constructing transformed frustum from scratch;
    /// could be NULL if reconstruction is not expected furthermore
    /// </param>
    /// <returns>
    /// a copy of the frustum resized according to the scale factor given and transforms it using the matrix given
    /// </returns>
    RDC::OCC::SelectMgr_BaseIntersector^ ScaleAndTransform(int theScaleFactor, RDC::OCC::gp_GTrsf^ theTrsf, RDC::OCC::SelectMgr_FrustumBuilder^ theBuilder);
    /// <summary>
    /// Return camera definition.
    /// </summary>
    RDC::OCC::Graphic3d_Camera^ Camera();
    /// <summary>
    /// Saves camera definition.
    /// </summary>
    void SetCamera(RDC::OCC::Graphic3d_Camera^ theCamera);
    /// <summary>
    /// Returns current window size.
    /// This method doesn't set any output values for the base class.
    /// </summary>
    void WindowSize(int% theWidth, int% theHeight);
    /// <summary>
    /// Sets current window size.
    /// This method does nothing for the base class.
    /// </summary>
    void SetWindowSize(int theWidth, int theHeight);
    /// <summary>
    /// Sets viewport parameters.
    /// This method does nothing for the base class.
    /// </summary>
    void SetViewport(double theX, double theY, double theWidth, double theHeight);
    /// <summary>
    /// Returns near point of intersector.
    /// This method returns zero point for the base class.
    /// </summary>
    RDC::OCC::Pnt GetNearPnt();
    /// <summary>
    /// Returns far point of intersector.
    /// This method returns zero point for the base class.
    /// </summary>
    RDC::OCC::Pnt GetFarPnt();
    /// <summary>
    /// Returns direction ray of intersector.
    /// This method returns zero direction for the base class.
    /// </summary>
    RDC::OCC::Dir GetViewRayDirection();
    /// <summary>
    /// Returns current mouse coordinates.
    /// This method returns infinite point for the base class.
    /// </summary>
    RDC::OCC::Pnt2d GetMousePosition();
    /* Method skipped due to unknown mapping: void GetPlanes(NCollection_DynamicArray<NCollection_Vec4<double>> thePlaneEquations, ) */
    /// <summary>
    /// SAT intersection test between defined volume and given axis-aligned box
    /// </summary>
    bool OverlapsBox(RDC::OCC::SelectMgr_Vec3^ theBoxMin, RDC::OCC::SelectMgr_Vec3^ theBoxMax, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by axis-aligned bounding box
    /// with minimum corner at point theMinPt and maximum at point theMaxPt
    /// </summary>
    bool OverlapsBox(RDC::OCC::SelectMgr_Vec3^ theBoxMin, RDC::OCC::SelectMgr_Vec3^ theBoxMax, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by axis-aligned bounding box
    /// with minimum corner at point theMinPt and maximum at point theMaxPt
    /// </summary>
    bool OverlapsBox(RDC::OCC::SelectMgr_Vec3^ theBoxMin, RDC::OCC::SelectMgr_Vec3^ theBoxMax);
    /// <summary>
    /// Intersection test between defined volume and given point
    /// </summary>
    bool OverlapsPoint(RDC::OCC::Pnt thePnt, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Intersection test between defined volume and given point
    /// Does not perform depth calculation, so this method is defined as helper function for inclusion test.
    /// Therefore, its implementation makes sense only for rectangular frustum with box selection mode activated.
    /// </summary>
    bool OverlapsPoint(RDC::OCC::Pnt thePnt);
    /* Method skipped due to unknown mapping: bool OverlapsPolygon(TColgp_Array1OfPnt theArrayOfPnts, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
    /// <summary>
    /// Checks if line segment overlaps selecting frustum
    /// </summary>
    bool OverlapsSegment(RDC::OCC::Pnt thePnt1, RDC::OCC::Pnt thePnt2, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /* Method skipped due to unknown mapping: bool OverlapsTriangle(gp_Pnt thePnt1, gp_Pnt thePnt2, gp_Pnt thePnt3, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
    /// <summary>
    /// Returns true if selecting volume is overlapped by sphere with center theCenter
    /// and radius theRadius
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by sphere with center theCenter
    /// and radius theRadius
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius);
    /// <summary>
    /// Returns true if selecting volume is overlapped by sphere with center theCenter
    /// and radius theRadius
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theBottomRad, RDC::OCC::Trsf theTrsf, bool theIsFilled, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theBottomRad, RDC::OCC::Trsf theTrsf, bool theIsFilled, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theBottomRad, RDC::OCC::Trsf theTrsf, bool theIsFilled);
    /// <summary>
    /// Measures distance between 3d projection of user-picked
    /// screen point and given point theCOG.
    /// It makes sense only for intersectors built on a single point.
    /// This method returns infinite value for the base class.
    /// </summary>
    double DistToGeometryCenter(RDC::OCC::Pnt theCOG);
    /// <summary>
    /// Calculates the point on a view ray that was detected during the run of selection algo by given depth.
    /// It makes sense only for intersectors built on a single point.
    /// This method returns infinite point for the base class.
    /// </summary>
    RDC::OCC::Pnt DetectedPoint(double theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// Checks whether the ray that starts at the point theLoc and directs with the direction theRayDir intersects
    /// with the sphere with center at theCenter and radius TheRadius
    /// </summary>
    bool RaySphereIntersection(RDC::OCC::Pnt theCenter, double theRadius, RDC::OCC::Pnt theLoc, RDC::OCC::Dir theRayDir, double% theTimeEnter, double% theTimeLeave);
    /// <summary>
    /// Checks whether the ray that starts at the point theLoc and directs with the direction theRayDir intersects
    /// with the hollow cylinder (or cone)
    /// </summary>
    /// <param name="in]">
    ///  theBottomRadius the bottom cylinder radius
    /// </param>
    /// <param name="in]">
    ///  theTopRadius    the top cylinder radius
    /// </param>
    /// <param name="in]">
    ///  theHeight       the cylinder height
    /// </param>
    /// <param name="in]">
    ///  theLoc          the location of the ray
    /// </param>
    /// <param name="in]">
    ///  theRayDir       the ray direction
    /// </param>
    /// <param name="in]">
    ///  theIsHollow     true if the cylinder is hollow
    /// </param>
    /// <param name="out]">
    /// theTimeEnter    the entering the intersection
    /// </param>
    /// <param name="out]">
    /// theTimeLeave    the leaving the intersection
    /// </param>
    bool RayCylinderIntersection(double theBottomRadius, double theTopRadius, double theHeight, RDC::OCC::Pnt theLoc, RDC::OCC::Dir theRayDir, bool theIsHollow, double% theTimeEnter, double% theTimeLeave);
    /// <summary>
    /// Checks whether the ray that starts at the point theLoc and directs with the direction theRayDir intersects
    /// with the circle
    /// </summary>
    /// <param name="in]">
    ///  theRadius   the circle radius
    /// </param>
    /// <param name="in]">
    ///  theLoc      the location of the ray
    /// </param>
    /// <param name="in]">
    ///  theRayDir   the ray direction
    /// </param>
    /// <param name="in]">
    ///  theIsFilled true if it's a circle, false if it's a circle outline
    /// </param>
    /// <param name="out]">
    /// theTime     the intersection
    /// </param>
    bool RayCircleIntersection(double theRadius, RDC::OCC::Pnt theLoc, RDC::OCC::Dir theRayDir, bool theIsFilled, double% theTime);
    static RDC::OCC::SelectMgr_BaseIntersector^ CreateDowncasted(::SelectMgr_BaseIntersector* instance);
}; // class SelectMgr_BaseIntersector

//---------------------------------------------------------------------
//  Class  SelectMgr_AxisIntersector
//---------------------------------------------------------------------
/// <summary>
/// This class contains representation of selecting axis, created in case of point selection
/// and algorithms for overlap detection between this axis and sensitive entities.
/// </summary>
public ref class SelectMgr_AxisIntersector sealed
    : public RDC::OCC::SelectMgr_BaseIntersector
{

#ifdef Include_SelectMgr_AxisIntersector_h
public:
    Include_SelectMgr_AxisIntersector_h
#endif

public:
    SelectMgr_AxisIntersector(::SelectMgr_AxisIntersector* nativeInstance)
        : RDC::OCC::SelectMgr_BaseIntersector( nativeInstance )
    {}

    SelectMgr_AxisIntersector(::SelectMgr_AxisIntersector& nativeInstance)
        : RDC::OCC::SelectMgr_BaseIntersector( nativeInstance )
    {}

    property ::SelectMgr_AxisIntersector* NativeInstance
    {
        ::SelectMgr_AxisIntersector* get()
        {
            return static_cast<::SelectMgr_AxisIntersector*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    SelectMgr_AxisIntersector();
    /// <summary>
    /// Initializes selecting axis according to the input one
    /// </summary>
    void Init(RDC::OCC::Ax1 theAxis);
    /// <summary>
    /// Builds axis according to internal parameters.
    /// NOTE: it should be called after Init() method
    /// </summary>
    void Build();
    /// <summary>
    /// Saves camera definition.
    /// Do nothing for axis intersector (not applicable to this volume).
    /// </summary>
    void SetCamera(RDC::OCC::Graphic3d_Camera^ theCamera);
    /// <summary>
    /// Returns FALSE (not applicable to this volume).
    /// </summary>
    bool IsScalable();
    /// <summary>
    /// IMPORTANT: Scaling doesn't make sense for this intersector.
    /// Returns a copy of the intersector transformed using the matrix given.
    /// Builder is an optional argument that represents corresponding settings for re-constructing transformed frustum from scratch.
    /// Can be null if reconstruction is not expected furthermore.
    /// </summary>
    RDC::OCC::SelectMgr_BaseIntersector^ ScaleAndTransform(int theScaleFactor, RDC::OCC::gp_GTrsf^ theTrsf, RDC::OCC::SelectMgr_FrustumBuilder^ theBuilder);
    /// <summary>
    /// Intersection test between defined axis and given axis-aligned box
    /// </summary>
    bool OverlapsBox(RDC::OCC::SelectMgr_Vec3^ theBoxMin, RDC::OCC::SelectMgr_Vec3^ theBoxMax, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting axis intersects axis-aligned bounding box
    /// with minimum corner at point theMinPt and maximum at point theMaxPt
    /// </summary>
    bool OverlapsBox(RDC::OCC::SelectMgr_Vec3^ theBoxMin, RDC::OCC::SelectMgr_Vec3^ theBoxMax, bool% theInside);
    /// <summary>
    /// Intersection test between defined axis and given point
    /// </summary>
    bool OverlapsPoint(RDC::OCC::Pnt thePnt, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Intersection test between defined axis and given point
    /// </summary>
    bool OverlapsPoint(RDC::OCC::Pnt thePnt);
    /* Method skipped due to unknown mapping: bool OverlapsPolygon(TColgp_Array1OfPnt theArrayOfPnts, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
    /// <summary>
    /// Checks if selecting axis intersects line segment
    /// </summary>
    bool OverlapsSegment(RDC::OCC::Pnt thePnt1, RDC::OCC::Pnt thePnt2, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /* Method skipped due to unknown mapping: bool OverlapsTriangle(gp_Pnt thePnt1, gp_Pnt thePnt2, gp_Pnt thePnt3, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
    /// <summary>
    /// Intersection test between defined axis and given sphere with center theCenter
    /// and radius theRadius
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, bool% theInside);
    /// <summary>
    /// Intersection test between defined axis and given sphere with center theCenter
    /// and radius theRadius
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius);
    /// <summary>
    /// Intersection test between defined axis and given sphere with center theCenter
    /// and radius theRadius
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theRadius, RDC::OCC::Trsf theTrsf, bool theIsFilled, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theRadius, RDC::OCC::Trsf theTrsf, bool theIsFilled, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theRadius, RDC::OCC::Trsf theTrsf, bool theIsFilled);
    /// <summary>
    /// Measures distance between start axis point and given point theCOG.
    /// </summary>
    double DistToGeometryCenter(RDC::OCC::Pnt theCOG);
    /// <summary>
    /// Calculates the point on a axis ray that was detected during the run of selection algo by given depth
    /// </summary>
    RDC::OCC::Pnt DetectedPoint(double theDepth);
    /// <summary>
    /// Returns near point along axis.
    /// </summary>
    RDC::OCC::Pnt GetNearPnt();
    /// <summary>
    /// Returns far point along axis (infinite).
    /// </summary>
    RDC::OCC::Pnt GetFarPnt();
    /// <summary>
    /// Returns axis direction.
    /// </summary>
    RDC::OCC::Dir GetViewRayDirection();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::SelectMgr_AxisIntersector^ CreateDowncasted(::SelectMgr_AxisIntersector* instance);
}; // class SelectMgr_AxisIntersector

//---------------------------------------------------------------------
//  Class  SelectMgr_BaseFrustum
//---------------------------------------------------------------------
/// <summary>
/// This class is an interface for different types of selecting frustums,
/// defining different selection types, like point, box or polyline
/// selection. It contains signatures of functions for detection of
/// overlap by sensitive entity and initializes some data for building
/// the selecting frustum
/// </summary>
public ref class SelectMgr_BaseFrustum
    : public RDC::OCC::SelectMgr_BaseIntersector
{

#ifdef Include_SelectMgr_BaseFrustum_h
public:
    Include_SelectMgr_BaseFrustum_h
#endif

protected:
    SelectMgr_BaseFrustum(InitMode init)
        : RDC::OCC::SelectMgr_BaseIntersector( init )
    {}

public:
    SelectMgr_BaseFrustum(::SelectMgr_BaseFrustum* nativeInstance)
        : RDC::OCC::SelectMgr_BaseIntersector( nativeInstance )
    {}

    SelectMgr_BaseFrustum(::SelectMgr_BaseFrustum& nativeInstance)
        : RDC::OCC::SelectMgr_BaseIntersector( nativeInstance )
    {}

    property ::SelectMgr_BaseFrustum* NativeInstance
    {
        ::SelectMgr_BaseFrustum* get()
        {
            return static_cast<::SelectMgr_BaseFrustum*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates new selecting volume with pixel tolerance set to 2,
    /// orthographic camera and empty frustum builder
    /// </summary>
    SelectMgr_BaseFrustum();
    /// <summary>
    /// Nullifies the builder created in the constructor and copies the pointer given
    /// </summary>
    void SetBuilder(RDC::OCC::SelectMgr_FrustumBuilder^ theBuilder);
    /// <summary>
    /// Saves camera definition and passes it to builder
    /// </summary>
    void SetCamera(RDC::OCC::Graphic3d_Camera^ theCamera);
    void SetPixelTolerance(int theTol);
    void SetWindowSize(int theWidth, int theHeight);
    void WindowSize(int% theWidth, int% theHeight);
    /// <summary>
    /// Passes viewport parameters to builder
    /// </summary>
    void SetViewport(double theX, double theY, double theWidth, double theHeight);
    /// <summary>
    /// Checks whether the boundary of the current volume selection intersects with a sphere or are there it's boundaries lying inside the sphere
    /// </summary>
    bool IsBoundaryIntersectSphere(RDC::OCC::Pnt theCenter, double theRadius, RDC::OCC::Dir thePlaneNormal, RDC::OCC::TColgp_Array1OfPnt^ theBoundaries, bool% theBoundaryInside);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::SelectMgr_BaseFrustum^ CreateDowncasted(::SelectMgr_BaseFrustum* instance);
}; // class SelectMgr_BaseFrustum

//---------------------------------------------------------------------
//  Class  SelectMgr_SelectingVolumeManager
//---------------------------------------------------------------------
/// <summary>
/// This class is used to switch between active selecting volumes depending
/// on selection type chosen by the user.
/// The sample of correct selection volume initialization procedure:
/// </summary>
/// @code
/// aMgr.InitPointSelectingVolume (aMousePos);
/// aMgr.SetPixelTolerance (aTolerance);
/// aMgr.SetCamera (aCamera);
/// aMgr.SetWindowSize (aWidth, aHeight);
/// aMgr.BuildSelectingVolume();
/// @endcode
public ref class SelectMgr_SelectingVolumeManager sealed
    : public RDC::OCC::SelectBasics_SelectingVolumeManager
{

#ifdef Include_SelectMgr_SelectingVolumeManager_h
public:
    Include_SelectMgr_SelectingVolumeManager_h
#endif

public:
    SelectMgr_SelectingVolumeManager(::SelectMgr_SelectingVolumeManager* nativeInstance)
        : RDC::OCC::SelectBasics_SelectingVolumeManager( nativeInstance )
    {}

    SelectMgr_SelectingVolumeManager(::SelectMgr_SelectingVolumeManager& nativeInstance)
        : RDC::OCC::SelectBasics_SelectingVolumeManager( nativeInstance )
    {}

    property ::SelectMgr_SelectingVolumeManager* NativeInstance
    {
        ::SelectMgr_SelectingVolumeManager* get()
        {
            return static_cast<::SelectMgr_SelectingVolumeManager*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates instances of all available selecting volume types
    /// </summary>
    SelectMgr_SelectingVolumeManager();
    /// <summary>
    /// Creates, initializes and activates rectangular selecting frustum for point selection
    /// </summary>
    void InitPointSelectingVolume(RDC::OCC::Pnt2d thePoint);
    /// <summary>
    /// Creates, initializes and activates rectangular selecting frustum for box selection
    /// </summary>
    void InitBoxSelectingVolume(RDC::OCC::Pnt2d theMinPt, RDC::OCC::Pnt2d theMaxPt);
    /// <summary>
    /// Creates, initializes and activates set of triangular selecting frustums for polyline selection
    /// </summary>
    void InitPolylineSelectingVolume(RDC::OCC::TColgp_Array1OfPnt2d^ thePoints);
    /// <summary>
    /// Creates and activates axis selector for point selection
    /// </summary>
    void InitAxisSelectingVolume(RDC::OCC::Ax1 theAxis);
    /// <summary>
    /// Sets as active the custom selecting volume
    /// </summary>
    void InitSelectingVolume(RDC::OCC::SelectMgr_BaseIntersector^ theVolume);
    /// <summary>
    /// Builds previously initialized selecting volume.
    /// </summary>
    void BuildSelectingVolume();
    /// <summary>
    /// Returns active selecting volume that was built during last
    /// run of OCCT selection mechanism
    /// </summary>
    RDC::OCC::SelectMgr_BaseIntersector^ ActiveVolume();
    int GetActiveSelectionType();
    /// <summary>
    /// IMPORTANT: Scaling makes sense only for frustum built on a single point!
    /// Note that this method does not perform any checks on type of the frustum.
    /// 
    /// Returns a copy of the frustum resized according to the scale factor given
    /// and transforms it using the matrix given.
    /// There are no default parameters, but in case if:
    /// - transformation only is needed: @theScaleFactor must be initialized as any negative value;
    /// - scale only is needed: @theTrsf must be set to gp_Identity.
    /// Builder is an optional argument that represents corresponding settings for re-constructing transformed
    /// frustum from scratch. Can be null if reconstruction is not expected furthermore.
    /// </summary>
    RDC::OCC::SelectMgr_SelectingVolumeManager^ ScaleAndTransform(int theScaleFactor, RDC::OCC::gp_GTrsf^ theTrsf, RDC::OCC::SelectMgr_FrustumBuilder^ theBuilder);
    /// <summary>
    /// Returns current camera definition.
    /// </summary>
    RDC::OCC::Graphic3d_Camera^ Camera();
    /// <summary>
    /// Updates camera projection and orientation matrices in all selecting volumes
    /// Note: this method should be called after selection volume building
    /// else exception will be thrown
    /// </summary>
    void SetCamera(RDC::OCC::Graphic3d_Camera^ theCamera);
    /// <summary>
    /// Updates viewport in all selecting volumes
    /// Note: this method should be called after selection volume building
    /// else exception will be thrown
    /// </summary>
    void SetViewport(double theX, double theY, double theWidth, double theHeight);
    /// <summary>
    /// Updates pixel tolerance in all selecting volumes
    /// Note: this method should be called after selection volume building
    /// else exception will be thrown
    /// </summary>
    void SetPixelTolerance(int theTolerance);
    /// <summary>
    /// Returns window size
    /// </summary>
    void WindowSize(int% theWidth, int% theHeight);
    /// <summary>
    /// Updates window size in all selecting volumes
    /// Note: this method should be called after selection volume building
    /// else exception will be thrown
    /// </summary>
    void SetWindowSize(int theWidth, int theHeight);
    /// <summary>
    /// SAT intersection test between defined volume and given axis-aligned box
    /// </summary>
    bool OverlapsBox(RDC::OCC::SelectMgr_Vec3^ theBoxMin, RDC::OCC::SelectMgr_Vec3^ theBoxMax, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by axis-aligned bounding box
    /// with minimum corner at point theMinPt and maximum at point theMaxPt
    /// </summary>
    bool OverlapsBox(RDC::OCC::SelectMgr_Vec3^ theBoxMin, RDC::OCC::SelectMgr_Vec3^ theBoxMax, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by axis-aligned bounding box
    /// with minimum corner at point theMinPt and maximum at point theMaxPt
    /// </summary>
    bool OverlapsBox(RDC::OCC::SelectMgr_Vec3^ theBoxMin, RDC::OCC::SelectMgr_Vec3^ theBoxMax);
    /// <summary>
    /// Intersection test between defined volume and given point
    /// </summary>
    bool OverlapsPoint(RDC::OCC::Pnt thePnt, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Intersection test between defined volume and given point
    /// </summary>
    bool OverlapsPoint(RDC::OCC::Pnt thePnt);
    /// <summary>
    /// SAT intersection test between defined volume and given ordered set of points,
    /// representing line segments. The test may be considered of interior part or
    /// boundary line defined by segments depending on given sensitivity type
    /// </summary>
    bool OverlapsPolygon(RDC::OCC::TColgp_Array1OfPnt^ theArrayOfPts, int theSensType, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Checks if line segment overlaps selecting frustum
    /// </summary>
    bool OverlapsSegment(RDC::OCC::Pnt thePnt1, RDC::OCC::Pnt thePnt2, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// SAT intersection test between defined volume and given triangle. The test may
    /// be considered of interior part or boundary line defined by triangle vertices
    /// depending on given sensitivity type
    /// </summary>
    bool OverlapsTriangle(RDC::OCC::Pnt thePnt1, RDC::OCC::Pnt thePnt2, RDC::OCC::Pnt thePnt3, int theSensType, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Intersection test between defined volume and given sphere
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Intersection test between defined volume and given sphere
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, bool% theInside);
    /// <summary>
    /// Intersection test between defined volume and given sphere
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theBottomRad, RDC::OCC::Trsf theTrsf, bool theIsFilled, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theBottomRad, RDC::OCC::Trsf theTrsf, bool theIsFilled, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theBottomRad, RDC::OCC::Trsf theTrsf, bool theIsFilled);
    /// <summary>
    /// Measures distance between 3d projection of user-picked
    /// screen point and given point theCOG
    /// </summary>
    double DistToGeometryCenter(RDC::OCC::Pnt theCOG);
    /// <summary>
    /// Calculates the point on a view ray that was detected during the run of selection algo by given depth.
    /// Throws exception if active selection type is not Point.
    /// </summary>
    RDC::OCC::Pnt DetectedPoint(double theDepth);
    /// <summary>
    /// If theIsToAllow is false, only fully included sensitives will be detected, otherwise the algorithm will
    /// mark both included and overlapped entities as matched
    /// </summary>
    void AllowOverlapDetection(bool theIsToAllow);
    bool IsOverlapAllowed();
    /// <summary>
    /// Return view clipping planes.
    /// </summary>
    RDC::OCC::Graphic3d_SequenceOfHClipPlane^ ViewClipping();
    /// <summary>
    /// Return object clipping planes.
    /// </summary>
    RDC::OCC::Graphic3d_SequenceOfHClipPlane^ ObjectClipping();
    /// <summary>
    /// Valid for point selection only!
    /// Computes depth range for clipping planes.
    /// </summary>
    /// <param name="theViewPlanes">
    ///  [in] global view planes
    /// </param>
    /// <param name="theObjPlanes">
    ///   [in] object planes
    /// </param>
    /// <param name="theWorldSelMgr">
    /// [in] selection volume in world space for computing clipping plane ranges
    /// </param>
    void SetViewClipping(RDC::OCC::Graphic3d_SequenceOfHClipPlane^ theViewPlanes, RDC::OCC::Graphic3d_SequenceOfHClipPlane^ theObjPlanes, RDC::OCC::SelectMgr_SelectingVolumeManager^ theWorldSelMgr);
    /// <summary>
    /// Copy clipping planes from another volume manager.
    /// </summary>
    void SetViewClipping(RDC::OCC::SelectMgr_SelectingVolumeManager^ theOther);
    /// <summary>
    /// Return clipping range.
    /// </summary>
    RDC::OCC::SelectMgr_ViewClipRange^ ViewClipRanges();
    /// <summary>
    /// Set clipping range.
    /// </summary>
    void SetViewClipRanges(RDC::OCC::SelectMgr_ViewClipRange^ theRange);
    /// <summary>
    /// A set of helper functions that return rectangular selecting frustum data
    /// </summary>
    RDC::OCC::Pnt GetVertices();
    /// <summary>
    /// Valid only for point and rectangular selection.
    /// Returns projection of 2d mouse picked point or projection
    /// of center of 2d rectangle (for point and rectangular selection
    /// correspondingly) onto near view frustum plane
    /// </summary>
    RDC::OCC::Pnt GetNearPickedPnt();
    /// <summary>
    /// Valid only for point and rectangular selection.
    /// Returns projection of 2d mouse picked point or projection
    /// of center of 2d rectangle (for point and rectangular selection
    /// correspondingly) onto far view frustum plane
    /// </summary>
    RDC::OCC::Pnt GetFarPickedPnt();
    /// <summary>
    /// Valid only for point and rectangular selection.
    /// Returns view ray direction
    /// </summary>
    RDC::OCC::Dir GetViewRayDirection();
    /// <summary>
    /// Checks if it is possible to scale current active selecting volume
    /// </summary>
    bool IsScalableActiveVolume();
    /// <summary>
    /// Returns mouse coordinates for Point selection mode.
    /// </summary>
    /// <returns>
    /// infinite point in case of unsupport of mouse position for this active selection volume.
    /// </returns>
    RDC::OCC::Pnt2d GetMousePosition();
    /* Method skipped due to unknown mapping: void GetPlanes(NCollection_DynamicArray<NCollection_Vec4<double>> thePlaneEquations, ) */
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    void BuildSelectingVolume(RDC::OCC::Pnt2d thePoint);
    void BuildSelectingVolume(RDC::OCC::Pnt2d theMinPt, RDC::OCC::Pnt2d theMaxPt);
    void BuildSelectingVolume(RDC::OCC::TColgp_Array1OfPnt2d^ thePoints);
}; // class SelectMgr_SelectingVolumeManager

//---------------------------------------------------------------------
//  Class  SelectMgr_BVHThreadPool
//---------------------------------------------------------------------
/// <summary>
/// Class defining a thread pool for building BVH for the list of Select3D_SensitiveEntity within background thread(s).
/// </summary>
public ref class SelectMgr_BVHThreadPool sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_SelectMgr_BVHThreadPool_h
public:
    Include_SelectMgr_BVHThreadPool_h
#endif

public:
    SelectMgr_BVHThreadPool(::SelectMgr_BVHThreadPool* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    SelectMgr_BVHThreadPool(::SelectMgr_BVHThreadPool& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::SelectMgr_BVHThreadPool* NativeInstance
    {
        ::SelectMgr_BVHThreadPool* get()
        {
            return static_cast<::SelectMgr_BVHThreadPool*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Main constructor
    /// </summary>
    SelectMgr_BVHThreadPool(int theNbThreads);
    /* Method skipped due to unknown mapping: void AddEntity(Select3D_SensitiveEntity theEntity, ) */
    /// <summary>
    /// Stops threads
    /// </summary>
    void StopThreads();
    /// <summary>
    /// Waits for all threads finish their jobs
    /// </summary>
    void WaitThreads();
    /* Method skipped due to unknown mapping: NCollection_Array1<SelectMgr_BVHThreadPool::BVHThread> Threads() */
    static RDC::OCC::SelectMgr_BVHThreadPool^ CreateDowncasted(::SelectMgr_BVHThreadPool* instance);
}; // class SelectMgr_BVHThreadPool

//---------------------------------------------------------------------
//  Class  SelectMgr_SensitiveEntity
//---------------------------------------------------------------------
/// <summary>
/// The purpose of this class is to mark sensitive entities selectable or not
/// depending on current active selection of parent object for proper BVH traverse
/// </summary>
public ref class SelectMgr_SensitiveEntity sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_SelectMgr_SensitiveEntity_h
public:
    Include_SelectMgr_SensitiveEntity_h
#endif

public:
    SelectMgr_SensitiveEntity(::SelectMgr_SensitiveEntity* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    SelectMgr_SensitiveEntity(::SelectMgr_SensitiveEntity& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::SelectMgr_SensitiveEntity* NativeInstance
    {
        ::SelectMgr_SensitiveEntity* get()
        {
            return static_cast<::SelectMgr_SensitiveEntity*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void SelectMgr_SensitiveEntity(Select3D_SensitiveEntity theEntity, ) */
    /// <summary>
    /// Clears up all resources and memory
    /// </summary>
    void Clear();
    /* Method skipped due to unknown mapping: Select3D_SensitiveEntity BaseSensitive() */
    /// <summary>
    /// Returns true if this entity belongs to the active selection
    /// mode of parent object
    /// </summary>
    bool IsActiveForSelection();
    /// <summary>
    /// Marks entity as inactive for selection
    /// </summary>
    void ResetSelectionActiveStatus();
    /// <summary>
    /// Marks entity as active for selection
    /// </summary>
    void SetActiveForSelection();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::SelectMgr_SensitiveEntity^ CreateDowncasted(::SelectMgr_SensitiveEntity* instance);
}; // class SelectMgr_SensitiveEntity

//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObject
//---------------------------------------------------------------------
/// <summary>
/// A framework to supply the structure of the object to be selected.
/// At the first pick, this structure is created by calling the appropriate algorithm and retaining this framework for further picking.
/// This abstract framework is inherited in Application Interactive Services (AIS), notably in AIS_InteractiveObject.
/// Consequently, 3D selection should be handled by the relevant daughter classes and their member functions in AIS.
/// This is particularly true in the creation of new interactive objects.
/// 
/// Key interface methods to be implemented by every Selectable Object:
/// * Presentable Object (PrsMgr_PresentableObject)
/// Consider defining an enumeration of supported Display Mode indexes for particular Interactive Object or class of Interactive Objects.
/// - AcceptDisplayMode() accepting display modes implemented by this object;
/// - Compute() computing presentation for the given display mode index;
/// * Selectable Object (SelectMgr_SelectableObject)
/// Consider defining an enumeration of supported Selection Mode indexes for particular Interactive Object or class of Interactive Objects.
/// - ComputeSelection() computing selectable entities for the given selection mode index.
/// </summary>
public ref class SelectMgr_SelectableObject
    : public RDC::OCC::PrsMgr_PresentableObject
{

#ifdef Include_SelectMgr_SelectableObject_h
public:
    Include_SelectMgr_SelectableObject_h
#endif

protected:
    SelectMgr_SelectableObject(InitMode init)
        : RDC::OCC::PrsMgr_PresentableObject( init )
    {}

public:
    SelectMgr_SelectableObject(::SelectMgr_SelectableObject* nativeInstance)
        : RDC::OCC::PrsMgr_PresentableObject( nativeInstance )
    {}

    SelectMgr_SelectableObject(::SelectMgr_SelectableObject& nativeInstance)
        : RDC::OCC::PrsMgr_PresentableObject( nativeInstance )
    {}

    property ::SelectMgr_SelectableObject* NativeInstance
    {
        ::SelectMgr_SelectableObject* get()
        {
            return static_cast<::SelectMgr_SelectableObject*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Computes sensitive primitives for the given selection mode - key interface method of Selectable Object.
    /// </summary>
    /// <param name="theSelection">
    /// selection to fill
    /// </param>
    /// <param name="theMode">
    /// selection mode to create sensitive primitives
    /// </param>
    void ComputeSelection(RDC::OCC::SelectMgr_Selection^ theSelection, int theMode);
    /// <summary>
    /// Informs the graphic context that the interactive Object may be decomposed into sub-shapes for dynamic selection.
    /// The most used Interactive Object is AIS_Shape.
    /// </summary>
    bool AcceptShapeDecomposition();
    /// <summary>
    /// Re-computes the sensitive primitives for all modes. IMPORTANT: Do not use
    /// this method to update selection primitives except implementing custom selection manager!
    /// This method does not take into account necessary BVH updates, but may invalidate the pointers
    /// it refers to. TO UPDATE SELECTION properly from outside classes, use method UpdateSelection.
    /// </summary>
    void RecomputePrimitives();
    /// <summary>
    /// Re-computes the sensitive primitives which correspond to the <theMode>th selection mode.
    /// IMPORTANT: Do not use this method to update selection primitives except implementing custom selection manager!
    /// selection manager! This method does not take into account necessary BVH updates, but may invalidate
    /// the pointers it refers to. TO UPDATE SELECTION properly from outside classes, use method UpdateSelection.
    /// </summary>
    void RecomputePrimitives(int theMode);
    /// <summary>
    /// Adds the selection aSelection with the selection mode
    /// index aMode to this framework.
    /// </summary>
    void AddSelection(RDC::OCC::SelectMgr_Selection^ aSelection, int aMode);
    /// <summary>
    /// Empties all the selections in the SelectableObject
    /// <update> parameter defines whether all object's
    /// selections should be flagged for further update or not.
    /// This improved method can be used to recompute an
    /// object's selection (without redisplaying the object
    /// completely) when some selection mode is activated not for the first time.
    /// </summary>
    void ClearSelections(bool update);
    /// <summary>
    /// Empties all the selections in the SelectableObject
    /// <update> parameter defines whether all object's
    /// selections should be flagged for further update or not.
    /// This improved method can be used to recompute an
    /// object's selection (without redisplaying the object
    /// completely) when some selection mode is activated not for the first time.
    /// </summary>
    void ClearSelections();
    /// <summary>
    /// Returns the selection having specified selection mode or NULL.
    /// </summary>
    RDC::OCC::SelectMgr_Selection^ Selection(int theMode);
    /// <summary>
    /// Returns true if a selection corresponding to the selection mode theMode was computed for this object.
    /// </summary>
    bool HasSelection(int theMode);
    /// <summary>
    /// Return the sequence of selections.
    /// </summary>
    RDC::OCC::SelectMgr_SequenceOfSelection^ Selections();
    void ResetTransformation();
    /// <summary>
    /// Recomputes the location of the selection aSelection.
    /// </summary>
    void UpdateTransformation();
    /// <summary>
    /// Updates locations in all sensitive entities from <aSelection>
    /// and in corresponding entity owners.
    /// </summary>
    void UpdateTransformations(RDC::OCC::SelectMgr_Selection^ aSelection);
    /// <summary>
    /// Method which draws selected owners ( for fast presentation draw )
    /// </summary>
    void HilightSelected(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr, RDC::OCC::SelectMgr_SequenceOfOwner^ theSeq);
    /// <summary>
    /// Method which clear all selected owners belonging
    /// to this selectable object ( for fast presentation draw )
    /// </summary>
    void ClearSelected();
    /// <summary>
    /// Method that needs to be implemented when the object
    /// manages selection and dynamic highlighting on its own.
    /// Clears or invalidates dynamic highlight presentation.
    /// By default it clears immediate draw of given presentation
    /// manager.
    /// </summary>
    void ClearDynamicHighlight(RDC::OCC::PrsMgr_PresentationManager^ theMgr);
    /// <summary>
    /// Method which hilight an owner belonging to
    /// this selectable object  ( for fast presentation draw )
    /// </summary>
    void HilightOwnerWithColor(RDC::OCC::PrsMgr_PresentationManager^ thePM, RDC::OCC::Prs3d_Drawer^ theStyle, RDC::OCC::SelectMgr_EntityOwner^ theOwner);
    /// <summary>
    /// If returns True, the old mechanism for highlighting selected objects is used (HilightSelected Method may be empty).
    /// If returns False, the HilightSelected method will be fully responsible for highlighting selected entity owners belonging to this selectable object.
    /// </summary>
    bool IsAutoHilight();
    /// <summary>
    /// Set AutoHilight property to true or false.
    /// </summary>
    void SetAutoHilight(bool theAutoHilight);
    /// <summary>
    /// Creates or returns existing presentation for highlighting detected object.
    /// </summary>
    /// <param name="thePrsMgr">
    /// presentation manager to create new presentation
    /// </param>
    /// <returns>
    /// existing or newly created presentation (when thePrsMgr is not NULL)
    /// </returns>
    RDC::OCC::Graphic3d_Structure^ GetHilightPresentation(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr);
    /// <summary>
    /// Creates or returns existing presentation for highlighting selected object.
    /// </summary>
    /// <param name="thePrsMgr">
    /// presentation manager to create new presentation
    /// </param>
    /// <returns>
    /// existing or newly created presentation (when thePrsMgr is not NULL)
    /// </returns>
    RDC::OCC::Graphic3d_Structure^ GetSelectPresentation(RDC::OCC::PrsMgr_PresentationManager^ thePrsMgr);
    /// <summary>
    /// Removes presentations returned by GetHilightPresentation() and GetSelectPresentation().
    /// </summary>
    void ErasePresentations(bool theToRemove);
    /// <summary>
    /// Set Z layer ID and update all presentations of the selectable object.
    /// The layers mechanism allows drawing objects in higher layers in overlay of objects in lower layers.
    /// </summary>
    void SetZLayer(int theLayerId);
    /// <summary>
    /// Sets update status FULL to selections of the object. Must be used as the only method of UpdateSelection
    /// from outer classes to prevent BVH structures from being outdated.
    /// </summary>
    void UpdateSelection(int theMode);
    /// <summary>
    /// Sets update status FULL to selections of the object. Must be used as the only method of UpdateSelection
    /// from outer classes to prevent BVH structures from being outdated.
    /// </summary>
    void UpdateSelection();
    /// <summary>
    /// Sets common entity owner for assembly sensitive object entities
    /// </summary>
    void SetAssemblyOwner(RDC::OCC::SelectMgr_EntityOwner^ theOwner, int theMode);
    /// <summary>
    /// Sets common entity owner for assembly sensitive object entities
    /// </summary>
    void SetAssemblyOwner(RDC::OCC::SelectMgr_EntityOwner^ theOwner);
    /* Method skipped due to unknown mapping: Bnd_Box BndBoxOfSelected(NCollection_Shared<NCollection_IndexedMap<opencascade::SelectMgr_EntityOwner>, NCollection_DefaultHasher<opencascade::SelectMgr_EntityOwner>>>, void theOwners, ) */
    /// <summary>
    /// Returns the mode for selection of object as a whole; 0 by default.
    /// </summary>
    int GlobalSelectionMode();
    /// <summary>
    /// Returns the owner of mode for selection of object as a whole
    /// </summary>
    RDC::OCC::SelectMgr_EntityOwner^ GlobalSelOwner();
    /// <summary>
    /// Returns common entity owner if the object is an assembly
    /// </summary>
    RDC::OCC::SelectMgr_EntityOwner^ GetAssemblyOwner();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::SelectMgr_SelectableObject^ CreateDowncasted(::SelectMgr_SelectableObject* instance);
}; // class SelectMgr_SelectableObject

//---------------------------------------------------------------------
//  Class  SelectMgr_SortCriterion
//---------------------------------------------------------------------
/// <summary>
/// This class provides data and criterion for sorting candidate
/// entities in the process of interactive selection by mouse click
/// </summary>
public ref class SelectMgr_SortCriterion sealed
    : public RDC::OCC::BaseClass<::SelectMgr_SortCriterion>
{

#ifdef Include_SelectMgr_SortCriterion_h
public:
    Include_SelectMgr_SortCriterion_h
#endif

public:
    SelectMgr_SortCriterion(::SelectMgr_SortCriterion* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_SortCriterion>( nativeInstance, true )
    {}

    SelectMgr_SortCriterion(::SelectMgr_SortCriterion& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_SortCriterion>( &nativeInstance, false )
    {}

    property ::SelectMgr_SortCriterion* NativeInstance
    {
        ::SelectMgr_SortCriterion* get()
        {
            return static_cast<::SelectMgr_SortCriterion*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// < distance from the view plane to the entity
    /// </summary>
    property double Depth {
        double get() {
            return ((::SelectMgr_SortCriterion*)_NativeInstance)->Depth;
        }
        void set(double value) {
            ((::SelectMgr_SortCriterion*)_NativeInstance)->Depth = value;
        }
    }

    /// <summary>
    /// < distance from the clicked point to the entity on the view plane
    /// </summary>
    property double MinDist {
        double get() {
            return ((::SelectMgr_SortCriterion*)_NativeInstance)->MinDist;
        }
        void set(double value) {
            ((::SelectMgr_SortCriterion*)_NativeInstance)->MinDist = value;
        }
    }

    /// <summary>
    /// < tolerance used for selecting candidates
    /// </summary>
    property double Tolerance {
        double get() {
            return ((::SelectMgr_SortCriterion*)_NativeInstance)->Tolerance;
        }
        void set(double value) {
            ((::SelectMgr_SortCriterion*)_NativeInstance)->Tolerance = value;
        }
    }

    /// <summary>
    /// < selection priority
    /// </summary>
    property int Priority {
        int get() {
            return ((::SelectMgr_SortCriterion*)_NativeInstance)->Priority;
        }
        void set(int value) {
            ((::SelectMgr_SortCriterion*)_NativeInstance)->Priority = value;
        }
    }

    /// <summary>
    /// < ZLayer rendering order index, stronger than a depth
    /// </summary>
    property int ZLayerPosition {
        int get() {
            return ((::SelectMgr_SortCriterion*)_NativeInstance)->ZLayerPosition;
        }
        void set(int value) {
            ((::SelectMgr_SortCriterion*)_NativeInstance)->ZLayerPosition = value;
        }
    }

    /// <summary>
    /// < overall number of entities collected for the same owner
    /// </summary>
    property int NbOwnerMatches {
        int get() {
            return ((::SelectMgr_SortCriterion*)_NativeInstance)->NbOwnerMatches;
        }
        void set(int value) {
            ((::SelectMgr_SortCriterion*)_NativeInstance)->NbOwnerMatches = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    SelectMgr_SortCriterion();
    /// <summary>
    /// Compare with another item by depth, priority and minDist.
    /// </summary>
    bool IsCloserDepth(RDC::OCC::SelectMgr_SortCriterion^ theOther);
    /// <summary>
    /// Compare with another item using old logic (OCCT version <= 6.3.1) with priority considered preceding depth.
    /// </summary>
    bool IsHigherPriority(RDC::OCC::SelectMgr_SortCriterion^ theOther);
}; // class SelectMgr_SortCriterion

//---------------------------------------------------------------------
//  Class  SelectMgr_OrFilter
//---------------------------------------------------------------------
/// <summary>
/// A framework to define an or selection filter.
/// This selects one or another type of sensitive entity.
/// </summary>
public ref class SelectMgr_OrFilter sealed
    : public RDC::OCC::SelectMgr_CompositionFilter
{

#ifdef Include_SelectMgr_OrFilter_h
public:
    Include_SelectMgr_OrFilter_h
#endif

public:
    SelectMgr_OrFilter(::SelectMgr_OrFilter* nativeInstance)
        : RDC::OCC::SelectMgr_CompositionFilter( nativeInstance )
    {}

    SelectMgr_OrFilter(::SelectMgr_OrFilter& nativeInstance)
        : RDC::OCC::SelectMgr_CompositionFilter( nativeInstance )
    {}

    property ::SelectMgr_OrFilter* NativeInstance
    {
        ::SelectMgr_OrFilter* get()
        {
            return static_cast<::SelectMgr_OrFilter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty or selection filter.
    /// </summary>
    SelectMgr_OrFilter();
    bool IsOk(RDC::OCC::SelectMgr_EntityOwner^ anobj);
    static RDC::OCC::SelectMgr_OrFilter^ CreateDowncasted(::SelectMgr_OrFilter* instance);
}; // class SelectMgr_OrFilter

//---------------------------------------------------------------------
//  Class  SelectMgr_RectangularFrustum
//---------------------------------------------------------------------
/// <summary>
/// This class contains representation of rectangular selecting frustum, created in case
/// of point and box selection, and algorithms for overlap detection between selecting
/// frustum and sensitive entities. The principle of frustum calculation:
/// - for point selection: on a near view frustum plane rectangular neighborhood of
/// user-picked point is created according to the pixel tolerance
/// given and then this rectangle is projected onto far view frustum
/// plane. This rectangles define the parallel bases of selecting frustum;
/// - for box selection: box points are projected onto near and far view frustum planes.
/// These 2 projected rectangles define parallel bases of selecting frustum.
/// Overlap detection tests are implemented according to the terms of separating axis
/// theorem (SAT).
/// </summary>
public ref class SelectMgr_RectangularFrustum sealed
    : public RDC::OCC::SelectMgr_BaseFrustum
{

#ifdef Include_SelectMgr_RectangularFrustum_h
public:
    Include_SelectMgr_RectangularFrustum_h
#endif

public:
    SelectMgr_RectangularFrustum(::SelectMgr_RectangularFrustum* nativeInstance)
        : RDC::OCC::SelectMgr_BaseFrustum( nativeInstance )
    {}

    SelectMgr_RectangularFrustum(::SelectMgr_RectangularFrustum& nativeInstance)
        : RDC::OCC::SelectMgr_BaseFrustum( nativeInstance )
    {}

    property ::SelectMgr_RectangularFrustum* NativeInstance
    {
        ::SelectMgr_RectangularFrustum* get()
        {
            return static_cast<::SelectMgr_RectangularFrustum*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates rectangular selecting frustum.
    /// </summary>
    SelectMgr_RectangularFrustum();
    /// <summary>
    /// Initializes volume according to the point and given pixel tolerance
    /// </summary>
    void Init(RDC::OCC::Pnt2d thePoint);
    /// <summary>
    /// Initializes volume according to the selected rectangle
    /// </summary>
    void Init(RDC::OCC::Pnt2d theMinPnt, RDC::OCC::Pnt2d theMaxPnt);
    /// <summary>
    /// Returns True if Frustum (theVertices) intersects the circle.
    /// </summary>
    bool isIntersectCircle(double theRadius, RDC::OCC::Pnt theCenter, RDC::OCC::Trsf theTrsf, RDC::OCC::TColgp_Array1OfPnt^ theVertices);
    /// <summary>
    /// Returns True if Seg1 (thePnt1Seg1, thePnt2Seg1) and Seg2 (thePnt1Seg2, thePnt2Seg2) intersect.
    /// </summary>
    bool isSegmentsIntersect(RDC::OCC::Pnt thePnt1Seg1, RDC::OCC::Pnt thePnt2Seg1, RDC::OCC::Pnt thePnt1Seg2, RDC::OCC::Pnt thePnt2Seg2);
    /// <summary>
    /// Builds volume according to internal parameters.
    /// NOTE: it should be called after Init() method
    /// </summary>
    void Build();
    /// <summary>
    /// Checks if it is possible to scale this frustum.
    /// It is true for frustum built on a single point.
    /// </summary>
    bool IsScalable();
    /// <summary>
    /// IMPORTANT: Scaling makes sense only for frustum built on a single point!
    /// Note that this method does not perform any checks on type of the frustum.
    /// Returns a copy of the frustum resized according to the scale factor given
    /// and transforms it using the matrix given.
    /// There are no default parameters, but in case if:
    /// - transformation only is needed: @theScaleFactor must be initialized as any negative value;
    /// - scale only is needed: @theTrsf must be set to gp_Identity.
    /// Builder is an optional argument that represents corresponding settings for re-constructing transformed
    /// frustum from scratch. Can be null if reconstruction is not expected furthermore.
    /// </summary>
    RDC::OCC::SelectMgr_BaseIntersector^ ScaleAndTransform(int theScaleFactor, RDC::OCC::gp_GTrsf^ theTrsf, RDC::OCC::SelectMgr_FrustumBuilder^ theBuilder);
    /// <summary>
    /// SAT intersection test between defined volume and given axis-aligned box
    /// </summary>
    bool OverlapsBox(RDC::OCC::SelectMgr_Vec3^ theBoxMin, RDC::OCC::SelectMgr_Vec3^ theBoxMax, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by axis-aligned bounding box
    /// with minimum corner at point theMinPt and maximum at point theMaxPt
    /// </summary>
    bool OverlapsBox(RDC::OCC::SelectMgr_Vec3^ theBoxMin, RDC::OCC::SelectMgr_Vec3^ theBoxMax, bool% theInside);
    /// <summary>
    /// Intersection test between defined volume and given point
    /// </summary>
    bool OverlapsPoint(RDC::OCC::Pnt thePnt, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Intersection test between defined volume and given point
    /// </summary>
    bool OverlapsPoint(RDC::OCC::Pnt thePnt);
    /* Method skipped due to unknown mapping: bool OverlapsPolygon(TColgp_Array1OfPnt theArrayOfPnts, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
    /// <summary>
    /// Checks if line segment overlaps selecting frustum
    /// </summary>
    bool OverlapsSegment(RDC::OCC::Pnt thePnt1, RDC::OCC::Pnt thePnt2, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /* Method skipped due to unknown mapping: bool OverlapsTriangle(gp_Pnt thePnt1, gp_Pnt thePnt2, gp_Pnt thePnt3, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
    /// <summary>
    /// Intersection test between defined volume and given sphere
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Intersection test between defined volume and given sphere
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theBottomRad, RDC::OCC::Trsf theTrsf, bool theIsFilled, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theBottomRad, RDC::OCC::Trsf theTrsf, bool theIsFilled, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theBottomRad, RDC::OCC::Trsf theTrsf, bool theIsFilled);
    /// <summary>
    /// Measures distance between 3d projection of user-picked
    /// screen point and given point theCOG.
    /// It makes sense only for frustums built on a single point.
    /// </summary>
    double DistToGeometryCenter(RDC::OCC::Pnt theCOG);
    /// <summary>
    /// Calculates the point on a view ray that was detected during the run of selection algo by given depth
    /// </summary>
    RDC::OCC::Pnt DetectedPoint(double theDepth);
    /// <summary>
    /// A set of helper functions that return rectangular selecting frustum data
    /// </summary>
    RDC::OCC::Pnt GetVertices();
    /// <summary>
    /// Returns projection of 2d mouse picked point or projection
    /// of center of 2d rectangle (for point and rectangular selection
    /// correspondingly) onto near view frustum plane
    /// </summary>
    RDC::OCC::Pnt GetNearPnt();
    /// <summary>
    /// Returns projection of 2d mouse picked point or projection
    /// of center of 2d rectangle (for point and rectangular selection
    /// correspondingly) onto far view frustum plane
    /// </summary>
    RDC::OCC::Pnt GetFarPnt();
    /// <summary>
    /// Returns view ray direction.
    /// </summary>
    RDC::OCC::Dir GetViewRayDirection();
    /// <summary>
    /// Returns current mouse coordinates.
    /// </summary>
    RDC::OCC::Pnt2d GetMousePosition();
    /* Method skipped due to unknown mapping: void GetPlanes(NCollection_DynamicArray<NCollection_Vec4<double>> thePlaneEquations, ) */
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::SelectMgr_RectangularFrustum^ CreateDowncasted(::SelectMgr_RectangularFrustum* instance);
}; // class SelectMgr_RectangularFrustum

//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObjectSet
//---------------------------------------------------------------------
/// <summary>
/// The purpose of this class is to organize all selectable objects into data structure, allowing to build
/// set of BVH trees for each transformation persistence subclass of selectable objects. This allow to minify
/// number of updates for BVH trees - for example 2D persistent object subclass depends only on camera's projection
/// and the corresponding BVH tree needs to be updated when camera's projection parameters change, while another
/// tree for non-persistent objects can be left unchanged in this case.
/// </summary>
public ref class SelectMgr_SelectableObjectSet sealed
    : public RDC::OCC::BaseClass<::SelectMgr_SelectableObjectSet>
{

#ifdef Include_SelectMgr_SelectableObjectSet_h
public:
    Include_SelectMgr_SelectableObjectSet_h
#endif

public:
    SelectMgr_SelectableObjectSet(::SelectMgr_SelectableObjectSet* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_SelectableObjectSet>( nativeInstance, true )
    {}

    SelectMgr_SelectableObjectSet(::SelectMgr_SelectableObjectSet& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_SelectableObjectSet>( &nativeInstance, false )
    {}

    property ::SelectMgr_SelectableObjectSet* NativeInstance
    {
        ::SelectMgr_SelectableObjectSet* get()
        {
            return static_cast<::SelectMgr_SelectableObjectSet*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  BVHSubset
    //---------------------------------------------------------------------
    /// <summary>
    /// This enumeration declares names for subsets of selectable objects. Each subset has independent BVH tree.
    /// The class maintains subsets of selectable objects by their persistence flag. This allows to restric
    /// rebuilding of the trees for particular subset when the camera change does not implicitly require it:
    /// - BVHSubset_3d refers to the subset of normal world-space 3D objects. Associated BVH tree does not depend
    /// on the camera's state at all.
    /// This subset uses binned BVH builder with 32 bins and 1 element per leaf.
    /// - BVHSubset_3dPersistent refers to the subset of 3D persistent selectable objects (rotate, pan, zoom persistence).
    /// Associated BVH tree needs to be updated when either the camera's projection and position change.
    /// This subset uses linear BVH builder with 32 levels of depth and 1 element per leaf.
    /// - BVHSubset_2dPersistent refers to the subset of 2D persistent selectable objects. Associated BVH tree
    /// needs to be updated only when camera's projection changes. Bounding volumes for this object subclass
    /// is represented directly in eye space coordinates.
    /// This subset uses linear BVH builder with 32 levels of depth and 1 element per leaf.
    /// </summary>
    enum class BVHSubset
    {
        BVHSubset_3d = 0,
        BVHSubset_3dPersistent = 1,
        BVHSubset_2dPersistent = 2,
        BVHSubsetNb = 3
    }; // enum  class BVHSubset

    /// <summary>
    /// Class to iterate sequentually over all objects from every subset.
    /// </summary>
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::SelectMgr_SelectableObjectSet::Iterator>
    {

#ifdef Include_SelectMgr_SelectableObjectSet_Iterator_h
    public:
        Include_SelectMgr_SelectableObjectSet_Iterator_h
#endif

    public:
        Iterator(::SelectMgr_SelectableObjectSet::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_SelectableObjectSet::Iterator>( nativeInstance, true )
        {}

        Iterator(::SelectMgr_SelectableObjectSet::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::SelectMgr_SelectableObjectSet::Iterator>( &nativeInstance, false )
        {}

        property ::SelectMgr_SelectableObjectSet::Iterator* NativeInstance
        {
            ::SelectMgr_SelectableObjectSet::Iterator* get()
            {
                return static_cast<::SelectMgr_SelectableObjectSet::Iterator*>(_NativeInstance);
            }
        }

    public:
        /// <summary>
        /// Default constructor without initialization.
        /// </summary>
        Iterator();
        /// <summary>
        /// Constructs and initializes the iterator.
        /// </summary>
        Iterator(RDC::OCC::SelectMgr_SelectableObjectSet^ theSet);
        /// <summary>
        /// Initializes the iterator.
        /// </summary>
        void Init(RDC::OCC::SelectMgr_SelectableObjectSet^ theSet);
        /// <summary>
        /// Returns false when there is no more objects to iterate over.
        /// </summary>
        bool More();
        /// <summary>
        /// Steps to next selectable object in the set.
        /// </summary>
        void Next();
        /// <summary>
        /// Returns current object.
        /// </summary>
        RDC::OCC::SelectMgr_SelectableObject^ Value();
    }; // class Iterator

    /// <summary>
    /// Creates new empty objects set and initializes BVH tree builders for each subset.
    /// </summary>
    SelectMgr_SelectableObjectSet();
    /// <summary>
    /// Adds the new selectable object to the set. The selectable object is placed into one of the
    /// predefined subsets depending on its persistence type. After adding an object, this method
    /// marks the corresponding BVH tree for rebuild.
    /// </summary>
    /// <returns>
    /// true if selectable object is added, otherwise returns false (selectable object is already in the set).
    /// </returns>
    bool Append(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Removes the selectable object from the set. The selectable object is removed from the subset
    /// it has been placed into. After removing an object, this method marks the corresponding
    /// BVH tree for rebuild.
    /// </summary>
    /// <returns>
    /// true if selectable object is removed, otherwise returns false (selectable object is not in the set).
    /// </returns>
    bool Remove(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Performs necessary updates when object's persistence types changes.
    /// This method should be called right after changing transformation persistence flags of the
    /// objects and before updating BVH tree - to provide up-to-date state of the object set.
    /// </summary>
    void ChangeSubset(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Updates outdated BVH trees and remembers the last state of the
    /// camera view-projection matrices and viewport (window) dimensions.
    /// </summary>
    void UpdateBVH(RDC::OCC::Graphic3d_Camera^ theCam, RDC::OCC::Graphic3d_Vec2i^ theWinSize);
    /// <summary>
    /// Marks every BVH subset for update.
    /// </summary>
    void MarkDirty();
    /// <summary>
    /// Returns true if this objects set contains theObject given.
    /// </summary>
    bool Contains(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Returns true if the object set does not contain any selectable objects.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Returns true if the specified object subset is empty.
    /// </summary>
    bool IsEmpty(RDC::OCC::SelectMgr_SelectableObjectSet::BVHSubset theSubset);
    /// <summary>
    /// Returns object from subset theSubset by theIndex given. The method allows to get selectable object
    /// referred by the index of an element of the subset's BVH tree.
    /// </summary>
    RDC::OCC::SelectMgr_SelectableObject^ GetObjectById(RDC::OCC::SelectMgr_SelectableObjectSet::BVHSubset theSubset, int theIndex);
    /* Method skipped due to unknown mapping: BVH_Tree<double, 3, BVH_BinaryTree BVH(BVHSubset theSubset, ) */
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class SelectMgr_SelectableObjectSet

//---------------------------------------------------------------------
//  Class  SelectMgr_ViewerSelector
//---------------------------------------------------------------------
/// <summary>
/// A framework to define finding, sorting the sensitive
/// primitives in a view. Services are also provided to
/// define the return of the owners of those primitives
/// selected. The primitives are sorted by criteria such
/// as priority of the primitive or its depth in the view
/// relative to that of other primitives.
/// Note that in 3D, the inheriting framework
/// StdSelect_ViewerSelector3d   is only to be used
/// if you do not want to use the services provided by
/// AIS.
/// Two tools are available to find and select objects
/// found at a given position in the view. If you want to
/// select the owners of all the objects detected at
/// point x,y,z you use the Init - More - Next - Picked
/// loop. If, on the other hand, you want to select only
/// one object detected at that point, you use the Init -
/// More - OnePicked loop. In this iteration, More is
/// used to see if an object was picked and
/// OnePicked, to get the object closest to the pick position.
/// Viewer selectors are driven by
/// SelectMgr_SelectionManager, and manipulate
/// the SelectMgr_Selection objects given to them by
/// the selection manager.
/// 
/// Tolerances are applied to the entities in the following way:
/// 1. tolerance value stored in mytolerance will be used to calculate initial
/// selecting frustum, which will be applied for intersection testing during
/// BVH traverse;
/// 2. if tolerance of sensitive entity is less than mytolerance, the frustum for
/// intersection detection will be resized according to its sensitivity.
/// </summary>
public ref class SelectMgr_ViewerSelector sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_SelectMgr_ViewerSelector_h
public:
    Include_SelectMgr_ViewerSelector_h
#endif

public:
    SelectMgr_ViewerSelector(::SelectMgr_ViewerSelector* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    SelectMgr_ViewerSelector(::SelectMgr_ViewerSelector& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::SelectMgr_ViewerSelector* NativeInstance
    {
        ::SelectMgr_ViewerSelector* get()
        {
            return static_cast<::SelectMgr_ViewerSelector*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty selector object.
    /// </summary>
    SelectMgr_ViewerSelector();
    /// <summary>
    /// Returns custom pixel tolerance value.
    /// </summary>
    int CustomPixelTolerance();
    /// <summary>
    /// Sets the pixel tolerance <theTolerance>.
    /// </summary>
    void SetPixelTolerance(int theTolerance);
    /// <summary>
    /// Returns the largest sensitivity of picking
    /// </summary>
    double Sensitivity();
    /// <summary>
    /// Returns the largest pixel tolerance.
    /// </summary>
    int PixelTolerance();
    /// <summary>
    /// Sorts the detected entities by priority and distance.
    /// </summary>
    void SortResult();
    /// <summary>
    /// Returns the picked element with the highest priority,
    /// and which is the closest to the last successful mouse position.
    /// </summary>
    RDC::OCC::SelectMgr_EntityOwner^ OnePicked();
    /// <summary>
    /// Return the flag determining precedence of picked depth (distance from eye to entity) over entity priority in sorted results; TRUE by default.
    /// When flag is TRUE, priority will be considered only if entities have the same depth  within the tolerance.
    /// When flag is FALSE, entities with higher priority will be in front regardless of their depth (like x-ray).
    /// </summary>
    bool ToPickClosest();
    /// <summary>
    /// Set flag determining precedence of picked depth over entity priority in sorted results.
    /// </summary>
    void SetPickClosest(bool theToPreferClosest);
    /// <summary>
    /// Return the type of tolerance for considering two entities having a similar depth (distance from eye to entity);
    /// SelectMgr_TypeOfDepthTolerance_SensitivityFactor by default.
    /// </summary>
    RDC::OCC::SelectMgr_TypeOfDepthTolerance DepthToleranceType();
    /// <summary>
    /// Return the tolerance for considering two entities having a similar depth (distance from eye to entity).
    /// </summary>
    double DepthTolerance();
    /// <summary>
    /// Set the tolerance for considering two entities having a similar depth (distance from eye to entity).
    /// </summary>
    /// <param name="theType">
    /// [in] type of tolerance value
    /// </param>
    /// <param name="theTolerance">
    /// [in] tolerance value in 3D scale (SelectMgr_TypeOfDepthTolerance_Uniform)
    /// or in pixels (SelectMgr_TypeOfDepthTolerance_UniformPixels);
    /// value is ignored in case of SelectMgr_TypeOfDepthTolerance_SensitivityFactor
    /// </param>
    void SetDepthTolerance(RDC::OCC::SelectMgr_TypeOfDepthTolerance theType, double theTolerance);
    /// <summary>
    /// Returns the number of detected owners.
    /// </summary>
    int NbPicked();
    /// <summary>
    /// Clears picking results.
    /// </summary>
    void ClearPicked();
    /// <summary>
    /// Empties all the tables, removes all selections...
    /// </summary>
    void Clear();
    /// <summary>
    /// Returns the entity Owner for the object picked at specified position.
    /// </summary>
    /// <param name="theRank">
    /// rank of detected object within range 1...NbPicked()
    /// </param>
    RDC::OCC::SelectMgr_EntityOwner^ Picked(int theRank);
    /// <summary>
    /// Returns the Entity for the object picked at specified position.
    /// </summary>
    /// <param name="theRank">
    /// rank of detected object within range 1...NbPicked()
    /// </param>
    RDC::OCC::SelectMgr_SortCriterion^ PickedData(int theRank);
    /* Method skipped due to unknown mapping: Select3D_SensitiveEntity PickedEntity(int theRank, ) */
    /// <summary>
    /// Returns the 3D point (intersection of picking axis with the object nearest to eye)
    /// for the object picked at specified position.
    /// </summary>
    /// <param name="theRank">
    /// rank of detected object within range 1...NbPicked()
    /// </param>
    RDC::OCC::Pnt PickedPoint(int theRank);
    /// <summary>
    /// Remove picked entities associated with specified object.
    /// </summary>
    bool RemovePicked(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    bool Contains(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /* Method skipped due to unknown mapping: BVH_Builder<double, 3 EntitySetBuilder() */
    /* Method skipped due to unknown mapping: void SetEntitySetBuilder(BVH_Builder<double, 3 theBuilder, ) */
    /// <summary>
    /// Returns the list of selection modes ModeList found in
    /// this selector for the selectable object aSelectableObject.
    /// Returns true if aSelectableObject is referenced inside
    /// this selector; returns false if the object is not present
    /// in this selector.
    /// </summary>
    bool Modes(RDC::OCC::SelectMgr_SelectableObject^ theSelectableObject, RDC::OCC::TColStd_ListOfInteger^ theModeList, RDC::OCC::SelectMgr_StateOfSelection theWantedState);
    /// <summary>
    /// Returns the list of selection modes ModeList found in
    /// this selector for the selectable object aSelectableObject.
    /// Returns true if aSelectableObject is referenced inside
    /// this selector; returns false if the object is not present
    /// in this selector.
    /// </summary>
    bool Modes(RDC::OCC::SelectMgr_SelectableObject^ theSelectableObject, RDC::OCC::TColStd_ListOfInteger^ theModeList);
    /// <summary>
    /// Returns true if the selectable object
    /// aSelectableObject having the selection mode aMode
    /// is active in this selector.
    /// </summary>
    bool IsActive(RDC::OCC::SelectMgr_SelectableObject^ theSelectableObject, int theMode);
    /// <summary>
    /// Returns true if the selectable object
    /// aSelectableObject having the selection mode aMode
    /// is in this selector.
    /// </summary>
    bool IsInside(RDC::OCC::SelectMgr_SelectableObject^ theSelectableObject, int theMode);
    /// <summary>
    /// Returns the selection status Status of the selection aSelection.
    /// </summary>
    RDC::OCC::SelectMgr_StateOfSelection Status(RDC::OCC::SelectMgr_Selection^ theSelection);
    RDC::OCC::TCollection_AsciiString^ Status(RDC::OCC::SelectMgr_SelectableObject^ theSelectableObject);
    /// <summary>
    /// Returns the list of active entity owners
    /// </summary>
    void ActiveOwners(RDC::OCC::AIS_NListOfEntityOwner^ theOwners);
    /// <summary>
    /// Adds new object to the map of selectable objects
    /// </summary>
    void AddSelectableObject(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Adds new selection to the object and builds its BVH tree
    /// </summary>
    void AddSelectionToObject(RDC::OCC::SelectMgr_SelectableObject^ theObject, RDC::OCC::SelectMgr_Selection^ theSelection);
    /// <summary>
    /// Moves existing object from set of not transform persistence objects
    /// to set of transform persistence objects (or vice versa).
    /// </summary>
    void MoveSelectableObject(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Removes selectable object from map of selectable ones
    /// </summary>
    void RemoveSelectableObject(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Removes selection of the object and marks its BVH tree for rebuild
    /// </summary>
    void RemoveSelectionOfObject(RDC::OCC::SelectMgr_SelectableObject^ theObject, RDC::OCC::SelectMgr_Selection^ theSelection);
    /// <summary>
    /// Marks BVH of selectable objects for rebuild. Parameter theIsForce set as true
    /// guarantees that 1st level BVH for the viewer selector will be rebuilt during this call
    /// </summary>
    void RebuildObjectsTree(bool theIsForce);
    /// <summary>
    /// Marks BVH of selectable objects for rebuild. Parameter theIsForce set as true
    /// guarantees that 1st level BVH for the viewer selector will be rebuilt during this call
    /// </summary>
    void RebuildObjectsTree();
    /// <summary>
    /// Marks BVH of sensitive entities of particular selectable object for rebuild. Parameter
    /// theIsForce set as true guarantees that 2nd level BVH for the object given will be
    /// rebuilt during this call
    /// </summary>
    void RebuildSensitivesTree(RDC::OCC::SelectMgr_SelectableObject^ theObject, bool theIsForce);
    /// <summary>
    /// Marks BVH of sensitive entities of particular selectable object for rebuild. Parameter
    /// theIsForce set as true guarantees that 2nd level BVH for the object given will be
    /// rebuilt during this call
    /// </summary>
    void RebuildSensitivesTree(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Returns instance of selecting volume manager of the viewer selector
    /// </summary>
    RDC::OCC::SelectMgr_SelectingVolumeManager^ GetManager();
    /// <summary>
    /// Return map of selectable objects.
    /// </summary>
    RDC::OCC::SelectMgr_SelectableObjectSet^ SelectableObjects();
    /// <summary>
    /// Marks all added sensitive entities of all objects as non-selectable
    /// </summary>
    void ResetSelectionActivationStatus();
    /// <summary>
    /// Is used for rectangular selection only
    /// If theIsToAllow is false, only fully included sensitives will be detected, otherwise the algorithm will
    /// mark both included and overlapped entities as matched
    /// </summary>
    void AllowOverlapDetection(bool theIsToAllow);
    /// <summary>
    /// Picks the sensitive entity at the pixel coordinates of
    /// the mouse <theXPix> and <theYPix>. The selector looks for touched areas and owners.
    /// </summary>
    void Pick(int theXPix, int theYPix, RDC::OCC::V3d_View^ theView);
    /// <summary>
    /// Picks the sensitive entity according to the minimum
    /// and maximum pixel values <theXPMin>, <theYPMin>, <theXPMax>
    /// and <theYPMax> defining a 2D area for selection in the 3D view aView.
    /// </summary>
    void Pick(int theXPMin, int theYPMin, int theXPMax, int theYPMax, RDC::OCC::V3d_View^ theView);
    /// <summary>
    /// pick action - input pixel values for polyline selection for selection.
    /// </summary>
    void Pick(RDC::OCC::TColgp_Array1OfPnt2d^ thePolyline, RDC::OCC::V3d_View^ theView);
    /// <summary>
    /// Picks the sensitive entity according to the input axis.
    /// This is geometric intersection 3D objects by axis
    /// (camera parameters are ignored and objects with transform persistance are skipped).
    /// </summary>
    void Pick(RDC::OCC::Ax1 theAxis, RDC::OCC::V3d_View^ theView);
    /// <summary>
    /// Dump of detection results into image.
    /// This method performs axis picking for each pixel in the image
    /// and generates a color depending on picking results and selection image type.
    /// </summary>
    /// <param name="theImage">
    ///       result image, should be initialized
    /// </param>
    /// <param name="theView">
    ///        3D view defining camera position
    /// </param>
    /// <param name="theType">
    ///        type of image to define
    /// </param>
    /// <param name="thePickedIndex">
    /// index of picked entity (1 means topmost)
    /// </param>
    bool ToPixMap(RDC::OCC::Image_PixMap^ theImage, RDC::OCC::V3d_View^ theView, RDC::OCC::StdSelect_TypeOfSelectionImage theType, int thePickedIndex);
    /// <summary>
    /// Dump of detection results into image.
    /// This method performs axis picking for each pixel in the image
    /// and generates a color depending on picking results and selection image type.
    /// </summary>
    /// <param name="theImage">
    ///       result image, should be initialized
    /// </param>
    /// <param name="theView">
    ///        3D view defining camera position
    /// </param>
    /// <param name="theType">
    ///        type of image to define
    /// </param>
    /// <param name="thePickedIndex">
    /// index of picked entity (1 means topmost)
    /// </param>
    bool ToPixMap(RDC::OCC::Image_PixMap^ theImage, RDC::OCC::V3d_View^ theView, RDC::OCC::StdSelect_TypeOfSelectionImage theType);
    /// <summary>
    /// Displays sensitives in view <theView>.
    /// </summary>
    void DisplaySensitive(RDC::OCC::V3d_View^ theView);
    void ClearSensitive(RDC::OCC::V3d_View^ theView);
    void DisplaySensitive(RDC::OCC::SelectMgr_Selection^ theSel, RDC::OCC::Trsf theTrsf, RDC::OCC::V3d_View^ theView, bool theToClearOthers);
    void DisplaySensitive(RDC::OCC::SelectMgr_Selection^ theSel, RDC::OCC::Trsf theTrsf, RDC::OCC::V3d_View^ theView);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// Enables/disables building BVH for sensitives in separate threads
    /// </summary>
    void SetToPrebuildBVH(bool theToPrebuild, int theThreadsNum);
    /// <summary>
    /// Enables/disables building BVH for sensitives in separate threads
    /// </summary>
    void SetToPrebuildBVH(bool theToPrebuild);
    /* Method skipped due to unknown mapping: void QueueBVHBuild(Select3D_SensitiveEntity theEntity, ) */
    /// <summary>
    /// Waits BVH threads finished building
    /// </summary>
    void WaitForBVHBuild();
    /// <summary>
    /// Returns TRUE if building BVH for sensitives in separate threads is enabled
    /// </summary>
    bool ToPrebuildBVH();
    static RDC::OCC::SelectMgr_ViewerSelector^ CreateDowncasted(::SelectMgr_ViewerSelector* instance);
}; // class SelectMgr_ViewerSelector

//---------------------------------------------------------------------
//  Class  SelectMgr_ToleranceMap
//---------------------------------------------------------------------
/// <summary>
/// An internal class for calculation of current largest tolerance value which will be applied for creation of selecting frustum by default.
/// Each time the selection set is deactivated, maximum tolerance value will be recalculated.
/// If a user enables custom precision using StdSelect_ViewerSelector3d::SetPixelTolerance, it will be applied to all sensitive entities without any checks.
/// </summary>
public ref class SelectMgr_ToleranceMap sealed
    : public RDC::OCC::BaseClass<::SelectMgr_ToleranceMap>
{

#ifdef Include_SelectMgr_ToleranceMap_h
public:
    Include_SelectMgr_ToleranceMap_h
#endif

public:
    SelectMgr_ToleranceMap(::SelectMgr_ToleranceMap* nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_ToleranceMap>( nativeInstance, true )
    {}

    SelectMgr_ToleranceMap(::SelectMgr_ToleranceMap& nativeInstance)
        : RDC::OCC::BaseClass<::SelectMgr_ToleranceMap>( &nativeInstance, false )
    {}

    property ::SelectMgr_ToleranceMap* NativeInstance
    {
        ::SelectMgr_ToleranceMap* get()
        {
            return static_cast<::SelectMgr_ToleranceMap*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Sets tolerance values to -1.0
    /// </summary>
    SelectMgr_ToleranceMap();
    /// <summary>
    /// Adds the value given to map, checks if the current tolerance value
    /// should be replaced by theTolerance
    /// </summary>
    void Add(int theTolerance);
    /// <summary>
    /// Decrements a counter of the tolerance given, checks if the current tolerance value
    /// should be recalculated
    /// </summary>
    void Decrement(int theTolerance);
    /// <summary>
    /// Returns a current tolerance that must be applied
    /// </summary>
    int Tolerance();
    /// <summary>
    /// Sets tolerance to the given one and disables adaptive checks
    /// </summary>
    void SetCustomTolerance(int theTolerance);
    /// <summary>
    /// Unsets a custom tolerance and enables adaptive checks
    /// </summary>
    void ResetDefaults();
    /// <summary>
    /// Returns the value of custom tolerance regardless of it validity
    /// </summary>
    int CustomTolerance();
    /// <summary>
    /// Returns true if custom tolerance value is greater than zero
    /// </summary>
    bool IsCustomTolSet();
}; // class SelectMgr_ToleranceMap

//---------------------------------------------------------------------
//  Class  SelectMgr_SelectionManager
//---------------------------------------------------------------------
/// <summary>
/// A framework to manage selection from the point of view of viewer selectors.
/// These can be added and removed, and selection modes can be activated and deactivated.
/// In addition, objects may be known to all selectors or only to some.
/// </summary>
public ref class SelectMgr_SelectionManager sealed
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_SelectMgr_SelectionManager_h
public:
    Include_SelectMgr_SelectionManager_h
#endif

public:
    SelectMgr_SelectionManager(::SelectMgr_SelectionManager* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    SelectMgr_SelectionManager(::SelectMgr_SelectionManager& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::SelectMgr_SelectionManager* NativeInstance
    {
        ::SelectMgr_SelectionManager* get()
        {
            return static_cast<::SelectMgr_SelectionManager*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty selection manager object.
    /// </summary>
    SelectMgr_SelectionManager(RDC::OCC::SelectMgr_ViewerSelector^ theSelector);
    /// <summary>
    /// Return the Selector.
    /// </summary>
    RDC::OCC::SelectMgr_ViewerSelector^ Selector();
    /// <summary>
    /// Returns true if the manager contains the selectable object theObject.
    /// </summary>
    bool Contains(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Loads and computes selection mode theMode (if it is not equal to -1) in global context and adds selectable
    /// object to BVH tree. If the object theObject has an already calculated selection with mode theMode and it was removed,
    /// the selection will be recalculated.
    /// </summary>
    void Load(RDC::OCC::SelectMgr_SelectableObject^ theObject, int theMode);
    /// <summary>
    /// Loads and computes selection mode theMode (if it is not equal to -1) in global context and adds selectable
    /// object to BVH tree. If the object theObject has an already calculated selection with mode theMode and it was removed,
    /// the selection will be recalculated.
    /// </summary>
    void Load(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Removes selectable object theObject from all viewer selectors it was added to previously, removes it from all contexts
    /// and clears all computed selections of theObject.
    /// </summary>
    void Remove(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Activates the selection mode theMode in the selector theSelector for the selectable object anObject.
    /// By default, theMode is equal to 0. If theSelector is set to default (NULL), the selection with the mode theMode
    /// will be activated in all the viewers available.
    /// </summary>
    void Activate(RDC::OCC::SelectMgr_SelectableObject^ theObject, int theMode);
    /// <summary>
    /// Activates the selection mode theMode in the selector theSelector for the selectable object anObject.
    /// By default, theMode is equal to 0. If theSelector is set to default (NULL), the selection with the mode theMode
    /// will be activated in all the viewers available.
    /// </summary>
    void Activate(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Deactivates mode theMode of theObject in theSelector. If theMode value is set to default (-1), all
    /// active selection modes will be deactivated. Likewise, if theSelector value is set to default (NULL), theMode
    /// will be deactivated in all viewer selectors.
    /// </summary>
    void Deactivate(RDC::OCC::SelectMgr_SelectableObject^ theObject, int theMode);
    /// <summary>
    /// Deactivates mode theMode of theObject in theSelector. If theMode value is set to default (-1), all
    /// active selection modes will be deactivated. Likewise, if theSelector value is set to default (NULL), theMode
    /// will be deactivated in all viewer selectors.
    /// </summary>
    void Deactivate(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Returns true if the selection with theMode is active for the selectable object theObject and selector theSelector.
    /// If all parameters are set to default values, it returns it there is any active selection in any known viewer selector for
    /// object theObject.
    /// </summary>
    bool IsActivated(RDC::OCC::SelectMgr_SelectableObject^ theObject, int theMode);
    /// <summary>
    /// Returns true if the selection with theMode is active for the selectable object theObject and selector theSelector.
    /// If all parameters are set to default values, it returns it there is any active selection in any known viewer selector for
    /// object theObject.
    /// </summary>
    bool IsActivated(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Removes sensitive entities from all viewer selectors
    /// after method Clear() was called to the selection they belonged to
    /// or it was recomputed somehow.
    /// </summary>
    void ClearSelectionStructures(RDC::OCC::SelectMgr_SelectableObject^ theObj, int theMode);
    /// <summary>
    /// Removes sensitive entities from all viewer selectors
    /// after method Clear() was called to the selection they belonged to
    /// or it was recomputed somehow.
    /// </summary>
    void ClearSelectionStructures(RDC::OCC::SelectMgr_SelectableObject^ theObj);
    /// <summary>
    /// Re-adds newly calculated sensitive  entities of recomputed selection
    /// defined by mode theMode to all viewer selectors contained that selection.
    /// </summary>
    void RestoreSelectionStructures(RDC::OCC::SelectMgr_SelectableObject^ theObj, int theMode);
    /// <summary>
    /// Re-adds newly calculated sensitive  entities of recomputed selection
    /// defined by mode theMode to all viewer selectors contained that selection.
    /// </summary>
    void RestoreSelectionStructures(RDC::OCC::SelectMgr_SelectableObject^ theObj);
    /// <summary>
    /// Recomputes activated selections of theObject for all known viewer selectors according to theMode specified.
    /// If theMode is set to default (-1), then all activated selections will be recomputed. If theIsForce is set to true,
    /// then selection mode theMode for object theObject will be recomputed regardless of its activation status.
    /// </summary>
    void RecomputeSelection(RDC::OCC::SelectMgr_SelectableObject^ theObject, bool theIsForce, int theMode);
    /// <summary>
    /// Recomputes activated selections of theObject for all known viewer selectors according to theMode specified.
    /// If theMode is set to default (-1), then all activated selections will be recomputed. If theIsForce is set to true,
    /// then selection mode theMode for object theObject will be recomputed regardless of its activation status.
    /// </summary>
    void RecomputeSelection(RDC::OCC::SelectMgr_SelectableObject^ theObject, bool theIsForce);
    /// <summary>
    /// Recomputes activated selections of theObject for all known viewer selectors according to theMode specified.
    /// If theMode is set to default (-1), then all activated selections will be recomputed. If theIsForce is set to true,
    /// then selection mode theMode for object theObject will be recomputed regardless of its activation status.
    /// </summary>
    void RecomputeSelection(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Updates all selections of theObject in all viewer selectors according to its current update status.
    /// If theIsForce is set to true, the call is equal to recomputation.
    /// </summary>
    void Update(RDC::OCC::SelectMgr_SelectableObject^ theObject, bool theIsForce);
    /// <summary>
    /// Updates all selections of theObject in all viewer selectors according to its current update status.
    /// If theIsForce is set to true, the call is equal to recomputation.
    /// </summary>
    void Update(RDC::OCC::SelectMgr_SelectableObject^ theObject);
    /// <summary>
    /// Sets type of update of all selections of theObject to the given theType.
    /// </summary>
    void SetUpdateMode(RDC::OCC::SelectMgr_SelectableObject^ theObject, RDC::OCC::SelectMgr_TypeOfUpdate theType);
    /// <summary>
    /// Sets type of update of selection with theMode of theObject to the given theType.
    /// </summary>
    void SetUpdateMode(RDC::OCC::SelectMgr_SelectableObject^ theObject, int theMode, RDC::OCC::SelectMgr_TypeOfUpdate theType);
    /// <summary>
    /// Allows to manage sensitivity of a particular selection of interactive object theObject and
    /// changes previous sensitivity value of all sensitive entities in selection with theMode
    /// to the given theNewSensitivity.
    /// </summary>
    void SetSelectionSensitivity(RDC::OCC::SelectMgr_SelectableObject^ theObject, int theMode, int theNewSens);
    /// <summary>
    /// Re-adds selectable object in BVHs in all viewer selectors.
    /// </summary>
    void UpdateSelection(RDC::OCC::SelectMgr_SelectableObject^ theObj);
    static RDC::OCC::SelectMgr_SelectionManager^ CreateDowncasted(::SelectMgr_SelectionManager* instance);
}; // class SelectMgr_SelectionManager

//---------------------------------------------------------------------
//  Class  SelectMgr_TriangularFrustum
//---------------------------------------------------------------------
/// <summary>
/// This class contains representation of triangular selecting frustum, created in case
/// of polyline selection, and algorithms for overlap detection between selecting frustum and sensitive entities.
/// Overlap detection tests are implemented according to the terms of separating axis theorem (SAT).
/// NOTE: the object of this class can be created only as part of SelectMgr_TriangularFrustumSet.
/// </summary>
public ref class SelectMgr_TriangularFrustum sealed
    : public RDC::OCC::SelectMgr_BaseFrustum
{

#ifdef Include_SelectMgr_TriangularFrustum_h
public:
    Include_SelectMgr_TriangularFrustum_h
#endif

public:
    SelectMgr_TriangularFrustum(::SelectMgr_TriangularFrustum* nativeInstance)
        : RDC::OCC::SelectMgr_BaseFrustum( nativeInstance )
    {}

    SelectMgr_TriangularFrustum(::SelectMgr_TriangularFrustum& nativeInstance)
        : RDC::OCC::SelectMgr_BaseFrustum( nativeInstance )
    {}

    property ::SelectMgr_TriangularFrustum* NativeInstance
    {
        ::SelectMgr_TriangularFrustum* get()
        {
            return static_cast<::SelectMgr_TriangularFrustum*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes selection triangle by input points
    /// </summary>
    void Init(RDC::OCC::Pnt2d theP1, RDC::OCC::Pnt2d theP2, RDC::OCC::Pnt2d theP3);
    /// <summary>
    /// Creates new triangular frustum with bases of triangles with vertices theP1, theP2 and theP3
    /// projections onto near and far view frustum planes (only for triangular frustums)
    /// NOTE: it should be called after Init() method
    /// </summary>
    void Build();
    /// <summary>
    /// Returns FALSE (not applicable to this volume).
    /// </summary>
    bool IsScalable();
    /// <summary>
    /// Returns a copy of the frustum transformed according to the matrix given
    /// </summary>
    RDC::OCC::SelectMgr_BaseIntersector^ ScaleAndTransform(int theScale, RDC::OCC::gp_GTrsf^ theTrsf, RDC::OCC::SelectMgr_FrustumBuilder^ theBuilder);
    /// <summary>
    /// SAT intersection test between defined volume and given axis-aligned box
    /// </summary>
    bool OverlapsBox(RDC::OCC::SelectMgr_Vec3^ theMinPnt, RDC::OCC::SelectMgr_Vec3^ theMaxPnt, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by axis-aligned bounding box
    /// with minimum corner at point theMinPt and maximum at point theMaxPt
    /// </summary>
    bool OverlapsBox(RDC::OCC::SelectMgr_Vec3^ theMinPt, RDC::OCC::SelectMgr_Vec3^ theMaxPt, bool% theInside);
    /// <summary>
    /// Intersection test between defined volume and given point
    /// </summary>
    bool OverlapsPoint(RDC::OCC::Pnt thePnt, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Always returns FALSE (not applicable to this selector).
    /// </summary>
    bool OverlapsPoint(RDC::OCC::Pnt parameter1);
    /* Method skipped due to unknown mapping: bool OverlapsPolygon(TColgp_Array1OfPnt theArrayOfPnts, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
    /// <summary>
    /// Checks if line segment overlaps selecting frustum
    /// </summary>
    bool OverlapsSegment(RDC::OCC::Pnt thePnt1, RDC::OCC::Pnt thePnt2, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /* Method skipped due to unknown mapping: bool OverlapsTriangle(gp_Pnt thePnt1, gp_Pnt thePnt2, gp_Pnt thePnt3, Select3D_TypeOfSensitivity theSensType, SelectMgr_ViewClipRange theClipRange, SelectBasics_PickResult thePickResult, ) */
    /// <summary>
    /// Returns true if selecting volume is overlapped by sphere with center theCenter
    /// and radius theRadius
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by sphere with center theCenter
    /// and radius theRadius
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius);
    /// <summary>
    /// Returns true if selecting volume is overlapped by sphere with center theCenter
    /// and radius theRadius
    /// </summary>
    bool OverlapsSphere(RDC::OCC::Pnt theCenter, double theRadius, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by cylinder (or cone) with radiuses theBottomRad
    /// and theTopRad, height theHeight and transformation to apply theTrsf.
    /// </summary>
    bool OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, RDC::OCC::Trsf theTrsf, bool theIsHollow);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theRadius, RDC::OCC::Trsf theTrsf, bool theIsFilled, RDC::OCC::SelectMgr_ViewClipRange^ theClipRange, RDC::OCC::SelectBasics_PickResult^ thePickResult);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theRadius, RDC::OCC::Trsf theTrsf, bool theIsFilled, bool% theInside);
    /// <summary>
    /// Returns true if selecting volume is overlapped by circle with radius theRadius,
    /// boolean theIsFilled and transformation to apply theTrsf.
    /// The position and orientation of the circle are specified
    /// via theTrsf transformation for gp::XOY() with center in gp::Origin().
    /// </summary>
    bool OverlapsCircle(double theRadius, RDC::OCC::Trsf theTrsf, bool theIsFilled);
    /// <summary>
    /// Nullifies the handle to corresponding builder instance to prevent memory leaks
    /// </summary>
    void Clear();
    /* Method skipped due to unknown mapping: void GetPlanes(NCollection_DynamicArray<NCollection_Vec4<double>> thePlaneEquations, ) */
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::SelectMgr_TriangularFrustum^ CreateDowncasted(::SelectMgr_TriangularFrustum* instance);
}; // class SelectMgr_TriangularFrustum

}; // namespace OCC
}; // namespace RDC

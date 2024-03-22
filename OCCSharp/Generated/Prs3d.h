﻿// Generated wrapper code for package Prs3d

#pragma once

#include "NCollection.h"
#include "Graphic3d.h"
#include "Standard.h"

namespace RDC
{
namespace OCC
{
//---------------------------------------------------------------------
//  Enum  Prs3d_VertexDrawMode
//---------------------------------------------------------------------
/// <summary>
/// Describes supported modes of visualization of the shape's vertices:
/// VDM_Isolated  - only isolated vertices (not belonging to a face) are displayed.
/// VDM_All       - all vertices of the shape are displayed.
/// VDM_Inherited - the global settings are inherited and applied to the shape's presentation.
/// </summary>
public enum class Prs3d_VertexDrawMode
{
    Isolated = 0,
    All = 1,
    Inherited = 2
}; // enum  class Prs3d_VertexDrawMode

//---------------------------------------------------------------------
//  Enum  Prs3d_TypeOfHLR
//---------------------------------------------------------------------
/// <summary>
/// Declares types of hidden line removal algorithm.
/// TOH_Algo enables using of exact HLR algorithm.
/// TOH_PolyAlgo enables using of polygonal HLR algorithm.
/// TOH_NotSet is used by Prs3d_Drawer class, it means that the drawer should return the global value.
/// For more details see Prs3d_Drawer class, AIS_Shape::Compute() method and
/// HLRAlgo package from TKHLR toolkit.
/// </summary>
public enum class Prs3d_TypeOfHLR
{
    TOH_NotSet = 0,
    TOH_PolyAlgo = 1,
    TOH_Algo = 2
}; // enum  class Prs3d_TypeOfHLR

//---------------------------------------------------------------------
//  Enum  Prs3d_DatumAttribute
//---------------------------------------------------------------------
/// <summary>
/// Enumeration defining a datum attribute, see Prs3d_Datum.
/// </summary>
public enum class Prs3d_DatumAttribute
{
    XAxisLength = 0,
    YAxisLength = 1,
    ZAxisLength = 2,
    ShadingTubeRadiusPercent = 3,
    ShadingConeRadiusPercent = 4,
    ShadingConeLengthPercent = 5,
    ShadingOriginRadiusPercent = 6,
    ShadingNumberOfFacettes = 7,
    DP_ShadingTubeRadiusPercent = 3,
    DP_ShadingConeRadiusPercent = 4,
    DP_ShadingConeLengthPercent = 5,
    DP_ShadingOriginRadiusPercent = 6,
    DP_ShadingNumberOfFacettes = 7
}; // enum  class Prs3d_DatumAttribute

//---------------------------------------------------------------------
//  Enum  Prs3d_DatumAxes
//---------------------------------------------------------------------
/// <summary>
/// Enumeration defining axes used in datum aspect, see Prs3d_Datum.
/// </summary>
public enum class Prs3d_DatumAxes
{
    XAxis = 1,
    YAxis = 2,
    ZAxis = 4,
    XYAxes = 3,
    YZAxes = 6,
    XZAxes = 5,
    XYZAxes = 7,
    XYAxis = 3,
    YZAxis = 6,
    XZAxis = 5,
    XYZAxis = 7
}; // enum  class Prs3d_DatumAxes

//---------------------------------------------------------------------
//  Enum  Prs3d_DatumParts
//---------------------------------------------------------------------
/// <summary>
/// Enumeration defining a part of datum aspect, see Prs3d_Datum.
/// </summary>
public enum class Prs3d_DatumParts
{
    Origin = 0,
    XAxis = 1,
    YAxis = 2,
    ZAxis = 3,
    XArrow = 4,
    YArrow = 5,
    ZArrow = 6,
    XOYAxis = 7,
    YOZAxis = 8,
    XOZAxis = 9,
    None = 10
}; // enum  class Prs3d_DatumParts

//---------------------------------------------------------------------
//  Enum  Prs3d_DatumMode
//---------------------------------------------------------------------
/// <summary>
/// Enumeration defining a mode of datum graphic presentation, see Prs3d_Datum.
/// </summary>
public enum class Prs3d_DatumMode
{
    WireFrame = 0,
    Shaded = 1
}; // enum  class Prs3d_DatumMode

//---------------------------------------------------------------------
//  Enum  Prs3d_DimensionArrowOrientation
//---------------------------------------------------------------------
/// <summary>
/// Specifies dimension arrow location and orientation.
/// DAO_Internal - arrows "inside", pointing outwards.
/// DAO_External - arrows "outside", pointing inwards.
/// DAO_Fit      - arrows oriented inside if value label with arrowtips fit the dimension line,
/// otherwise - externally
/// </summary>
public enum class Prs3d_DimensionArrowOrientation
{
    Internal = 0,
    External = 1,
    Fit = 2
}; // enum  class Prs3d_DimensionArrowOrientation

//---------------------------------------------------------------------
//  Enum  Prs3d_DimensionTextHorizontalPosition
//---------------------------------------------------------------------
/// <summary>
/// Specifies options for positioning dimension value label in horizontal direction.
/// DTHP_Left   - value label located at left side on dimension extension.
/// DTHP_Right  - value label located at right side on dimension extension.
/// DTHP_Center - value label located at center of dimension line.
/// DTHP_Fit    - value label located automatically at left side if does not fits
/// the dimension space, otherwise the value label is placed at center.
/// </summary>
public enum class Prs3d_DimensionTextHorizontalPosition
{
    Left = 0,
    Right = 1,
    Center = 2,
    Fit = 3
}; // enum  class Prs3d_DimensionTextHorizontalPosition

//---------------------------------------------------------------------
//  Enum  Prs3d_DimensionTextVerticalPosition
//---------------------------------------------------------------------
/// <summary>
/// Specifies options for positioning dimension value label in vertical direction
/// with respect to dimension (extension) line.
/// DTVP_Above - text label is located above the dimension or extension line.
/// DTVP_Below - text label is located below the dimension or extension line.
/// DTVP_Center - the text label middle-point is in line with dimension or extension line.
/// </summary>
public enum class Prs3d_DimensionTextVerticalPosition
{
    Above = 0,
    Below = 1,
    Center = 2
}; // enum  class Prs3d_DimensionTextVerticalPosition

//---------------------------------------------------------------------
//  Enum  Prs3d_TypeOfHighlight
//---------------------------------------------------------------------
/// <summary>
/// Type of highlighting to apply specific style.
/// </summary>
public enum class Prs3d_TypeOfHighlight
{
    None = 0,
    Selected = 1,
    Dynamic = 2,
    LocalSelected = 3,
    LocalDynamic = 4,
    SubIntensity = 5,
    NB = 6
}; // enum  class Prs3d_TypeOfHighlight

//---------------------------------------------------------------------
//  Enum  Prs3d_TypeOfLinePicking
//---------------------------------------------------------------------
public enum class Prs3d_TypeOfLinePicking
{
    Point = 0,
    Segment = 1
}; // enum  class Prs3d_TypeOfLinePicking

//---------------------------------------------------------------------
//  Class  Prs3d_NListOfSequenceOfPnt
//---------------------------------------------------------------------
public ref class Prs3d_NListOfSequenceOfPnt sealed
    : public RDC::OCC::NCollection_BaseList
{

#ifdef Include_Prs3d_NListOfSequenceOfPnt_h
public:
    Include_Prs3d_NListOfSequenceOfPnt_h
#endif

public:
    Prs3d_NListOfSequenceOfPnt(::Prs3d_NListOfSequenceOfPnt* nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    Prs3d_NListOfSequenceOfPnt(::Prs3d_NListOfSequenceOfPnt& nativeInstance)
        : RDC::OCC::NCollection_BaseList( nativeInstance )
    {}

    property ::Prs3d_NListOfSequenceOfPnt* NativeInstance
    {
        ::Prs3d_NListOfSequenceOfPnt* get()
        {
            return static_cast<::Prs3d_NListOfSequenceOfPnt*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public RDC::OCC::BaseClass<::Prs3d_NListOfSequenceOfPnt::Iterator>
    {

#ifdef Include_Prs3d_NListOfSequenceOfPnt_Iterator_h
    public:
        Include_Prs3d_NListOfSequenceOfPnt_Iterator_h
#endif

    public:
        Iterator(::Prs3d_NListOfSequenceOfPnt::Iterator* nativeInstance)
            : RDC::OCC::BaseClass<::Prs3d_NListOfSequenceOfPnt::Iterator>( nativeInstance, true )
        {}

        Iterator(::Prs3d_NListOfSequenceOfPnt::Iterator& nativeInstance)
            : RDC::OCC::BaseClass<::Prs3d_NListOfSequenceOfPnt::Iterator>( &nativeInstance, false )
        {}

        property ::Prs3d_NListOfSequenceOfPnt::Iterator* NativeInstance
        {
            ::Prs3d_NListOfSequenceOfPnt::Iterator* get()
            {
                return static_cast<::Prs3d_NListOfSequenceOfPnt::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        RDC::OCC::TColgp_HSequenceOfPnt^ Value();
        RDC::OCC::TColgp_HSequenceOfPnt^ ChangeValue();
    }; // class Iterator

    Prs3d_NListOfSequenceOfPnt();
    Prs3d_NListOfSequenceOfPnt(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    int Size();
    RDC::OCC::Prs3d_NListOfSequenceOfPnt^ Assign(RDC::OCC::Prs3d_NListOfSequenceOfPnt^ theOther);
    void Clear(RDC::OCC::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    RDC::OCC::TColgp_HSequenceOfPnt^ First();
    RDC::OCC::TColgp_HSequenceOfPnt^ Last();
    RDC::OCC::TColgp_HSequenceOfPnt^ Append(RDC::OCC::TColgp_HSequenceOfPnt^ theItem);
    RDC::OCC::TColgp_HSequenceOfPnt^ Prepend(RDC::OCC::TColgp_HSequenceOfPnt^ theItem);
    void RemoveFirst();
    void Remove(RDC::OCC::Prs3d_NListOfSequenceOfPnt::Iterator^ theIter);
    RDC::OCC::TColgp_HSequenceOfPnt^ InsertBefore(RDC::OCC::TColgp_HSequenceOfPnt^ theItem, RDC::OCC::Prs3d_NListOfSequenceOfPnt::Iterator^ theIter);
    RDC::OCC::TColgp_HSequenceOfPnt^ InsertAfter(RDC::OCC::TColgp_HSequenceOfPnt^ theItem, RDC::OCC::Prs3d_NListOfSequenceOfPnt::Iterator^ theIter);
    void Reverse();
}; // class Prs3d_NListOfSequenceOfPnt

//---------------------------------------------------------------------
//  Class  Prs3d_NListIteratorOfListOfSequenceOfPnt
//---------------------------------------------------------------------
public ref class Prs3d_NListIteratorOfListOfSequenceOfPnt sealed
    : public RDC::OCC::BaseClass<::Prs3d_NListIteratorOfListOfSequenceOfPnt>
{

#ifdef Include_Prs3d_NListIteratorOfListOfSequenceOfPnt_h
public:
    Include_Prs3d_NListIteratorOfListOfSequenceOfPnt_h
#endif

public:
    Prs3d_NListIteratorOfListOfSequenceOfPnt(::Prs3d_NListIteratorOfListOfSequenceOfPnt* nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d_NListIteratorOfListOfSequenceOfPnt>( nativeInstance, true )
    {}

    Prs3d_NListIteratorOfListOfSequenceOfPnt(::Prs3d_NListIteratorOfListOfSequenceOfPnt& nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d_NListIteratorOfListOfSequenceOfPnt>( &nativeInstance, false )
    {}

    property ::Prs3d_NListIteratorOfListOfSequenceOfPnt* NativeInstance
    {
        ::Prs3d_NListIteratorOfListOfSequenceOfPnt* get()
        {
            return static_cast<::Prs3d_NListIteratorOfListOfSequenceOfPnt*>(_NativeInstance);
        }
    }

public:
    Prs3d_NListIteratorOfListOfSequenceOfPnt();
    Prs3d_NListIteratorOfListOfSequenceOfPnt(RDC::OCC::NCollection_BaseList^ theList);
    bool More();
    void Next();
    RDC::OCC::TColgp_HSequenceOfPnt^ Value();
    RDC::OCC::TColgp_HSequenceOfPnt^ ChangeValue();
}; // class Prs3d_NListIteratorOfListOfSequenceOfPnt

//---------------------------------------------------------------------
//  Class  Prs3d_DimensionUnits
//---------------------------------------------------------------------
/// <summary>
/// This class provides units for two dimension groups:
/// - lengths (length, radius, diameter)
/// - angles
/// </summary>
public ref class Prs3d_DimensionUnits sealed
    : public RDC::OCC::BaseClass<::Prs3d_DimensionUnits>
{

#ifdef Include_Prs3d_DimensionUnits_h
public:
    Include_Prs3d_DimensionUnits_h
#endif

public:
    Prs3d_DimensionUnits(::Prs3d_DimensionUnits* nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d_DimensionUnits>( nativeInstance, true )
    {}

    Prs3d_DimensionUnits(::Prs3d_DimensionUnits& nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d_DimensionUnits>( &nativeInstance, false )
    {}

    property ::Prs3d_DimensionUnits* NativeInstance
    {
        ::Prs3d_DimensionUnits* get()
        {
            return static_cast<::Prs3d_DimensionUnits*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default constructor. Sets meters as default length units
    /// and radians as default angle units.
    /// </summary>
    Prs3d_DimensionUnits();
    /// <summary>
    /// Sets angle units
    /// </summary>
    void SetAngleUnits(RDC::OCC::TCollection_AsciiString^ theUnits);
    /// <summary>
    /// </summary>
    /// <returns>
    /// angle units
    /// </returns>
    RDC::OCC::TCollection_AsciiString^ GetAngleUnits();
    /// <summary>
    /// Sets length units
    /// </summary>
    void SetLengthUnits(RDC::OCC::TCollection_AsciiString^ theUnits);
    /// <summary>
    /// </summary>
    /// <returns>
    /// length units
    /// </returns>
    RDC::OCC::TCollection_AsciiString^ GetLengthUnits();
}; // class Prs3d_DimensionUnits

//---------------------------------------------------------------------
//  Class  Prs3d_BasicAspect
//---------------------------------------------------------------------
/// <summary>
/// All basic Prs3d_xxxAspect must inherits from this class
/// The aspect classes qualifies how to represent a given kind of object.
/// </summary>
public ref class Prs3d_BasicAspect
    : public RDC::OCC::Standard_Transient
{

#ifdef Include_Prs3d_BasicAspect_h
public:
    Include_Prs3d_BasicAspect_h
#endif

protected:
    Prs3d_BasicAspect(InitMode init)
        : RDC::OCC::Standard_Transient( init )
    {}

public:
    Prs3d_BasicAspect(::Prs3d_BasicAspect* nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    Prs3d_BasicAspect(::Prs3d_BasicAspect& nativeInstance)
        : RDC::OCC::Standard_Transient( nativeInstance )
    {}

    property ::Prs3d_BasicAspect* NativeInstance
    {
        ::Prs3d_BasicAspect* get()
        {
            return static_cast<::Prs3d_BasicAspect*>(_NativeInstance);
        }
    }

public:
    Prs3d_BasicAspect();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::Prs3d_BasicAspect^ CreateDowncasted(::Prs3d_BasicAspect* instance);
}; // class Prs3d_BasicAspect

//---------------------------------------------------------------------
//  Class  Prs3d_LineAspect
//---------------------------------------------------------------------
/// <summary>
/// A framework for defining how a line will be displayed
/// in a presentation. Aspects of line display include
/// width, color and type of line.
/// The definition set by this class is then passed to the
/// attribute manager Prs3d_Drawer.
/// Any object which requires a value for line aspect as
/// an argument may then be given the attribute manager
/// as a substitute argument in the form of a field such as myDrawer for example.
/// </summary>
public ref class Prs3d_LineAspect
    : public RDC::OCC::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_LineAspect_h
public:
    Include_Prs3d_LineAspect_h
#endif

protected:
    Prs3d_LineAspect(InitMode init)
        : RDC::OCC::Prs3d_BasicAspect( init )
    {}

public:
    Prs3d_LineAspect(::Prs3d_LineAspect* nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    Prs3d_LineAspect(::Prs3d_LineAspect& nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    property ::Prs3d_LineAspect* NativeInstance
    {
        ::Prs3d_LineAspect* get()
        {
            return static_cast<::Prs3d_LineAspect*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a framework for line aspect defined by
    /// -   the color aColor
    /// -   the type of line aType and
    /// -   the line thickness aWidth.
    /// Type of line refers to whether the line is solid or dotted, for example.
    /// </summary>
    Prs3d_LineAspect(RDC::OCC::Quantity_Color^ theColor, RDC::OCC::Aspect_TypeOfLine theType, double theWidth);
    Prs3d_LineAspect(RDC::OCC::Graphic3d_AspectLine3d^ theAspect);
    /// <summary>
    /// Sets the line color defined at the time of construction.
    /// Default value: Quantity_NOC_YELLOW
    /// </summary>
    void SetColor(RDC::OCC::Quantity_Color^ theColor);
    /// <summary>
    /// Sets the type of line defined at the time of construction.
    /// This could, for example, be solid, dotted or made up of dashes.
    /// Default value: Aspect_TOL_SOLID
    /// </summary>
    void SetTypeOfLine(RDC::OCC::Aspect_TypeOfLine theType);
    /// <summary>
    /// Sets the line width defined at the time of construction.
    /// Default value: 1.
    /// </summary>
    void SetWidth(double theWidth);
    /// <summary>
    /// Returns the line aspect. This is defined as the set of
    /// color, type and thickness attributes.
    /// </summary>
    RDC::OCC::Graphic3d_AspectLine3d^ Aspect();
    void SetAspect(RDC::OCC::Graphic3d_AspectLine3d^ theAspect);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::Prs3d_LineAspect^ CreateDowncasted(::Prs3d_LineAspect* instance);
}; // class Prs3d_LineAspect

//---------------------------------------------------------------------
//  Class  Prs3d_TextAspect
//---------------------------------------------------------------------
/// <summary>
/// Defines the attributes when displaying a text.
/// </summary>
public ref class Prs3d_TextAspect sealed
    : public RDC::OCC::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_TextAspect_h
public:
    Include_Prs3d_TextAspect_h
#endif

public:
    Prs3d_TextAspect(::Prs3d_TextAspect* nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    Prs3d_TextAspect(::Prs3d_TextAspect& nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    property ::Prs3d_TextAspect* NativeInstance
    {
        ::Prs3d_TextAspect* get()
        {
            return static_cast<::Prs3d_TextAspect*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty framework for defining display attributes of text.
    /// </summary>
    Prs3d_TextAspect();
    Prs3d_TextAspect(RDC::OCC::Graphic3d_AspectText3d^ theAspect);
    /// <summary>
    /// Sets the color of the type used in text display.
    /// </summary>
    void SetColor(RDC::OCC::Quantity_Color^ theColor);
    /// <summary>
    /// Sets the font used in text display.
    /// </summary>
    void SetFont(System::String^ theFont);
    /// <summary>
    /// Sets the height of the text.
    /// </summary>
    void SetHeight(double theHeight);
    /// <summary>
    /// Sets the angle
    /// </summary>
    void SetAngle(double theAngle);
    /// <summary>
    /// Returns the height of the text box.
    /// </summary>
    double Height();
    /// <summary>
    /// Returns the angle
    /// </summary>
    double Angle();
    /// <summary>
    /// Sets horizontal alignment of text.
    /// </summary>
    void SetHorizontalJustification(RDC::OCC::Graphic3d_HorizontalTextAlignment theJustification);
    /// <summary>
    /// Sets the vertical alignment of text.
    /// </summary>
    void SetVerticalJustification(RDC::OCC::Graphic3d_VerticalTextAlignment theJustification);
    /// <summary>
    /// Sets the orientation of text.
    /// </summary>
    void SetOrientation(RDC::OCC::Graphic3d_TextPath theOrientation);
    /// <summary>
    /// Returns the horizontal alignment of the text.
    /// The range of values includes:
    /// -   left
    /// -   center
    /// -   right, and
    /// -   normal (justified).
    /// </summary>
    RDC::OCC::Graphic3d_HorizontalTextAlignment HorizontalJustification();
    /// <summary>
    /// Returns the vertical alignment of the text.
    /// The range of values includes:
    /// -   normal
    /// -   top
    /// -   cap
    /// -   half
    /// -   base
    /// -   bottom
    /// </summary>
    RDC::OCC::Graphic3d_VerticalTextAlignment VerticalJustification();
    /// <summary>
    /// Returns the orientation of the text.
    /// Text can be displayed in the following directions:
    /// -   up
    /// -   down
    /// -   left, or
    /// -   right
    /// </summary>
    RDC::OCC::Graphic3d_TextPath Orientation();
    /// <summary>
    /// Returns the purely textual attributes used in the display of text.
    /// These include:
    /// -   color
    /// -   font
    /// -   height/width ratio, that is, the expansion factor, and
    /// -   space between characters.
    /// </summary>
    RDC::OCC::Graphic3d_AspectText3d^ Aspect();
    void SetAspect(RDC::OCC::Graphic3d_AspectText3d^ theAspect);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::Prs3d_TextAspect^ CreateDowncasted(::Prs3d_TextAspect* instance);
}; // class Prs3d_TextAspect

//---------------------------------------------------------------------
//  Class  Prs3d_ShadingAspect
//---------------------------------------------------------------------
/// <summary>
/// A framework to define the display of shading.
/// The attributes which make up this definition include:
/// -   fill aspect
/// -   color, and
/// -   material
/// </summary>
public ref class Prs3d_ShadingAspect sealed
    : public RDC::OCC::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_ShadingAspect_h
public:
    Include_Prs3d_ShadingAspect_h
#endif

public:
    Prs3d_ShadingAspect(::Prs3d_ShadingAspect* nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    Prs3d_ShadingAspect(::Prs3d_ShadingAspect& nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    property ::Prs3d_ShadingAspect* NativeInstance
    {
        ::Prs3d_ShadingAspect* get()
        {
            return static_cast<::Prs3d_ShadingAspect*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty framework to display shading.
    /// </summary>
    Prs3d_ShadingAspect();
    /// <summary>
    /// Constructor with initialization.
    /// </summary>
    Prs3d_ShadingAspect(RDC::OCC::Graphic3d_AspectFillArea3d^ theAspect);
    /// <summary>
    /// Change the polygons interior color and material ambient color.
    /// </summary>
    void SetColor(RDC::OCC::Quantity_Color^ aColor, RDC::OCC::Aspect_TypeOfFacingModel aModel);
    /// <summary>
    /// Change the polygons interior color and material ambient color.
    /// </summary>
    void SetColor(RDC::OCC::Quantity_Color^ aColor);
    /// <summary>
    /// Change the polygons material aspect.
    /// </summary>
    void SetMaterial(RDC::OCC::Graphic3d_MaterialAspect^ aMaterial, RDC::OCC::Aspect_TypeOfFacingModel aModel);
    /// <summary>
    /// Change the polygons material aspect.
    /// </summary>
    void SetMaterial(RDC::OCC::Graphic3d_MaterialAspect^ aMaterial);
    /// <summary>
    /// Change the polygons transparency value.
    /// Warning : aValue must be in the range 0,1. 0 is the default (NO transparent)
    /// </summary>
    void SetTransparency(double aValue, RDC::OCC::Aspect_TypeOfFacingModel aModel);
    /// <summary>
    /// Change the polygons transparency value.
    /// Warning : aValue must be in the range 0,1. 0 is the default (NO transparent)
    /// </summary>
    void SetTransparency(double aValue);
    /// <summary>
    /// Returns the polygons color.
    /// </summary>
    RDC::OCC::Quantity_Color^ Color(RDC::OCC::Aspect_TypeOfFacingModel aModel);
    /// <summary>
    /// Returns the polygons color.
    /// </summary>
    RDC::OCC::Quantity_Color^ Color();
    /// <summary>
    /// Returns the polygons material aspect.
    /// </summary>
    RDC::OCC::Graphic3d_MaterialAspect^ Material(RDC::OCC::Aspect_TypeOfFacingModel aModel);
    /// <summary>
    /// Returns the polygons material aspect.
    /// </summary>
    RDC::OCC::Graphic3d_MaterialAspect^ Material();
    /// <summary>
    /// Returns the polygons transparency value.
    /// </summary>
    double Transparency(RDC::OCC::Aspect_TypeOfFacingModel aModel);
    /// <summary>
    /// Returns the polygons transparency value.
    /// </summary>
    double Transparency();
    /// <summary>
    /// Returns the polygons aspect properties.
    /// </summary>
    RDC::OCC::Graphic3d_AspectFillArea3d^ Aspect();
    void SetAspect(RDC::OCC::Graphic3d_AspectFillArea3d^ theAspect);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::Prs3d_ShadingAspect^ CreateDowncasted(::Prs3d_ShadingAspect* instance);
}; // class Prs3d_ShadingAspect

//---------------------------------------------------------------------
//  Class  Prs3d_PointAspect
//---------------------------------------------------------------------
/// <summary>
/// This  class  defines  attributes for the points
/// The points are drawn using markers, whose size does not depend on
/// the zoom value of the views.
/// </summary>
public ref class Prs3d_PointAspect sealed
    : public RDC::OCC::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_PointAspect_h
public:
    Include_Prs3d_PointAspect_h
#endif

public:
    Prs3d_PointAspect(::Prs3d_PointAspect* nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    Prs3d_PointAspect(::Prs3d_PointAspect& nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    property ::Prs3d_PointAspect* NativeInstance
    {
        ::Prs3d_PointAspect* get()
        {
            return static_cast<::Prs3d_PointAspect*>(_NativeInstance);
        }
    }

public:
    Prs3d_PointAspect(RDC::OCC::Aspect_TypeOfMarker theType, RDC::OCC::Quantity_Color^ theColor, double theScale);
    /// <summary>
    /// Defines the user defined marker point.
    /// </summary>
    Prs3d_PointAspect(RDC::OCC::Quantity_Color^ theColor, int theWidth, int theHeight, RDC::OCC::TColStd_HArray1OfByte^ theTexture);
    Prs3d_PointAspect(RDC::OCC::Graphic3d_AspectMarker3d^ theAspect);
    /// <summary>
    /// defines the color to be used when drawing a point.
    /// Default value: Quantity_NOC_YELLOW
    /// </summary>
    void SetColor(RDC::OCC::Quantity_Color^ theColor);
    /// <summary>
    /// defines the type of representation to be used when drawing a point.
    /// Default value: Aspect_TOM_PLUS
    /// </summary>
    void SetTypeOfMarker(RDC::OCC::Aspect_TypeOfMarker theType);
    /// <summary>
    /// defines the size of the marker used when drawing a point.
    /// Default value: 1.
    /// </summary>
    void SetScale(double theScale);
    RDC::OCC::Graphic3d_AspectMarker3d^ Aspect();
    void SetAspect(RDC::OCC::Graphic3d_AspectMarker3d^ theAspect);
    /// <summary>
    /// Returns marker's texture size.
    /// </summary>
    void GetTextureSize(int% theWidth, int% theHeight);
    /// <summary>
    /// Returns marker's texture.
    /// </summary>
    RDC::OCC::Graphic3d_MarkerImage^ GetTexture();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::Prs3d_PointAspect^ CreateDowncasted(::Prs3d_PointAspect* instance);
}; // class Prs3d_PointAspect

//---------------------------------------------------------------------
//  Class  Prs3d_PlaneAspect
//---------------------------------------------------------------------
/// <summary>
/// A framework to define the display of planes.
/// </summary>
public ref class Prs3d_PlaneAspect sealed
    : public RDC::OCC::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_PlaneAspect_h
public:
    Include_Prs3d_PlaneAspect_h
#endif

public:
    Prs3d_PlaneAspect(::Prs3d_PlaneAspect* nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    Prs3d_PlaneAspect(::Prs3d_PlaneAspect& nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    property ::Prs3d_PlaneAspect* NativeInstance
    {
        ::Prs3d_PlaneAspect* get()
        {
            return static_cast<::Prs3d_PlaneAspect*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty framework for the display of planes.
    /// </summary>
    Prs3d_PlaneAspect();
    /// <summary>
    /// Returns the attributes of displayed edges involved in the presentation of planes.
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ EdgesAspect();
    /// <summary>
    /// Returns the attributes of displayed isoparameters involved in the presentation of planes.
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ IsoAspect();
    /// <summary>
    /// Returns the settings for displaying an arrow.
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ ArrowAspect();
    void SetArrowsLength(double theLength);
    /// <summary>
    /// Returns the length of the arrow shaft used in the display of arrows.
    /// </summary>
    double ArrowsLength();
    /// <summary>
    /// Sets the angle of the arrowhead used in the display of planes.
    /// </summary>
    void SetArrowsSize(double theSize);
    /// <summary>
    /// Returns the size of arrows used in the display of planes.
    /// </summary>
    double ArrowsSize();
    /// <summary>
    /// Sets the angle of the arrowhead used in the display
    /// of arrows involved in the presentation of planes.
    /// </summary>
    void SetArrowsAngle(double theAngle);
    /// <summary>
    /// Returns the angle of the arrowhead used in the
    /// display of arrows involved in the presentation of planes.
    /// </summary>
    double ArrowsAngle();
    /// <summary>
    /// Sets the display attributes defined in DisplayCenterArrow to active.
    /// </summary>
    void SetDisplayCenterArrow(bool theToDraw);
    /// <summary>
    /// Returns true if the display of center arrows is allowed.
    /// </summary>
    bool DisplayCenterArrow();
    /// <summary>
    /// Sets the display attributes defined in DisplayEdgesArrows to active.
    /// </summary>
    void SetDisplayEdgesArrows(bool theToDraw);
    /// <summary>
    /// Returns true if the display of edge arrows is allowed.
    /// </summary>
    bool DisplayEdgesArrows();
    void SetDisplayEdges(bool theToDraw);
    bool DisplayEdges();
    /// <summary>
    /// Sets the display attributes defined in DisplayIso to active.
    /// </summary>
    void SetDisplayIso(bool theToDraw);
    /// <summary>
    /// Returns true if the display of isoparameters is allowed.
    /// </summary>
    bool DisplayIso();
    void SetPlaneLength(double theLX, double theLY);
    /// <summary>
    /// Returns the length of the x axis used in the display of planes.
    /// </summary>
    double PlaneXLength();
    /// <summary>
    /// Returns the length of the y axis used in the display of planes.
    /// </summary>
    double PlaneYLength();
    /// <summary>
    /// Sets the distance L between isoparameters used in the display of planes.
    /// </summary>
    void SetIsoDistance(double theL);
    /// <summary>
    /// Returns the distance between isoparameters used in the display of planes.
    /// </summary>
    double IsoDistance();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::Prs3d_PlaneAspect^ CreateDowncasted(::Prs3d_PlaneAspect* instance);
}; // class Prs3d_PlaneAspect

//---------------------------------------------------------------------
//  Class  Prs3d_ArrowAspect
//---------------------------------------------------------------------
/// <summary>
/// A framework for displaying arrows in representations of dimensions and relations.
/// </summary>
public ref class Prs3d_ArrowAspect sealed
    : public RDC::OCC::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_ArrowAspect_h
public:
    Include_Prs3d_ArrowAspect_h
#endif

public:
    Prs3d_ArrowAspect(::Prs3d_ArrowAspect* nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    Prs3d_ArrowAspect(::Prs3d_ArrowAspect& nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    property ::Prs3d_ArrowAspect* NativeInstance
    {
        ::Prs3d_ArrowAspect* get()
        {
            return static_cast<::Prs3d_ArrowAspect*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty framework for displaying arrows
    /// in representations of lengths. The lengths displayed
    /// are either on their own or in chamfers, fillets,
    /// diameters and radii.
    /// </summary>
    Prs3d_ArrowAspect();
    /// <summary>
    /// Constructs a framework to display an arrow with a
    /// shaft of the length aLength and having a head with
    /// sides at the angle anAngle from each other.
    /// </summary>
    Prs3d_ArrowAspect(double anAngle, double aLength);
    Prs3d_ArrowAspect(RDC::OCC::Graphic3d_AspectLine3d^ theAspect);
    /// <summary>
    /// defines the angle of the arrows.
    /// </summary>
    void SetAngle(double anAngle);
    /// <summary>
    /// returns the current value of the angle used when drawing an arrow.
    /// </summary>
    double Angle();
    /// <summary>
    /// Defines the length of the arrows.
    /// </summary>
    void SetLength(double theLength);
    /// <summary>
    /// Returns the current value of the length used when drawing an arrow.
    /// </summary>
    double Length();
    /// <summary>
    /// Turns usage of arrow zoomable on/off
    /// </summary>
    void SetZoomable(bool theIsZoomable);
    /// <summary>
    /// Returns TRUE when the Arrow Zoomable is on; TRUE by default.
    /// </summary>
    bool IsZoomable();
    void SetColor(RDC::OCC::Quantity_Color^ theColor);
    RDC::OCC::Graphic3d_AspectLine3d^ Aspect();
    void SetAspect(RDC::OCC::Graphic3d_AspectLine3d^ theAspect);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::Prs3d_ArrowAspect^ CreateDowncasted(::Prs3d_ArrowAspect* instance);
}; // class Prs3d_ArrowAspect

//---------------------------------------------------------------------
//  Class  Prs3d_DatumAspect
//---------------------------------------------------------------------
/// <summary>
/// A framework to define the display of datums.
/// </summary>
public ref class Prs3d_DatumAspect sealed
    : public RDC::OCC::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_DatumAspect_h
public:
    Include_Prs3d_DatumAspect_h
#endif

public:
    Prs3d_DatumAspect(::Prs3d_DatumAspect* nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    Prs3d_DatumAspect(::Prs3d_DatumAspect& nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    property ::Prs3d_DatumAspect* NativeInstance
    {
        ::Prs3d_DatumAspect* get()
        {
            return static_cast<::Prs3d_DatumAspect*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// An empty constructor.
    /// </summary>
    Prs3d_DatumAspect();
    /// <summary>
    /// Returns line aspect for specified part.
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ LineAspect(RDC::OCC::Prs3d_DatumParts thePart);
    /// <summary>
    /// Returns shading aspect for specified part.
    /// </summary>
    RDC::OCC::Prs3d_ShadingAspect^ ShadingAspect(RDC::OCC::Prs3d_DatumParts thePart);
    /// <summary>
    /// Returns the text attributes for rendering label of specified part (Prs3d_DatumParts_XAxis/Prs3d_DatumParts_YAxis/Prs3d_DatumParts_ZAxis).
    /// </summary>
    RDC::OCC::Prs3d_TextAspect^ TextAspect(RDC::OCC::Prs3d_DatumParts thePart);
    /// <summary>
    /// Sets text attributes for rendering labels.
    /// </summary>
    void SetTextAspect(RDC::OCC::Prs3d_TextAspect^ theTextAspect);
    /// <summary>
    /// Returns the point aspect of origin wireframe presentation
    /// </summary>
    RDC::OCC::Prs3d_PointAspect^ PointAspect();
    /// <summary>
    /// Returns the point aspect of origin wireframe presentation
    /// </summary>
    void SetPointAspect(RDC::OCC::Prs3d_PointAspect^ theAspect);
    /// <summary>
    /// Returns the arrow aspect of presentation.
    /// </summary>
    RDC::OCC::Prs3d_ArrowAspect^ ArrowAspect();
    /// <summary>
    /// Sets the arrow aspect of presentation
    /// </summary>
    void SetArrowAspect(RDC::OCC::Prs3d_ArrowAspect^ theAspect);
    /// <summary>
    /// Returns true if the given part is used in axes of aspect
    /// </summary>
    bool DrawDatumPart(RDC::OCC::Prs3d_DatumParts thePart);
    /// <summary>
    /// Sets the axes used in the datum aspect
    /// </summary>
    void SetDrawDatumAxes(RDC::OCC::Prs3d_DatumAxes theType);
    /// <summary>
    /// Returns axes used in the datum aspect
    /// </summary>
    RDC::OCC::Prs3d_DatumAxes DatumAxes();
    /// <summary>
    /// Returns the attribute of the datum type
    /// </summary>
    double Attribute(RDC::OCC::Prs3d_DatumAttribute theType);
    /// <summary>
    /// Sets the attribute of the datum type
    /// </summary>
    void SetAttribute(RDC::OCC::Prs3d_DatumAttribute theType, double theValue);
    /// <summary>
    /// Returns the length of the displayed first axis.
    /// </summary>
    double AxisLength(RDC::OCC::Prs3d_DatumParts thePart);
    /// <summary>
    /// Sets the lengths of the three axes.
    /// </summary>
    void SetAxisLength(double theL1, double theL2, double theL3);
    /// <summary>
    /// </summary>
    /// <returns>
    /// true if axes labels are drawn; TRUE by default.
    /// </returns>
    bool ToDrawLabels();
    /// <summary>
    /// Sets option to draw or not to draw text labels for axes
    /// </summary>
    void SetDrawLabels(bool theToDraw);
    void SetToDrawLabels(bool theToDraw);
    /// <summary>
    /// </summary>
    /// <returns>
    /// true if axes arrows are drawn; TRUE by default.
    /// </returns>
    bool ToDrawArrows();
    /// <summary>
    /// Sets option to draw or not arrows for axes
    /// </summary>
    void SetDrawArrows(bool theToDraw);
    /// <summary>
    /// Performs deep copy of attributes from another aspect instance.
    /// </summary>
    void CopyAspectsFrom(RDC::OCC::Prs3d_DatumAspect^ theOther);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// Returns type of arrow for a type of axis
    /// </summary>
    static RDC::OCC::Prs3d_DatumParts ArrowPartForAxis(RDC::OCC::Prs3d_DatumParts thePart);
    /// <summary>
    /// Returns the text attributes for rendering labels.
    /// </summary>
    RDC::OCC::Prs3d_TextAspect^ TextAspect();
    static RDC::OCC::Prs3d_DatumAspect^ CreateDowncasted(::Prs3d_DatumAspect* instance);
}; // class Prs3d_DatumAspect

//---------------------------------------------------------------------
//  Class  Prs3d_DimensionAspect
//---------------------------------------------------------------------
/// <summary>
/// defines the attributes when drawing a Length Presentation.
/// </summary>
public ref class Prs3d_DimensionAspect sealed
    : public RDC::OCC::Prs3d_BasicAspect
{

#ifdef Include_Prs3d_DimensionAspect_h
public:
    Include_Prs3d_DimensionAspect_h
#endif

public:
    Prs3d_DimensionAspect(::Prs3d_DimensionAspect* nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    Prs3d_DimensionAspect(::Prs3d_DimensionAspect& nativeInstance)
        : RDC::OCC::Prs3d_BasicAspect( nativeInstance )
    {}

    property ::Prs3d_DimensionAspect* NativeInstance
    {
        ::Prs3d_DimensionAspect* get()
        {
            return static_cast<::Prs3d_DimensionAspect*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty framework to define the display of dimensions.
    /// </summary>
    Prs3d_DimensionAspect();
    /// <summary>
    /// Returns the settings for the display of lines used in presentation of dimensions.
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ LineAspect();
    /// <summary>
    /// Sets the display attributes of lines used in presentation of dimensions.
    /// </summary>
    void SetLineAspect(RDC::OCC::Prs3d_LineAspect^ theAspect);
    /// <summary>
    /// Returns the settings for the display of text used in presentation of dimensions.
    /// </summary>
    RDC::OCC::Prs3d_TextAspect^ TextAspect();
    /// <summary>
    /// Sets the display attributes of text used in presentation of dimensions.
    /// </summary>
    void SetTextAspect(RDC::OCC::Prs3d_TextAspect^ theAspect);
    /// <summary>
    /// Check if text for dimension label is 3d.
    /// </summary>
    bool IsText3d();
    /// <summary>
    /// Sets type of text.
    /// </summary>
    void MakeText3d(bool isText3d);
    /// <summary>
    /// Check if 3d text for dimension label is shaded.
    /// </summary>
    bool IsTextShaded();
    /// <summary>
    /// Turns on/off text shading for 3d text.
    /// </summary>
    void MakeTextShaded(bool theIsTextShaded);
    /// <summary>
    /// Gets type of arrows.
    /// </summary>
    bool IsArrows3d();
    /// <summary>
    /// Sets type of arrows.
    /// </summary>
    void MakeArrows3d(bool theIsArrows3d);
    /// <summary>
    /// Shows if Units are to be displayed along with dimension value.
    /// </summary>
    bool IsUnitsDisplayed();
    /// <summary>
    /// Specifies whether the units string should be displayed
    /// along with value label or not.
    /// </summary>
    void MakeUnitsDisplayed(bool theIsDisplayed);
    /// <summary>
    /// Sets orientation of arrows (external or internal).
    /// By default orientation is chosen automatically according to situation and text label size.
    /// </summary>
    void SetArrowOrientation(RDC::OCC::Prs3d_DimensionArrowOrientation theArrowOrient);
    /// <summary>
    /// Gets orientation of arrows (external or internal).
    /// </summary>
    RDC::OCC::Prs3d_DimensionArrowOrientation ArrowOrientation();
    /// <summary>
    /// Sets vertical text alignment for text label.
    /// </summary>
    void SetTextVerticalPosition(RDC::OCC::Prs3d_DimensionTextVerticalPosition thePosition);
    /// <summary>
    /// Gets vertical text alignment for text label.
    /// </summary>
    RDC::OCC::Prs3d_DimensionTextVerticalPosition TextVerticalPosition();
    /// <summary>
    /// Sets horizontal text alignment for text label.
    /// </summary>
    void SetTextHorizontalPosition(RDC::OCC::Prs3d_DimensionTextHorizontalPosition thePosition);
    /// <summary>
    /// Gets horizontal text alignment for text label.
    /// </summary>
    RDC::OCC::Prs3d_DimensionTextHorizontalPosition TextHorizontalPosition();
    /// <summary>
    /// Returns the settings for displaying arrows.
    /// </summary>
    RDC::OCC::Prs3d_ArrowAspect^ ArrowAspect();
    /// <summary>
    /// Sets the display attributes of arrows used in presentation of dimensions.
    /// </summary>
    void SetArrowAspect(RDC::OCC::Prs3d_ArrowAspect^ theAspect);
    /// <summary>
    /// Sets the same color for all parts of dimension: lines, arrows and text.
    /// </summary>
    void SetCommonColor(RDC::OCC::Quantity_Color^ theColor);
    /// <summary>
    /// Sets extension size.
    /// </summary>
    void SetExtensionSize(double theSize);
    /// <summary>
    /// Returns extension size.
    /// </summary>
    double ExtensionSize();
    /// <summary>
    /// Set size for arrow tail (extension without text).
    /// </summary>
    void SetArrowTailSize(double theSize);
    /// <summary>
    /// Returns arrow tail size.
    /// </summary>
    double ArrowTailSize();
    /// <summary>
    /// Sets "sprintf"-syntax format for formatting dimension value labels.
    /// </summary>
    void SetValueStringFormat(RDC::OCC::TCollection_AsciiString^ theFormat);
    /// <summary>
    /// Returns format.
    /// </summary>
    RDC::OCC::TCollection_AsciiString^ ValueStringFormat();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::Prs3d_DimensionAspect^ CreateDowncasted(::Prs3d_DimensionAspect* instance);
}; // class Prs3d_DimensionAspect

//---------------------------------------------------------------------
//  Class  Prs3d_Drawer
//---------------------------------------------------------------------
/// <summary>
/// A graphic attribute manager which governs how
/// objects such as color, width, line thickness and deflection are displayed.
/// A drawer includes an instance of the Aspect classes with particular default values.
/// </summary>
public ref class Prs3d_Drawer
    : public RDC::OCC::Graphic3d_PresentationAttributes
{

#ifdef Include_Prs3d_Drawer_h
public:
    Include_Prs3d_Drawer_h
#endif

protected:
    Prs3d_Drawer(InitMode init)
        : RDC::OCC::Graphic3d_PresentationAttributes( init )
    {}

public:
    Prs3d_Drawer(::Prs3d_Drawer* nativeInstance)
        : RDC::OCC::Graphic3d_PresentationAttributes( nativeInstance )
    {}

    Prs3d_Drawer(::Prs3d_Drawer& nativeInstance)
        : RDC::OCC::Graphic3d_PresentationAttributes( nativeInstance )
    {}

    property ::Prs3d_Drawer* NativeInstance
    {
        ::Prs3d_Drawer* get()
        {
            return static_cast<::Prs3d_Drawer*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    Prs3d_Drawer();
    /// <summary>
    /// Setup all own aspects with default values.
    /// </summary>
    void SetupOwnDefaults();
    /// <summary>
    /// Sets the type of chordal deflection.
    /// This indicates whether the deflection value is absolute or relative to the size of the object.
    /// </summary>
    void SetTypeOfDeflection(RDC::OCC::Aspect_TypeOfDeflection theTypeOfDeflection);
    /// <summary>
    /// Returns the type of chordal deflection.
    /// This indicates whether the deflection value is absolute or relative to the size of the object.
    /// </summary>
    RDC::OCC::Aspect_TypeOfDeflection TypeOfDeflection();
    /// <summary>
    /// Returns true if the drawer has a type of deflection setting active.
    /// </summary>
    bool HasOwnTypeOfDeflection();
    /// <summary>
    /// Resets HasOwnTypeOfDeflection() flag, e.g. undoes SetTypeOfDeflection().
    /// </summary>
    void UnsetOwnTypeOfDeflection();
    /// <summary>
    /// Defines the maximal chordial deviation when drawing any curve.
    /// Even if the type of deviation is set to TOD_Relative, this value is used by:
    /// Prs3d_DeflectionCurve
    /// Prs3d_WFDeflectionSurface
    /// Prs3d_WFDeflectionRestrictedFace
    /// </summary>
    void SetMaximalChordialDeviation(double theChordialDeviation);
    /// <summary>
    /// Returns the maximal chordal deviation. The default value is 0.0001.
    /// Drawings of curves or patches are made with respect to an absolute maximal chordal deviation.
    /// </summary>
    double MaximalChordialDeviation();
    /// <summary>
    /// Returns true if the drawer has a maximal chordial deviation setting active.
    /// </summary>
    bool HasOwnMaximalChordialDeviation();
    /// <summary>
    /// Resets HasOwnMaximalChordialDeviation() flag, e.g. undoes SetMaximalChordialDeviation().
    /// </summary>
    void UnsetOwnMaximalChordialDeviation();
    /// <summary>
    /// Sets the type of HLR algorithm used by drawer's interactive objects
    /// </summary>
    void SetTypeOfHLR(RDC::OCC::Prs3d_TypeOfHLR theTypeOfHLR);
    /// <summary>
    /// Returns the type of HLR algorithm currently in use.
    /// </summary>
    RDC::OCC::Prs3d_TypeOfHLR TypeOfHLR();
    /// <summary>
    /// Returns true if the type of HLR is not equal to Prs3d_TOH_NotSet.
    /// </summary>
    bool HasOwnTypeOfHLR();
    /// <summary>
    /// Defines the maximum value allowed for the first and last
    /// parameters of an infinite curve.
    /// </summary>
    void SetMaximalParameterValue(double theValue);
    /// <summary>
    /// Sets the maximum value allowed for the first and last parameters of an infinite curve.
    /// By default, this value is 500000.
    /// </summary>
    double MaximalParameterValue();
    /// <summary>
    /// Returns true if the drawer has a maximum value allowed for the first and last
    /// parameters of an infinite curve setting active.
    /// </summary>
    bool HasOwnMaximalParameterValue();
    /// <summary>
    /// Resets HasOwnMaximalParameterValue() flag, e.g. undoes SetMaximalParameterValue().
    /// </summary>
    void UnsetOwnMaximalParameterValue();
    /// <summary>
    /// Sets IsoOnPlane on or off by setting the parameter theIsEnabled to true or false.
    /// </summary>
    void SetIsoOnPlane(bool theIsEnabled);
    /// <summary>
    /// Returns True if the drawing of isos on planes is enabled.
    /// </summary>
    bool IsoOnPlane();
    /// <summary>
    /// Returns true if the drawer has IsoOnPlane setting active.
    /// </summary>
    bool HasOwnIsoOnPlane();
    /// <summary>
    /// Resets HasOwnIsoOnPlane() flag, e.g. undoes SetIsoOnPlane().
    /// </summary>
    void UnsetOwnIsoOnPlane();
    /// <summary>
    /// Returns True if the drawing of isos on triangulation is enabled.
    /// </summary>
    bool IsoOnTriangulation();
    /// <summary>
    /// Returns true if the drawer has IsoOnTriangulation setting active.
    /// </summary>
    bool HasOwnIsoOnTriangulation();
    /// <summary>
    /// Resets HasOwnIsoOnTriangulation() flag, e.g. undoes SetIsoOnTriangulation().
    /// </summary>
    void UnsetOwnIsoOnTriangulation();
    /// <summary>
    /// Enables or disables isolines on triangulation by setting the parameter theIsEnabled to true or false.
    /// </summary>
    void SetIsoOnTriangulation(bool theToEnable);
    /// <summary>
    /// Sets the discretisation parameter theValue.
    /// </summary>
    void SetDiscretisation(int theValue);
    /// <summary>
    /// Returns the discretisation setting.
    /// </summary>
    int Discretisation();
    /// <summary>
    /// Returns true if the drawer has discretisation setting active.
    /// </summary>
    bool HasOwnDiscretisation();
    /// <summary>
    /// Resets HasOwnDiscretisation() flag, e.g. undoes SetDiscretisation().
    /// </summary>
    void UnsetOwnDiscretisation();
    /// <summary>
    /// Sets the deviation coefficient theCoefficient.
    /// Also sets the hasOwnDeviationCoefficient flag to Standard_True and myPreviousDeviationCoefficient
    /// </summary>
    void SetDeviationCoefficient(double theCoefficient);
    /// <summary>
    /// Returns the deviation coefficient.
    /// Drawings of curves or patches are made with respect
    /// to a maximal chordal deviation. A Deviation coefficient
    /// is used in the shading display mode. The shape is
    /// seen decomposed into triangles. These are used to
    /// calculate reflection of light from the surface of the
    /// object. The triangles are formed from chords of the
    /// curves in the shape. The deviation coefficient gives
    /// the highest value of the angle with which a chord can
    /// deviate from a tangent to a   curve. If this limit is
    /// reached, a new triangle is begun.
    /// This deviation is absolute and is set through the
    /// method: SetMaximalChordialDeviation. The default value is 0.001.
    /// In drawing shapes, however, you are allowed to ask
    /// for a relative deviation. This deviation will be:
    /// SizeOfObject * DeviationCoefficient.
    /// </summary>
    double DeviationCoefficient();
    /// <summary>
    /// Resets HasOwnDeviationCoefficient() flag, e.g. undoes previous SetDeviationCoefficient().
    /// </summary>
    void SetDeviationCoefficient();
    /// <summary>
    /// Returns true if there is a local setting for deviation
    /// coefficient in this framework for a specific interactive object.
    /// </summary>
    bool HasOwnDeviationCoefficient();
    /// <summary>
    /// Saves the previous value used for the chordal
    /// deviation coefficient.
    /// </summary>
    double PreviousDeviationCoefficient();
    /// <summary>
    /// Updates the previous value used for the chordal deviation coefficient to the current state.
    /// </summary>
    void UpdatePreviousDeviationCoefficient();
    /// <summary>
    /// Sets the deviation angle theAngle.
    /// Also sets the hasOwnDeviationAngle flag to Standard_True, and myPreviousDeviationAngle.
    /// </summary>
    void SetDeviationAngle(double theAngle);
    /// <summary>
    /// Returns the value for deviation angle in radians, 20 * M_PI / 180 by default.
    /// </summary>
    double DeviationAngle();
    /// <summary>
    /// Resets HasOwnDeviationAngle() flag, e.g. undoes previous SetDeviationAngle().
    /// </summary>
    void SetDeviationAngle();
    /// <summary>
    /// Returns true if there is a local setting for deviation
    /// angle in this framework for a specific interactive object.
    /// </summary>
    bool HasOwnDeviationAngle();
    /// <summary>
    /// Returns the previous deviation angle
    /// </summary>
    double PreviousDeviationAngle();
    /// <summary>
    /// Updates the previous deviation angle to the current value
    /// </summary>
    void UpdatePreviousDeviationAngle();
    /// <summary>
    /// Sets IsAutoTriangulated on or off by setting the parameter theIsEnabled to true or false.
    /// If this flag is True automatic re-triangulation with deflection-check logic will be applied.
    /// Else this feature will be disable and triangulation is expected to be computed by application itself
    /// and no shading presentation at all if unavailable.
    /// </summary>
    void SetAutoTriangulation(bool theIsEnabled);
    /// <summary>
    /// Returns True if automatic triangulation is enabled.
    /// </summary>
    bool IsAutoTriangulation();
    /// <summary>
    /// Returns true if the drawer has IsoOnPlane setting active.
    /// </summary>
    bool HasOwnIsAutoTriangulation();
    /// <summary>
    /// Resets HasOwnIsAutoTriangulation() flag, e.g. undoes SetAutoTriangulation().
    /// </summary>
    void UnsetOwnIsAutoTriangulation();
    /// <summary>
    /// Defines own attributes for drawing an U isoparametric curve of a face,
    /// settings from linked Drawer or NULL if neither was set.
    /// 
    /// These attributes are used by the following algorithms:
    /// Prs3d_WFDeflectionSurface
    /// Prs3d_WFDeflectionRestrictedFace
    /// </summary>
    RDC::OCC::Prs3d_IsoAspect^ UIsoAspect();
    void SetUIsoAspect(RDC::OCC::Prs3d_IsoAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// UIso aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnUIsoAspect();
    /// <summary>
    /// Defines own attributes for drawing an V isoparametric curve of a face,
    /// settings from linked Drawer or NULL if neither was set.
    /// 
    /// These attributes are used by the following algorithms:
    /// Prs3d_WFDeflectionSurface
    /// Prs3d_WFDeflectionRestrictedFace
    /// </summary>
    RDC::OCC::Prs3d_IsoAspect^ VIsoAspect();
    /// <summary>
    /// Sets the appearance of V isoparameters - theAspect.
    /// </summary>
    void SetVIsoAspect(RDC::OCC::Prs3d_IsoAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// VIso aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnVIsoAspect();
    /// <summary>
    /// Returns own wire aspect settings, settings from linked Drawer or NULL if neither was set.
    /// These attributes are used by the algorithm Prs3d_WFShape.
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ WireAspect();
    /// <summary>
    /// Sets the parameter theAspect for display of wires.
    /// </summary>
    void SetWireAspect(RDC::OCC::Prs3d_LineAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// wire aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnWireAspect();
    /// <summary>
    /// Sets WireDraw on or off by setting the parameter theIsEnabled to true or false.
    /// </summary>
    void SetWireDraw(bool theIsEnabled);
    /// <summary>
    /// Returns True if the drawing of the wire is enabled.
    /// </summary>
    bool WireDraw();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// "draw wires" flag that overrides the one in the link.
    /// </summary>
    bool HasOwnWireDraw();
    /// <summary>
    /// Resets HasOwnWireDraw() flag, e.g. undoes SetWireDraw().
    /// </summary>
    void UnsetOwnWireDraw();
    /// <summary>
    /// Returns own point aspect setting, settings from linked Drawer or NULL if neither was set.
    /// These attributes are used by the algorithms Prs3d_Point.
    /// </summary>
    RDC::OCC::Prs3d_PointAspect^ PointAspect();
    /// <summary>
    /// Sets the parameter theAspect for display attributes of points
    /// </summary>
    void SetPointAspect(RDC::OCC::Prs3d_PointAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// point aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnPointAspect();
    /// <summary>
    /// Sets own point aspect, which is a yellow Aspect_TOM_PLUS marker by default.
    /// Returns FALSE if the drawer already has its own attribute for point aspect.
    /// </summary>
    bool SetupOwnPointAspect(RDC::OCC::Prs3d_Drawer^ theDefaults);
    /// <summary>
    /// Sets own point aspect, which is a yellow Aspect_TOM_PLUS marker by default.
    /// Returns FALSE if the drawer already has its own attribute for point aspect.
    /// </summary>
    bool SetupOwnPointAspect();
    /// <summary>
    /// Returns own settings for line aspects, settings from linked Drawer or NULL if neither was set.
    /// These attributes are used by the following algorithms:
    /// Prs3d_Curve
    /// Prs3d_Line
    /// Prs3d_HLRShape
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ LineAspect();
    /// <summary>
    /// Sets the parameter theAspect for display attributes of lines.
    /// </summary>
    void SetLineAspect(RDC::OCC::Prs3d_LineAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// line aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnLineAspect();
    /// <summary>
    /// Sets own line aspects, which are
    /// single U and single V gray75 solid isolines (::UIsoAspect(), ::VIsoAspect()),
    /// red wire (::WireAspect()), yellow line (::LineAspect()),
    /// yellow seen line (::SeenLineAspect()), dashed yellow hidden line (::HiddenLineAspect()),
    /// green free boundary (::FreeBoundaryAspect()), yellow unfree boundary (::UnFreeBoundaryAspect()).
    /// Returns FALSE if own line aspect are already set.
    /// </summary>
    bool SetOwnLineAspects(RDC::OCC::Prs3d_Drawer^ theDefaults);
    /// <summary>
    /// Sets own line aspects, which are
    /// single U and single V gray75 solid isolines (::UIsoAspect(), ::VIsoAspect()),
    /// red wire (::WireAspect()), yellow line (::LineAspect()),
    /// yellow seen line (::SeenLineAspect()), dashed yellow hidden line (::HiddenLineAspect()),
    /// green free boundary (::FreeBoundaryAspect()), yellow unfree boundary (::UnFreeBoundaryAspect()).
    /// Returns FALSE if own line aspect are already set.
    /// </summary>
    bool SetOwnLineAspects();
    /// <summary>
    /// Sets own line aspects for datums.
    /// Returns FALSE if own line for datums are already set.
    /// </summary>
    bool SetOwnDatumAspects(RDC::OCC::Prs3d_Drawer^ theDefaults);
    /// <summary>
    /// Sets own line aspects for datums.
    /// Returns FALSE if own line for datums are already set.
    /// </summary>
    bool SetOwnDatumAspects();
    /// <summary>
    /// Returns own settings for text aspect, settings from linked Drawer or NULL if neither was set.
    /// </summary>
    RDC::OCC::Prs3d_TextAspect^ TextAspect();
    /// <summary>
    /// Sets the parameter theAspect for display attributes of text.
    /// </summary>
    void SetTextAspect(RDC::OCC::Prs3d_TextAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// text aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnTextAspect();
    /// <summary>
    /// Returns own settings for shading aspects, settings from linked Drawer or NULL if neither was set.
    /// </summary>
    RDC::OCC::Prs3d_ShadingAspect^ ShadingAspect();
    /// <summary>
    /// Sets the parameter theAspect for display attributes of shading.
    /// </summary>
    void SetShadingAspect(RDC::OCC::Prs3d_ShadingAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// shading aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnShadingAspect();
    /// <summary>
    /// Sets own shading aspect, which is Graphic3d_NameOfMaterial_Brass material by default.
    /// Returns FALSE if the drawer already has its own attribute for shading aspect.
    /// </summary>
    bool SetupOwnShadingAspect(RDC::OCC::Prs3d_Drawer^ theDefaults);
    /// <summary>
    /// Sets own shading aspect, which is Graphic3d_NameOfMaterial_Brass material by default.
    /// Returns FALSE if the drawer already has its own attribute for shading aspect.
    /// </summary>
    bool SetupOwnShadingAspect();
    /// <summary>
    /// Returns own settings for seen line aspects, settings of linked Drawer or NULL if neither was set.
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ SeenLineAspect();
    /// <summary>
    /// Sets the parameter theAspect for the display of seen lines in hidden line removal mode.
    /// </summary>
    void SetSeenLineAspect(RDC::OCC::Prs3d_LineAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// seen line aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnSeenLineAspect();
    /// <summary>
    /// Returns own settings for the appearance of planes, settings from linked Drawer or NULL if neither was set.
    /// </summary>
    RDC::OCC::Prs3d_PlaneAspect^ PlaneAspect();
    /// <summary>
    /// Sets the parameter theAspect for the display of planes.
    /// </summary>
    void SetPlaneAspect(RDC::OCC::Prs3d_PlaneAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// plane aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnPlaneAspect();
    /// <summary>
    /// Returns own attributes for display of arrows, settings from linked Drawer or NULL if neither was set.
    /// </summary>
    RDC::OCC::Prs3d_ArrowAspect^ ArrowAspect();
    /// <summary>
    /// Sets the parameter theAspect for display attributes of arrows.
    /// </summary>
    void SetArrowAspect(RDC::OCC::Prs3d_ArrowAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// arrow aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnArrowAspect();
    /// <summary>
    /// Enables the drawing of an arrow at the end of each line.
    /// By default the arrows are not drawn.
    /// </summary>
    void SetLineArrowDraw(bool theIsEnabled);
    /// <summary>
    /// Returns True if drawing an arrow at the end of each edge is enabled
    /// and False otherwise (the default).
    /// </summary>
    bool LineArrowDraw();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// "draw arrow" flag that overrides the one in the link.
    /// </summary>
    bool HasOwnLineArrowDraw();
    /// <summary>
    /// Reset HasOwnLineArrowDraw() flag, e.g. undoes SetLineArrowDraw().
    /// </summary>
    void UnsetOwnLineArrowDraw();
    /// <summary>
    /// Returns own settings for hidden line aspects, settings from linked Drawer or NULL if neither was set.
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ HiddenLineAspect();
    /// <summary>
    /// Sets the parameter theAspect for the display of hidden lines in hidden line removal mode.
    /// </summary>
    void SetHiddenLineAspect(RDC::OCC::Prs3d_LineAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// hidden lines aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnHiddenLineAspect();
    /// <summary>
    /// Returns Standard_True if the hidden lines are to be drawn.
    /// By default the hidden lines are not drawn.
    /// </summary>
    bool DrawHiddenLine();
    /// <summary>
    /// Enables the DrawHiddenLine function.
    /// </summary>
    void EnableDrawHiddenLine();
    /// <summary>
    /// Disables the DrawHiddenLine function.
    /// </summary>
    void DisableDrawHiddenLine();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// "draw hidden lines" flag that overrides the one in the link.
    /// </summary>
    bool HasOwnDrawHiddenLine();
    /// <summary>
    /// Resets HasOwnDrawHiddenLine() flag, e.g. unsets EnableDrawHiddenLine()/DisableDrawHiddenLine().
    /// </summary>
    void UnsetOwnDrawHiddenLine();
    /// <summary>
    /// Returns own settings for the appearance of vectors, settings from linked Drawer or NULL if neither was set.
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ VectorAspect();
    /// <summary>
    /// Sets the modality theAspect for the display of vectors.
    /// </summary>
    void SetVectorAspect(RDC::OCC::Prs3d_LineAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// vector aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnVectorAspect();
    /// <summary>
    /// Sets the mode of visualization of vertices of a TopoDS_Shape instance.
    /// By default, only stand-alone vertices (not belonging topologically to an edge) are drawn,
    /// that corresponds to Prs3d_VDM_Standalone mode.
    /// Switching to Prs3d_VDM_Standalone mode makes all shape's vertices visible.
    /// To inherit this parameter from the global drawer instance ("the link") when it is present,
    /// Prs3d_VDM_Inherited value should be used.
    /// </summary>
    void SetVertexDrawMode(RDC::OCC::Prs3d_VertexDrawMode theMode);
    /// <summary>
    /// Returns the current mode of visualization of vertices of a TopoDS_Shape instance.
    /// </summary>
    RDC::OCC::Prs3d_VertexDrawMode VertexDrawMode();
    /// <summary>
    /// Returns true if the vertex draw mode is not equal to <b>Prs3d_VDM_Inherited</b>.
    /// This means that individual vertex draw mode value (i.e. not inherited from the global
    /// drawer) is used for a specific interactive object.
    /// </summary>
    bool HasOwnVertexDrawMode();
    /// <summary>
    /// Returns own settings for the appearance of datums, settings from linked Drawer or NULL if neither was set.
    /// </summary>
    RDC::OCC::Prs3d_DatumAspect^ DatumAspect();
    /// <summary>
    /// Sets the modality theAspect for the display of datums.
    /// </summary>
    void SetDatumAspect(RDC::OCC::Prs3d_DatumAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// datum aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnDatumAspect();
    /// <summary>
    /// Returns own LineAspect for section wire, settings from linked Drawer or NULL if neither was set.
    /// These attributes are used by the algorithm Prs3d_WFShape.
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ SectionAspect();
    /// <summary>
    /// Sets the parameter theAspect for display attributes of sections.
    /// </summary>
    void SetSectionAspect(RDC::OCC::Prs3d_LineAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// section aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnSectionAspect();
    /// <summary>
    /// Sets the parameter theAspect for the display of free boundaries.
    /// The method sets aspect owned by the drawer that will be used during
    /// visualization instead of the one set in link.
    /// </summary>
    void SetFreeBoundaryAspect(RDC::OCC::Prs3d_LineAspect^ theAspect);
    /// <summary>
    /// Returns own settings for presentation of free boundaries, settings from linked Drawer or NULL if neither was set.
    /// In other words, this settings affect boundaries which are not shared.
    /// These attributes are used by the algorithm Prs3d_WFShape
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ FreeBoundaryAspect();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// free boundaries aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnFreeBoundaryAspect();
    /// <summary>
    /// Enables or disables drawing of free boundaries for shading presentations.
    /// The method sets drawing flag owned by the drawer that will be used during
    /// visualization instead of the one set in link.
    /// theIsEnabled is a boolean flag indicating whether the free boundaries should be
    /// drawn or not.
    /// </summary>
    void SetFreeBoundaryDraw(bool theIsEnabled);
    /// <summary>
    /// Returns True if the drawing of the free boundaries is enabled
    /// True is the default setting.
    /// </summary>
    bool FreeBoundaryDraw();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// "draw free boundaries" flag that overrides the one in the link.
    /// </summary>
    bool HasOwnFreeBoundaryDraw();
    /// <summary>
    /// Resets HasOwnFreeBoundaryDraw() flag, e.g. undoes SetFreeBoundaryDraw().
    /// </summary>
    void UnsetOwnFreeBoundaryDraw();
    /// <summary>
    /// Sets the parameter theAspect for the display of shared boundaries.
    /// The method sets aspect owned by the drawer that will be used during
    /// visualization instead of the one set in link.
    /// </summary>
    void SetUnFreeBoundaryAspect(RDC::OCC::Prs3d_LineAspect^ theAspect);
    /// <summary>
    /// Returns own settings for shared boundary line aspects, settings from linked Drawer or NULL if neither was set.
    /// These attributes are used by the algorithm Prs3d_WFShape
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ UnFreeBoundaryAspect();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// unfree boundaries aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnUnFreeBoundaryAspect();
    /// <summary>
    /// Enables or disables drawing of shared boundaries for shading presentations.
    /// The method sets drawing flag owned by the drawer that will be used during
    /// visualization instead of the one set in link.
    /// theIsEnabled is a boolean flag indicating whether the shared boundaries should be drawn or not.
    /// </summary>
    void SetUnFreeBoundaryDraw(bool theIsEnabled);
    /// <summary>
    /// Returns True if the drawing of the shared boundaries is enabled.
    /// True is the default setting.
    /// </summary>
    bool UnFreeBoundaryDraw();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// "draw shared boundaries" flag that overrides the one in the link.
    /// </summary>
    bool HasOwnUnFreeBoundaryDraw();
    /// <summary>
    /// Resets HasOwnUnFreeBoundaryDraw() flag, e.g. undoes SetUnFreeBoundaryDraw().
    /// </summary>
    void UnsetOwnUnFreeBoundaryDraw();
    /// <summary>
    /// Sets line aspect for face boundaries.
    /// The method sets line aspect owned by the drawer that will be used during
    /// visualization instead of the one set in link.
    /// theAspect is the line aspect that determines the look of the face boundaries.
    /// </summary>
    void SetFaceBoundaryAspect(RDC::OCC::Prs3d_LineAspect^ theAspect);
    /// <summary>
    /// Returns own line aspect of face boundaries, settings from linked Drawer or NULL if neither was set.
    /// </summary>
    RDC::OCC::Prs3d_LineAspect^ FaceBoundaryAspect();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// face boundaries aspect that overrides the one in the link.
    /// </summary>
    bool HasOwnFaceBoundaryAspect();
    /// <summary>
    /// Sets own face boundary aspect, which is a black solid line by default.
    /// Returns FALSE if the drawer already has its own attribute for face boundary aspect.
    /// </summary>
    bool SetupOwnFaceBoundaryAspect(RDC::OCC::Prs3d_Drawer^ theDefaults);
    /// <summary>
    /// Sets own face boundary aspect, which is a black solid line by default.
    /// Returns FALSE if the drawer already has its own attribute for face boundary aspect.
    /// </summary>
    bool SetupOwnFaceBoundaryAspect();
    /// <summary>
    /// Enables or disables face boundary drawing for shading presentations.
    /// The method sets drawing flag owned by the drawer that will be used during
    /// visualization instead of the one set in link.
    /// theIsEnabled is a boolean flag indicating whether the face boundaries should be drawn or not.
    /// </summary>
    void SetFaceBoundaryDraw(bool theIsEnabled);
    /// <summary>
    /// Checks whether the face boundary drawing is enabled or not.
    /// </summary>
    bool FaceBoundaryDraw();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// "draw face boundaries" flag that overrides the one in the link.
    /// </summary>
    bool HasOwnFaceBoundaryDraw();
    /// <summary>
    /// Resets HasOwnFaceBoundaryDraw() flag, e.g. undoes SetFaceBoundaryDraw().
    /// </summary>
    void UnsetOwnFaceBoundaryDraw();
    /// <summary>
    /// Returns true if the drawer has its own attribute for face boundaries upper edge continuity class that overrides the one in the link.
    /// </summary>
    bool HasOwnFaceBoundaryUpperContinuity();
    /// <summary>
    /// Get the most edge continuity class; GeomAbs_CN by default (all edges).
    /// </summary>
    RDC::OCC::GeomAbs_Shape FaceBoundaryUpperContinuity();
    /// <summary>
    /// Set the most edge continuity class for face boundaries.
    /// </summary>
    void SetFaceBoundaryUpperContinuity(RDC::OCC::GeomAbs_Shape theMostAllowedEdgeClass);
    /// <summary>
    /// Unset the most edge continuity class for face boundaries.
    /// </summary>
    void UnsetFaceBoundaryUpperContinuity();
    /// <summary>
    /// Returns own settings for the appearance of dimensions, settings from linked Drawer or NULL if neither was set.
    /// </summary>
    RDC::OCC::Prs3d_DimensionAspect^ DimensionAspect();
    /// <summary>
    /// Sets the settings for the appearance of dimensions.
    /// The method sets aspect owned by the drawer that will be used during
    /// visualization instead of the one set in link.
    /// </summary>
    void SetDimensionAspect(RDC::OCC::Prs3d_DimensionAspect^ theAspect);
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// the appearance of dimensions that overrides the one in the link.
    /// </summary>
    bool HasOwnDimensionAspect();
    /// <summary>
    /// Sets dimension length model units for computing of dimension presentation.
    /// The method sets value owned by the drawer that will be used during
    /// visualization instead of the one set in link.
    /// </summary>
    void SetDimLengthModelUnits(RDC::OCC::TCollection_AsciiString^ theUnits);
    /// <summary>
    /// Sets dimension angle model units for computing of dimension presentation.
    /// The method sets value owned by the drawer that will be used during
    /// visualization instead of the one set in link.
    /// </summary>
    void SetDimAngleModelUnits(RDC::OCC::TCollection_AsciiString^ theUnits);
    /// <summary>
    /// Returns length model units for the dimension presentation.
    /// </summary>
    RDC::OCC::TCollection_AsciiString^ DimLengthModelUnits();
    /// <summary>
    /// Returns angle model units for the dimension presentation.
    /// </summary>
    RDC::OCC::TCollection_AsciiString^ DimAngleModelUnits();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// dimension length model units that overrides the one in the link.
    /// </summary>
    bool HasOwnDimLengthModelUnits();
    /// <summary>
    /// Resets HasOwnDimLengthModelUnits() flag, e.g. undoes SetDimLengthModelUnits().
    /// </summary>
    void UnsetOwnDimLengthModelUnits();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// dimension angle model units that overrides the one in the link.
    /// </summary>
    bool HasOwnDimAngleModelUnits();
    /// <summary>
    /// Resets HasOwnDimAngleModelUnits() flag, e.g. undoes SetDimAngleModelUnits().
    /// </summary>
    void UnsetOwnDimAngleModelUnits();
    /// <summary>
    /// Sets length units in which value for dimension presentation is displayed.
    /// The method sets value owned by the drawer that will be used during
    /// visualization instead of the one set in link.
    /// </summary>
    void SetDimLengthDisplayUnits(RDC::OCC::TCollection_AsciiString^ theUnits);
    /// <summary>
    /// Sets angle units in which value for dimension presentation is displayed.
    /// The method sets value owned by the drawer that will be used during
    /// visualization instead of the one set in link.
    /// </summary>
    void SetDimAngleDisplayUnits(RDC::OCC::TCollection_AsciiString^ theUnits);
    /// <summary>
    /// Returns length units in which dimension presentation is displayed.
    /// </summary>
    RDC::OCC::TCollection_AsciiString^ DimLengthDisplayUnits();
    /// <summary>
    /// Returns angle units in which dimension presentation is displayed.
    /// </summary>
    RDC::OCC::TCollection_AsciiString^ DimAngleDisplayUnits();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// length units in which dimension presentation is displayed
    /// that overrides the one in the link.
    /// </summary>
    bool HasOwnDimLengthDisplayUnits();
    /// <summary>
    /// Resets HasOwnDimLengthModelUnits() flag, e.g. undoes SetDimLengthDisplayUnits().
    /// </summary>
    void UnsetOwnDimLengthDisplayUnits();
    /// <summary>
    /// Returns true if the drawer has its own attribute for
    /// angle units in which dimension presentation is displayed
    /// that overrides the one in the link.
    /// </summary>
    bool HasOwnDimAngleDisplayUnits();
    /// <summary>
    /// Resets HasOwnDimAngleDisplayUnits() flag, e.g. undoes SetDimLengthDisplayUnits().
    /// </summary>
    void UnsetOwnDimAngleDisplayUnits();
    /// <summary>
    /// Returns the drawer to which the current object references.
    /// </summary>
    RDC::OCC::Prs3d_Drawer^ Link();
    /// <summary>
    /// Returns true if the current object has a link on the other drawer.
    /// </summary>
    bool HasLink();
    /// <summary>
    /// Sets theDrawer as a link to which the current object references.
    /// </summary>
    void Link(RDC::OCC::Prs3d_Drawer^ theDrawer);
    /// <summary>
    /// Sets theDrawer as a link to which the current object references.
    /// </summary>
    void SetLink(RDC::OCC::Prs3d_Drawer^ theDrawer);
    /// <summary>
    /// Removes local attributes.
    /// </summary>
    void ClearLocalAttributes();
    /// <summary>
    /// Assign shader program for specified type of primitives.
    /// </summary>
    /// <param name="theProgram">
    /// new program to set (might be NULL)
    /// </param>
    /// <param name="theAspect">
    ///  the type of primitives
    /// </param>
    /// <param name="theToOverrideDefaults">
    /// if true then non-overridden attributes using defaults will be allocated and copied from the Link;
    /// otherwise, only already customized attributes will be changed
    /// </param>
    /// <returns>
    /// TRUE if presentation should be recomputed after creating aspects not previously customized (if theToOverrideDefaults is also TRUE)
    /// </returns>
    bool SetShaderProgram(RDC::OCC::Graphic3d_ShaderProgram^ theProgram, RDC::OCC::Graphic3d_GroupAspect theAspect, bool theToOverrideDefaults);
    /// <summary>
    /// Assign shader program for specified type of primitives.
    /// </summary>
    /// <param name="theProgram">
    /// new program to set (might be NULL)
    /// </param>
    /// <param name="theAspect">
    ///  the type of primitives
    /// </param>
    /// <param name="theToOverrideDefaults">
    /// if true then non-overridden attributes using defaults will be allocated and copied from the Link;
    /// otherwise, only already customized attributes will be changed
    /// </param>
    /// <returns>
    /// TRUE if presentation should be recomputed after creating aspects not previously customized (if theToOverrideDefaults is also TRUE)
    /// </returns>
    bool SetShaderProgram(RDC::OCC::Graphic3d_ShaderProgram^ theProgram, RDC::OCC::Graphic3d_GroupAspect theAspect);
    /// <summary>
    /// Sets Shading Model type for the shading aspect.
    /// </summary>
    bool SetShadingModel(RDC::OCC::Graphic3d_TypeOfShadingModel theModel, bool theToOverrideDefaults);
    /// <summary>
    /// Sets Shading Model type for the shading aspect.
    /// </summary>
    bool SetShadingModel(RDC::OCC::Graphic3d_TypeOfShadingModel theModel);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// </summary>
    /// @name deprecated methods
    void SetHLRAngle(double theAngle);
    double HLRAngle();
    void SetHLRAngle();
    bool HasOwnHLRDeviationAngle();
    double PreviousHLRDeviationAngle();
    static RDC::OCC::Prs3d_Drawer^ CreateDowncasted(::Prs3d_Drawer* instance);
}; // class Prs3d_Drawer

//---------------------------------------------------------------------
//  Class  Prs3d
//---------------------------------------------------------------------
/// <summary>
/// The Prs3d package provides the following services
/// -   a presentation object (the context for all
/// modifications to the display, its presentation will be
/// displayed in every view of an active viewer)
/// -   an attribute manager governing how objects such
/// as color, width, and type of line are displayed;
/// these are generic objects, whereas those in
/// StdPrs are specific geometries and topologies.
/// -   generic   algorithms providing default settings for
/// objects such as points, curves, surfaces and shapes
/// -   a root object which provides the abstract
/// framework for the DsgPrs definitions at work in
/// display of dimensions, relations and trihedra.
/// </summary>
public ref class Prs3d sealed
    : public RDC::OCC::BaseClass<::Prs3d>
{

#ifdef Include_Prs3d_h
public:
    Include_Prs3d_h
#endif

public:
    Prs3d(::Prs3d* nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d>( nativeInstance, true )
    {}

    Prs3d(::Prs3d& nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d>( &nativeInstance, false )
    {}

    property ::Prs3d* NativeInstance
    {
        ::Prs3d* get()
        {
            return static_cast<::Prs3d*>(_NativeInstance);
        }
    }

public:
    Prs3d();
    /// <summary>
    /// draws an arrow at a given location, with respect
    /// to a given direction.
    /// </summary>
    static bool MatchSegment(double X, double Y, double Z, double aDistance, RDC::OCC::Pnt p1, RDC::OCC::Pnt p2, double% dist);
    /// <summary>
    /// Computes the absolute deflection value based on relative deflection Prs3d_Drawer::DeviationCoefficient().
    /// </summary>
    /// <param name="theBndMin">
    /// [in] bounding box min corner
    /// </param>
    /// <param name="theBndMax">
    /// [in] bounding box max corner
    /// </param>
    /// <param name="theDeviationCoefficient">
    /// [in] relative deflection coefficient from Prs3d_Drawer::DeviationCoefficient()
    /// </param>
    /// <returns>
    /// absolute deflection coefficient based on bounding box dimensions
    /// </returns>
    static double GetDeflection(RDC::OCC::Graphic3d_Vec3d^ theBndMin, RDC::OCC::Graphic3d_Vec3d^ theBndMax, double theDeviationCoefficient);
    /// <summary>
    /// Computes the absolute deflection value based on relative deflection Prs3d_Drawer::DeviationCoefficient().
    /// </summary>
    /// <param name="theBndBox">
    /// [in] bounding box
    /// </param>
    /// <param name="theDeviationCoefficient">
    /// [in] relative deflection coefficient from Prs3d_Drawer::DeviationCoefficient()
    /// </param>
    /// <param name="theMaximalChordialDeviation">
    /// [in] absolute deflection coefficient from Prs3d_Drawer::MaximalChordialDeviation()
    /// </param>
    /// <returns>
    /// absolute deflection coefficient based on bounding box dimensions or theMaximalChordialDeviation if bounding box is Void or Infinite
    /// </returns>
    static double GetDeflection(RDC::OCC::Bnd_Box^ theBndBox, double theDeviationCoefficient, double theMaximalChordialDeviation);
    /// <summary>
    /// Assembles array of primitives for sequence of polylines.
    /// </summary>
    /// <param name="thePoints">
    /// [in] the polylines sequence
    /// </param>
    /// <returns>
    /// array of primitives
    /// </returns>
    static RDC::OCC::Graphic3d_ArrayOfPrimitives^ PrimitivesFromPolylines(RDC::OCC::Prs3d_NListOfSequenceOfPnt^ thePoints);
    /// <summary>
    /// Add primitives into new group in presentation and clear the list of polylines.
    /// </summary>
    static void AddPrimitivesGroup(RDC::OCC::Graphic3d_Structure^ thePrs, RDC::OCC::Prs3d_LineAspect^ theAspect, RDC::OCC::Prs3d_NListOfSequenceOfPnt^ thePolylines);
    /* Method skipped due to unknown mapping: void AddFreeEdges(TColgp_SequenceOfPnt theSegments, Poly_Triangulation thePolyTri, gp_Trsf theLocation, ) */
}; // class Prs3d

//---------------------------------------------------------------------
//  Class  Prs3d_Arrow
//---------------------------------------------------------------------
/// <summary>
/// Provides class methods to draw an arrow at a given location, along a given direction and using a given angle.
/// </summary>
public ref class Prs3d_Arrow sealed
    : public RDC::OCC::BaseClass<::Prs3d_Arrow>
{

#ifdef Include_Prs3d_Arrow_h
public:
    Include_Prs3d_Arrow_h
#endif

public:
    Prs3d_Arrow(::Prs3d_Arrow* nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d_Arrow>( nativeInstance, true )
    {}

    Prs3d_Arrow(::Prs3d_Arrow& nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d_Arrow>( &nativeInstance, false )
    {}

    property ::Prs3d_Arrow* NativeInstance
    {
        ::Prs3d_Arrow* get()
        {
            return static_cast<::Prs3d_Arrow*>(_NativeInstance);
        }
    }

public:
    Prs3d_Arrow();
    /// <summary>
    /// Defines the representation of the arrow as shaded triangulation.
    /// </summary>
    /// <param name="theAxis">
    ///       axis definition (arrow origin and direction)
    /// </param>
    /// <param name="theTubeRadius">
    /// tube (cylinder) radius
    /// </param>
    /// <param name="theAxisLength">
    /// overall arrow length (cylinder + cone)
    /// </param>
    /// <param name="theConeRadius">
    /// cone radius (arrow tip)
    /// </param>
    /// <param name="theConeLength">
    /// cone length (arrow tip)
    /// </param>
    /// <param name="theNbFacettes">
    /// tessellation quality for each part
    /// </param>
    static RDC::OCC::Graphic3d_ArrayOfTriangles^ DrawShaded(RDC::OCC::Ax1 theAxis, double theTubeRadius, double theAxisLength, double theConeRadius, double theConeLength, int theNbFacettes);
    /// <summary>
    /// Defines the representation of the arrow as a container of segments.
    /// </summary>
    /// <param name="theLocation">
    ///   location of the arrow tip
    /// </param>
    /// <param name="theDir">
    ///        direction of the arrow
    /// </param>
    /// <param name="theAngle">
    ///      angle of opening of the arrow head
    /// </param>
    /// <param name="theLength">
    ///     length of the arrow (from the tip)
    /// </param>
    /// <param name="theNbSegments">
    /// count of points on polyline where location is connected
    /// </param>
    static RDC::OCC::Graphic3d_ArrayOfSegments^ DrawSegments(RDC::OCC::Pnt theLocation, RDC::OCC::Dir theDir, double theAngle, double theLength, int theNbSegments);
    /// <summary>
    /// Defines the representation of the arrow.
    /// Note that this method does NOT assign any presentation aspects to the primitives group!
    /// </summary>
    /// <param name="theGroup">
    ///     presentation group to add primitives
    /// </param>
    /// <param name="theLocation">
    ///  location of the arrow tip
    /// </param>
    /// <param name="theDirection">
    /// direction of the arrow
    /// </param>
    /// <param name="theAngle">
    ///     angle of opening of the arrow head
    /// </param>
    /// <param name="theLength">
    ///    length of the arrow (from the tip)
    /// </param>
    static void Draw(RDC::OCC::Graphic3d_Group^ theGroup, RDC::OCC::Pnt theLocation, RDC::OCC::Dir theDirection, double theAngle, double theLength);
}; // class Prs3d_Arrow

//---------------------------------------------------------------------
//  Class  Prs3d_IsoAspect
//---------------------------------------------------------------------
/// <summary>
/// A framework to define the display attributes of isoparameters.
/// This framework can be used to modify the default
/// setting for isoparameters in Prs3d_Drawer.
/// </summary>
public ref class Prs3d_IsoAspect sealed
    : public RDC::OCC::Prs3d_LineAspect
{

#ifdef Include_Prs3d_IsoAspect_h
public:
    Include_Prs3d_IsoAspect_h
#endif

public:
    Prs3d_IsoAspect(::Prs3d_IsoAspect* nativeInstance)
        : RDC::OCC::Prs3d_LineAspect( nativeInstance )
    {}

    Prs3d_IsoAspect(::Prs3d_IsoAspect& nativeInstance)
        : RDC::OCC::Prs3d_LineAspect( nativeInstance )
    {}

    property ::Prs3d_IsoAspect* NativeInstance
    {
        ::Prs3d_IsoAspect* get()
        {
            return static_cast<::Prs3d_IsoAspect*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a framework to define display attributes of isoparameters.
    /// These include:
    /// -   the color attribute aColor
    /// -   the type of line aType
    /// -   the width value aWidth
    /// -   aNumber, the number of isoparameters to be   displayed.
    /// </summary>
    Prs3d_IsoAspect(RDC::OCC::Quantity_Color^ theColor, RDC::OCC::Aspect_TypeOfLine theType, double theWidth, int theNumber);
    /// <summary>
    /// defines the number of U or V isoparametric curves
    /// to be drawn for a single face.
    /// Default value: 10
    /// </summary>
    void SetNumber(int theNumber);
    /// <summary>
    /// returns the number of U or V isoparametric curves drawn for a single face.
    /// </summary>
    int Number();
    static RDC::OCC::Prs3d_IsoAspect^ CreateDowncasted(::Prs3d_IsoAspect* instance);
}; // class Prs3d_IsoAspect

//---------------------------------------------------------------------
//  Class  Prs3d_Root
//---------------------------------------------------------------------
/// <summary>
/// A root class for the standard presentation algorithms of the StdPrs package.
/// </summary>
public ref class Prs3d_Root
    : public RDC::OCC::BaseClass<::Prs3d_Root>
{

#ifdef Include_Prs3d_Root_h
public:
    Include_Prs3d_Root_h
#endif

protected:
    Prs3d_Root(InitMode init)
        : RDC::OCC::BaseClass<::Prs3d_Root>( init )
    {}

public:
    Prs3d_Root(::Prs3d_Root* nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d_Root>( nativeInstance, true )
    {}

    Prs3d_Root(::Prs3d_Root& nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d_Root>( &nativeInstance, false )
    {}

    property ::Prs3d_Root* NativeInstance
    {
        ::Prs3d_Root* get()
        {
            return static_cast<::Prs3d_Root*>(_NativeInstance);
        }
    }

public:
    Prs3d_Root();
    static RDC::OCC::Graphic3d_Group^ CurrentGroup(RDC::OCC::Graphic3d_Structure^ thePrs3d);
    static RDC::OCC::Graphic3d_Group^ NewGroup(RDC::OCC::Graphic3d_Structure^ thePrs3d);
}; // class Prs3d_Root

//---------------------------------------------------------------------
//  Class  Prs3d_BndBox
//---------------------------------------------------------------------
/// <summary>
/// Tool for computing bounding box presentation.
/// </summary>
public ref class Prs3d_BndBox sealed
    : public RDC::OCC::Prs3d_Root
{

#ifdef Include_Prs3d_BndBox_h
public:
    Include_Prs3d_BndBox_h
#endif

public:
    Prs3d_BndBox(::Prs3d_BndBox* nativeInstance)
        : RDC::OCC::Prs3d_Root( nativeInstance )
    {}

    Prs3d_BndBox(::Prs3d_BndBox& nativeInstance)
        : RDC::OCC::Prs3d_Root( nativeInstance )
    {}

    property ::Prs3d_BndBox* NativeInstance
    {
        ::Prs3d_BndBox* get()
        {
            return static_cast<::Prs3d_BndBox*>(_NativeInstance);
        }
    }

public:
    Prs3d_BndBox();
    /// <summary>
    /// Computes presentation of a bounding box.
    /// </summary>
    /// <param name="thePresentation">
    /// [in] the presentation.
    /// </param>
    /// <param name="theBndBox">
    /// [in] the bounding box.
    /// </param>
    /// <param name="theDrawer">
    /// [in] the drawer.
    /// </param>
    static void Add(RDC::OCC::Graphic3d_Structure^ thePresentation, RDC::OCC::Bnd_Box^ theBndBox, RDC::OCC::Prs3d_Drawer^ theDrawer);
    /// <summary>
    /// Computes presentation of a bounding box.
    /// </summary>
    /// <param name="thePresentation">
    /// [in] the presentation.
    /// </param>
    /// <param name="theBndBox">
    /// [in] the bounding box.
    /// </param>
    /// <param name="theDrawer">
    /// [in] the drawer.
    /// </param>
    static void Add(RDC::OCC::Graphic3d_Structure^ thePresentation, RDC::OCC::Bnd_OBB^ theBndBox, RDC::OCC::Prs3d_Drawer^ theDrawer);
    /// <summary>
    /// Create primitive array with line segments for displaying a box.
    /// </summary>
    /// <param name="theBox">
    /// [in] the box to add
    /// </param>
    static RDC::OCC::Graphic3d_ArrayOfSegments^ FillSegments(RDC::OCC::Bnd_OBB^ theBox);
    /// <summary>
    /// Create primitive array with line segments for displaying a box.
    /// </summary>
    /// <param name="theBox">
    /// [in] the box to add
    /// </param>
    static RDC::OCC::Graphic3d_ArrayOfSegments^ FillSegments(RDC::OCC::Bnd_Box^ theBox);
    /// <summary>
    /// Create primitive array with line segments for displaying a box.
    /// </summary>
    /// <param name="theSegments">
    /// [in] [out] primitive array to be filled;
    /// should be at least 8 nodes and 24 edges in size
    /// </param>
    /// <param name="theBox">
    /// [in] the box to add
    /// </param>
    static void FillSegments(RDC::OCC::Graphic3d_ArrayOfSegments^ theSegments, RDC::OCC::Bnd_OBB^ theBox);
    /// <summary>
    /// Create primitive array with line segments for displaying a box.
    /// </summary>
    /// <param name="theSegments">
    /// [in] [out] primitive array to be filled;
    /// should be at least 8 nodes and 24 edges in size
    /// </param>
    /// <param name="theBox">
    /// [in] the box to add
    /// </param>
    static void FillSegments(RDC::OCC::Graphic3d_ArrayOfSegments^ theSegments, RDC::OCC::Bnd_Box^ theBox);
    /// <summary>
    /// Create primitive array with line segments for displaying a box.
    /// </summary>
    /// <param name="theSegments">
    /// [in] [out] primitive array to be filled;
    /// should be at least 8 nodes and 24 edges in size
    /// </param>
    /// <param name="theBox">
    /// [in] the box to add
    /// </param>
    static void fillSegments(RDC::OCC::Graphic3d_ArrayOfSegments^ theSegments, RDC::OCC::Pnt theBox);
}; // class Prs3d_BndBox

//---------------------------------------------------------------------
//  Class  Prs3d_InvalidAngle
//---------------------------------------------------------------------
public ref class Prs3d_InvalidAngle sealed
    : public RDC::OCC::Standard_RangeError
{

#ifdef Include_Prs3d_InvalidAngle_h
public:
    Include_Prs3d_InvalidAngle_h
#endif

public:
    Prs3d_InvalidAngle(::Prs3d_InvalidAngle* nativeInstance)
        : RDC::OCC::Standard_RangeError( nativeInstance )
    {}

    Prs3d_InvalidAngle(::Prs3d_InvalidAngle& nativeInstance)
        : RDC::OCC::Standard_RangeError( nativeInstance )
    {}

    property ::Prs3d_InvalidAngle* NativeInstance
    {
        ::Prs3d_InvalidAngle* get()
        {
            return static_cast<::Prs3d_InvalidAngle*>(_NativeInstance);
        }
    }

public:
    Prs3d_InvalidAngle();
    Prs3d_InvalidAngle(System::String^ theMessage);
    Prs3d_InvalidAngle(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static RDC::OCC::Prs3d_InvalidAngle^ NewInstance(System::String^ theMessage);
    static RDC::OCC::Prs3d_InvalidAngle^ NewInstance();
    static RDC::OCC::Prs3d_InvalidAngle^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static RDC::OCC::Prs3d_InvalidAngle^ CreateDowncasted(::Prs3d_InvalidAngle* instance);
}; // class Prs3d_InvalidAngle

//---------------------------------------------------------------------
//  Class  Prs3d_PresentationShadow
//---------------------------------------------------------------------
/// <summary>
/// Defines a "shadow" of existing presentation object with custom aspects.
/// </summary>
public ref class Prs3d_PresentationShadow sealed
    : public RDC::OCC::Graphic3d_Structure
{

#ifdef Include_Prs3d_PresentationShadow_h
public:
    Include_Prs3d_PresentationShadow_h
#endif

public:
    Prs3d_PresentationShadow(::Prs3d_PresentationShadow* nativeInstance)
        : RDC::OCC::Graphic3d_Structure( nativeInstance )
    {}

    Prs3d_PresentationShadow(::Prs3d_PresentationShadow& nativeInstance)
        : RDC::OCC::Graphic3d_Structure( nativeInstance )
    {}

    property ::Prs3d_PresentationShadow* NativeInstance
    {
        ::Prs3d_PresentationShadow* get()
        {
            return static_cast<::Prs3d_PresentationShadow*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a shadow of existing presentation object.
    /// </summary>
    Prs3d_PresentationShadow(RDC::OCC::Graphic3d_StructureManager^ theViewer, RDC::OCC::Graphic3d_Structure^ thePrs);
    /// <summary>
    /// Returns the id of the parent presentation
    /// </summary>
    int ParentId();
    /// <summary>
    /// Returns view affinity of the parent presentation
    /// </summary>
    RDC::OCC::Graphic3d_ViewAffinity^ ParentAffinity();
    /// <summary>
    /// Do nothing - axis-aligned bounding box should be initialized from parent structure.
    /// </summary>
    void CalculateBoundBox();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static RDC::OCC::Prs3d_PresentationShadow^ CreateDowncasted(::Prs3d_PresentationShadow* instance);
}; // class Prs3d_PresentationShadow

//---------------------------------------------------------------------
//  Class  Prs3d_Text
//---------------------------------------------------------------------
/// <summary>
/// A framework to define the display of texts.
/// </summary>
public ref class Prs3d_Text sealed
    : public RDC::OCC::BaseClass<::Prs3d_Text>
{

#ifdef Include_Prs3d_Text_h
public:
    Include_Prs3d_Text_h
#endif

public:
    Prs3d_Text(::Prs3d_Text* nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d_Text>( nativeInstance, true )
    {}

    Prs3d_Text(::Prs3d_Text& nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d_Text>( &nativeInstance, false )
    {}

    property ::Prs3d_Text* NativeInstance
    {
        ::Prs3d_Text* get()
        {
            return static_cast<::Prs3d_Text*>(_NativeInstance);
        }
    }

public:
    Prs3d_Text();
    /// <summary>
    /// Defines the display of the text.
    /// </summary>
    /// <param name="theGroup">
    ///  group to add primitives
    /// </param>
    /// <param name="theAspect">
    /// presentation attributes
    /// </param>
    /// <param name="theText">
    ///   text to draw
    /// </param>
    /// <param name="theAttachmentPoint">
    /// attachment point
    /// </param>
    /// <returns>
    /// text to draw
    /// </returns>
    static RDC::OCC::Graphic3d_Text^ Draw(RDC::OCC::Graphic3d_Group^ theGroup, RDC::OCC::Prs3d_TextAspect^ theAspect, RDC::OCC::TCollection_ExtendedString^ theText, RDC::OCC::Pnt theAttachmentPoint);
    /// <summary>
    /// Draws the text label.
    /// </summary>
    /// <param name="theGroup">
    ///       group to add primitives
    /// </param>
    /// <param name="theAspect">
    ///      presentation attributes
    /// </param>
    /// <param name="theText">
    ///        text to draw
    /// </param>
    /// <param name="theOrientation">
    /// location and orientation specified in the model 3D space
    /// </param>
    /// <returns>
    /// text to draw
    /// </returns>
    static RDC::OCC::Graphic3d_Text^ Draw(RDC::OCC::Graphic3d_Group^ theGroup, RDC::OCC::Prs3d_TextAspect^ theAspect, RDC::OCC::TCollection_ExtendedString^ theText, RDC::OCC::Ax2 theOrientation, bool theHasOwnAnchor);
    /// <summary>
    /// Draws the text label.
    /// </summary>
    /// <param name="theGroup">
    ///       group to add primitives
    /// </param>
    /// <param name="theAspect">
    ///      presentation attributes
    /// </param>
    /// <param name="theText">
    ///        text to draw
    /// </param>
    /// <param name="theOrientation">
    /// location and orientation specified in the model 3D space
    /// </param>
    /// <returns>
    /// text to draw
    /// </returns>
    static RDC::OCC::Graphic3d_Text^ Draw(RDC::OCC::Graphic3d_Group^ theGroup, RDC::OCC::Prs3d_TextAspect^ theAspect, RDC::OCC::TCollection_ExtendedString^ theText, RDC::OCC::Ax2 theOrientation);
}; // class Prs3d_Text

//---------------------------------------------------------------------
//  Class  Prs3d_ToolQuadric
//---------------------------------------------------------------------
/// <summary>
/// Base class to build 3D surfaces presentation of quadric surfaces.
/// </summary>
public ref class Prs3d_ToolQuadric
    : public RDC::OCC::BaseClass<::Prs3d_ToolQuadric>
{

#ifdef Include_Prs3d_ToolQuadric_h
public:
    Include_Prs3d_ToolQuadric_h
#endif

protected:
    Prs3d_ToolQuadric(InitMode init)
        : RDC::OCC::BaseClass<::Prs3d_ToolQuadric>( init )
    {}

public:
    Prs3d_ToolQuadric(::Prs3d_ToolQuadric* nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d_ToolQuadric>( nativeInstance, true )
    {}

    Prs3d_ToolQuadric(::Prs3d_ToolQuadric& nativeInstance)
        : RDC::OCC::BaseClass<::Prs3d_ToolQuadric>( &nativeInstance, false )
    {}

    property ::Prs3d_ToolQuadric* NativeInstance
    {
        ::Prs3d_ToolQuadric* get()
        {
            return static_cast<::Prs3d_ToolQuadric*>(_NativeInstance);
        }
    }

public:
    Prs3d_ToolQuadric();
    /// <summary>
    /// Return number of triangles for presentation with the given params.
    /// </summary>
    static int TrianglesNb(int theSlicesNb, int theStacksNb);
    /// <summary>
    /// Return number of vertices for presentation with the given params.
    /// </summary>
    static int VerticesNb(int theSlicesNb, int theStacksNb, bool theIsIndexed);
    /// <summary>
    /// Return number of vertices for presentation with the given params.
    /// </summary>
    static int VerticesNb(int theSlicesNb, int theStacksNb);
    /// <summary>
    /// Generate primitives for 3D quadric surface presentation.
    /// </summary>
    /// <param name="theTrsf">
    /// [in] optional transformation to apply
    /// </param>
    /// <returns>
    /// generated triangulation
    /// </returns>
    RDC::OCC::Graphic3d_ArrayOfTriangles^ CreateTriangulation(RDC::OCC::Trsf theTrsf);
    /* Method skipped due to unknown mapping: Poly_Triangulation CreatePolyTriangulation(gp_Trsf theTrsf, ) */
    /// <summary>
    /// Generate primitives for 3D quadric surface and fill the given array.
    /// </summary>
    /// <param name="theArray">
    /// [in][out] the array of vertices;
    /// when NULL, function will create an indexed array;
    /// when not NULL, triangles will be appended to the end of array
    /// (will raise an exception if reserved array size is not large enough)
    /// </param>
    /// <param name="theTrsf">
    /// [in] optional transformation to apply
    /// </param>
    void FillArray(RDC::OCC::Graphic3d_ArrayOfTriangles^ theArray, RDC::OCC::Trsf theTrsf);
    /// <summary>
    /// Return number of triangles in generated presentation.
    /// </summary>
    int TrianglesNb();
    /// <summary>
    /// Return number of vertices in generated presentation.
    /// </summary>
    int VerticesNb(bool theIsIndexed);
    /// <summary>
    /// Return number of vertices in generated presentation.
    /// </summary>
    int VerticesNb();
    /* Method skipped due to unknown mapping: void FillArray(Graphic3d_ArrayOfTriangles theArray, Poly_Triangulation theTriangulation, gp_Trsf theTrsf, ) */
}; // class Prs3d_ToolQuadric

//---------------------------------------------------------------------
//  Class  Prs3d_ToolCylinder
//---------------------------------------------------------------------
/// <summary>
/// Standard presentation algorithm that outputs graphical primitives for cylindrical surface.
/// </summary>
public ref class Prs3d_ToolCylinder sealed
    : public RDC::OCC::Prs3d_ToolQuadric
{

#ifdef Include_Prs3d_ToolCylinder_h
public:
    Include_Prs3d_ToolCylinder_h
#endif

public:
    Prs3d_ToolCylinder(::Prs3d_ToolCylinder* nativeInstance)
        : RDC::OCC::Prs3d_ToolQuadric( nativeInstance )
    {}

    Prs3d_ToolCylinder(::Prs3d_ToolCylinder& nativeInstance)
        : RDC::OCC::Prs3d_ToolQuadric( nativeInstance )
    {}

    property ::Prs3d_ToolCylinder* NativeInstance
    {
        ::Prs3d_ToolCylinder* get()
        {
            return static_cast<::Prs3d_ToolCylinder*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the algorithm creating a cylinder.
    /// </summary>
    /// <param name="theBottomRad">
    /// [in] cylinder bottom radius
    /// </param>
    /// <param name="theTopRad">
    ///    [in] cylinder top radius
    /// </param>
    /// <param name="theHeight">
    ///    [in] cylinder height
    /// </param>
    /// <param name="theNbSlices">
    ///  [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    ///  [in] number of stacks within V parameter
    /// </param>
    Prs3d_ToolCylinder(double theBottomRad, double theTopRad, double theHeight, int theNbSlices, int theNbStacks);
    /// <summary>
    /// Generate primitives for 3D quadric surface and return a filled array.
    /// </summary>
    /// <param name="theBottomRad">
    /// [in] cylinder bottom radius
    /// </param>
    /// <param name="theTopRad">
    ///    [in] cylinder top radius
    /// </param>
    /// <param name="theHeight">
    ///    [in] cylinder height
    /// </param>
    /// <param name="theNbSlices">
    ///  [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    ///  [in] number of stacks within V parameter
    /// </param>
    /// <param name="theTrsf">
    ///      [in] optional transformation to apply
    /// </param>
    /// <returns>
    /// generated triangulation
    /// </returns>
    static RDC::OCC::Graphic3d_ArrayOfTriangles^ Create(double theBottomRad, double theTopRad, double theHeight, int theNbSlices, int theNbStacks, RDC::OCC::Trsf theTrsf);
}; // class Prs3d_ToolCylinder

//---------------------------------------------------------------------
//  Class  Prs3d_ToolDisk
//---------------------------------------------------------------------
/// <summary>
/// Standard presentation algorithm that outputs graphical primitives for disk surface.
/// </summary>
public ref class Prs3d_ToolDisk sealed
    : public RDC::OCC::Prs3d_ToolQuadric
{

#ifdef Include_Prs3d_ToolDisk_h
public:
    Include_Prs3d_ToolDisk_h
#endif

public:
    Prs3d_ToolDisk(::Prs3d_ToolDisk* nativeInstance)
        : RDC::OCC::Prs3d_ToolQuadric( nativeInstance )
    {}

    Prs3d_ToolDisk(::Prs3d_ToolDisk& nativeInstance)
        : RDC::OCC::Prs3d_ToolQuadric( nativeInstance )
    {}

    property ::Prs3d_ToolDisk* NativeInstance
    {
        ::Prs3d_ToolDisk* get()
        {
            return static_cast<::Prs3d_ToolDisk*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the algorithm creating a disk.
    /// </summary>
    /// <param name="theInnerRadius">
    /// [in] inner disk radius
    /// </param>
    /// <param name="theOuterRadius">
    /// [in] outer disk radius
    /// </param>
    /// <param name="theNbSlices">
    ///    [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    ///    [in] number of stacks within V parameter
    /// </param>
    Prs3d_ToolDisk(double theInnerRadius, double theOuterRadius, int theNbSlices, int theNbStacks);
    /// <summary>
    /// Generate primitives for 3D quadric surface.
    /// </summary>
    /// <param name="theInnerRadius">
    /// [in] inner disc radius
    /// </param>
    /// <param name="theOuterRadius">
    /// [in] outer disc radius
    /// </param>
    /// <param name="theNbSlices">
    ///    [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    ///    [in] number of stacks within V parameter
    /// </param>
    /// <param name="theTrsf">
    ///        [in] optional transformation to apply
    /// </param>
    /// <returns>
    /// generated triangulation
    /// </returns>
    static RDC::OCC::Graphic3d_ArrayOfTriangles^ Create(double theInnerRadius, double theOuterRadius, int theNbSlices, int theNbStacks, RDC::OCC::Trsf theTrsf);
    /// <summary>
    /// Set angle range in radians [0, 2*PI] by default.
    /// </summary>
    /// <param name="theStartAngle">
    /// [in] Start angle in counter clockwise order
    /// </param>
    /// <param name="theEndAngle">
    ///   [in] End   angle in counter clockwise order
    /// </param>
    void SetAngleRange(double theStartAngle, double theEndAngle);
}; // class Prs3d_ToolDisk

//---------------------------------------------------------------------
//  Class  Prs3d_ToolSector
//---------------------------------------------------------------------
/// <summary>
/// Standard presentation algorithm that outputs graphical primitives for disk surface.
/// </summary>
public ref class Prs3d_ToolSector sealed
    : public RDC::OCC::Prs3d_ToolQuadric
{

#ifdef Include_Prs3d_ToolSector_h
public:
    Include_Prs3d_ToolSector_h
#endif

public:
    Prs3d_ToolSector(::Prs3d_ToolSector* nativeInstance)
        : RDC::OCC::Prs3d_ToolQuadric( nativeInstance )
    {}

    Prs3d_ToolSector(::Prs3d_ToolSector& nativeInstance)
        : RDC::OCC::Prs3d_ToolQuadric( nativeInstance )
    {}

    property ::Prs3d_ToolSector* NativeInstance
    {
        ::Prs3d_ToolSector* get()
        {
            return static_cast<::Prs3d_ToolSector*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the algorithm creating a sector (quadrant).
    /// </summary>
    /// <param name="theRadius">
    ///   [in] sector radius
    /// </param>
    /// <param name="theNbSlices">
    /// [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    /// [in] number of stacks within V parameter
    /// </param>
    Prs3d_ToolSector(double theRadius, int theNbSlices, int theNbStacks);
    /// <summary>
    /// Generate primitives for 3D quadric surface.
    /// </summary>
    /// <param name="theRadius">
    ///   [in] sector radius
    /// </param>
    /// <param name="theNbSlices">
    /// [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    /// [in] number of stacks within V parameter
    /// </param>
    /// <param name="theTrsf">
    ///     [in] optional transformation to apply
    /// </param>
    /// <returns>
    /// generated triangulation
    /// </returns>
    static RDC::OCC::Graphic3d_ArrayOfTriangles^ Create(double theRadius, int theNbSlices, int theNbStacks, RDC::OCC::Trsf theTrsf);
}; // class Prs3d_ToolSector

//---------------------------------------------------------------------
//  Class  Prs3d_ToolSphere
//---------------------------------------------------------------------
/// <summary>
/// Standard presentation algorithm that outputs graphical primitives for spherical surface.
/// </summary>
public ref class Prs3d_ToolSphere sealed
    : public RDC::OCC::Prs3d_ToolQuadric
{

#ifdef Include_Prs3d_ToolSphere_h
public:
    Include_Prs3d_ToolSphere_h
#endif

public:
    Prs3d_ToolSphere(::Prs3d_ToolSphere* nativeInstance)
        : RDC::OCC::Prs3d_ToolQuadric( nativeInstance )
    {}

    Prs3d_ToolSphere(::Prs3d_ToolSphere& nativeInstance)
        : RDC::OCC::Prs3d_ToolQuadric( nativeInstance )
    {}

    property ::Prs3d_ToolSphere* NativeInstance
    {
        ::Prs3d_ToolSphere* get()
        {
            return static_cast<::Prs3d_ToolSphere*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the algorithm creating a sphere.
    /// </summary>
    /// <param name="theRadius">
    ///   [in] sphere radius
    /// </param>
    /// <param name="theNbSlices">
    /// [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    /// [in] number of stacks within V parameter
    /// </param>
    Prs3d_ToolSphere(double theRadius, int theNbSlices, int theNbStacks);
    /// <summary>
    /// Generate primitives for 3D quadric surface.
    /// </summary>
    /// <param name="theRadius">
    ///   [in] sphere radius
    /// </param>
    /// <param name="theNbSlices">
    /// [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    /// [in] number of stacks within V parameter
    /// </param>
    /// <param name="theTrsf">
    ///     [in] optional transformation to apply
    /// </param>
    /// <returns>
    /// generated triangulation
    /// </returns>
    static RDC::OCC::Graphic3d_ArrayOfTriangles^ Create(double theRadius, int theNbSlices, int theNbStacks, RDC::OCC::Trsf theTrsf);
}; // class Prs3d_ToolSphere

//---------------------------------------------------------------------
//  Class  Prs3d_ToolTorus
//---------------------------------------------------------------------
/// <summary>
/// Standard presentation algorithm that outputs graphical primitives for torus surface.
/// </summary>
public ref class Prs3d_ToolTorus sealed
    : public RDC::OCC::Prs3d_ToolQuadric
{

#ifdef Include_Prs3d_ToolTorus_h
public:
    Include_Prs3d_ToolTorus_h
#endif

public:
    Prs3d_ToolTorus(::Prs3d_ToolTorus* nativeInstance)
        : RDC::OCC::Prs3d_ToolQuadric( nativeInstance )
    {}

    Prs3d_ToolTorus(::Prs3d_ToolTorus& nativeInstance)
        : RDC::OCC::Prs3d_ToolQuadric( nativeInstance )
    {}

    property ::Prs3d_ToolTorus* NativeInstance
    {
        ::Prs3d_ToolTorus* get()
        {
            return static_cast<::Prs3d_ToolTorus*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the algorithm creating a complete torus.
    /// </summary>
    /// <param name="theMajorRad">
    /// [in] distance from the center of the pipe to the center of the torus
    /// </param>
    /// <param name="theMinorRad">
    /// [in] radius of the pipe
    /// </param>
    /// <param name="theNbSlices">
    /// [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    /// [in] number of stacks within V parameter
    /// </param>
    Prs3d_ToolTorus(double theMajorRad, double theMinorRad, int theNbSlices, int theNbStacks);
    /// <summary>
    /// Initializes the algorithm creating a torus pipe segment.
    /// </summary>
    /// <param name="theMajorRad">
    /// [in] distance from the center of the pipe to the center of the torus
    /// </param>
    /// <param name="theMinorRad">
    /// [in] radius of the pipe
    /// </param>
    /// <param name="theAngle">
    ///    [in] angle to create a torus pipe segment
    /// </param>
    /// <param name="theNbSlices">
    /// [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    /// [in] number of stacks within V parameter
    /// </param>
    Prs3d_ToolTorus(double theMajorRad, double theMinorRad, double theAngle, int theNbSlices, int theNbStacks);
    /// <summary>
    /// Initializes the algorithm creating a torus ring segment.
    /// </summary>
    /// <param name="theMajorRad">
    /// [in] distance from the center of the pipe to the center of the torus
    /// </param>
    /// <param name="theMinorRad">
    /// [in] radius of the pipe
    /// </param>
    /// <param name="theAngle1">
    ///   [in] first  angle to create a torus ring segment
    /// </param>
    /// <param name="theAngle2">
    ///   [in] second angle to create a torus ring segment
    /// </param>
    /// <param name="theNbSlices">
    /// [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    /// [in] number of stacks within V parameter
    /// </param>
    Prs3d_ToolTorus(double theMajorRad, double theMinorRad, double theAngle1, double theAngle2, int theNbSlices, int theNbStacks);
    /// <summary>
    /// Initializes the algorithm creating a torus ring segment.
    /// </summary>
    /// <param name="theMajorRad">
    /// [in] distance from the center of the pipe to the center of the torus
    /// </param>
    /// <param name="theMinorRad">
    /// [in] radius of the pipe
    /// </param>
    /// <param name="theAngle1">
    ///   [in] first  angle to create a torus ring segment
    /// </param>
    /// <param name="theAngle2">
    ///   [in] second angle to create a torus ring segment
    /// </param>
    /// <param name="theAngle">
    ///    [in] angle to create a torus pipe segment
    /// </param>
    /// <param name="theNbSlices">
    /// [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    /// [in] number of stacks within V parameter
    /// </param>
    Prs3d_ToolTorus(double theMajorRad, double theMinorRad, double theAngle1, double theAngle2, double theAngle, int theNbSlices, int theNbStacks);
    /// <summary>
    /// Generate primitives for 3D quadric surface (complete torus).
    /// </summary>
    /// <param name="theMajorRad">
    /// [in] distance from the center of the pipe to the center of the torus
    /// </param>
    /// <param name="theMinorRad">
    /// [in] radius of the pipe
    /// </param>
    /// <param name="theNbSlices">
    /// [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    /// [in] number of stacks within V parameter
    /// </param>
    /// <param name="theTrsf">
    ///     [in] optional transformation to apply
    /// </param>
    /// <returns>
    /// generated triangulation
    /// </returns>
    static RDC::OCC::Graphic3d_ArrayOfTriangles^ Create(double theMajorRad, double theMinorRad, int theNbSlices, int theNbStacks, RDC::OCC::Trsf theTrsf);
    /// <summary>
    /// Generate primitives for 3D quadric surface (torus segment).
    /// </summary>
    /// <param name="theMajorRad">
    /// [in] distance from the center of the pipe to the center of the torus
    /// </param>
    /// <param name="theMinorRad">
    /// [in] radius of the pipe
    /// </param>
    /// <param name="theAngle">
    ///    [in] angle to create a torus pipe segment
    /// </param>
    /// <param name="theNbSlices">
    /// [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    /// [in] number of stacks within V parameter
    /// </param>
    /// <param name="theTrsf">
    ///     [in] optional transformation to apply
    /// </param>
    /// <returns>
    /// generated triangulation
    /// </returns>
    static RDC::OCC::Graphic3d_ArrayOfTriangles^ Create(double theMajorRad, double theMinorRad, double theAngle, int theNbSlices, int theNbStacks, RDC::OCC::Trsf theTrsf);
    /// <summary>
    /// Generate primitives for 3D quadric surface (torus ring segment).
    /// </summary>
    /// <param name="theMajorRad">
    /// [in] distance from the center of the pipe to the center of the torus
    /// </param>
    /// <param name="theMinorRad">
    /// [in] radius of the pipe
    /// </param>
    /// <param name="theAngle1">
    ///   [in] first  angle to create a torus ring segment
    /// </param>
    /// <param name="theAngle2">
    ///   [in] second angle to create a torus ring segment
    /// </param>
    /// <param name="theNbSlices">
    /// [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    /// [in] number of stacks within V parameter
    /// </param>
    /// <param name="theTrsf">
    ///     [in] optional transformation to apply
    /// </param>
    /// <returns>
    /// generated triangulation
    /// </returns>
    static RDC::OCC::Graphic3d_ArrayOfTriangles^ Create(double theMajorRad, double theMinorRad, double theAngle1, double theAngle2, int theNbSlices, int theNbStacks, RDC::OCC::Trsf theTrsf);
    /// <summary>
    /// Generate primitives for 3D quadric surface (segment of the torus ring segment).
    /// </summary>
    /// <param name="theMajorRad">
    /// [in] distance from the center of the pipe to the center of the torus
    /// </param>
    /// <param name="theMinorRad">
    /// [in] radius of the pipe
    /// </param>
    /// <param name="theAngle1">
    ///   [in] first  angle to create a torus ring segment
    /// </param>
    /// <param name="theAngle2">
    ///   [in] second angle to create a torus ring segment
    /// </param>
    /// <param name="theAngle">
    ///    [in] angle to create a torus pipe segment
    /// </param>
    /// <param name="theNbSlices">
    /// [in] number of slices within U parameter
    /// </param>
    /// <param name="theNbStacks">
    /// [in] number of stacks within V parameter
    /// </param>
    /// <param name="theTrsf">
    ///     [in] optional transformation to apply
    /// </param>
    /// <returns>
    /// generated triangulation
    /// </returns>
    static RDC::OCC::Graphic3d_ArrayOfTriangles^ Create(double theMajorRad, double theMinorRad, double theAngle1, double theAngle2, double theAngle, int theNbSlices, int theNbStacks, RDC::OCC::Trsf theTrsf);
}; // class Prs3d_ToolTorus

}; // namespace OCC
}; // namespace RDC

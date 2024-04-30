﻿// Generated wrapper code for package BRepPrimAPI

#pragma once

#include "BRepBuilderAPI.h"

namespace RDC
{
	namespace OCC
	{
#pragma region BRepPrimAPI_MakeBox
		//---------------------------------------------------------------------
		//  Class  BRepPrimAPI_MakeBox
		//---------------------------------------------------------------------
		/// <summary>
		/// Describes functions to build parallelepiped boxes.
		/// A MakeBox object provides a framework for:
		/// -   defining the construction of a box,
		/// -   implementing the construction algorithm, and
		/// -   consulting the result.
		/// Constructs a box such that its sides are parallel to the axes of
		/// -   the global coordinate system, or
		/// -   the local coordinate system Axis. and
		/// -   with a corner at (0, 0, 0) and of size (dx, dy, dz), or
		/// -   with a corner at point P and of size (dx, dy, dz), or
		/// -   with corners at points P1 and P2.
		/// Exceptions
		/// Standard_DomainError if: dx, dy, dz are less than or equal to
		/// Precision::Confusion(), or
		/// -   the vector joining the points P1 and P2 has a
		/// component projected onto the global coordinate
		/// system less than or equal to Precision::Confusion().
		/// In these cases, the box would be flat.
		/// </summary>
		public ref class BRepPrimAPI_MakeBox sealed
			: public RDC::OCC::BRepBuilderAPI_MakeShape
		{

#ifdef Include_BRepPrimAPI_MakeBox_h
		public:
			Include_BRepPrimAPI_MakeBox_h
#endif

		public:
			BRepPrimAPI_MakeBox(::BRepPrimAPI_MakeBox* nativeInstance)
				: RDC::OCC::BRepBuilderAPI_MakeShape(nativeInstance)
			{}

			BRepPrimAPI_MakeBox(::BRepPrimAPI_MakeBox& nativeInstance)
				: RDC::OCC::BRepBuilderAPI_MakeShape(nativeInstance)
			{}

			property ::BRepPrimAPI_MakeBox* NativeInstance
			{
				::BRepPrimAPI_MakeBox* get()
				{
					return static_cast<::BRepPrimAPI_MakeBox*>(_NativeInstance);
				}
			}

		public:
			/// <summary>
			/// Default constructor
			/// </summary>
			BRepPrimAPI_MakeBox();
			/// <summary>
			/// Make a box with a corner at 0,0,0 and the other dx,dy,dz
			/// </summary>
			BRepPrimAPI_MakeBox(double dx, double dy, double dz);
			/// <summary>
			/// Make a box with a corner at P and size dx, dy, dz.
			/// </summary>
			BRepPrimAPI_MakeBox(RDC::OCC::Pnt P, double dx, double dy, double dz);
			/// <summary>
			/// Make a box with corners P1,P2.
			/// </summary>
			BRepPrimAPI_MakeBox(RDC::OCC::Pnt P1, RDC::OCC::Pnt P2);
			/// <summary>
			/// Make a box with Ax2 (the left corner and the axis) and size dx, dy, dz.
			/// </summary>
			BRepPrimAPI_MakeBox(RDC::OCC::Ax2 Axes, double dx, double dy, double dz);
			/// <summary>
			/// Init a box with a corner at 0,0,0 and the other theDX, theDY, theDZ
			/// </summary>
			void Init(double theDX, double theDY, double theDZ);
			/// <summary>
			/// Init a box with a corner at thePnt and size theDX, theDY, theDZ.
			/// </summary>
			void Init(RDC::OCC::Pnt thePnt, double theDX, double theDY, double theDZ);
			/// <summary>
			/// Init a box with corners thePnt1, thePnt2.
			/// </summary>
			void Init(RDC::OCC::Pnt thePnt1, RDC::OCC::Pnt thePnt2);
			/// <summary>
			/// Init a box with Ax2 (the left corner and the theAxes) and size theDX, theDY, theDZ.
			/// </summary>
			void Init(RDC::OCC::Ax2 theAxes, double theDX, double theDY, double theDZ);
			/* Method skipped due to unknown mapping: BRepPrim_Wedge Wedge() */
			/// <summary>
			/// Stores the solid in myShape.
			/// </summary>
			void Build(RDC::OCC::Message_ProgressRange^ theRange);
			/// <summary>
			/// Stores the solid in myShape.
			/// </summary>
			void Build();
			/// <summary>
			/// Returns the constructed box as a shell.
			/// </summary>
			RDC::OCC::TopoDS_Shell^ Shell();
			/// <summary>
			/// Returns the constructed box as a solid.
			/// </summary>
			RDC::OCC::TopoDS_Solid^ Solid();
			/// <summary>
			/// Returns ZMin face
			/// </summary>
			RDC::OCC::TopoDS_Face^ BottomFace();
			/// <summary>
			/// Returns XMin face
			/// </summary>
			RDC::OCC::TopoDS_Face^ BackFace();
			/// <summary>
			/// Returns XMax face
			/// </summary>
			RDC::OCC::TopoDS_Face^ FrontFace();
			/// <summary>
			/// Returns YMin face
			/// </summary>
			RDC::OCC::TopoDS_Face^ LeftFace();
			/// <summary>
			/// Returns YMax face
			/// </summary>
			RDC::OCC::TopoDS_Face^ RightFace();
			/// <summary>
			/// Returns ZMax face
			/// </summary>
			RDC::OCC::TopoDS_Face^ TopFace();
		}; // class BRepPrimAPI_MakeBox
#pragma endregion
#pragma region BRepPrimAPI_MakeOneAxis
		//---------------------------------------------------------------------
		//  Class  BRepPrimAPI_MakeOneAxis
		//---------------------------------------------------------------------
		/// <summary>
		/// The abstract class MakeOneAxis is the root class of
		/// algorithms used to construct rotational primitives.
		/// </summary>
		public ref class BRepPrimAPI_MakeOneAxis
			: public RDC::OCC::BRepBuilderAPI_MakeShape
		{

#ifdef Include_BRepPrimAPI_MakeOneAxis_h
		public:
			Include_BRepPrimAPI_MakeOneAxis_h
#endif

		protected:
			BRepPrimAPI_MakeOneAxis(InitMode init)
				: RDC::OCC::BRepBuilderAPI_MakeShape(init)
			{}

		public:
			BRepPrimAPI_MakeOneAxis(::BRepPrimAPI_MakeOneAxis* nativeInstance)
				: RDC::OCC::BRepBuilderAPI_MakeShape(nativeInstance)
			{}

			BRepPrimAPI_MakeOneAxis(::BRepPrimAPI_MakeOneAxis& nativeInstance)
				: RDC::OCC::BRepBuilderAPI_MakeShape(nativeInstance)
			{}

			property ::BRepPrimAPI_MakeOneAxis* NativeInstance
			{
				::BRepPrimAPI_MakeOneAxis* get()
				{
					return static_cast<::BRepPrimAPI_MakeOneAxis*>(_NativeInstance);
				}
			}

		public:
			BRepPrimAPI_MakeOneAxis();
			/// <summary>
			/// The inherited commands should provide the algorithm.
			/// Returned as a pointer.
			/// </summary>
			System::IntPtr OneAxis();
			/// <summary>
			/// Stores the solid in myShape.
			/// </summary>
			void Build(RDC::OCC::Message_ProgressRange^ theRange);
			/// <summary>
			/// Stores the solid in myShape.
			/// </summary>
			void Build();
			/// <summary>
			/// Returns the lateral face of the rotational primitive.
			/// </summary>
			RDC::OCC::TopoDS_Face^ Face();
			/// <summary>
			/// Returns the constructed rotational primitive as a shell.
			/// </summary>
			RDC::OCC::TopoDS_Shell^ Shell();
			/// <summary>
			/// Returns the constructed rotational primitive as a solid.
			/// </summary>
			RDC::OCC::TopoDS_Solid^ Solid();
		}; // class BRepPrimAPI_MakeOneAxis

#pragma endregion
#pragma region BRepPrimAPI_MakeCone
		//---------------------------------------------------------------------
		//  Class  BRepPrimAPI_MakeCone
		//---------------------------------------------------------------------
		/// <summary>
		/// Describes functions to build cones or portions of cones.
		/// A MakeCone object provides a framework for:
		/// -   defining the construction of a cone,
		/// -   implementing the construction algorithm, and
		/// -   consulting the result.
		/// </summary>
		public ref class BRepPrimAPI_MakeCone sealed
			: public RDC::OCC::BRepPrimAPI_MakeOneAxis
		{

#ifdef Include_BRepPrimAPI_MakeCone_h
		public:
			Include_BRepPrimAPI_MakeCone_h
#endif

		public:
			BRepPrimAPI_MakeCone(::BRepPrimAPI_MakeCone* nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeOneAxis(nativeInstance)
			{}

			BRepPrimAPI_MakeCone(::BRepPrimAPI_MakeCone& nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeOneAxis(nativeInstance)
			{}

			property ::BRepPrimAPI_MakeCone* NativeInstance
			{
				::BRepPrimAPI_MakeCone* get()
				{
					return static_cast<::BRepPrimAPI_MakeCone*>(_NativeInstance);
				}
			}

		public:
			/// <summary>
			/// Make a cone.
			/// </summary>
			/// <param name="R1">
			/// [in] cone bottom radius, may be null (z = 0)
			/// </param>
			/// <param name="R2">
			/// [in] cone top radius, may be null (z = H)
			/// </param>
			/// <param name="H">
			///  [in] cone height
			/// </param>
			BRepPrimAPI_MakeCone(double R1, double R2, double H);
			/// <summary>
			/// Make a cone.
			/// </summary>
			/// <param name="R1">
			///    [in] cone bottom radius, may be null (z = 0)
			/// </param>
			/// <param name="R2">
			///    [in] cone top radius, may be null (z = H)
			/// </param>
			/// <param name="H">
			///     [in] cone height
			/// </param>
			/// <param name="angle">
			/// [in] angle to create a part cone
			/// </param>
			BRepPrimAPI_MakeCone(double R1, double R2, double H, double angle);
			/// <summary>
			/// Make a cone.
			/// </summary>
			/// <param name="axes">
			/// [in] coordinate system for the construction of the cone
			/// </param>
			/// <param name="R1">
			///   [in] cone bottom radius, may be null (z = 0)
			/// </param>
			/// <param name="R2">
			///   [in] cone top radius, may be null (z = H)
			/// </param>
			/// <param name="H">
			///    [in] cone height
			/// </param>
			BRepPrimAPI_MakeCone(RDC::OCC::Ax2 Axes, double R1, double R2, double H);
			/// <summary>
			/// Make a cone of height H radius R1 in the plane z =
			/// 0, R2 in the plane Z = H. R1 and R2 may be null.
			/// Take a section of <angle>
			/// Constructs a cone, or a portion of a cone, of height H,
			/// and radius R1 in the plane z = 0 and R2 in the plane
			/// z = H. The result is a sharp cone if R1 or R2 is equal to 0.
			/// The cone is constructed about the "Z Axis" of either:
			/// -   the global coordinate system, or
			/// -   the local coordinate system Axes.
			/// It is limited in these coordinate systems as follows:
			/// -   in the v parametric direction (the Z coordinate), by
			/// the two parameter values 0 and H,
			/// -   and in the u parametric direction (defined by the
			/// angle of rotation around the Z axis), in the case of a
			/// portion of a cone, by the two parameter values 0 and
			/// angle. Angle is given in radians.
			/// The resulting shape is composed of:
			/// -   a lateral conical face
			/// -   two planar faces in the planes z = 0 and z = H,
			/// or only one planar face in one of these two planes if a
			/// radius value is null (in the case of a complete cone,
			/// these faces are circles), and
			/// -   and in the case of a portion of a cone, two planar
			/// faces to close the shape. (either two parallelograms or
			/// two triangles, in the planes u = 0 and u = angle).
			/// Exceptions
			/// Standard_DomainError if:
			/// -   H is less than or equal to Precision::Confusion(), or
			/// -   the half-angle at the apex of the cone, defined by
			/// R1, R2 and H, is less than Precision::Confusion()/H, or greater than
			/// (Pi/2)-Precision::Confusion()/H.f
			/// </summary>
			BRepPrimAPI_MakeCone(RDC::OCC::Ax2 Axes, double R1, double R2, double H, double angle);
			/// <summary>
			/// Returns the algorithm.
			/// </summary>
			System::IntPtr OneAxis();
			/* Method skipped due to unknown mapping: BRepPrim_Cone Cone() */
		}; // class BRepPrimAPI_MakeCone
#pragma endregion
#pragma region BRepPrimAPI_MakeCylinder
		//---------------------------------------------------------------------
		//  Class  BRepPrimAPI_MakeCylinder
		//---------------------------------------------------------------------
		/// <summary>
		/// Describes functions to build cylinders or portions of  cylinders.
		/// A MakeCylinder object provides a framework for:
		/// -   defining the construction of a cylinder,
		/// -   implementing the construction algorithm, and
		/// -   consulting the result.
		/// </summary>
		public ref class BRepPrimAPI_MakeCylinder sealed
			: public RDC::OCC::BRepPrimAPI_MakeOneAxis
		{

#ifdef Include_BRepPrimAPI_MakeCylinder_h
		public:
			Include_BRepPrimAPI_MakeCylinder_h
#endif

		public:
			BRepPrimAPI_MakeCylinder(::BRepPrimAPI_MakeCylinder* nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeOneAxis(nativeInstance)
			{}

			BRepPrimAPI_MakeCylinder(::BRepPrimAPI_MakeCylinder& nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeOneAxis(nativeInstance)
			{}

			property ::BRepPrimAPI_MakeCylinder* NativeInstance
			{
				::BRepPrimAPI_MakeCylinder* get()
				{
					return static_cast<::BRepPrimAPI_MakeCylinder*>(_NativeInstance);
				}
			}

		public:
			/// <summary>
			/// Make a cylinder.
			/// </summary>
			/// <param name="R">
			/// [in] cylinder radius
			/// </param>
			/// <param name="H">
			/// [in] cylinder height
			/// </param>
			BRepPrimAPI_MakeCylinder(double R, double H);
			/// <summary>
			/// Make a cylinder (part cylinder).
			/// </summary>
			/// <param name="R">
			///     [in] cylinder radius
			/// </param>
			/// <param name="H">
			///     [in] cylinder height
			/// </param>
			/// <param name="Angle">
			/// [in] defines the missing portion of the cylinder
			/// </param>
			BRepPrimAPI_MakeCylinder(double R, double H, double Angle);
			/// <summary>
			/// Make a cylinder of radius R and length H.
			/// </summary>
			/// <param name="Axes">
			/// [in] coordinate system for the construction of the cylinder
			/// </param>
			/// <param name="R">
			///    [in] cylinder radius
			/// </param>
			/// <param name="H">
			///    [in] cylinder height
			/// </param>
			BRepPrimAPI_MakeCylinder(RDC::OCC::Ax2 Axes, double R, double H);
			/// <summary>
			/// Make a cylinder   of  radius R  and  length H with
			/// angle  H.
			/// Constructs
			/// -   a cylinder of radius R and height H, or
			/// -   a portion of cylinder of radius R and height H, and of
			/// the angle Angle defining the missing portion of the cylinder.
			/// The cylinder is constructed about the "Z Axis" of either:
			/// -   the global coordinate system, or
			/// -   the local coordinate system Axes.
			/// It is limited in this coordinate system as follows:
			/// -   in the v parametric direction (the Z axis), by the two
			/// parameter values 0 and H,
			/// -   and in the u parametric direction (the rotation angle
			/// around the Z Axis), in the case of a portion of a
			/// cylinder, by the two parameter values 0 and Angle.
			/// Angle is given in radians.
			/// The resulting shape is composed of:
			/// -   a lateral cylindrical face,
			/// -   two planar faces in the planes z = 0 and z = H
			/// (in the case of a complete cylinder, these faces are circles), and
			/// -   in case of a portion of a cylinder, two additional
			/// planar faces to close the shape.(two rectangles in the
			/// planes u = 0 and u = Angle).
			/// Exceptions Standard_DomainError if:
			/// -   R is less than or equal to Precision::Confusion(), or
			/// -   H is less than or equal to Precision::Confusion().
			/// </summary>
			BRepPrimAPI_MakeCylinder(RDC::OCC::Ax2 Axes, double R, double H, double Angle);
			/// <summary>
			/// Returns the algorithm.
			/// </summary>
			System::IntPtr OneAxis();
			/* Method skipped due to unknown mapping: BRepPrim_Cylinder Cylinder() */
		}; // class BRepPrimAPI_MakeCylinder
#pragma endregion
#pragma region BRepPrimAPI_MakeHalfSpace
		//---------------------------------------------------------------------
		//  Class  BRepPrimAPI_MakeHalfSpace
		//---------------------------------------------------------------------
		/// <summary>
		/// Describes functions to build half-spaces.
		/// A half-space is an infinite solid, limited by a surface. It
		/// is built from a face or a shell, which bounds it, and with
		/// a reference point, which specifies the side of the
		/// surface where the matter of the half-space is located.
		/// A half-space is a tool commonly used in topological
		/// operations to cut another shape.
		/// A MakeHalfSpace object provides a framework for:
		/// -   defining and implementing the construction of a half-space, and
		/// -   consulting the result.
		/// </summary>
		public ref class BRepPrimAPI_MakeHalfSpace sealed
			: public RDC::OCC::BRepBuilderAPI_MakeShape
		{

#ifdef Include_BRepPrimAPI_MakeHalfSpace_h
		public:
			Include_BRepPrimAPI_MakeHalfSpace_h
#endif

		public:
			BRepPrimAPI_MakeHalfSpace(::BRepPrimAPI_MakeHalfSpace* nativeInstance)
				: RDC::OCC::BRepBuilderAPI_MakeShape(nativeInstance)
			{}

			BRepPrimAPI_MakeHalfSpace(::BRepPrimAPI_MakeHalfSpace& nativeInstance)
				: RDC::OCC::BRepBuilderAPI_MakeShape(nativeInstance)
			{}

			property ::BRepPrimAPI_MakeHalfSpace* NativeInstance
			{
				::BRepPrimAPI_MakeHalfSpace* get()
				{
					return static_cast<::BRepPrimAPI_MakeHalfSpace*>(_NativeInstance);
				}
			}

		public:
			/// <summary>
			/// Make a HalfSpace defined with a Face and a Point.
			/// </summary>
			BRepPrimAPI_MakeHalfSpace(RDC::OCC::TopoDS_Face^ Face, RDC::OCC::Pnt RefPnt);
			/// <summary>
			/// Make a HalfSpace defined with a Shell and a Point.
			/// </summary>
			BRepPrimAPI_MakeHalfSpace(RDC::OCC::TopoDS_Shell^ Shell, RDC::OCC::Pnt RefPnt);
			/// <summary>
			/// Returns the constructed half-space as a solid.
			/// </summary>
			RDC::OCC::TopoDS_Solid^ Solid();
		}; // class BRepPrimAPI_MakeHalfSpace
#pragma endregion
#pragma region BRepPrimAPI_MakeSweep
		//---------------------------------------------------------------------
		//  Class  BRepPrimAPI_MakeSweep
		//---------------------------------------------------------------------
		/// <summary>
		/// The abstract class MakeSweep is
		/// the root class of swept primitives.
		/// Sweeps are objects you obtain by sweeping a profile along a path.
		/// The profile can be any topology and the path is usually a curve or
		/// a wire. The profile generates objects according to the following rules:
		/// -      Vertices generate Edges
		/// -      Edges generate Faces.
		/// -      Wires generate Shells.
		/// -      Faces generate Solids.
		/// -      Shells generate Composite  Solids.
		/// You are not allowed to sweep Solids and Composite Solids.
		/// Two kinds of sweeps are implemented in the BRepPrimAPI package:
		/// -      The linear sweep called a   Prism
		/// -      The rotational sweep    called a Revol
		/// Swept constructions along complex profiles such as BSpline curves
		/// are also available in the BRepOffsetAPI package..
		/// </summary>
		public ref class BRepPrimAPI_MakeSweep
			: public RDC::OCC::BRepBuilderAPI_MakeShape
		{

#ifdef Include_BRepPrimAPI_MakeSweep_h
		public:
			Include_BRepPrimAPI_MakeSweep_h
#endif

		protected:
			BRepPrimAPI_MakeSweep(InitMode init)
				: RDC::OCC::BRepBuilderAPI_MakeShape(init)
			{}

		public:
			BRepPrimAPI_MakeSweep(::BRepPrimAPI_MakeSweep* nativeInstance)
				: RDC::OCC::BRepBuilderAPI_MakeShape(nativeInstance)
			{}

			BRepPrimAPI_MakeSweep(::BRepPrimAPI_MakeSweep& nativeInstance)
				: RDC::OCC::BRepBuilderAPI_MakeShape(nativeInstance)
			{}

			property ::BRepPrimAPI_MakeSweep* NativeInstance
			{
				::BRepPrimAPI_MakeSweep* get()
				{
					return static_cast<::BRepPrimAPI_MakeSweep*>(_NativeInstance);
				}
			}

		public:
			BRepPrimAPI_MakeSweep();
			/// <summary>
			/// Returns the  TopoDS  Shape of the bottom of the sweep.
			/// </summary>
			RDC::OCC::TopoDS_Shape^ FirstShape();
			/// <summary>
			/// Returns the TopoDS Shape of the top of the sweep.
			/// </summary>
			RDC::OCC::TopoDS_Shape^ LastShape();
		}; // class BRepPrimAPI_MakeSweep
#pragma endregion
#pragma region BRepPrimAPI_MakePrism
		//---------------------------------------------------------------------
		//  Class  BRepPrimAPI_MakePrism
		//---------------------------------------------------------------------
		/// <summary>
		/// Describes functions to build linear swept topologies, called prisms.
		/// A prism is defined by:
		/// -   a basis shape, which is swept, and
		/// -   a sweeping direction, which is:
		/// -   a vector for finite prisms, or
		/// -   a direction for infinite or semi-infinite prisms.
		/// The basis shape must not contain any solids.
		/// The profile generates objects according to the following rules:
		/// -   Vertices generate Edges
		/// -   Edges generate Faces.
		/// -   Wires generate Shells.
		/// -   Faces generate Solids.
		/// -   Shells generate Composite Solids
		/// A MakePrism object provides a framework for:
		/// -   defining the construction of a prism,
		/// -   implementing the construction algorithm, and
		/// -   consulting the result.
		/// </summary>
		public ref class BRepPrimAPI_MakePrism sealed
			: public RDC::OCC::BRepPrimAPI_MakeSweep
		{

#ifdef Include_BRepPrimAPI_MakePrism_h
		public:
			Include_BRepPrimAPI_MakePrism_h
#endif

		public:
			BRepPrimAPI_MakePrism(::BRepPrimAPI_MakePrism* nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeSweep(nativeInstance)
			{}

			BRepPrimAPI_MakePrism(::BRepPrimAPI_MakePrism& nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeSweep(nativeInstance)
			{}

			property ::BRepPrimAPI_MakePrism* NativeInstance
			{
				::BRepPrimAPI_MakePrism* get()
				{
					return static_cast<::BRepPrimAPI_MakePrism*>(_NativeInstance);
				}
			}

		public:
			/// <summary>
			/// Builds the prism of base S and vector V. If C is true,
			/// S is copied. If Canonize is true then generated surfaces
			/// are attempted to be canonized in simple types
			/// </summary>
			BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Vec V, bool Copy, bool Canonize);
			/// <summary>
			/// Builds the prism of base S and vector V. If C is true,
			/// S is copied. If Canonize is true then generated surfaces
			/// are attempted to be canonized in simple types
			/// </summary>
			BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Vec V, bool Copy);
			/// <summary>
			/// Builds the prism of base S and vector V. If C is true,
			/// S is copied. If Canonize is true then generated surfaces
			/// are attempted to be canonized in simple types
			/// </summary>
			BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Vec V);
			/// <summary>
			/// Builds a semi-infinite or an infinite prism of base S.
			/// If Inf is true the prism  is infinite, if Inf is false
			/// the prism is semi-infinite (in the direction D).  If C
			/// is true S is copied (for semi-infinite prisms).
			/// If Canonize is true then generated surfaces
			/// are attempted to be canonized in simple types
			/// </summary>
			BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Dir D, bool Inf, bool Copy, bool Canonize);
			/// <summary>
			/// Builds a semi-infinite or an infinite prism of base S.
			/// If Inf is true the prism  is infinite, if Inf is false
			/// the prism is semi-infinite (in the direction D).  If C
			/// is true S is copied (for semi-infinite prisms).
			/// If Canonize is true then generated surfaces
			/// are attempted to be canonized in simple types
			/// </summary>
			BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Dir D, bool Inf, bool Copy);
			/// <summary>
			/// Builds a semi-infinite or an infinite prism of base S.
			/// If Inf is true the prism  is infinite, if Inf is false
			/// the prism is semi-infinite (in the direction D).  If C
			/// is true S is copied (for semi-infinite prisms).
			/// If Canonize is true then generated surfaces
			/// are attempted to be canonized in simple types
			/// </summary>
			BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Dir D, bool Inf);
			/// <summary>
			/// Builds a semi-infinite or an infinite prism of base S.
			/// If Inf is true the prism  is infinite, if Inf is false
			/// the prism is semi-infinite (in the direction D).  If C
			/// is true S is copied (for semi-infinite prisms).
			/// If Canonize is true then generated surfaces
			/// are attempted to be canonized in simple types
			/// </summary>
			BRepPrimAPI_MakePrism(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Dir D);
			/* Method skipped due to unknown mapping: BRepSweep_Prism Prism() */
			/// <summary>
			/// Builds the resulting shape (redefined from MakeShape).
			/// </summary>
			void Build(RDC::OCC::Message_ProgressRange^ theRange);
			/// <summary>
			/// Builds the resulting shape (redefined from MakeShape).
			/// </summary>
			void Build();
			/// <summary>
			/// Returns the  TopoDS  Shape of the bottom of the prism.
			/// </summary>
			RDC::OCC::TopoDS_Shape^ FirstShape();
			/// <summary>
			/// Returns the TopoDS Shape of the top of the prism.
			/// In the case of a finite prism, FirstShape returns the
			/// basis of the prism, in other words, S if Copy is false;
			/// otherwise, the copy of S belonging to the prism.
			/// LastShape returns the copy of S translated by V at the
			/// time of construction.
			/// </summary>
			RDC::OCC::TopoDS_Shape^ LastShape();
			/// <summary>
			/// Returns ListOfShape from TopTools.
			/// </summary>
			RDC::OCC::TopTools_ListOfShape^ Generated(RDC::OCC::TopoDS_Shape^ S);
			/// <summary>
			/// Returns true if the shape S has been deleted.
			/// </summary>
			bool IsDeleted(RDC::OCC::TopoDS_Shape^ S);
			/// <summary>
			/// Returns the TopoDS Shape of the bottom  of the  prism.
			/// generated  with  theShape (subShape of the  generating shape).
			/// </summary>
			RDC::OCC::TopoDS_Shape^ FirstShape(RDC::OCC::TopoDS_Shape^ theShape);
			/// <summary>
			/// Returns the  TopoDS  Shape of the top  of  the  prism.
			/// generated  with  theShape (subShape of the  generating shape).
			/// </summary>
			RDC::OCC::TopoDS_Shape^ LastShape(RDC::OCC::TopoDS_Shape^ theShape);
		}; // class BRepPrimAPI_MakePrism
#pragma endregion
#pragma region BRepPrimAPI_MakeRevol
		//---------------------------------------------------------------------
		//  Class  BRepPrimAPI_MakeRevol
		//---------------------------------------------------------------------
		/// <summary>
		/// Class to make revolved sweep topologies.
		/// 
		/// a revolved sweep is defined by :
		/// 
		/// * A basis topology which is swept.
		/// 
		/// The   basis topology  must   not  contain solids
		/// (neither composite solids.).
		/// 
		/// The basis topology  may be copied  or  shared in
		/// the result.
		/// 
		/// * A rotation axis and angle :
		/// 
		/// - The axis is an Ax1 from gp.
		/// 
		/// - The angle is in [0, 2*Pi].
		/// 
		/// - The angle default value is 2*Pi.
		/// 
		/// The result is a topology with a higher dimension :
		/// 
		/// - Vertex -> Edge.
		/// - Edge   -> Face.
		/// - Wire   -> Shell.
		/// - Face   -> Solid.
		/// - Shell  -> CompSolid.
		/// 
		/// Sweeping a Compound sweeps  the elements  of the
		/// compound  and creates    a  compound with    the
		/// results.
		/// </summary>
		public ref class BRepPrimAPI_MakeRevol sealed
			: public RDC::OCC::BRepPrimAPI_MakeSweep
		{

#ifdef Include_BRepPrimAPI_MakeRevol_h
		public:
			Include_BRepPrimAPI_MakeRevol_h
#endif

		public:
			BRepPrimAPI_MakeRevol(::BRepPrimAPI_MakeRevol* nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeSweep(nativeInstance)
			{}

			BRepPrimAPI_MakeRevol(::BRepPrimAPI_MakeRevol& nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeSweep(nativeInstance)
			{}

			property ::BRepPrimAPI_MakeRevol* NativeInstance
			{
				::BRepPrimAPI_MakeRevol* get()
				{
					return static_cast<::BRepPrimAPI_MakeRevol*>(_NativeInstance);
				}
			}

		public:
			/// <summary>
			/// Builds the Revol of base S, axis  A and angle  D. If C
			/// is true, S is copied.
			/// </summary>
			BRepPrimAPI_MakeRevol(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Ax1 A, double D, bool Copy);
			/// <summary>
			/// Builds the Revol of base S, axis  A and angle  D. If C
			/// is true, S is copied.
			/// </summary>
			BRepPrimAPI_MakeRevol(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Ax1 A, double D);
			/// <summary>
			/// Builds the Revol of base S, axis  A and angle 2*Pi. If
			/// C is true, S is copied.
			/// </summary>
			BRepPrimAPI_MakeRevol(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Ax1 A, bool Copy);
			/// <summary>
			/// Builds the Revol of base S, axis  A and angle 2*Pi. If
			/// C is true, S is copied.
			/// </summary>
			BRepPrimAPI_MakeRevol(RDC::OCC::TopoDS_Shape^ S, RDC::OCC::Ax1 A);
			/* Method skipped due to unknown mapping: BRepSweep_Revol Revol() */
			/// <summary>
			/// Builds the resulting shape (redefined from MakeShape).
			/// </summary>
			void Build(RDC::OCC::Message_ProgressRange^ theRange);
			/// <summary>
			/// Builds the resulting shape (redefined from MakeShape).
			/// </summary>
			void Build();
			/// <summary>
			/// Returns the first shape of the revol  (coinciding with
			/// the generating shape).
			/// </summary>
			RDC::OCC::TopoDS_Shape^ FirstShape();
			/// <summary>
			/// Returns the TopoDS Shape of the end of the revol.
			/// </summary>
			RDC::OCC::TopoDS_Shape^ LastShape();
			/// <summary>
			/// Returns list of shape generated from shape S
			/// Warning: shape S must be shape of type VERTEX, EDGE, FACE, SOLID.
			/// For shapes of other types method always returns empty list
			/// </summary>
			RDC::OCC::TopTools_ListOfShape^ Generated(RDC::OCC::TopoDS_Shape^ S);
			/// <summary>
			/// Returns true if the shape S has been deleted.
			/// </summary>
			bool IsDeleted(RDC::OCC::TopoDS_Shape^ S);
			/// <summary>
			/// Returns the TopoDS Shape of the beginning of the revolution,
			/// generated with theShape  (subShape of the generating shape).
			/// </summary>
			RDC::OCC::TopoDS_Shape^ FirstShape(RDC::OCC::TopoDS_Shape^ theShape);
			/// <summary>
			/// Returns the TopoDS Shape of the end of the revolution,
			/// generated with  theShape (subShape of the  generating shape).
			/// </summary>
			RDC::OCC::TopoDS_Shape^ LastShape(RDC::OCC::TopoDS_Shape^ theShape);
			/// <summary>
			/// Check if there are degenerated edges in the result.
			/// </summary>
			bool HasDegenerated();
			/// <summary>
			/// Returns the list of degenerated edges
			/// </summary>
			RDC::OCC::TopTools_ListOfShape^ Degenerated();
		}; // class BRepPrimAPI_MakeRevol
#pragma endregion
#pragma region BRepPrimAPI_MakeRevolution
		//---------------------------------------------------------------------
		//  Class  BRepPrimAPI_MakeRevolution
		//---------------------------------------------------------------------
		/// <summary>
		/// Describes functions to build revolved shapes.
		/// A MakeRevolution object provides a framework for:
		/// -   defining the construction of a revolved shape,
		/// -   implementing the construction algorithm, and
		/// -   consulting the result.
		/// </summary>
		public ref class BRepPrimAPI_MakeRevolution sealed
			: public RDC::OCC::BRepPrimAPI_MakeOneAxis
		{

#ifdef Include_BRepPrimAPI_MakeRevolution_h
		public:
			Include_BRepPrimAPI_MakeRevolution_h
#endif

		public:
			BRepPrimAPI_MakeRevolution(::BRepPrimAPI_MakeRevolution* nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeOneAxis(nativeInstance)
			{}

			BRepPrimAPI_MakeRevolution(::BRepPrimAPI_MakeRevolution& nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeOneAxis(nativeInstance)
			{}

			property ::BRepPrimAPI_MakeRevolution* NativeInstance
			{
				::BRepPrimAPI_MakeRevolution* get()
				{
					return static_cast<::BRepPrimAPI_MakeRevolution*>(_NativeInstance);
				}
			}

		public:
			/// <summary>
			/// Make a revolution body by rotating a curve around Z.
			/// </summary>
			BRepPrimAPI_MakeRevolution(RDC::OCC::Geom_Curve^ Meridian);
			/// <summary>
			/// Make a revolution body by rotating a curve around Z.
			/// </summary>
			BRepPrimAPI_MakeRevolution(RDC::OCC::Geom_Curve^ Meridian, double angle);
			/// <summary>
			/// Make a revolution body by rotating a curve around Z.
			/// </summary>
			BRepPrimAPI_MakeRevolution(RDC::OCC::Geom_Curve^ Meridian, double VMin, double VMax);
			/// <summary>
			/// Make a revolution body by rotating a curve around Z.
			/// </summary>
			BRepPrimAPI_MakeRevolution(RDC::OCC::Geom_Curve^ Meridian, double VMin, double VMax, double angle);
			/// <summary>
			/// Make a revolution body by rotating a curve around Z.
			/// </summary>
			BRepPrimAPI_MakeRevolution(RDC::OCC::Ax2 Axes, RDC::OCC::Geom_Curve^ Meridian);
			/// <summary>
			/// Make a revolution body by rotating a curve around Z.
			/// </summary>
			BRepPrimAPI_MakeRevolution(RDC::OCC::Ax2 Axes, RDC::OCC::Geom_Curve^ Meridian, double angle);
			/// <summary>
			/// Make a revolution body by rotating a curve around Z.
			/// </summary>
			BRepPrimAPI_MakeRevolution(RDC::OCC::Ax2 Axes, RDC::OCC::Geom_Curve^ Meridian, double VMin, double VMax);
			/// <summary>
			/// Make a revolution body by rotating a curve around Z.
			/// For all algorithms the resulting shape is composed of
			/// -   a lateral revolved face,
			/// -   two planar faces in planes parallel to the plane z =
			/// 0, and passing by the extremities of the revolved
			/// portion of Meridian, if these points are not on the Z
			/// axis (in case of a complete revolved shape, these faces are circles),
			/// -   and in the case of a portion of a revolved shape, two
			/// planar faces to close the shape (in the planes u = 0 and u = angle).
			/// </summary>
			BRepPrimAPI_MakeRevolution(RDC::OCC::Ax2 Axes, RDC::OCC::Geom_Curve^ Meridian, double VMin, double VMax, double angle);
			/// <summary>
			/// Returns the algorithm.
			/// </summary>
			System::IntPtr OneAxis();
			/* Method skipped due to unknown mapping: BRepPrim_Revolution Revolution() */
		}; // class BRepPrimAPI_MakeRevolution
#pragma endregion
#pragma region BRepPrimAPI_MakeSphere
		//---------------------------------------------------------------------
		//  Class  BRepPrimAPI_MakeSphere
		//---------------------------------------------------------------------
		/// <summary>
		/// Describes functions to build spheres or portions of spheres.
		/// A MakeSphere object provides a framework for:
		/// -   defining the construction of a sphere,
		/// -   implementing the construction algorithm, and
		/// -   consulting the result.
		/// </summary>
		public ref class BRepPrimAPI_MakeSphere sealed
			: public RDC::OCC::BRepPrimAPI_MakeOneAxis
		{

#ifdef Include_BRepPrimAPI_MakeSphere_h
		public:
			Include_BRepPrimAPI_MakeSphere_h
#endif

		public:
			BRepPrimAPI_MakeSphere(::BRepPrimAPI_MakeSphere* nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeOneAxis(nativeInstance)
			{}

			BRepPrimAPI_MakeSphere(::BRepPrimAPI_MakeSphere& nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeOneAxis(nativeInstance)
			{}

			property ::BRepPrimAPI_MakeSphere* NativeInstance
			{
				::BRepPrimAPI_MakeSphere* get()
				{
					return static_cast<::BRepPrimAPI_MakeSphere*>(_NativeInstance);
				}
			}

		public:
			/// <summary>
			/// Make a sphere.
			/// </summary>
			/// <param name="R">
			/// [in] sphere radius
			/// </param>
			BRepPrimAPI_MakeSphere(double R);
			/// <summary>
			/// Make a sphere (spherical wedge).
			/// </summary>
			/// <param name="R">
			///     [in] sphere radius
			/// </param>
			/// <param name="angle">
			/// [in] angle between the radii lying within the bounding semidisks
			/// </param>
			BRepPrimAPI_MakeSphere(double R, double angle);
			/// <summary>
			/// Make a sphere (spherical segment).
			/// </summary>
			/// <param name="R">
			/// [in] sphere radius
			/// </param>
			/// <param name="angle1">
			/// [in] first angle defining a spherical segment
			/// </param>
			/// <param name="angle2">
			/// [in] second angle defining a spherical segment
			/// </param>
			BRepPrimAPI_MakeSphere(double R, double angle1, double angle2);
			/// <summary>
			/// Make a sphere (spherical segment).
			/// </summary>
			/// <param name="R">
			///      [in] sphere radius
			/// </param>
			/// <param name="angle1">
			/// [in] first angle defining a spherical segment
			/// </param>
			/// <param name="angle2">
			/// [in] second angle defining a spherical segment
			/// </param>
			/// <param name="angle3">
			/// [in] angle between the radii lying within the bounding semidisks
			/// </param>
			BRepPrimAPI_MakeSphere(double R, double angle1, double angle2, double angle3);
			/// <summary>
			/// Make a sphere.
			/// </summary>
			/// <param name="Center">
			/// [in] sphere center coordinates
			/// </param>
			/// <param name="R">
			///      [in] sphere radius
			/// </param>
			BRepPrimAPI_MakeSphere(RDC::OCC::Pnt Center, double R);
			/// <summary>
			/// Make a sphere (spherical wedge).
			/// </summary>
			/// <param name="Center">
			/// [in] sphere center coordinates
			/// </param>
			/// <param name="R">
			///      [in] sphere radius
			/// </param>
			/// <param name="angle">
			///  [in] angle between the radii lying within the bounding semidisks
			/// </param>
			BRepPrimAPI_MakeSphere(RDC::OCC::Pnt Center, double R, double angle);
			/// <summary>
			/// Make a sphere (spherical segment).
			/// </summary>
			/// <param name="Center">
			/// [in] sphere center coordinates
			/// </param>
			/// <param name="R">
			///      [in] sphere radius
			/// </param>
			/// <param name="angle1">
			/// [in] first angle defining a spherical segment
			/// </param>
			/// <param name="angle2">
			/// [in] second angle defining a spherical segment
			/// </param>
			BRepPrimAPI_MakeSphere(RDC::OCC::Pnt Center, double R, double angle1, double angle2);
			/// <summary>
			/// Make a sphere (spherical segment).
			/// </summary>
			/// <param name="Center">
			/// [in] sphere center coordinates
			/// </param>
			/// <param name="R">
			///      [in] sphere radius
			/// </param>
			/// <param name="angle1">
			/// [in] first angle defining a spherical segment
			/// </param>
			/// <param name="angle2">
			/// [in] second angle defining a spherical segment
			/// </param>
			/// <param name="angle3">
			/// [in] angle between the radii lying within the bounding semidisks
			/// </param>
			BRepPrimAPI_MakeSphere(RDC::OCC::Pnt Center, double R, double angle1, double angle2, double angle3);
			/// <summary>
			/// Make a sphere.
			/// </summary>
			/// <param name="Axis">
			/// [in] coordinate system for the construction of the sphere
			/// </param>
			/// <param name="R">
			///    [in] sphere radius
			/// </param>
			BRepPrimAPI_MakeSphere(RDC::OCC::Ax2 Axis, double R);
			/// <summary>
			/// Make a sphere (spherical wedge).
			/// </summary>
			/// <param name="Axis">
			///  [in] coordinate system for the construction of the sphere
			/// </param>
			/// <param name="R">
			///     [in] sphere radius
			/// </param>
			/// <param name="angle">
			/// [in] angle between the radii lying within the bounding semidisks
			/// </param>
			BRepPrimAPI_MakeSphere(RDC::OCC::Ax2 Axis, double R, double angle);
			/// <summary>
			/// Make a sphere (spherical segment).
			/// </summary>
			/// <param name="Axis">
			///   [in] coordinate system for the construction of the sphere
			/// </param>
			/// <param name="R">
			///      [in] sphere radius
			/// </param>
			/// <param name="angle1">
			/// [in] first angle defining a spherical segment
			/// </param>
			/// <param name="angle2">
			/// [in] second angle defining a spherical segment
			/// </param>
			BRepPrimAPI_MakeSphere(RDC::OCC::Ax2 Axis, double R, double angle1, double angle2);
			/// <summary>
			/// Make a sphere of radius R.
			/// For all algorithms The resulting shape is composed of
			/// -   a lateral spherical face,
			/// -   two planar faces parallel to the plane z = 0 if the
			/// sphere is truncated in the v parametric direction, or
			/// only one planar face if angle1 is equal to -p/2 or if
			/// angle2 is equal to p/2 (these faces are circles in
			/// case of a complete truncated sphere),
			/// -   and in case of a portion of sphere, two planar faces
			/// to shut the shape.(in the planes u = 0 and u = angle).
			/// </summary>
			BRepPrimAPI_MakeSphere(RDC::OCC::Ax2 Axis, double R, double angle1, double angle2, double angle3);
			/// <summary>
			/// Returns the algorithm.
			/// </summary>
			System::IntPtr OneAxis();
			/* Method skipped due to unknown mapping: BRepPrim_Sphere Sphere() */
		}; // class BRepPrimAPI_MakeSphere
#pragma endregion
#pragma region BRepPrimAPI_MakeTorus
		//---------------------------------------------------------------------
		//  Class  BRepPrimAPI_MakeTorus
		//---------------------------------------------------------------------
		/// <summary>
		/// Describes functions to build tori or portions of tori.
		/// A MakeTorus object provides a framework for:
		/// -   defining the construction of a torus,
		/// -   implementing the construction algorithm, and
		/// -   consulting the result.
		/// </summary>
		public ref class BRepPrimAPI_MakeTorus sealed
			: public RDC::OCC::BRepPrimAPI_MakeOneAxis
		{

#ifdef Include_BRepPrimAPI_MakeTorus_h
		public:
			Include_BRepPrimAPI_MakeTorus_h
#endif

		public:
			BRepPrimAPI_MakeTorus(::BRepPrimAPI_MakeTorus* nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeOneAxis(nativeInstance)
			{}

			BRepPrimAPI_MakeTorus(::BRepPrimAPI_MakeTorus& nativeInstance)
				: RDC::OCC::BRepPrimAPI_MakeOneAxis(nativeInstance)
			{}

			property ::BRepPrimAPI_MakeTorus* NativeInstance
			{
				::BRepPrimAPI_MakeTorus* get()
				{
					return static_cast<::BRepPrimAPI_MakeTorus*>(_NativeInstance);
				}
			}

		public:
			/// <summary>
			/// Make a torus.
			/// </summary>
			/// <param name="R1">
			/// [in] distance from the center of the pipe to the center of the torus
			/// </param>
			/// <param name="R2">
			/// [in] radius of the pipe
			/// </param>
			BRepPrimAPI_MakeTorus(double R1, double R2);
			/// <summary>
			/// Make a section of a torus.
			/// </summary>
			/// <param name="R1">
			///    [in] distance from the center of the pipe to the center of the torus
			/// </param>
			/// <param name="R2">
			///    [in] radius of the pipe
			/// </param>
			/// <param name="angle">
			/// [in] angle to create a torus pipe segment
			/// </param>
			BRepPrimAPI_MakeTorus(double R1, double R2, double angle);
			/// <summary>
			/// Make  a torus with angles on the small circle.
			/// </summary>
			/// <param name="R1">
			///     [in] distance from the center of the pipe to the center of the torus
			/// </param>
			/// <param name="R2">
			///     [in] radius of the pipe
			/// </param>
			/// <param name="angle1">
			/// [in] first  angle to create a torus ring segment
			/// </param>
			/// <param name="angle2">
			/// [in] second angle to create a torus ring segment
			/// </param>
			BRepPrimAPI_MakeTorus(double R1, double R2, double angle1, double angle2);
			/// <summary>
			/// Make  a torus with angles on the small circle.
			/// </summary>
			/// <param name="R1">
			///     [in] distance from the center of the pipe to the center of the torus
			/// </param>
			/// <param name="R2">
			///     [in] radius of the pipe
			/// </param>
			/// <param name="angle1">
			/// [in] first  angle to create a torus ring segment
			/// </param>
			/// <param name="angle2">
			/// [in] second angle to create a torus ring segment
			/// </param>
			/// <param name="angle">
			///  [in] angle to create a torus pipe segment
			/// </param>
			BRepPrimAPI_MakeTorus(double R1, double R2, double angle1, double angle2, double angle);
			/// <summary>
			/// Make a torus.
			/// </summary>
			/// <param name="Axes">
			/// [in] coordinate system for the construction of the sphere
			/// </param>
			/// <param name="R1">
			///   [in] distance from the center of the pipe to the center of the torus
			/// </param>
			/// <param name="R2">
			///   [in] radius of the pipe
			/// </param>
			BRepPrimAPI_MakeTorus(RDC::OCC::Ax2 Axes, double R1, double R2);
			/// <summary>
			/// Make a section of a torus.
			/// </summary>
			/// <param name="Axes">
			///  [in] coordinate system for the construction of the sphere
			/// </param>
			/// <param name="R1">
			///    [in] distance from the center of the pipe to the center of the torus
			/// </param>
			/// <param name="R2">
			///    [in] radius of the pipe
			/// </param>
			/// <param name="angle">
			/// [in] angle to create a torus pipe segment
			/// </param>
			BRepPrimAPI_MakeTorus(RDC::OCC::Ax2 Axes, double R1, double R2, double angle);
			/// <summary>
			/// Make a torus.
			/// </summary>
			/// <param name="Axes">
			///   [in] coordinate system for the construction of the sphere
			/// </param>
			/// <param name="R1">
			///     [in] distance from the center of the pipe to the center of the torus
			/// </param>
			/// <param name="R2">
			///     [in] radius of the pipe
			/// </param>
			/// <param name="angle1">
			/// [in] first  angle to create a torus ring segment
			/// </param>
			/// <param name="angle2">
			/// [in] second angle to create a torus ring segment
			/// </param>
			BRepPrimAPI_MakeTorus(RDC::OCC::Ax2 Axes, double R1, double R2, double angle1, double angle2);
			/// <summary>
			/// Make a section of a torus of radii R1 R2.
			/// For all algorithms The resulting shape is composed of
			/// -      a lateral toroidal face,
			/// -      two conical faces (defined  by the equation v = angle1 and
			/// v = angle2) if the sphere is truncated in the v parametric
			/// direction (they may be cylindrical faces in some
			/// particular conditions), and in case of a portion
			/// of torus, two planar faces to close the shape.(in the planes
			/// u = 0 and u = angle).
			/// Notes:
			/// -      The u parameter corresponds to a rotation angle around the Z axis.
			/// -      The circle whose radius is equal to the minor radius,
			/// located in the plane defined by the X axis and the Z axis,
			/// centered on the X axis, on its positive side, and positioned
			/// at a distance from the origin equal to the major radius, is
			/// the reference circle of the torus. The rotation around an
			/// axis parallel to the Y axis and passing through the center
			/// of the reference circle gives the v parameter on the
			/// reference circle. The X axis gives the origin of the v
			/// parameter. Near 0, as v increases, the Z coordinate decreases.
			/// </summary>
			BRepPrimAPI_MakeTorus(RDC::OCC::Ax2 Axes, double R1, double R2, double angle1, double angle2, double angle);
			/// <summary>
			/// Returns the algorithm.
			/// </summary>
			System::IntPtr OneAxis();
			/* Method skipped due to unknown mapping: BRepPrim_Torus Torus() */
		}; // class BRepPrimAPI_MakeTorus
#pragma endregion
#pragma region BRepPrimAPI_MakeWedge
		//---------------------------------------------------------------------
		//  Class  BRepPrimAPI_MakeWedge
		//---------------------------------------------------------------------
		/// <summary>
		/// Describes functions to build wedges, i.e. boxes with inclined faces.
		/// A MakeWedge object provides a framework for:
		/// -   defining the construction of a wedge,
		/// -   implementing the construction algorithm, and
		/// -   consulting the result.
		/// </summary>
		public ref class BRepPrimAPI_MakeWedge sealed
			: public RDC::OCC::BRepBuilderAPI_MakeShape
		{

#ifdef Include_BRepPrimAPI_MakeWedge_h
		public:
			Include_BRepPrimAPI_MakeWedge_h
#endif

		public:
			BRepPrimAPI_MakeWedge(::BRepPrimAPI_MakeWedge* nativeInstance)
				: RDC::OCC::BRepBuilderAPI_MakeShape(nativeInstance)
			{}

			BRepPrimAPI_MakeWedge(::BRepPrimAPI_MakeWedge& nativeInstance)
				: RDC::OCC::BRepBuilderAPI_MakeShape(nativeInstance)
			{}

			property ::BRepPrimAPI_MakeWedge* NativeInstance
			{
				::BRepPrimAPI_MakeWedge* get()
				{
					return static_cast<::BRepPrimAPI_MakeWedge*>(_NativeInstance);
				}
			}

		public:
			/// <summary>
			/// Make a STEP right angular wedge. (ltx >= 0)
			/// </summary>
			BRepPrimAPI_MakeWedge(double dx, double dy, double dz, double ltx);
			/// <summary>
			/// Make a STEP right angular wedge. (ltx >= 0)
			/// </summary>
			BRepPrimAPI_MakeWedge(RDC::OCC::Ax2 Axes, double dx, double dy, double dz, double ltx);
			/// <summary>
			/// Make a wedge. The face at dy is xmin,zmin xmax,zmax
			/// </summary>
			BRepPrimAPI_MakeWedge(double dx, double dy, double dz, double xmin, double zmin, double xmax, double zmax);
			/// <summary>
			/// Make a wedge. The face at dy is xmin,zmin xmax,zmax
			/// </summary>
			BRepPrimAPI_MakeWedge(RDC::OCC::Ax2 Axes, double dx, double dy, double dz, double xmin, double zmin, double xmax, double zmax);
			/* Method skipped due to unknown mapping: BRepPrim_Wedge Wedge() */
			/// <summary>
			/// Stores the solid in myShape.
			/// </summary>
			void Build(RDC::OCC::Message_ProgressRange^ theRange);
			/// <summary>
			/// Stores the solid in myShape.
			/// </summary>
			void Build();
			/// <summary>
			/// Returns the constructed box in the form of a shell.
			/// </summary>
			RDC::OCC::TopoDS_Shell^ Shell();
			/// <summary>
			/// Returns the constructed box in the form of a solid.
			/// </summary>
			RDC::OCC::TopoDS_Solid^ Solid();
		}; // class BRepPrimAPI_MakeWedge
#pragma endregion
	}; // namespace OCC
}; // namespace RDC

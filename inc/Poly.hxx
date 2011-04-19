// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Poly_HeaderFile
#define _Poly_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Poly_Triangulation_HeaderFile
#include <Handle_Poly_Triangulation.hxx>
#endif
#ifndef _Poly_ListOfTriangulation_HeaderFile
#include <Poly_ListOfTriangulation.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Poly_Polygon3D_HeaderFile
#include <Handle_Poly_Polygon3D.hxx>
#endif
#ifndef _Handle_Poly_Polygon2D_HeaderFile
#include <Handle_Poly_Polygon2D.hxx>
#endif
#ifndef _Standard_IStream_HeaderFile
#include <Standard_IStream.hxx>
#endif
class Poly_Triangulation;
class Poly_Polygon3D;
class Poly_Polygon2D;
class Poly_Triangle;
class Poly_Array1OfTriangle;
class Poly_HArray1OfTriangle;
class Poly_Triangulation;
class Poly_Polygon3D;
class Poly_Polygon2D;
class Poly_PolygonOnTriangulation;
class Poly_Connect;


//! This  package  provides  classes  and services  to <br>
//!          handle : <br>
//! <br>
//!          * 3D triangular polyhedrons. <br>
//! <br>
//!          * 3D polygons. <br>
//! <br>
//!          * 2D polygon. <br>
//! <br>
//!          * Tools to dump, save and restore those objects. <br>
class Poly  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Join several triangulations to one new triangulation object. <br>
//!          The new triangulation is just a mechanical sum of input <br>
//!          triangulations, without node sharing. UV coordinates are <br>
//!          dropped in the result. <br>
  Standard_EXPORT   static  Handle_Poly_Triangulation Catenate(const Poly_ListOfTriangulation& lstTri) ;
  //! Writes the content of the triangulation <T> on the <br>
//!          stream <OS>. If <Compact> is true this is a "save" <br>
//!          format  intended  to  be read back   with the Read <br>
//!          method. If compact is False  it is a "Dump" format <br>
//!          intended to be informative. <br>
  Standard_EXPORT   static  void Write(const Handle(Poly_Triangulation)& T,Standard_OStream& OS,const Standard_Boolean Compact = Standard_True) ;
  //! Writes  the  content  of the 3D polygon <P> on the <br>
//!          stream <OS>. If <Compact> is true this is a "save" <br>
//!          format  intended  to  be read back   with the Read <br>
//!          method. If compact is False  it is a "Dump" format <br>
//!          intended to be informative. <br>
  Standard_EXPORT   static  void Write(const Handle(Poly_Polygon3D)& P,Standard_OStream& OS,const Standard_Boolean Compact = Standard_True) ;
  //! Writes the  content  of the 2D polygon  <P> on the <br>
//!          stream <OS>. If <Compact> is true this is a "save" <br>
//!          format  intended  to  be read back   with the Read <br>
//!          method. If compact is False  it is a "Dump" format <br>
//!          intended to be informative. <br>
  Standard_EXPORT   static  void Write(const Handle(Poly_Polygon2D)& P,Standard_OStream& OS,const Standard_Boolean Compact = Standard_True) ;
  //! Dumps  the triangulation.  This   is a call to  the <br>
//!          previous method with Comapct set to False. <br>
  Standard_EXPORT   static  void Dump(const Handle(Poly_Triangulation)& T,Standard_OStream& OS) ;
  //! Dumps  the  3D  polygon.  This   is a call to  the <br>
//!          previous method with Comapct set to False. <br>
  Standard_EXPORT   static  void Dump(const Handle(Poly_Polygon3D)& P,Standard_OStream& OS) ;
  //! Dumps  the  2D  polygon.  This   is a call to  the <br>
//!          previous method with Comapct set to False. <br>
  Standard_EXPORT   static  void Dump(const Handle(Poly_Polygon2D)& P,Standard_OStream& OS) ;
  //! Reads a triangulation from the stream <IS>. <br>
  Standard_EXPORT   static  Handle_Poly_Triangulation ReadTriangulation(Standard_IStream& IS) ;
  //! Reads a 3d polygon from the stream <IS>. <br>
  Standard_EXPORT   static  Handle_Poly_Polygon3D ReadPolygon3D(Standard_IStream& IS) ;
  //! Reads a 2D polygon from the stream <IS>. <br>
  Standard_EXPORT   static  Handle_Poly_Polygon2D ReadPolygon2D(Standard_IStream& IS) ;
  //! Compute node normals for face triangulation <br>
//!  as mean normal of surrounding triangles <br>
  Standard_EXPORT   static  void ComputeNormals(const Handle(Poly_Triangulation)& Tri) ;





protected:





private:




friend class Poly_Triangle;
friend class Poly_Array1OfTriangle;
friend class Poly_HArray1OfTriangle;
friend class Poly_Triangulation;
friend class Poly_Polygon3D;
friend class Poly_Polygon2D;
friend class Poly_PolygonOnTriangulation;
friend class Poly_Connect;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
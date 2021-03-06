// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_Cube_HeaderFile
#define _Vrml_Cube_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif


//! defines a Cube node of VRML specifying geometry shapes. <br>
//! This  node  represents  a  cuboid aligned with  the coordinate  axes. <br>
//! By  default ,  the  cube  is  centred  at  (0,0,0) and  measures  2  units <br>
//! in  each  dimension, from -1  to  +1. <br>
//! A cube's width is its extent along its object-space X axis, its height is <br>
//! its extent along the object-space Y axis, and its depth is its extent along its <br>
//! object-space Z axis. <br>
class Vrml_Cube  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Vrml_Cube(const Standard_Real aWidth = 2,const Standard_Real aHeight = 2,const Standard_Real aDepth = 2);
  
  Standard_EXPORT     void SetWidth(const Standard_Real aWidth) ;
  
  Standard_EXPORT     Standard_Real Width() const;
  
  Standard_EXPORT     void SetHeight(const Standard_Real aHeight) ;
  
  Standard_EXPORT     Standard_Real Height() const;
  
  Standard_EXPORT     void SetDepth(const Standard_Real aDepth) ;
  
  Standard_EXPORT     Standard_Real Depth() const;
  
  Standard_EXPORT     Standard_OStream& Print(Standard_OStream& anOStream) const;





protected:





private:



Standard_Real myWidth;
Standard_Real myHeight;
Standard_Real myDepth;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

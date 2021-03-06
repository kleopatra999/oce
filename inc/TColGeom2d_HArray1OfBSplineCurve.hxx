// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom2d_HArray1OfBSplineCurve_HeaderFile
#define _TColGeom2d_HArray1OfBSplineCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColGeom2d_HArray1OfBSplineCurve_HeaderFile
#include <Handle_TColGeom2d_HArray1OfBSplineCurve.hxx>
#endif

#ifndef _TColGeom2d_Array1OfBSplineCurve_HeaderFile
#include <TColGeom2d_Array1OfBSplineCurve.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Geom2d_BSplineCurve_HeaderFile
#include <Handle_Geom2d_BSplineCurve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Geom2d_BSplineCurve;
class TColGeom2d_Array1OfBSplineCurve;



class TColGeom2d_HArray1OfBSplineCurve : public MMgt_TShared {

public:

  
      TColGeom2d_HArray1OfBSplineCurve(const Standard_Integer Low,const Standard_Integer Up);
  
      TColGeom2d_HArray1OfBSplineCurve(const Standard_Integer Low,const Standard_Integer Up,const Handle(Geom2d_BSplineCurve)& V);
  
        void Init(const Handle(Geom2d_BSplineCurve)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(Geom2d_BSplineCurve)& Value) ;
  
       const Handle_Geom2d_BSplineCurve& Value(const Standard_Integer Index) const;
  
        Handle_Geom2d_BSplineCurve& ChangeValue(const Standard_Integer Index) ;
  
       const TColGeom2d_Array1OfBSplineCurve& Array1() const;
  
        TColGeom2d_Array1OfBSplineCurve& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TColGeom2d_HArray1OfBSplineCurve)

protected:




private: 


TColGeom2d_Array1OfBSplineCurve myArray;


};

#define ItemHArray1 Handle_Geom2d_BSplineCurve
#define ItemHArray1_hxx <Geom2d_BSplineCurve.hxx>
#define TheArray1 TColGeom2d_Array1OfBSplineCurve
#define TheArray1_hxx <TColGeom2d_Array1OfBSplineCurve.hxx>
#define TCollection_HArray1 TColGeom2d_HArray1OfBSplineCurve
#define TCollection_HArray1_hxx <TColGeom2d_HArray1OfBSplineCurve.hxx>
#define Handle_TCollection_HArray1 Handle_TColGeom2d_HArray1OfBSplineCurve
#define TCollection_HArray1_Type_() TColGeom2d_HArray1OfBSplineCurve_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif

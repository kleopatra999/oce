// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_Curve3D_HeaderFile
#define _BRep_Curve3D_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRep_Curve3D_HeaderFile
#include <Handle_BRep_Curve3D.hxx>
#endif

#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _BRep_GCurve_HeaderFile
#include <BRep_GCurve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_BRep_CurveRepresentation_HeaderFile
#include <Handle_BRep_CurveRepresentation.hxx>
#endif
class Geom_Curve;
class TopLoc_Location;
class gp_Pnt;
class BRep_CurveRepresentation;


//! Representation of a curve by a 3D curve. <br>
class BRep_Curve3D : public BRep_GCurve {

public:

  
  Standard_EXPORT   BRep_Curve3D(const Handle(Geom_Curve)& C,const TopLoc_Location& L);
  //! Computes the point at parameter U. <br>
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt& P) const;
  //! Returns True. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsCurve3D() const;
  
  Standard_EXPORT   virtual const Handle_Geom_Curve& Curve3D() const;
  
  Standard_EXPORT   virtual  void Curve3D(const Handle(Geom_Curve)& C) ;
  //! Return a copy of this representation. <br>
  Standard_EXPORT     Handle_BRep_CurveRepresentation Copy() const;




  DEFINE_STANDARD_RTTI(BRep_Curve3D)

protected:




private: 


Handle_Geom_Curve myCurve;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif

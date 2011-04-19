// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_TrimmedCurve_HeaderFile
#define _StepGeom_TrimmedCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_TrimmedCurve_HeaderFile
#include <Handle_StepGeom_TrimmedCurve.hxx>
#endif

#ifndef _Handle_StepGeom_Curve_HeaderFile
#include <Handle_StepGeom_Curve.hxx>
#endif
#ifndef _Handle_StepGeom_HArray1OfTrimmingSelect_HeaderFile
#include <Handle_StepGeom_HArray1OfTrimmingSelect.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _StepGeom_TrimmingPreference_HeaderFile
#include <StepGeom_TrimmingPreference.hxx>
#endif
#ifndef _StepGeom_BoundedCurve_HeaderFile
#include <StepGeom_BoundedCurve.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepGeom_Curve;
class StepGeom_HArray1OfTrimmingSelect;
class TCollection_HAsciiString;
class StepGeom_TrimmingSelect;



class StepGeom_TrimmedCurve : public StepGeom_BoundedCurve {

public:

  //! Returns a TrimmedCurve <br>
  Standard_EXPORT   StepGeom_TrimmedCurve();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_Curve)& aBasisCurve,const Handle(StepGeom_HArray1OfTrimmingSelect)& aTrim1,const Handle(StepGeom_HArray1OfTrimmingSelect)& aTrim2,const Standard_Boolean aSenseAgreement,const StepGeom_TrimmingPreference aMasterRepresentation) ;
  
  Standard_EXPORT     void SetBasisCurve(const Handle(StepGeom_Curve)& aBasisCurve) ;
  
  Standard_EXPORT     Handle_StepGeom_Curve BasisCurve() const;
  
  Standard_EXPORT     void SetTrim1(const Handle(StepGeom_HArray1OfTrimmingSelect)& aTrim1) ;
  
  Standard_EXPORT     Handle_StepGeom_HArray1OfTrimmingSelect Trim1() const;
  
  Standard_EXPORT     StepGeom_TrimmingSelect Trim1Value(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbTrim1() const;
  
  Standard_EXPORT     void SetTrim2(const Handle(StepGeom_HArray1OfTrimmingSelect)& aTrim2) ;
  
  Standard_EXPORT     Handle_StepGeom_HArray1OfTrimmingSelect Trim2() const;
  
  Standard_EXPORT     StepGeom_TrimmingSelect Trim2Value(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbTrim2() const;
  
  Standard_EXPORT     void SetSenseAgreement(const Standard_Boolean aSenseAgreement) ;
  
  Standard_EXPORT     Standard_Boolean SenseAgreement() const;
  
  Standard_EXPORT     void SetMasterRepresentation(const StepGeom_TrimmingPreference aMasterRepresentation) ;
  
  Standard_EXPORT     StepGeom_TrimmingPreference MasterRepresentation() const;




  DEFINE_STANDARD_RTTI(StepGeom_TrimmedCurve)

protected:




private: 


Handle_StepGeom_Curve basisCurve;
Handle_StepGeom_HArray1OfTrimmingSelect trim1;
Handle_StepGeom_HArray1OfTrimmingSelect trim2;
Standard_Boolean senseAgreement;
StepGeom_TrimmingPreference masterRepresentation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
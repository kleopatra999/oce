// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Materials_FuzzyInstance_HeaderFile
#define _Materials_FuzzyInstance_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Materials_FuzzyInstance_HeaderFile
#include <Handle_Materials_FuzzyInstance.hxx>
#endif

#ifndef _Handle_Dynamic_FuzzyClass_HeaderFile
#include <Handle_Dynamic_FuzzyClass.hxx>
#endif
#ifndef _Dynamic_FuzzyClass_HeaderFile
#include <Dynamic_FuzzyClass.hxx>
#endif
#ifndef _Handle_Materials_MaterialDefinition_HeaderFile
#include <Handle_Materials_MaterialDefinition.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Dynamic_FuzzyClass;
class Materials_MaterialDefinition;
class TCollection_AsciiString;
class Standard_Transient;



class Materials_FuzzyInstance : public Dynamic_FuzzyClass {

public:

  
  Standard_EXPORT   Materials_FuzzyInstance(const Standard_CString atype);
  
  Standard_EXPORT   Materials_FuzzyInstance(const Handle(Materials_FuzzyInstance)& afuzzyinstance);
  
  Standard_EXPORT   virtual  TCollection_AsciiString Type() const;
  
  Standard_EXPORT     Handle_Dynamic_FuzzyClass Definition() const;
  
  Standard_EXPORT   virtual  void Parameter(const Standard_CString aparameter,const Standard_Boolean avalue) ;
  
  Standard_EXPORT   virtual  void Parameter(const Standard_CString aparameter,const Standard_Integer avalue) ;
  
  Standard_EXPORT   virtual  void Parameter(const Standard_CString aparameter,const Standard_Real avalue) ;
  
  Standard_EXPORT   virtual  void Parameter(const Standard_CString aparameter,const Standard_CString astring) ;
  
  Standard_EXPORT   virtual  void Parameter(const Standard_CString aparameter,const Handle(Standard_Transient)& anobject) ;
  
  Standard_EXPORT   virtual  Standard_Boolean Value(const Standard_CString aparameter,Standard_Boolean& avalue) const;
  
  Standard_EXPORT   virtual  Standard_Boolean Value(const Standard_CString aparameter,Standard_Integer& avalue) const;
  
  Standard_EXPORT   virtual  Standard_Boolean Value(const Standard_CString aparameter,Standard_Real& avalue) const;
  
  Standard_EXPORT   virtual  Standard_Boolean Value(const Standard_CString aparameter,TCollection_AsciiString& avalue) const;
  
  Standard_EXPORT   virtual  Standard_Boolean Value(const Standard_CString aparameter,Handle(Standard_Transient)& avalue) const;
  
  Standard_EXPORT   virtual  void Dump(Standard_OStream& astream) const;




  DEFINE_STANDARD_RTTI(Materials_FuzzyInstance)

protected:




private: 


Handle_Dynamic_FuzzyClass thedefinition;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
// Created on: 2002-04-15
// Created by: Alexander Kartomin (akm)
// Copyright (c) 2002-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and / or modify it
// under the terms of the GNU Lesser General Public version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef NCollection_Array1_HeaderFile
#define NCollection_Array1_HeaderFile

#ifndef No_Exception
#include <Standard_DimensionMismatch.hxx>
#include <Standard_OutOfMemory.hxx>
#include <Standard_OutOfRange.hxx>
#endif

#include <NCollection_BaseCollection.hxx>

// *********************************************** Template for Array1 class

/**
* Purpose:     The class Array1 represents unidimensional arrays 
*              of fixed size known at run time. 
*              The range of the index is user defined.
*              An array1 can be constructed with a "C array".
*              This functionality is useful to call methods expecting
*              an Array1. It allows to carry the bounds inside the arrays.
*              
* Examples:    Item tab[100]; //  An example with a C array
*              Array1OfItem ttab (tab[0],1,100);
*              
*              Array1OfItem tttab (ttab(10),10,20); // a slice of ttab
*              
*              If you want to reindex an array from 1 to Length do :
*              
*              Array1 tab1(tab(tab.Lower()),1,tab.Length());
*                          
* Warning:     Programs client of such a class must be independant
*              of the range of the first element. Then, a C++ for
*              loop must be written like this
*              
*              for (i = A.Lower(); i <= A.Upper(); i++)
*              
* Changes:     In  comparison  to  TCollection  the  flag  isAllocated  was
*              renamed into myDeletable (alike in  the Array2).  For naming
*              compatibility the method IsAllocated remained in class along
*              with IsDeletable.
*/              
template <class TheItemType> class NCollection_Array1
  : public NCollection_BaseCollection<TheItemType>
{

 public:
  //! Implementation of the Iterator interface.
  class Iterator : public NCollection_BaseCollection<TheItemType>::Iterator
  {
  public:
    //! Empty constructor - for later Init
    Iterator  (void) :
      myCurrent (0),
      myArray   (NULL) {}
    //! Constructor with initialisation
    Iterator  (const NCollection_Array1& theArray) :
      myCurrent (theArray.Lower()),
      myArray   ((NCollection_Array1<TheItemType> *) &theArray) {}
    //! Initialisation
    void Init (const NCollection_Array1& theArray)
    { 
      myCurrent = theArray.Lower();
#ifdef __hpux
      myArray   = (NCollection_Array1<TheItemType> *) &theArray;
#else
      myArray   = (NCollection_Array1 *) &theArray; 
#endif
    }
    //! Check end
    virtual Standard_Boolean More (void) const
    { return (myCurrent<=myArray->Upper()); }
    //! Make step
    virtual void Next (void)         
    { myCurrent++; }
    //! Constant value access
    virtual const TheItemType& Value (void) const
    { return myArray->Value(myCurrent); }
    //! Variable value access
    virtual TheItemType& ChangeValue (void) const 
    { return myArray->ChangeValue(myCurrent); }
  private:
    Standard_Integer    myCurrent; //!< Index of the current item
    NCollection_Array1* myArray;   //!< Pointer to the array being iterated
  }; // End of the nested class Iterator

 public:
  // ---------- PUBLIC METHODS ------------

  //! Constructor
  NCollection_Array1(const Standard_Integer theLower,
                     const Standard_Integer theUpper) :
                NCollection_BaseCollection<TheItemType>  (),
                myLowerBound                             (theLower),
                myUpperBound                             (theUpper),
                myDeletable                              (Standard_True)
  {
#if !defined No_Exception && !defined No_Standard_RangeError
    if (theUpper < theLower)
      Standard_RangeError::Raise ("NCollection_Array1::Create");
#endif
    TheItemType* pBegin = new TheItemType[Length()];
#if !defined No_Exception && !defined No_Standard_OutOfMemory
    if (!pBegin)
      Standard_OutOfMemory::Raise ("NCollection_Array1 : Allocation failed");
#endif

    myData = pBegin - theLower;
  }

  //! Copy constructor 
  NCollection_Array1 (const NCollection_Array1& theOther) :
    NCollection_BaseCollection<TheItemType>     (),
    myLowerBound                                (theOther.Lower()),
    myUpperBound                                (theOther.Upper()),
    myDeletable                                 (Standard_True)
  {
    TheItemType* pBegin = new TheItemType[Length()];
#if !defined No_Exception && !defined No_Standard_OutOfMemory
    if (!pBegin)
      Standard_OutOfMemory::Raise ("NCollection_Array1 : Allocation failed");
#endif
    myData = pBegin - myLowerBound;

    *this = theOther;
  }

  //! C array-based constructor
  NCollection_Array1 (const TheItemType& theBegin,
                      const Standard_Integer theLower,
                      const Standard_Integer theUpper) :
    NCollection_BaseCollection<TheItemType>     (),
    myLowerBound                                (theLower),
    myUpperBound                                (theUpper),
    myDeletable                                 (Standard_False)
  {
#if !defined No_Exception && !defined No_Standard_RangeError
    if (theUpper < theLower)
      Standard_RangeError::Raise ("NCollection_Array1::Array1");
#endif
    myData = (TheItemType *) &theBegin - theLower; 
  }

  //! Initialise the items with theValue
  void Init (const TheItemType& theValue) 
  {
    TheItemType *pCur = &myData[myLowerBound], *pEnd=&myData[myUpperBound];
    for(; pCur <= pEnd; pCur++)
      *pCur = (TheItemType&) theValue;
  }

  //! Size query
  virtual Standard_Integer Size (void) const
  { return Length(); }
  //! Length query (the same)
  Standard_Integer Length (void) const
  { return (myUpperBound-myLowerBound+1); }

  //! Lower bound
  Standard_Integer Lower (void) const
  { return myLowerBound; }
  //! Upper bound
  Standard_Integer Upper (void) const
  { return myUpperBound; }

  //! myDeletable flag
  Standard_Boolean IsDeletable (void) const
  { return myDeletable; }

  //! IsAllocated flag - for naming compatibility
  Standard_Boolean IsAllocated (void) const
  { return myDeletable; }

  //! Assign (any collection to this array)
  // Copies items from the other collection into the allocated
  // storage. Raises an exception when sizes differ.
  virtual void Assign (const NCollection_BaseCollection<TheItemType>& theOther)
  {
    if (&theOther == this)
      return;
#if !defined No_Exception && !defined No_Standard_DimensionMismatch
    if (Length() != theOther.Size())
      Standard_DimensionMismatch::Raise ("NCollection_Array1::Assign");
#endif
    TYPENAME NCollection_BaseCollection<TheItemType>::Iterator& anIter2 = 
      theOther.CreateIterator();
    TheItemType * const pEndItem = &myData[myUpperBound];
    for (TheItemType * pItem = &myData[myLowerBound];
         pItem <= pEndItem;   anIter2.Next())
      * pItem ++ = anIter2.Value();
  }

  //! operator= (array to array)
  NCollection_Array1& operator= (const NCollection_Array1& theOther)
  {
    if (&theOther == this)
      return *this;
#if !defined No_Exception && !defined No_Standard_DimensionMismatch
    if (Length() != theOther.Length())
      Standard_DimensionMismatch::Raise ("NCollection_Array1::operator=");
#endif
    TheItemType * pMyItem        = &myData[myLowerBound];
    TheItemType * const pEndItem = &(theOther.myData)[theOther.myUpperBound];
    TheItemType * pItem          = &(theOther.myData)[theOther.myLowerBound];
    while (pItem <= pEndItem) * pMyItem ++ = * pItem ++;
    return *this; 
  }

  //! @return first element
  const TheItemType& First() const
  {
    return myData[myLowerBound];
  }

  //! @return first element
  TheItemType& ChangeFirst()
  {
    return myData[myLowerBound];
  }

  //! @return last element
  const TheItemType& Last() const
  {
    return myData[myUpperBound];
  }

  //! @return last element
  TheItemType& ChangeLast()
  {
    return myData[myUpperBound];
  }

  //! Constant value access
  const TheItemType& Value (const Standard_Integer theIndex) const
  {
#if !defined No_Exception && !defined No_Standard_OutOfRange
    if (theIndex < myLowerBound || theIndex > myUpperBound)
      Standard_OutOfRange::Raise ("NCollection_Array1::Value");
#endif
    return myData[theIndex];
  }

  //! operator() - alias to Value
  const TheItemType& operator() (const Standard_Integer theIndex) const
  { return Value (theIndex); }

  //! Variable value access
  TheItemType& ChangeValue (const Standard_Integer theIndex)
  {
#if !defined No_Exception && !defined No_Standard_OutOfRange
    if (theIndex < myLowerBound || theIndex > myUpperBound)
      Standard_OutOfRange::Raise ("NCollection_Array1::ChangeValue");
#endif
    return myData[theIndex];
  }

  //! operator() - alias to ChangeValue
  TheItemType& operator() (const Standard_Integer theIndex)
  { return ChangeValue (theIndex); }

  //! Set value 
  void SetValue (const Standard_Integer theIndex,
                 const TheItemType&     theItem)
  {
#if !defined No_Exception && !defined No_Standard_OutOfRange
    if (theIndex < myLowerBound || theIndex > myUpperBound)
      Standard_OutOfRange::Raise ("NCollection_Array1::SetValue");
#endif
    myData[theIndex] = theItem;
  }

  //! Destructor - releases the memory
  ~NCollection_Array1 (void)
  { if (myDeletable) delete [] &(myData[myLowerBound]); }

 private:
  // ----------- PRIVATE METHODS -----------

  // ******** Creates Iterator for use on BaseCollection
  virtual
  TYPENAME NCollection_BaseCollection<TheItemType>::Iterator& 
                        CreateIterator(void) const
  { return *(new (this->IterAllocator()) Iterator(*this)); }

 protected:
  // ---------- PROTECTED FIELDS -----------
  Standard_Integer     myLowerBound;
  Standard_Integer     myUpperBound;
  Standard_Boolean     myDeletable; //!< Flag showing who allocated the array
  TheItemType*         myData;      //!< Pointer to '0'th array item
};

#endif

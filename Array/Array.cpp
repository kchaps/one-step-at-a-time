#include "Array.h"
#include <iostream>
using namespace std;
namespace csc016
{

//delete function 
void Array::deleteFunc()
{
  PRINT_DEBUG_HELPER("In destructor");
  if(m_dataArray!=NULL)
  {
    delete []m_dataArray;
    m_dataArray = NULL;
  }
}



//copy array
void Array::copy(const Array& ar)
{
  //stage 1: delete any old data
  deleteFunc();
  //stage 2: allocate new space
  m_dataArray = new int[ar.getLength()];
  m_dataLength = ar.getLength();
  //stage 3: loop over elements in ar and copy them into m_dataArray
  cout<<"The values entered: ";
  for(int i =0;i<ar.getLength();i++)
    {
    cout<<i+1<<ar[i]<<endl;
    }
  Array arr2(ar);
    for(int i =0;i<arr2.getLength();i++)
    {
    cout<<i+1<<arr2[i]<<endl;
    }
}

//copy constructor
Array::Array(const Array &ar)
{
  m_dataArray = NULL;
  m_dataLength = 0; 
  copy(ar); 
}

// explicit size constructor
Array::Array(int size)
{
  PRINT_DEBUG_HELPER("In constructor");
  m_dataArray = new int [size]; 
  m_dataLength = size;
}

//destructor
Array::~Array()
{
  PRINT_DEBUG_HELPER("In destructor");
  deleteFunc();
}


} //close namespace csc016

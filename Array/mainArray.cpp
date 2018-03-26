#include <iostream>
using namespace std;
#include "Array.h"
using namespace csc016;

int main()
{
  int N = 0;
  cout<<"Please enter an array size: "<<endl;
  cin>>N;
  Array ar(N);
  cout<<"Please enter values: "<<endl;
  for(int i =0;i<ar.getLength();i++)
    cin>>ar[i];
  cout<<"The values entered: ";
  for(int i =0;i<ar.getLength();i++)
    cout<<ar[i]<<" ";
//  cout<<"The values entered for m_dataArray: "<<endl;
//  for(int i =0;i<getLength();i++)
//    cout<<m_dataArray[i]<<" ";
  return 0;
}

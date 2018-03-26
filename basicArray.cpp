#include<iostream>
using namespace std;

void display(int array[], int size)
{
  for(int i = 0; i<size;i++)
  cout<<  array[i]<<endl;
}

void readValue(int array[], int size)
{
  for(int i = 0; i<size;i++)
  cin>>array[i];
}
int main()
{
  const int ArraySize = 7;
  int intArray[ArraySize]; 
  cout<<"please enter a list of " <<ArraySize<<" numbers"<<endl;
  readValue(intArray,ArraySize);
  display(intArray,ArraySize);
  
  cout<<"Please enter an int "<<endl;
  int intVar;
  cin>> intVar;
  cout<<"The number you entered is"<<intVar<<endl;

  cout<<"Please enter a float"<<endl;
  float floatVar;
  cin>>floatVar;
  cout<<"The float you entered is "<<floatVar<<endl;
  return 0;
}

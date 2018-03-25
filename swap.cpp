#include<iostream>
#include<string>
using namespace std;

void swapByVal( int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}
void swapByPtr(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
void swapByRef(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
void ref(string &c, string &d)

{
  string temp = c;
  c = d;
  d = temp;
}
int main()
{
  int a = 1;
  int b = 2; 
  string c = "World";
  string d = "Hello";
  swapByVal(a,b);
  cout<<"After SwapByVal a,b = "<<a<<","<<b<<endl;
  swapByPtr(&a,&b);
  cout<<"After SwapByPtr a,b = "<<a<<","<<b<<endl;
  swapByRef(a,b);
  cout<<"After SwapByRef a,b = "<<a<<","<<b<<endl;
  ref(c,d);
  cout<<"After Ref c,d = "<<c<<" "<<d<<endl;
  return 0;
}

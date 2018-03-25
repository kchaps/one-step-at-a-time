#include <iostream>
using namespace std;

int main()
{
  int i = 0;
  cout<<&i<<endl;
  return 0;
  int j = 1;
  int *intPtr; 
  intPtr = &i;
  *intPtr = 2;
  intPtr = &j
  *intPtr = 3;
  cout<<i<<endl;
  cout<<j<<endl;
  
}

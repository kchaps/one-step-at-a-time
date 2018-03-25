#include <iostream>
using namespace std;

int main()
{
  int *iPtr = 0;
  cout<<iPtr<<endl;

  const int AllocSize = 1000;
  const int MegaByte = 1024*1024;
  int byteCout = 0;

  while(1)
  {
    iPtr = new int[AllocSize];
    byteCout += (AllocSize * sizeof(int));
    cout<<(byteCout/MegaByte)<<endl;
  }
  return 0;
}


#include <iostream>
using namespace std;

void func(char array[])
{
  cout<<"The array sent was "<<array<<endl;
  int i = 0;
  while(array[i]!=0)
  {
    cout<<"char at index "<<i<<" is "<<array[i];
    i++;
  }
}

int main(int argc, char *argv[])
{
  cout<<"The Num of arguments "<<argc<<endl;
  cout<<"The parameters were: "<<endl;
  for(int i=0;i<argc;i++)
    cout<<"at index "<<i<<" "<<argv[i]<<endl;
  
  func(argv[1]);
  return 0;
}

#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
using namespace std;

int main()
{
  //write file
  ofstream fOut;
  fOut.open("test_file.txt");
  assert(fOut.is_open());
  fOut<<"Hello World!";
  fOut.close();

  // read file
  ifstream fIn;
  fIn.open("test_file.txt");
  assert(fIn.is_open());
  while(!fIn.eof())
  {
    string str;
    fIn>>str;
    cout<<str<<endl;
  }
  fIn.close();


  return 0;
}

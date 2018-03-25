#include <iostream>
using namespace std; 

int main()
{
int sizeOfInteger = sizeof(int);
cout<<"size of an int="<<sizeOfInteger<<endl;
int sizeOfShort = sizeof(short);
cout<<"size of an short="<<sizeOfShort<<endl;

int j = 0;
int k = ++j;

cout<<"k="<<k<<endl;
return 0; //don't do this in actual programs!!!!

unsigned short number = 1;
for (int i = 1; i <= 32800; i++)
{
cout<<number<<endl;
number = number+1;
}
return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main()
{
int N = 4;
int n;
int i =0;
int array[N];
int largest;
cout<<"What are the "<<N<<" number(s) you would like to find the largest of?"<<endl;
while(N>i)
  {
  cout<<i+1<<": ";
  cin>>n;
  array[i] = n;
  i++;
  }


int *Ptr;
i = 0;
while(i<N)
{
  if(array[i]>array[i-1])
    {
    Ptr = &array[i];
    }
  i++;
}
cout<<"The largest of these "<<N<<" number(s) is: "<<*Ptr<<endl;
return 0;
}

#include <iostream>
#include<vector>
using namespace std;
#include "sieve.h"

void sieve::primeNum()
{
  vector<int> arr(n+1,1);
  for(int i=2;i*i<=n;i++)
    {
    if(arr[i]==1)
      {
      for(int j=i;i*j<=n;j++)
        {
        arr[i*j]=0;
        }
      }
    }
  cout<<"Prime number upto "<<n<<" are: ";
  for(unsigned i=2;i<=arr.size();i++)
    {
    if(arr[i]==1)
      {
       cout<<i<<endl;
      }
    }
}

void sieve::read()
{
  cout<<"This program will find all primes between 2 and an entered number. Plese enter a number: "<<endl;
  cin>>n;
}

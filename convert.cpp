#include<iostream>
#include<string>
using namespace std;
int digits(int x,int y, int q)
{
  int b = 0;
  int z = 0;
  int *intPtr; 
  intPtr = &x;
  *intPtr = x;
  intPtr = &z;
  *intPtr = x;
  while(z>=0)
    {
    b++;
    z = z * .1;
    if(z<=0)
     {
     cout<<"Number of digits: "<<b<<endl;
     return b;
     }
    } 
}

int allDecimal(int x, int n, int b)
 {
    int valid;
    int binOrDecResp;
    cout<<"Would you like to convert to binary (base 2) or decimal (base 10)? *Please respond with (2 or 10)"<<endl;
    cin>>binOrDecResp;
    //x is number
    //b is length 
    //n is current base
    int i = 0; //counter to make sure all digits work with given base

    int o = 0;
    int *intPtr; 
    intPtr = &o;
    *intPtr = x;
    intPtr = &o;
    *intPtr = x;
//    cout<<"the x is "<<x<<endl; //forcoder
//    cout<<"the o is "<<o<<endl; //forcoder
    int f = 0;
    cout<<"the f is "<<f<<endl; //forcoder
    cout<<"the n is "<<n<<endl; //forcoder
    if(f<n){
        cout<<"the f2 is "<<f<<endl; //forcoder
        cout<<"the o is "<<o<<endl; //forcoder
    for(int f; f<=n; f=f)
     {
       f = o % 10;
        cout<<"the f3 is "<<f<<endl; //forcoder
       o = o / 10;
        cout<<"the f4 is "<<f<<endl; //forcoder
        cout<<"the o is "<<o<<endl; //forcoder
       if(f>=n)
       {
        cout<<"Input invalid. Please enter new number and base. ";
        cout<<"What is the number that you would like to convert to base 10 or 2? "<<endl;
        cin>>x;
        cout<<"What is the current base of this number (between 2 and 36)? "<<endl;
        cin>>n;
        f = 1;
        intPtr = &o;
        *intPtr = x;
        intPtr = &o;
        *intPtr = x;
        if(f<n){
        for(int f; f<=n; f=f)
     {
       f = o % 10;
       o = o / 10;
       if(f>=n)
     {  
 cout<<"Invalid. Please try again."<<endl;
 return valid = 1;
       }
}

        break;
         }
          
      }}
    int numNew = x%10;
    x = x / 10;
      int k = 0;
      int *intPtx; 
      intPtx = &k;
      *intPtx = n;
      intPtx = &k;
      *intPtx = n;
    while(i<=x)
      {
      numNew += ((x%10)*(n));
      x = x/10;
      n = n*k;
      i++;
      }

    if(binOrDecResp==2)
    {
        string r;
    while(numNew!=0) 
      {
        r=(numNew%2==0 ?"0":"1")+r; 
        numNew/=2;
      }
    cout<<"The binary representation is "<<r<<endl;
    return 0;
     }
   else if(binOrDecResp==10)
    {
      cout<<"decimal version is "<<numNew<<endl;
    }
    else
     {
      cout<<"Input invalid."<<endl;
      return valid = 1;
}
}
}
int questions()
{
int n;
  int valid;
  int x;
  int b;
  cout<<"What is the number that you would like to convert to base 10 or 2? "<<endl;
  cin>>x;
  cout<<"What is the current base of this number (between 2 and 36)? "<<endl;
  cin>>n;
  digits(x,n,b);
  allDecimal(x,n,b);
  return valid = 0;
}
int main()
{
  int valid = 0;
  questions();
  while(valid==1)
  {
  questions();
  }
  return 0;
}

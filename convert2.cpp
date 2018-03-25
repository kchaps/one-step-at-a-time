#include<iostream>
#include<string>
using namespace std;


int digits(int x,int y, int q)
{
  int b = 0;
  int z = 0;
  while(x>=0)
    {
    b++;
    x = x * .1;
    if(x<=0)
     {
     cout<<"Number of digits: "<<b<<endl;
     return b;
     }
    } 
}

int allDecimal()
 {
  label:
  int n;
  int numNew;
  int valid;
  int valid1 = 0;
  int x;
  cout<<"What is the number that you would like to convert to base 10 or 2? "<<endl;
  cin>>x;
  cout<<"What is the current base of this number (between 2 and 36)? "<<endl;
  cin>>n;
  int b = digits(x,n,b);
    int binOrDecResp;
    cout<<"Would you like to convert to binary (base 2) or decimal (base 10)? *Please respond with (2 or 10)"<<endl;
    cin>>binOrDecResp;


    //x is number
    //b is length 
    //n is current base
    int i = 0; //counter to make sure all digits work with given base
//    cout<<"the first b is "<<b<<endl; //forcoder
    int o = 0;
    int *intPtr; 
    intPtr = &o;
    *intPtr = x;
    intPtr = &o;
    *intPtr = x;
//    cout<<"the x is "<<x<<endl; //forcoder
//    cout<<"the o is "<<o<<endl; //forcoder
    int f = 0;
//    cout<<"the f is "<<f<<endl; //forcoder
//    cout<<"the n is "<<n<<endl; //forcoder
    if(f<=n){
    if(n<10){
//        cout<<"the f2 is "<<f<<endl; //forcoder
//        cout<<"the o is "<<o<<endl; //forcoder

        for(int f; f<=n; f=0)
        {
        f= o % 10;
//        cout<<"the f3 is "<<f<<endl; //forcoder
       o = o / 10;
//        cout<<"the f4 is "<<f<<endl; //forcoder
//        cout<<"the o is "<<o<<endl; //forcoder
       if(f>=n)
        {goto label3;}
       else
        {goto label2;}
        label3:
        cout<<"Input invalid. Please enter new number and base. ";
        cout<<"What is the number that you would like to convert to base 10 or 2? "<<endl;
        cin>>x;
        cout<<"What is the current base of this number (between 2 and 36)? "<<endl;
        cin>>n;
        f = 0;
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
//                  cout<<"invalid f is " <<f<<endl;
//                  cout<<"invalid n is " <<n<<endl;
		  goto label;

                }
    	    else
     	      {
              goto label2;
              }
             }
         }


        
          }

   }
    else
{
    goto label2;
}
    label2: 
    
      int k = 0;
      int *intPtx; 
      intPtx = &k;
      *intPtx = n;
      intPtx = &k;
      *intPtx = n;
//    cout<<"first n is "<<n<<endl;  //for coder
//    cout<<"current b is "<<b<<endl;  //for coder
    int q = 0;
    if(b>=2){
     numNew +=(x%10);
     x = x/10; 
//    cout<<"current n is "<<n<<endl;  //for coder
//   cout<<"current numNew is "<<numNew<<endl;  //for coder
//    cout<<"current b is "<<b<<endl;  //for coder
    for(int q;b>0;q=q)
      {
   
      q = x%10;
//    cout<<"current q is "<<q<<endl;  //for coder
      if(q != 0)
      {
      numNew += ((q)*(n));
      x = x/10;
      n = n*k;
      }
      else{

       numNew += 0;
       x = x/10; 
       n = n*k; 
      }
//    cout<<"current n is "<<n<<endl;  //for coder
//    cout<<"current numNew is "<<numNew<<endl;  //for coder
//    cout<<"current b is "<<b<<endl;  //for coder
      b--;
      }

//    cout<<"current n is "<<n<<endl;  //for coder
//    cout<<"current k is "<<k<<endl;  //for coder
//    cout<<"current b is "<<b<<endl;  //for coder
      }
    else{
     numNew = x;
}

      int numNew2 = numNew;
        string r;
//    cout<<"current x is "<<x<<endl;  //for coder
//    cout<<"current numNew is "<<numNew<<endl;  //for coder
    while(numNew2!=0) 
      {
        r=(numNew2%2==0 ?"0":"1")+r; 
        numNew2/=2;
      }
   cout<<"binary= "<<r<<endl;  //for coder 
   cout<<"decimal= "<<numNew<<endl;  //for coder 
   if(binOrDecResp==2)
    {
    cout<<"The binary representation is "<<r<<endl;
    return 0;
    }
   else if(binOrDecResp==10)
    {
      cout<<"decimal version is "<<numNew<<endl;
      return 0;
    }
    else
     {
      cout<<"Input invalid."<<endl;
      goto label;
}
}
}

int main()
{
  allDecimal();
  return 0;
}

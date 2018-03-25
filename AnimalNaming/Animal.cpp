#include "Animal.h"
#include <iostream>
using namespace std;
void Animal::read()
{
  cout<<"What's this little fluffball called?"<<endl;
  cin>>m_name;
}
void Animal::display()
{
  cout<<m_name<<endl;
}
void Animal::setName(const char name[])
{
  int i = 0;
  while(name[i]!=0)
    {m_name[i] = name[i];
    i++;}
  m_name[i]=0;
}

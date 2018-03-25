#include "Rect.h"
#include <iostream>
using namespace std;
ostream & operator<<(ostream & out, Rect & r)
{
  out<<r.getWidth()<<"*"<<r.getLength()<<" = Area:"<<r.area()<<endl;
}

istream & operator<<(istream & in, Rect & r)
{
  int width,length;
  in>>width>>length;
  r.setWidth(width);
  r.setLength(length);
  return in;
}

void Rect::display()
{
  cout<<"Area is: "<<area()<<endl;
}

int Rect::area()
{
  return m_width * m_length;
}

int Rect::perim()
{
  return m_width * 2 + 2 * m_length;
}

Rect::Rect()
{
  m_width = 0;
  m_length = 0;
}

Rect::Rect(int width, int length)
{
  m_width = width;
  m_length = length;
}

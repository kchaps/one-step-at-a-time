#include <iostream>

class Rect
{
  public:
  //functions
  int area();
  int perim();
  //constructors
  Rect();
  Rect(int length, int width);
  void display();
  //set functions
  void setWidth(int width){m_width = width;}
  int getWidth() {return m_width;}
  void setLength(int length){m_length = length;}
  int getLength() {return m_length;}
  //data
  private: 
  int m_length, m_width;
};

//----Definition of operator<<()
std::ostream & operator<<(std::ostream & out, Rect & r);
std::istream & operator<<(std::istream & in, Rect & r);

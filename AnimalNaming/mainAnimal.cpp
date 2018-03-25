#include <iostream>
using namespace std;
#include "Animal.h"
int main()
{
  Animal a;
  a.setName("cat");
  a.display();
  a.read();
  a.display();
  return 0;
}

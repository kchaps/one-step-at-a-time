
const int MaxNameSize = 30;
class Animal
{
public: 
  void setName(const int name[]);
  void display();
  void read();
  //data
  char m_name[MaxNameSize];
};



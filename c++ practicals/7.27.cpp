#include<iostream>
using namespace std;

class Test1;
class Test2
{
private:
  int data;
public:
  Test2(){ data = 0; }
  Test2(int n)
  {
    data = n;
  }
  friend void greater_number(Test1,Test2);
};

class Test1
{
private:
  int data;
public:
  Test1(){ data = 0; }
  Test1(int n)
  {
    data = n;
  }
  friend void greater_number(Test1,Test2);
};

void greater_number(Test1 p1,Test2 p2)
{
  if(p1.data>p2.data)
  {
    std::cout << p1.data << " : is the greater number" << '\n';
  }
  else if (p2.data>p1.data)
  {
    std::cout << p2.data << " : is the greater number" << '\n';
  }
  else
  {
    std::cout << "Both the vales are same" << '\n';
  }
}

int main()
{
  Test1 t1(24);
  Test2 t2(37);

  greater_number(t1,t2);

  return 0;
}

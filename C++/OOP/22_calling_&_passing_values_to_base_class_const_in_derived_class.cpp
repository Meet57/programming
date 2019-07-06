#include<iostream>
#include<string>
using namespace std;

class Father
{
protected:
  int height;
public:
  Father()
  {
    cout << "father const called" <<endl;
    height = h;
  }
};

class Child : Father
{
public:
  Child(int x) : Father(x)
  {
    height = x;
    cout << "child:constructor" << endl;
  }
  void display()
  {
    cout << "height is " << height << endl;
  }
};

main()
{
  Child meet(62);
  meet.display();
}

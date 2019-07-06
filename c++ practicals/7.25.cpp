#include <iostream>
#include <string.h>

using namespace std;

class SHAPE
{
protected:
  double d1,d2;
public:
  void getdata()
  {
    cin >> d1;
    cin >> d2;
  }
  virtual double area()=0;
};

class TRIANGLE : public SHAPE
{
public:
  double area()
  {
    return (0.5*d1*d2);
  }
};

class RECTANGLE : public SHAPE
{
public:
  double area()
  {
    return (d1*d2);
  }
};

main()
{
  SHAPE *ptr;
  char op;
  std::cout << "Enter t for triangle or r for Rectangle:" << '\n';
  cin >> op;

  if(op=='t')
  {
    ptr = new TRIANGLE;
    std::cout << "Enter base and height of triangle:" << '\n';
  }
  else
  {
    ptr = new RECTANGLE;
    std::cout << "Enter lenght and bredth of rectangle:" << '\n';
  }

  ptr->getdata();
  std::cout << "Area:" << ptr->area() << '\n';
}

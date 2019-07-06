#include<iostream>
using namespace std;

class Human
{
public:
  Human()
  {
    cout << "contructor called" << endl;
  }
  ~Human()
  {
    cout << "destructor called" << endl;
  }
  void  display()
  {
    cout << "Pointer called the member of the class" <<endl;
  }
};

int main()
{
  Human *anil;
  anil = new Human();
  anil -> display();
  return 0;
}

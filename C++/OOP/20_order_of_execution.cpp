#include<iostream>
#include<string>
using namespace std;

class person
{
public:
  person()
  {
    cout << "constructor called" << endl;
  }
  ~person()
  {
    cout << "destructor called" << endl;
  }
};

class student : public person
{
public:
  student()
  {
    cout << "student contructor called" << endl;
  }
  ~student()
  {
    cout << "student destructor called" << endl;
  }
};

main()
{
  student meet;
}

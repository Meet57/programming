//same as practical 15
#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
  string name;
public:
  void setname(string iname)
  {
    name = iname;
  }
};

class Student : public Person
{
public:
  void display()
  {
    cout << name << endl;
  }
};

main()
{
  Student meet;
  meet.setname("Meet Patel");
  meet.display();
}

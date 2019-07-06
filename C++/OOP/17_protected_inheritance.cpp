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

class Student : protected Person
{
  void display()
  {
    cout << name << endl;
  }
  void setstudentname(string iname)
  {
    setname(iname);
  }
};

main()
{
  Student Meet;
  Meet.setstudentname("Meet Patel");
  Meet.display();
}

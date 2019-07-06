#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
  string name;
public:
  void setName(string iname)
  {
    name = iname;
  }
};

class Student : private Person
{
public:
  display()
  {
    cout << name << endl;
  }
  void Studentsetname(string iname)
  {
    setName(iname);
  }
};

class Gstudent : public Student
{
public:
  void setGstudent(string iname)
  {
    Studentsetname(iname);
  }
};

main()
{
  Gstudent anil;
  anil.setGstudent("Meet");
  anil.display();
}

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
  using Person :: name;
  display()
  {
    cout << name << endl;
  }
  void Studentsetname(string iname)
  {
    setName(iname);
  }
};

main()
{
  Student anil;
  anil.Studentsetname("anil");
  anil.display();
}

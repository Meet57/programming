#include<iostream>
#include<string>
using namespace std;

class person
{
protected:
  string  name;
public:
  void setname(string iname)
  {
    name = iname;
  }
};

class student : public person
{
public:
  void display()
  {
    cout << name << endl;
  }
};

main()
{
  student anil;

  anil.setname("anil");
  anil.display();
}

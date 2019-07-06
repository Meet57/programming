#include<iostream>
#include<string>
using namespace std;

class Human
{
  string name; // by default it is private
  int age;
public:
  Human(string iname,int iage)
  {
    name = iname;
    age = iage;
  }
  void tellme()
  {
    cout << "\n\nNot a friend function:\n" << name << endl << age << endl;
  }
  friend void display(Human man);
};

void display(Human man)
{
  cout << "\n\nfriend function:\n\n" << man.name << endl << man.age << endl;
}

main()
{
  Human anil("anil",16);
  anil.tellme();
  display(anil);
}

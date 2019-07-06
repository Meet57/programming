#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
  string name;
  int age;
public:
  Human(string n="no name",int a=0)
  {
    name = n;
    age = a;
    cout << "contructor is called: " << name << " " << age << endl;
  }
};

main()
{
  Human Meet("Meet",18);
  Human anil;
}

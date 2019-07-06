#include<iostream>
#include<string>
using namespace std;

class HumanBeing
{
public:
  string name; //name is a property

  void introduce() //introduce is a method
  {
    cout << "Hi, my name is " << name << endl;
  }
};

main()
{
  HumanBeing meet;
  meet.name = "Meet Patel";
  meet.introduce();
}

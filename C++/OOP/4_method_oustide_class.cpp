#include<iostream>
#include<string>
using namespace std;

class Human
{
public:
  string name = "No Name";
  void introduce();
};

void Human :: introduce()
{
  cout << "HI, this is " << Human::name << endl;
}

main()
{
  Human meet;
  meet.name = "Meet";
  meet.introduce();
}

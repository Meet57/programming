#include<iostream>
#include<string>
using namespace std;

class Father
{
public:
  int height;
  void askfather()
  {
    cout << "i am your father, ask me what you want" << endl;
  }
};

class Mother
{
public:
  string skincolor;;
  void askmother()
  {
    cout << "i am your mother, ask me what you want" << endl;
  }
};

class Child : public Father,public Mother
{
public:
  void askparents()
  {
    cout << "asking parents" << endl;
  }
  void set(string color,int heig)
  {
    skincolor = color;
    height = heig;
  }
  void display()
  {
    cout << "height is " << height << endl << "skin color " << skincolor << endl;
  }
};

main()
{
  Child meet;
  meet.set("white",62);
  meet.display();
  meet.askfather();
  meet.askmother();
  meet.askparents();
}

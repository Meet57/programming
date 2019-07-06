#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
  int age;
  string name;
public:
  Human()
  {
    cout << "default contructor" << endl;
    age = 0;
    name = "No Name";
  }
  Human(string in)
  {
    cout << "default contructor" << endl;
    age = 0;
    name = in;
  }
  Human(int ia)
  {
    cout << "default contructor" << endl;
    age =ia;
    name = "No Name";
  }
  Human(string in,int ia)
  {
    cout << "default contructor" << endl;
    age =ia;
    name = in;
  }
  void display()
  {
    cout << name << endl << age << endl;
  }
};

main()
{
  Human meet;
  meet.display();

  Human anil("anil",16);
  anil.display();

  Human andy(16);
  andy.display();
}

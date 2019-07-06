#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
  string *name;
  int *age;
public:
  Human(string an,int aa)
  {
    name = new string;
    age = new int;

    *name = an;
    *age = aa;
  }
  void display()
  {
    cout << "Hi i am " << *name << " my age is " << *age << endl;
  }
  ~Human()
  {
    delete name;
    delete age;
    cout << "all is clear" << endl;
  }
};

main()
{
  Human *anil = new Human("anil",24);
  anil->display();
  delete anil;
}

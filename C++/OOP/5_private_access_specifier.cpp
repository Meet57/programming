#include<iostream>
using namespace std;

class Human
{
private:
  int age;
public:
  void displayage()
  {
    cout << age-5 << endl;
  }
  void setage(int value)
  {
    age = value;
  }
};

main()
{
  Human anil;
  anil.setage(24);
  anil.displayage();
}

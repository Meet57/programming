#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
  string name;
  int age;
public:
  Human(string n,int a)
  {
    name = n;
    age = a;
    cout << "contructor is called: " << name << " " << age << endl;
  }
};

main()
{
  Human anil("Meet",18);
}

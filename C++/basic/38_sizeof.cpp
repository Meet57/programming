#include<iostream>
using namespace std;

struct student
{
  int roll;
  string name;
  char sex;
};

main()
{
  int age;

  cout << "int ->>" << sizeof(age) << endl;
  cout << "short int ->>" << sizeof(short int) << endl;
  cout << "char ->>" << sizeof(char) << endl;
  cout << "float ->>" << sizeof(float) << endl;
  cout << "student struct ->>" << sizeof(student) << endl;

}

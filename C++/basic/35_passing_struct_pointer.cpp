#include<iostream>
using namespace std;

struct student
{
  int rollno;
  char sex;
  int age;
};

void display(student s);
void show(student *s);

main()
{
  student anil = {1234,'M',18};
  display(anil);
  cout << endl;
  show(&anil);

}

void display(student s)
{
  std::cout << s.rollno << '\n';
  std::cout << s.sex << '\n';
  std::cout << s.age << '\n';
}

void show(student *s) // s = &anil
{
  std::cout << s->rollno << '\n';
  std::cout << s->sex << '\n';
  std::cout << s->age << '\n';
}

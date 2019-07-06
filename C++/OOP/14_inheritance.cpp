#include<iostream>
#include<string>
using namespace std;

//Base class
class person
{
public:
  string name;
  int age;

  void setname(string iname){name = iname;}
  void setage(int iage){age = iage;}
};

//Sub-class
class student : public person  //student is a sub_set of person
{
public:
  int id;
  void setid(int iid){id = iid;}

  void introduce()
  {
    cout << name << endl << age << endl << id << endl;
  }
};

main()
{
  student meet;
  meet.setname("Meet Patel");
  meet.setage(18);
  meet.setid(30099);

  meet.introduce();
}

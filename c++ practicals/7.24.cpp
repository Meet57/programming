#include<iostream>
#include<string.h>
using namespace std;

class Student
{
protected:
  string name;
  int roll;
public:
  void getdata()
  {
    cout << "Enter name of the student : ";
    cin >> name;
    cout << "Enter roll number : ";
    cin >> roll;
  }
};

class Exam : public Student
{
protected:
  int marks[6];
public:
  void setmarks()
  {
    cout << "Enter Marks of 6 subjects -> " << endl << endl ;
    for(int i ; i<6 ; i++)
    {
      cout << "Subject " << i+1 << " : ";
      cin >> marks[i];
    }
  }
};

class Result : public Exam
{
protected:
  int totalmarks;
public:
  void getdata_m()
  {
    getdata();
    setmarks();
    totalmarks = 0;
    for(int i=0;i<6;i++)
    {
      totalmarks = totalmarks + marks[i];
    }
  }
  void display()
  {
    cout << endl << endl << "Details of the students : " << endl << endl;
    cout
    << "Name : " << name << endl
    << "Roll Number : " << roll << endl
    << "Total Marks : " << totalmarks << endl;
  }
};

main()
{
  Result r;
  r.getdata_m();
  r.display();
}

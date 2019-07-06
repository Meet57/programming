#include<iostream>
using namespace std;

struct student
{
  int rollno;
  char sex;
};

main()
{
  student meet;
  student *meet_ptr;

  meet_ptr = &meet;

  meet.rollno = 1;
  meet_ptr->sex = 'M';

  cout << meet_ptr->rollno << endl << meet_ptr->sex <<endl ;
  cout << meet.rollno << endl << meet.sex <<endl ;

}

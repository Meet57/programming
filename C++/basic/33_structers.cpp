#include<iostream>
using namespace std;

struct student
{
  int rollno;
  char sex;
}meet,utsav; //global_variables

main()
{
  student iti = {3,'F'}; //local_variables

  meet.rollno = 1;
  meet.sex = 'M';

  utsav.rollno = 1;
  utsav.sex = 'M';

  cout << meet.rollno << endl << meet.sex << endl;
}

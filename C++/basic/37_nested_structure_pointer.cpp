#include<iostream>
#include<string>
using namespace std;

struct address
{
  int house_no;
  string street_name;
};

struct student
{
  string Name;
  int  roll_no;
  address *addr;
};

main()
{
  student meet;
  student *ptr;

  ptr = &meet;

  address adr = {33,"jalaram scoiety"};

  ptr -> addr = &adr;

  ptr -> Name = "Meet";
  ptr -> roll_no = 30099;

  cout << ptr->Name <<endl;
  cout << ptr->addr->house_no <<endl;
}

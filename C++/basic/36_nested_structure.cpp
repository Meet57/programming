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
  address addr;
};

main()
{
  student anil;
  anil.Name = "Meet";
  anil.roll_no =1234;
  anil.addr.house_no = 64;
  anil.addr.street_name = "Visat circle";

  cout << anil.Name << endl << anil.addr.house_no << endl;

}

#include<iostream>
using namespace std;

union emp
{
  int id;
  float salary;
}meet;

main()
{
  emp anil;

  anil.id =25;
  anil.salary = 23.23;

  cout << anil.id <<endl; // this value will be lost
  cout << anil.salary << endl; // last value will be stored
}

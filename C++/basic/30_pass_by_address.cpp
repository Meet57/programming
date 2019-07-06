#include<iostream>
using namespace std;

void display(int *);

main()
{
  int age = 24;

  display(&age);
  cout << age <<endl;
  
}

void display(int *ptr)
{
  cout << *ptr << endl;
  *ptr = 100;
}

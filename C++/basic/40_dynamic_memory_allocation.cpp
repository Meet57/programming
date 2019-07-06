#include<iostream>
using namespace std;

main()
{
  // New datatype ---> syntax
  int *pointer;
  pointer = new int;

  *pointer = 24;

  cout << *pointer << endl;

  delete pointer;
}

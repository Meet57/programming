#include<iostream>
using namespace std;

main()
{
  int age = 24;
  bool human =  true;

  int *age_ptr;
  bool *human_ptr;

  age_ptr = &age; //giving pointers the address of the variables
  human_ptr = &human;

  cout << age << "-->" << age_ptr << "<--" << *age_ptr << endl;
  cout << human << "-->" << human_ptr << "<--" << *human_ptr << endl;

  return 0;
}

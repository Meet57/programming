#include<iostream>
using namespace std;

main()
{
  int numbers[5] = {42,23,34,45,67};

  cout << *numbers << endl ; //42
  cout << *(numbers+2) << endl ; //34
}

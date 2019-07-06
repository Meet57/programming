#include<iostream>
using namespace std;

void display(const int *start,const int *end);

main()
{
  int numbers[] = {1,2,3,4,5,6,7,8,9};
  display(numbers,numbers+9);
}

void display(const int *start,const int *end)
{
  const int *ptr;
  for(ptr = start ; ptr != end;ptr++)
  {
  cout << *ptr << endl;
  }
}

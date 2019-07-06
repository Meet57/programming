#include<iostream>
using namespace std;

main()
{
  int *pointer = NULL;

  pointer = new int;

  if (pointer!=NULL)
  {
    *pointer = 10;
    cout << *pointer <<endl;
    delete pointer;
  }
  else
  {
    cout << "DMA failed";
  }
}

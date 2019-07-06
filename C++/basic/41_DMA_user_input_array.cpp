#include<iostream>
using namespace std;

main()
{
  int *pointer = NULL;
  int input;

  cout << "how many items you a want to enter:" << endl;
  cin >> input;

  pointer = new int[input];

  int temp;

  for(int counter=0;counter<input;counter++)
  {
    cout << "Enter the item " << counter+1 << endl;
    cin >> temp;
    *(pointer+counter) = temp;
  }

  cout << "the items you have entered are" << endl;

  for(int counter=0;counter<input;counter++)
  {
    cout << counter+1 << " item is:" << *(pointer+counter) << endl;
  }

  delete []pointer;

}

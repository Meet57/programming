#include<iostream>
using namespace std;

void show(int [],int);

main()
{
  int numbers[5] = {12,23,34,45,56};
  int lenght = 5;

  show(numbers,lenght);
}

void show(int numbers[],int lenght)
{
  for(int counter=0;counter<lenght;counter++)
  {
    cout << numbers[counter] << endl;
  }
}

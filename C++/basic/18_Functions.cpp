#include<iostream>
using namespace std;

void  display(); //funtion declaration

main()
{
  display();
  display(); // function call
  display();

  return 0;
}

void  display() //funtion defination
{
  cout << "Hello world !!!" << endl;
}

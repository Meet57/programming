#include<iostream>
using namespace std;

int  display(int,int); //funtion declaration

main()
{
  int result;
  result = display(20,30);

  cout << "a + b = " << result << endl;

  return 0;
}

int  display(int a,int b) //funtion defination
{
  cout << a << endl << b << endl;
  return a+b;
}

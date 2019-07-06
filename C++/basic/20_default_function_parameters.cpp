#include<iostream>
using namespace std;

void display(int x=0,int y=0,int z=0)
{
  cout << "x ix " << x << endl;
  cout << "y ix " << y << endl;
  cout << "z ix " << z << endl;
}

main()
{
  display(20,30,40);
  printf("\n");
  display(20,30);
  printf("\n");
  display();
  return 0;
}

#include<iostream>
using namespace std;

void  display();

main()
{
  display();
  display();
  display();
  display();
}

void  display()
{
  static int counter = 0;
  cout << "called:" << ++counter << endl;

}

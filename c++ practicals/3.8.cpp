#include<iostream>
using namespace std;

inline int mult(int a,int b)
{
  return a*b;
}

inline int add(int a,int b)
{
  return a+b;
}

main()
{
  int a,b;
  cout << "Enter A and B:" << endl;
  cin >> a >> b;

  cout << "Mult:" << mult(a,b) << endl;
  cout << "Add :" << add(a,b) << endl;
}

#include<iostream>
using namespace std;

int fatorial(int n);

main()
{
  int a;
  cout << "Enter any number:";
  cin >> a;
  cout << fatorial(a) << endl;
}

int fatorial(int n)
{
  if(n==1)
    {return 1;}
  else
    {return (n * fatorial(n-1));}
}

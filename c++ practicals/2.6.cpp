#include<iostream>
using namespace std;

int main()
{
  int i,j,a;

  cout << "Check prime:";
  cin >> a;

  j=0;

  for(i=1;i<=a;i++)
  {
    if(a%i==0)
    {
      j++;
    }
  }

  if(j==2)
  {
    cout << "It is a prime number." << endl;
  }
  else
  {
    cout << "It is a not prime number." << endl;
  }
  return 0;
}

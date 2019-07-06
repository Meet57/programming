#include<iostream>
using namespace std;

bool check(int);

main()
{
  int a;
  cout << "Enter your age: " << endl;
  cin >> a;

  if (check(a))
  {
    std::cout << "You Are adult" << '\n';
  }
  else
  {
    std::cout << "You Are Kid" << '\n';
  }

  return 0;
}

bool check(int age)
{
  if(age >= 18)
  {
    return true;
  }
  else
  {
    return false;
  }
}

#include<iostream>
using namespace std;

int absolute(int x)
{
  if (x < 0)
    return -x;
  else
    return x;
}

double absolute(double x)
{
  if (x < 0)
    return -x;
  else
    return x;
}

float absolute(float x)
{
  if (x < 0)
    return -x;
  else
    return x;
}

main()
{
  cout << "Int:" <<absolute(-5) << endl;
  cout << "Double:" <<absolute(25.6) << endl;
  cout << "Float:" <<absolute(-12.5f) << endl;
}

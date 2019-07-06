#include <iostream>
using namespace std;

int main()
{
  int a,b;
  cin >> a >> b;

  try
  {
    if(b!=0)
    {
      cout << a/b;
    }
    else
    {
      throw(b);
    }
  }
  catch(int x)
  {
    cout << "Exception caught " << x;
  }

  return 0;
}

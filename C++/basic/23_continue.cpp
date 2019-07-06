#include<iostream>
using namespace std;

main()
{
  for (int counter = 0; counter <= 10; counter++)
  {
    if (counter == 6)
    {
      continue;
    }
    cout << counter << endl;
  }

  return 0;
}

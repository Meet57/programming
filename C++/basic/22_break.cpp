#include<iostream>
using namespace std;

main()
{
  for (int counter = 0; counter <= 10; counter++)
  {
    cout << counter << endl;
    if (counter == 6)
    {
      break;
    }
  }

  return 0;
}

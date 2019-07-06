#include<iostream>
using namespace std;

main()
{
  int i;

  cin >> i ;

  switch(i)
  {
    case 1 ... 99:
      cout << "Value is bw 1 - 99";
      break;
    case 100 ... 199:
      cout << "Value is bw 100 -199";
      break;
    default:
      cout:
      cout << "error";
      break;
  }

  return 0;
}

#include<iostream>
using namespace std;

main()
{
  int marks[2][6] = {{34,45,67,89,12,34},
                     {12,34,56,78,90,12}};

  for(int i=0;i<=1;i++)
  {
    for(int j=0;j<=5;j++)
    {
      cout << marks[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}

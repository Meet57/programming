#include<iostream>
using namespace std;

main()
{
  int num[100],i,max,n;
  cout << "how many numbers you want to enter:" << endl;
  cin >> n;
  cout << "Enter your numbers:" << endl;

  for(i=0;i<n;i++)
  {
    cin >> num[i];
    if(i==0)
    {
      max = num[i];
    }
    if(num[i]>max)
    {
      max = num[i];
    }
  }
  cout << "Maximun number in the array is: " << max <<endl;
}

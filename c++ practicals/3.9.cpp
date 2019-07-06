#include<iostream>
#include<math.h>
using namespace std;

double func(double a,double b=2)
{
  return (pow(a,b));
}

main()
{
  double m,n;
  cout << "Base:";  cin >> m;
  cout << "Power:";  cin >> n;

  cout << "Anser is :" << func(m,n) << endl << func(m);

}

#include <iostream>
using namespace std;

main()
{
   int a = 21;
   int b = 10;
   int c ;

   cout << "A = " << a << endl << "B = " << b << endl << endl ;

   c = a + b;
   cout << "c = a + b :" << c << endl ;

   c = a - b;
   cout << "c = a - b :" << c << endl;

   c = a * b;
   cout << "c = a * b :" << c << endl ;

   c = a / b;
   cout << "c = a / b  :" << c << endl ;

   c = a % b;
   cout << "c = a % b  :" << c << endl ;

   c = a++;
   cout << "c = a++ :" << c << endl ;

   c = a--;
   cout << "c = a--  :" << c << endl ;

   return 0;
}

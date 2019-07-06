#include <iostream>

using namespace std;

class b;
class a
{
    int a1;
public:
    a(int c)
    {
        a1 = c;
    }
    friend int add(a t1,b t2);
};

class b
{
    int b1;
public:
    b(int c)
    {
        b1 = c;
    }
    friend int add(a t1,b t2);
};

int add(a t1,b t2)
{
    return(t1.a1 + t2.b1);
}

int main()
{
    a a1(5);
    b b1(9);

    int sum;
    sum = add(a1,b1);

    cout << "sum is : " << sum ;

    return 0;
}

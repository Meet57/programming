#include <iostream>
using namespace std;

int seq_Search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
        if(a[i]==x)
            return i;

    return -1;
}

main()
{
    int a[] = {11,22,33,44,55,66,77,88,99,111,222,333,444};
    int n = sizeof(a)/sizeof(*a);
    int x = 99;

    int result = seq_Search(a,n,x);

    cout << "Result : " << result ;
}

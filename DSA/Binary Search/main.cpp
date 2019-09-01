#include<iostream>
using namespace std;

int binarySort(int a[],int low,int high,int value)
{
    if(high>=1)
    {
        int mid = (low + high)/2;

        if(a[mid]==value)
            return mid;

        if(a[mid]>value)
            return binarySort(a,0,mid-1,value);

        if(a[mid]<value)
            return binarySort(a,mid+1,high,value);
    }
    else
    {
        return -1;
    }
}

main()
{
    int a[] = {11,22,33,44,55,66,77,88,99,111,222,333,444};
    int n = sizeof(a)/sizeof(*a);
    int x = 9;

    int result = binarySort(a,0,n-1,x);

    cout << "Position of the Required Element : " << result << endl;
}

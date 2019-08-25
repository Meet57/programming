#include <iostream>
using namespace std;

void swap(int *x,int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

void BubbleSort(int arr[],int n)
{
    int i,j,key;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

main()
{
    int a[] = {33,65,11,88,23,97,56};
    int n = sizeof(a)/sizeof(*a);

    cout << "Before Sorted : " << endl;
    print(a,n);

    BubbleSort(a,n);
    cout << endl << endl << "After Sorted : " << endl;
    print(a,n);

}

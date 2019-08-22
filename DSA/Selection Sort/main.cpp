#include <iostream>
using namespace std;

void swap(int *x,int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

void SelectionSort(int arr[],int n)
{
    int i,j,min_idx;

    for(i=0;i<n-1;i++)
    {
        min_idx = i;
        for(j=i;j<n;j++)
        {
            if(arr[min_idx]>arr[j])
            {
                min_idx = j;
            }
        }
        swap(&arr[min_idx],&arr[i]);
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

main()
{
    int a[] = {33,65,11,88,23,97,56};
    int n;
    n = sizeof(a)/sizeof(*a);

    cout << "Before Sort : " << endl;
    print(a,n);
    SelectionSort(a,n);

    cout << endl << endl << "After Sort : " << endl;
    print(a,n);
}

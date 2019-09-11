#include<iostream>
using namespace std;

void Print(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
}

void merge(int a[],int l,int m,int r)
{

}

void mergeSort(int a[],int l,int r)
{
    if(l<r)
    {
        int m = (l+r)/2;

        mergeSort(a,l,m);
        mergeSort(a,m+1,r);

        merge(a,l,m,r);
    }
}

main()
{
    int arr[] = {10,16,9,5,8,12,15,6,3,};
    int n = sizeof(arr)/sizeof(*arr);

    Print(arr,n);

    mergeSort(arr,0,n-1);
}

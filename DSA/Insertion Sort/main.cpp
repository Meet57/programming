#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key = arr[i];
        j = i-1;

        while(j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1]=key;
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
    int arr[] = {33,65,11,88,23,97,56};
    int n = sizeof(arr)/sizeof(*arr);

    cout << "Before sort : " << endl;
    print(arr,n);

    insertionSort(arr,n);
    cout << endl << endl << "After sort : " << endl;
    print(arr,n);
}

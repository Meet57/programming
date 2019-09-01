#include <iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a = *b;
    *b = temp;
}

int Partition(int arr[],int low,int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for(int j=low;j<=high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi = Partition(arr,low,high);

        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

main()
{
    int arr[] = {10,16,9,5,8,12,15,6,3,};
    int n = sizeof(arr)/sizeof(*arr);

    cout << "Before Sort : " << endl;
    print(arr,n);

    quickSort(arr,0,n-1);

    cout << endl << endl << "After Sort : " << endl;
    print(arr,n);
}

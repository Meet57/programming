#include <iostream>
using namespace std;

class Data
{
protected:
    int a[100],n,i,j,temp,top=(-1);
public:
    void Display()
    {
        cout << "Your array is : " << endl;
        for(i=0;i<=top;i++)
        {
            cout << a[i] << endl;
        }
    }
    void rsort()
    {
        if(top>(-1))
        {
            for(i=top; i>=0; i--)
            {
                for(j=i-1;j>=0;j--)
                {
                    if(a[j] < a[i])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            cout << "Array sorted " << endl;
        }
        else
        {
            cout << "Array underflow" << endl;
        }
    }
    void sort()
    {
        if(top>(-1))
        {
            for(i=0; i<=top; i++)
            {
                for(j=i+1; j<=top; j++)
                {
                    if(a[j] < a[i])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            cout << "Array sorted " << endl;
        }
        else
        {
            cout << "Array underflow" << endl;
        }
    }
    //Insert
    void insertlast()
    {
        if(top<=100)
        {
            top =  top + 1;
            cout << "Enter the value you want to enter at last : ";
            cin >> temp;
            a[top] = temp;
        }
        else
        {
            cout << "Array overflow" << endl;
        }
    }
    void inserti()
    {
        cout << "Enter the position you want to enter value : ";
        cin >> n;

        if(n<=top)
        {
            cout << "Enter value : ";
            cin >> temp;
            for(i=top;i>=n;i--)
            {
                a[i+1] = a[i];
            }
            a[n] = temp;
            top = top + 1;
        }
        else
        {
            cout << "Position doesn't exist" << endl;
        }
    }

    //Delete
    void deletelast()
    {
        if(top > (-1))
        {
            top = top - 1;
        }
        else
        {
            cout << "Array underflow" << endl;
        }
    }
    void deletei()
    {
        cout << "Enter the position you want to delete value : ";
        cin >> n;

        if(n<=top)
        {
            for(i=n;i<=top;i++)
            {
                a[i] = a[i+1];
            }
            top = top - 1;
        }
        else
        {
            cout << "Position doesn't exist" << endl;
        }
    }
    void deletespecific()
    {
        cout << "Enter the value you want to delete : ";
        cin>>temp;

        n=0;
        for(i=0;i<=top;i++)
        {
            if(a[i]==temp)
            {
                for(j=i;j<=top;j++)
                {
                    a[j] = a[j+1];
                    n = n+1;
                    top = top - 1;
                }
            }
        }
        if(n==0)
        {
            cout << "The value Doesn't exist" << endl;
        }
    }
};


main()
{
    Data arr;
    int choice=0;

    while(choice!=100)
    {
        cout << "-------- Array Operations ---------" << endl;
        cout << "0. Display Array" << endl;
        cout << "1. Enter element at last" << endl;
        cout << "2. Delete element at last" << endl;
        cout << "3. Insert at ith position" << endl;
        cout << "4. Delete at ith postion" << endl;
        cout << "5. Delete specific value" << endl;
        cout << "6. Sort" << endl;
        cout << "7. Reverse sort" << endl;

        cout << endl << "Enter your choice : ";
        cin >> choice;
        switch(choice)
        {
        case 0:
            arr.Display();
            break;
        case 1:
            arr.insertlast();
            break;
        case 2:
            arr.deletelast();
            break;
        case 3:
            arr.inserti();
            break;
        case 4:
            arr.deletei();
            break;
        case 5:
            arr.deletespecific();
            break;
        case 6:
            arr.sort();
            break;
        case 7:
            arr.rsort();
            break;
        case 100:
            cout << "Thank you !" << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
        cout << "-----------------------------------" << endl;
    }
}

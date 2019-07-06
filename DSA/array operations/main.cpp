#include <iostream>
using namespace std;

class Data
{
protected:
    int a[100],n,i,temp,top=(-1);
public:
    void Display()
    {
        cout << "Your array is : " << endl;
        for(i=0;i<=top;i++)
        {
            cout << a[i] << endl;
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
        case 100:
            cout << "Thank you !" << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
        cout << "-----------------------------------" << endl;
    }
}

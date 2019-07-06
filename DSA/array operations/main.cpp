#include<iostream>
using namespace std;

class Array
{
    int a[100],top=-1,n,temp;
public:
    void array_formation()
    {
        cout << "Enter the number of elements you want to enter in Array : ";
        cin >> n;
        cout << "Enter your array values : " << endl;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            top = i;
        }
    }
    void Display()
    {
        cout << endl << "Your array is : " << endl;
        for(int i=0;i<=top;i++)
        {
            cout << "-------------------" << endl;
            cout << "|\t" << a[i] << "\t|" << endl;
            cout << "-------------------" << endl;
        }
    }
    void Insert()
    {
        cout << "Enter the position you want to enter new element : " << endl;
        cin >> n;
        cout << "Enter your new value : " << endl;
        cin >> temp;
        for(int i=top;i>(n-1);i--)
        {
            a[i+1] = a[i];
        }
        a[n] = temp;
        top = top + 1;
    }
    void Delete()
    {
        cout << "Enter the position you want to delete : " << endl;
        cin >> n;
        for(int i=n;i<top;i++)
        {
            a[i] = a[i+1];
        }
        top = top - 1;
    }
    void InsertFirst()
    {
        for(int i=top;i>(-1);i--)
        {
            a[i+1] = a[i];
        }
        cout << "Enter the value you want to add at first : " << endl;
        cin >> temp;
        a[0] = temp;
        top = top + 1;
    }
    void InsertLast()
    {
        top = top + 1;
        cout << "Enter the value you want to insert at last : " << endl;
        cin >> temp;
        a[top] = temp;
    }
};

main()
{
    Array ar;
    int choice=0;

    ar.array_formation();
    while(choice !=7)
    {
        cout << endl << endl << "----- Stack -----" << endl;
        cout << "0. Display array" << endl;
        cout << "1. Insert element at ith position" << endl;
        cout << "2. Delete element at ith position" << endl;
        cout << "3. Insert after key" << endl;
        cout << "4. Insert before key" << endl;
        cout << "5. Insert first" << endl;
        cout << "6. Insert last" << endl;
        cout << "7. Exit" << endl;
        cout << endl << "Enter your choice : " << endl;

        cin >> choice;
        switch(choice)
        {
        case 0:
            ar.Display();
            break;
        case 1:
            ar.Insert();
            break;
        case 2:
            ar.Delete();
            break;
        case 5:
            ar.InsertFirst();
            break;
        case 6:
            ar.InsertLast();
            break;
        case 7:
            cout << "Thank you !!!" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }

        cout << endl <<  "------------------------------------" << endl;
    }
}

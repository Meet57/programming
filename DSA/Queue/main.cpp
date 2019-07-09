#include <iostream>
using namespace std;

class Queue
{
    int a[100],front=0,rear=(-1),i,temp;
public:
    void insert()
    {
        if(rear<100)
        {
            rear = rear + 1;
            cout << "Enter the value you want to insert : ";
            cin >> temp;
            a[rear] = temp;
        }
        else
        {
            cout << "Queue overflow" << endl;
        }
    }
    void pop()
    {
        if(rear>=front)
        {
            cout << a[front]<< endl;
            for(int i=0;i<rear;i++)
            {
                a[i] = a[i+1];
            }
            rear = rear - 1;
        }
        else
        {
            cout << "Queue underflow" << endl;
        }
    }
    void display()
    {
        if(rear>front)
        {
            cout << "Your queue is :" << endl;
            for(int i=0;i<=rear;i++)
            {
                cout << a[i] << endl;
            }
        }
        else
        {
            cout << "Queue underflow" << endl;
        }
    }
};

main()
{
    Queue qu;
    int choice;
    choice = 0;

    while(choice!=4)
    {
        cout << endl << "-------Queue-------" << endl;
        cout << "1. Enter value in Queue." << endl;
        cout << "2. Pop value from Queue." << endl;
        cout << "3. Display queue." << endl;
        cout << "4. Exit." << endl;
        cout << endl << "Enter your choice : ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            qu.insert();
            break;
        case 2:
            qu.pop();
            break;
        case 3:
            qu.display();
            break;
        case 4:
            break;
        default:
            cout << "Invalid operation" << endl;
            break;
        }
        cout << "----------------------------------------" << endl;
    }
    cout << "Thank you !" << endl;
}

#include <iostream>
using namespace std;

class Queue
{
    int a[5],n,front=(-1),rear=(-1),size=5,i;
public:
    void enqueue()
    {
        if((front==0 && rear==(size-1)) || (front == rear+1) )
        {
            cout << endl << "Queue Overflow !" << endl;
            return;
        }
        else if(rear == (-1))
        {
            front++;
            rear++;
        }
        else if(rear==4 && front > size)
        {
            rear=0;
        }
        else
        {
            rear++;
        }
        cout << "Enter the value you want to insert : ";
        cin >> a[rear];
    }
    void dequeue()
    {
        if(front==(-1))
        {
            cout << "Queue Underflow !";
        }
        else if(front == rear)
        {
            cout << endl << a[front] << " is deleted !" << endl;
            front = -1;
            rear = -1;
        }
        else
        {
            cout << endl << a[front] << " is deleted !" << endl;
            front++;
        }
    }
    void display()
    {
        if(front>rear)
        {
            for(i=front;i<size;i++)
            {
                cout << a[i] <<endl;
            }
            for(i=rear;i<front;i++)
            {
                cout << a[i] << endl;
            }
        }
        else
        {
            for(i=front;i<=rear;i++)
            {
                cout << a[i] << endl;
            }
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
        cout << "2. dequeue value from Queue." << endl;
        cout << "3. Display queue." << endl;
        cout << "4. Exit." << endl;
        cout << endl << "Enter your choice : ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            qu.enqueue();
            break;
        case 2:
            qu.dequeue();
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


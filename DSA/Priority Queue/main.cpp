#include <iostream>
using namespace std;

#define n 5

class Queue
{
    int a[5],temp,i,j,rear=(-1),front=(-1);
public:
    void enqueue()
    {
        rear++;
        if(rear<n)
        {
            if(rear==0)
            {
                front++;
            }
            cout << "Enter the value : ";
            cin >> temp;
            for(i=0;i<=rear;i++)
            {
                if(temp<a[i])
                {
                    for(j=rear;j>i;j--)
                    {
                        a[j] = a[j-1];
                    }
                    a[i] = temp;
                }
                else
                {
                    a[rear] = temp;
                }
            }
        }
        else
        {
            cout << "Queue Overflow" << endl;
        }
    }
    void dequeue()
    {
        if(rear<front)
        {
            cout << "Queue Underflow " << endl;
        }
        else
        {
            cout << "Deleted Element from the queue is " << a[front] << endl;
            front++;
        }
    }
    void display()
    {
        if(rear<front)
        {
            cout << "Queue us Empty" << endl;
        }
        else
        {
            cout << "Your Queue is : " << endl;
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
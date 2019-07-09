#include<iostream>
using namespace std;

class Queue
{
    int a[5],
};

main()
{
    Queue qu;
    int choice=9;

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


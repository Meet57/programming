#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
};

void insert(int x)
{
    if(head==NULL)
    {
        ptr = new list;
        head = ptr;
    }
    else
    {
        ptr->next = new list;
        ptr = ptr->next;
    }
    ptr->data = x;
    ptr->next = NULL;
}

void display()
{
    struct list *pr;
    pr = head;
    cout <<  endl;
    if(pr==NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        while (pr != NULL)
        {
            cout<< pr->data <<" ";
            pr = pr->next;
        }
    }
}

main()
{
    int choice=0,d,n;
    while(choice!=9)
    {
        cout << endl << endl << "-----Linked List-----" << endl;
        cout << "0. Display" << endl;
        cout << "1. Insert Value" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 0:
                display();
                break;
            case 1:
                cout << "Enter the value you want to insert : ";
                cin >> d;
                insert(d);
                break;
            case 2:
                delete();
                break;
        }
    }
}

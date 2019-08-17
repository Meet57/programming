#include <iostream>
using namespace std;

struct list
{
    int data;
    list *right=NULL;
    list *left=NULL;
};

list *head=NULL,*temp,*prev,*last;

void insert(int x)
{
    last = new list;
    last->data = x;
    last->left = last->right = NULL;
    head = last;
}

void insertr(int x)
{
    if(head==NULL)
    {
        insert(x);
    }
    else
    {
        temp = new list;
        temp->data = x;
        last->right = temp;
        temp->left = last;
        last = temp;
    }
}

void insertl(int x)
{
    if(head==NULL)
    {
        insert(x);
    }
    else
    {
        temp = new list;
        temp->data = x;
        temp->right = head;
        head->left = temp;
        head = temp;
    }
}

void del(int x)
{
    if(head==NULL)
    {
        cout << "List underflow" << endl;
    }
    else
    {
        temp = last;
        if(temp!=NULL && temp->data==x)
        {
            last = temp->left;
            last->right = NULL;
            delete temp;
            return;
        }
        temp = head;
        if(temp!=NULL && temp->data==x)
        {
            head = temp->right;
            delete temp;
            head->left = NULL;
            return;
        }
        temp = temp->right;
        while(temp!=NULL)
        {
            if(temp->data==x)
            {
                temp->left->right = temp->right;
                temp->right->left = temp->left;
                delete temp;
                last = head;
                while(last!=NULL)
                {
                    last = last->right;
                }
                return;
            }
            temp = temp->right;
        }
    }
}

void display()
{
    if(head==NULL)
    {
        cout << "List underflow" << endl;
    }
    else
    {
        temp = head;
        while(temp!=NULL)
        {
            cout << temp->data << " ";
            temp = temp->right;
        }
    }
}

main()
{
    int choice=0,d;

    while(choice!=4)
    {
        cout << endl << endl << "-----Doubly Linked List-----" << endl;
        cout << "0. Display" << endl;
        cout << "1. Insert Right" << endl;
        cout << "2. Insert Left" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Exit" << endl;

        cout << endl << "Enter your choice : ";
        cin >> choice;

        switch(choice)
        {
        case 0:
            display();
            break;
        case 1:
            cout << "Value : " ;
            cin >> d;
            insertr(d);
            break;
        case 2:
            cout << "Value : " ;
            cin >> d;
            insertl(d);
            break;
        case 3:
            cout << "Delete Value : ";
            cin >> d;
            del(d);
            break;
        case 4:
            break;
        default:
            cout << "Invalid Choice !!! " << endl;
        }
    }
}

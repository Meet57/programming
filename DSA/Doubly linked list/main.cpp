#include <iostream>
using namespace std;

struct list
{
    int data;
    list *right;
    list *left;
};

list *L=NULL,*R=NULL,*temp,*prev,*next;

void insert(int x)
{
    temp = new list;
    temp->data = x;
    R = L = temp;
    temp->right = temp->left = NULL;
}

void insertl(int x)
{
    if(L==NULL && R==NULL)
    {
        insert(x);
        return;
    }
    else
    {
        prev = L;
        temp = new list;
        L = temp;
        prev->left = temp;
        temp->right = prev;
    }
    temp->data = x;
    temp->left = NULL;
}

void insertr(int x)
{
    if(L==NULL && R==NULL)
    {
        insert(x);
        return;
    }
    else
    {
        prev = R;
        temp = new list;
        R = temp;
        prev->right = temp;
        temp->left = prev;
    }
    temp->data = x;
    temp->right = NULL;
}

void del(int x)
{
    if(L==NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        temp = L;
        if(temp!=NULL && temp->data==x)
        {
            L = temp->right;
            delete temp;
            return;
        }

        prev = temp;
        temp = temp->right;

        while(temp!=NULL)
        {
            if(temp->data==x)
            {
                next = temp->right;
                prev->right = next;
                next->left = prev;
                delete temp;
            }
            prev = temp;
            temp = temp->right;
        }
    }
}

void display()
{
    if(L==NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        temp = L;
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

    while(choice!=99)
    {
        cout << endl << endl << "-----Doubly Linked List-----" << endl;
        cout << "0. Display" << endl;
        cout << "1. Insert Right" << endl;
        cout << "2. Insert Left" << endl;
        cout << "3. Delete" << endl;

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
            cout << "Delete Value";
            cin >> d;
            del(d);
        default:
            cout << "Invalid Choice !!! " << endl;
        }
    }
}

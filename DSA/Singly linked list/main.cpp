#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
};

list *head=NULL;
list *ptr=NULL;
list *pr,*temp,*prev;

void insert(int x)
{
    if(head==NULL)
    {
        ptr = new list;
        head = ptr;
    }
    else
    {
        ptr = head;
        while(ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new list;
        ptr = ptr->next;
    }
    ptr->data = x;
    ptr->next = NULL;
}

void InsertFirst(int x)
{
    if(head==NULL)
    {
        head->data = x;
        head->next = NULL;
    }
    else
    {
        pr = new list;
        pr->data = x;
        pr->next = head;
        head = pr;
    }
}

void del(int x)
{
    if(head==NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        temp = head;
        if(temp!=NULL && temp->data==x)
        {
            head = temp->next;
            delete temp;
            return;
        }
        while(temp!=NULL)
        {
            if(temp->data == x)
            {
                prev->next = temp->next;
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }
}

void reverse()
{
    if(head==NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        temp = head;
        pr = prev = NULL;
        while(temp!=NULL)
        {
            pr = temp->next;
            temp->next = prev;
            prev = temp;
            temp = pr;
        }
        head = prev;
    }
}

void display()
{
    cout <<  endl;
    if(head==NULL)
    {
        cout << "Linked list is empty" << endl;
    }
    else
    {
        pr = head;
        while (pr != NULL)
        {
            cout<< pr->data <<" ";
            pr = pr->next;
        }
    }
}

bool checklist(int x)
{
    temp = head;
    while(temp!=NULL)
    {
        if(temp->data==x)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void search(int x)
{
    if(checklist(x))
    {
        cout << endl << "Key found at location : " << temp << endl;
    }
    else
    {
        cout << endl << "Key not found" << endl;
    }
}

main()
{
    int choice=0,d;
    while(choice!=9)
    {
        cout << endl << endl << "-----Linked List-----" << endl;
        cout << "0. Display" << endl;
        cout << "1. Insert Value" << endl;
        cout << "2. Delete Value" << endl;
        cout << "3. Reverse" << endl;
        cout << "4. Insert Value at first" << endl;
        cout << "5. Search element" << endl;

        cout << endl << "Enter your choice : ";
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
                cout << "Enter the value you want to delete : ";
                cin >> d;
                del(d);
                break;
            case 3:
                reverse();
                break;
            case 4:
                cout << "Enter the value you want to insert : ";
                cin >> d;
                InsertFirst(d);
                break;
            case 5:
                cout << "Enter the element you want to search : ";
                cin >> d;
                search(d);
                break;
            default:
                cout << "Invalid choice !!!" << endl;
        }
    }
}

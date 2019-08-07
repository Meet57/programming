#include <iostream>
using namespace std;

struct list
{
    int data;
    struct list *next;
};

list *head=NULL;
list *ptr=NULL;
list *temp,*prev;
int d;

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
        ptr = new list;
        ptr->data = x;
        ptr->next = head;
        head = ptr;
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
        ptr = prev = NULL;
        while(temp!=NULL)
        {
            ptr = temp->next;
            temp->next = prev;
            prev = temp;
            temp = ptr;
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
        ptr = head;
        while (ptr != NULL)
        {
            cout<< ptr->data <<" ";
            ptr = ptr->next;
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

void sort()
{
    temp = head;
    while(temp!=NULL)
    {
        ptr = temp;
        while(ptr!=NULL)
        {
            if(ptr->data < temp->data)
            {
                d = temp->data;
                temp->data = ptr->data;
                ptr->data = d;
            }
            ptr = ptr->next;
        }
        temp = temp->next;
    }
}

int count()
{
    d = 0;
    temp = head;
    while(temp!=NULL)
    {
        d++;
        temp = temp->next;
    }
    return d;
}

void deleteall()
{
    temp = head;
    while(temp!=NULL)
    {
        prev = temp;
        temp = temp->next;
        delete prev;
    }
    head=ptr=NULL;
}

main()
{
    int choice=0;
    while(choice!=9)
    {
        cout << endl << endl << "-----Linked List-----" << endl;
        cout << "0. Display" << endl;
        cout << "1. Insert Value" << endl;
        cout << "2. Delete Value" << endl;
        cout << "3. Reverse" << endl;
        cout << "4. Insert Value at first" << endl;
        cout << "5. Search element" << endl;
        cout << "6. Sort" << endl;
        cout << "7. Count" << endl;
        cout << "8. Delete all values" << endl;
        cout << "9. Insert at" << endl;
        cout << "99. Exit" << endl;

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
            case 6:
                sort();
                break;
            case 7:
                cout << "There are " << count() << " elements in linked list" << endl;
                break;
            case 8:
                deleteall();
                break;
            case 9:
                insertat();
                break;
            case 99:
                break;
            default:
                cout << "Invalid choice !!!" << endl;
        }
    }
}

// BY MEET PATEL

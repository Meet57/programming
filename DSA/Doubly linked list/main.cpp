#include <iostream>
using namespace std;

struct list
{
    int data;
    list *next;
    list *prev;
};

list *L=NULL,*R=NULL,*temp;

void insert(int x)
{
    temp = new list;
    temp->data = x;
    R = L = temp;
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
        temp = new list;
        L = temp;
    }
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
        temp = new list;
        R = temp;
    }
}

main()
{
    int choice=0,d;

    while(choice!=9)
    {

    }
}

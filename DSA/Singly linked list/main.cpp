#include <iostream>
using namespace std;

struct list{
   int data;
   struct list *next;
};

list *head=NULL;
struct list *ptr = NULL;

void insert(int x){
    if(head==NULL){
        ptr = new list;
        head = ptr;
    }
    else{
        ptr->next = new list;
        ptr = ptr->next;
    }
    ptr->data = x;
    ptr->next = NULL;
}

void display(){
   struct list *ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

main()
{
  int d;
  while(1){
    cout << "Enter value:" << endl;
    cin >> d;
    if(d==-99) break;
    insert(d);
  }
  display();
}

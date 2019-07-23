#include <iostream>
using namespace std;

class Stack
{
    int a[100],top=(-1);
public:
    void push(int x)
    {
        if(top<100)
        {
            top = top + 1;
            a[top] = x;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    int pop()
    {
        if(top>(-1))
        {
            top = top - 1;
            return a[top+1];
        }
        else
        {
            return false;
        }
    }
    void peep(int n)
    {
        if(top<0)
        {
            cout << "There is no element in the Stack !!!" << endl;
        }
        else
        {
            if(n<=top)
            {
                cout << "The nth element to stack is  : " << a[n] <<endl;
            }
            else
            {
                cout << "This element doesn't exist in the Stack !!!" << endl;
            }
        }
    }
    void change(int x,int n)
    {
        if(top<0)
        {
            cout << "Stack under flow" << endl;
        }
        else
        {
            if(n<=top)
            {
                a[n]=x;
            }
            else
            {
                cout << "This element doesn't exist in the Stack !!!" << endl;
            }
        }
    }
};

int main()
{
    Stack st;
    int choice,x,n;
    choice = 0;

    while(choice!=5)
    {
        cout << endl << endl << "----- Stack -----" << endl;
        cout << "1. push to stack" << endl;
        cout << "2. Pop last element" << endl;
        cout << "3. Peep ith element" << endl;
        cout << "4. Change ith element" << endl;
        cout << "5. Exit" << endl;
        cout << endl << "Enter your choice : " << endl;

        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "Enter the element you want to push : " << endl;
            cin >> x;
            st.push(x);
            break;
        case 2:
            cout << "Popped element is : " << st.pop();
            break;
        case 3:
            cout << "Which nth element you want to check : " << endl;
            cin >> n;
            st.peep(n);
            break;
        case 4:
            cout << "Which nth element you want to change : " << endl;
            cin >> n;
            cout << "New element you want to change with : " << endl;
            cin >> x;
            st.change(x,n);
            break;
        default:
            cout << "Invalid Choice" << endl;
        }

        cout << endl <<  "------------------------------------" << endl;
    }
}

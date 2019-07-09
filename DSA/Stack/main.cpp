#include <iostream>
using namespace std;

class Stack
{
    int a[100],top=(-1),n,temp;
public:
    void push()
    {
        if(top<100)
        {
            top = top + 1;
            cout << "Enter the element you want to push : " << endl;
            cin >> temp;
            a[top] = temp;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    void pop()
    {
        if(top>(-1))
        {
            cout << "Popped element is : " << a[top];
            top = top - 1;
        }
        else
        {
            cout << "Stack underflow " << endl;
        }
    }
    void peep()
    {
        if(top<0)
        {
            cout << "There is no element in the Stack !!!" << endl;
        }
        else
        {
            cout << "Which nth element you want to check : " << endl;
            cin >> n;
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
    void change()
    {
        if(top<0)
        {
            cout << "Stack under flow" << endl;
        }
        else
        {
            cout << "Which nth element you want to change : " << endl;
            cin >> n;
            if(n<=top)
            {
                cout << "New element you want to change with : " << endl;
                cin >> temp;
                a[n] = temp;
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
    int choice;
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
            st.push();
            break;
        case 2:
            st.pop();
            break;
        case 3:
            st.peep();
            break;
        case 4:
            st.change();
            break;
        default:
            cout << "Invalid Choice" << endl;
        }

        cout << endl <<  "------------------------------------" << endl;
    }
}

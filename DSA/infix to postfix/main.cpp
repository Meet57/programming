#include<iostream>
using namespace std;

char stack[100];
int top=-1;

void push(char x)
{
    top++;
    stack[top] = x;
}

char pop()
{
    if(top == (-1))
    {
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

int priority(char x)
{
    if(x=='(')
        return 0;
    else if( x=='-' )
        return 1;
    else if( x=='+')
        return 2;
    else if( x=='*' )
        return 3;
    else if( x=='/' )
        return 4;
}

main()
{
    char exp[100],*e,x;
    cout << "Infix to Postfix:" << endl;
    cout << endl << "Enter Expression" << endl;
    cin >> exp;
    e = exp;

    while(*e != '\0')
    {
        if(isalnum(*e))
        {
            cout << *e;
        }
        else if(*e == '(')
        {
            push(*e);
        }
        else if(*e == ')')
        {
            while((x = pop()) != '(')
            {
                cout << x;
            }
        }
        else
        {
            while(priority(stack[top])>= priority(*e))
            {
                cout << pop();
            }
            push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        cout << pop();
    }
}

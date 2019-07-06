#include<iostream>
#include<string.h>
using namespace std;

class NewString
{
  char original_string[100];
  int len;

public:

  NewString() //constructor
  {
    len = 0;
  }

  NewString(char str1[])  //paramerterized constructor
  {
    strcpy(original_string,str1);
    len = strlen(original_string);
  }

  NewString operator +(NewString t)  //operator overloading of '+'
  {
    NewString temp;
    strcpy(temp.original_string,(strcat(original_string,t.original_string)));
    temp.len = strlen(temp.original_string);
    return temp;
  }

  void operator =(NewString t) //operator overloading of '='
  {
    strcpy(original_string,t.original_string);
    len = strlen(original_string);
  }

  void print_string() //to print the present string
  {
    cout << "String  is => " << original_string << endl;
  }

  void lenght() //member to find the lenght of the string
  {
    cout << "String is => " << original_string << endl <<  "lenght of the String is => " << len << endl;
  }

  void tolower()  //member to convert string in lower case
  {
    strcmp(original_string,strlwr(original_string));
  }
  void toupper()  //member to convert string in upper case
  {
    strcmp(original_string,strupr(original_string));
  }

  friend void operator <=(NewString t,NewString t2); //friend fucntion to compare strings
};

void operator <=(NewString t,NewString t2)  //friend function
{
  if(strlen(t.original_string)>=strlen(t2.original_string))
  {
    if(strlen(t.original_string)==strlen(t2.original_string))
    {
      cout << "Both string Have same size !" << endl;
    }
    else
    {
      cout << t.original_string << " : " << "Is the greater string." << endl;
    }
  }
  else
  {
    cout << t2.original_string << " : " << "Is the greater string." << endl;
  }
}

main()
{
  NewString c1("Meet"),c2(" Patel");

  //Adding String
  cout << endl << "Adding String c1 and c2 to c3:" <<endl;
  NewString c3;
  c3 = c1 + c2;
  c3.print_string();
  cout << "______________________________" << endl;

  //String copy
  cout << endl << "Copying String c3 to c4:" << endl;
  NewString c4;
  c4 = c3;
  c4.print_string();
  cout << "______________________________" << endl;

  //convert lower and upper case
  cout << endl << "Upper And Lower case:" << endl;
  c3.tolower(); c3.print_string();
  c3.toupper(); c3.print_string();
  cout << "______________________________" << endl;

  //Comparing String
  cout << endl << "Comparing String c1 and c2:" << endl;
  c1<=c2;
  cout << "______________________________" << endl;
}

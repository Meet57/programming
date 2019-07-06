#include<iostream>
#include<string>
using namespace std;

main()
{
  string name = "Meet";
  string last_name = "Patel";

  string full_name;
  full_name = name + " " + last_name;

  cout << name <<" "<< last_name << endl;
  cout << full_name << endl;

  if(name == "Meet")
  {
    cout << "Name match" << endl;
  }
  else
  {
    cout << "error" << endl;
  }
}

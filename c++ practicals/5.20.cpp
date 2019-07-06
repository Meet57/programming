#include<iostream>
using namespace std;

class TIME
{
private:
  int hour,minute,second;
public:
  TIME()
  {
    hour = 0;
    minute = 0;
    second = 0;
  }
  void setdetails()
  {
    cout << "Enter hour, minute and second: " << endl;
    cin >> hour >> minute >> second ;
  }
  void Printdetails()
  {
    cout << hour << ':' << minute << ':' << second << endl;
  }
  TIME add_Time(TIME t1,TIME t2)
  {
    TIME temp;
    temp.hour = t1.hour + t2.hour;
    temp.second = t1.second + t2.second;
    temp.minute = t1.minute + t2.minute;
    return temp;
  }
  ~TIME()
  {
    cout << "Destructor" << endl;
  }
};

int main()
{
  TIME a1,a2,a3;

  a1.setdetails();
  a2.setdetails();

  a3 = a3.add_Time(a1,a2);

  cout << "Addition of two time: ";
  a3.Printdetails();

  return 0;
}

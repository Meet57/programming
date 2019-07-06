#include<iostream>
using namespace std;

class TEST
{
private:
  int maths;
public:
  TEST()
  {
    cout << "contructor" << endl;
    maths = 0;
  }
  void Setdetails(int a)
  {
    maths = a;
  }
  ~TEST()
  {
    cout << "Destructor" << endl;
  }
  friend int find_square(TEST temp);
};

int find_square(TEST temp)
{
  temp.maths = temp.maths*temp.maths;
  return temp.maths;
}

int main()
{
  TEST meet;
  {
    meet.Setdetails(91);
    cout << "Maths marks:" << find_square(meet) << endl;
  }
  return 0;
}

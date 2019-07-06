#include <iostream>

using namespace std;

class Test
{

private:
  int data;
public:
  Test()
  {
    data = 0;
  }
  Test(int n)
  {
    data = n;
  }
  void display()
  {
    cout << data   << endl;
  }
  friend void swap(Test,Test);
};

void swap(Test t, Test t1)
{
  int* ptr = (int *)&t;
  int* ptr1 = (int *)&t1;

  int temp = *ptr;
  *ptr = *ptr1;
  *ptr1 = temp;
}

main()
{
  Test t(5),t1(7);
  t.display();
  t1.display();
  swap(t,t1);
  t.display();
  t1.display();
}

#include<iostream>
using namespace std;

class Human
{
public:
  static int human_count;
  Human()
  {
    human_count++;
  }
  void humanTotal()
  {
    cout << "total: " << human_count << endl;
  }
};

int Human :: human_count = 0;

main()
{
  Human anil,m,n,v,c,r;
  anil.humanTotal();
}

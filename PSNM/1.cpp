//1. Implement Bisection Method
#include <iostream>
using namespace std;

class Formula {
private:
     float x1,x2,x,mid;
     int flag,end;
public:
     Formula (float a,float b,int c){
          x1 = a;
          x2 = b;
          end = c;
          flag=1;
     };

     float formula(float x){
          return (x*x*x - 2*x - 5);
     }

     void solve(){
          mid = (x1+x2) / 2;
          cout << x1 << "\t" << x2 << "\t" << mid << "\t" << formula(mid) << endl;
          if (formula(mid)>0) {
               x2 = mid;
          } else if (formula(mid)<0) {
               x1 = mid;
          }
          else{
               return;
          }
          flag++;
          if(flag==end)
               return;
          solve();
     }

};

int main(){
     Formula f(2,3,8);
     f.solve();

     return 0;
}

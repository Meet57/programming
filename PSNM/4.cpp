#include <iostream>
using namespace std;
#define F(x) ((A*x*x*x) + (B*x*x) + (C*x) + D)
#define f(x) ((3*A*x*x) + (2*B*x) + C)

class NR_Method{
public:
    float a,b,c,A,B,C,D,st[100];
    int top=0,c1,c2;
    NR_Method(float w,float x,float y,float z,float p){
        A = w;
        B = x;
        C = y;
        D = z;
        st[0] = p;
        cout << "-----------------NR method-------------------" << endl;
        cout << "x" << "\t\t\t" << "F(x)" << endl;
        solve();
    }
    void solve(){
        top = top + 1;
        st[top] = st[top-1] - (F(st[top-1])/f(st[top-1]));
        c1 = st[top-1]*100000;
        c2 = st[top]*100000;
        cout << st[top-1] << "\t\t\t" << st[top] << endl;
        if(c1 == c2){
            return;
        }
        solve();
    }
};

main()
{
    float w,x,y,z,x0;
    cout << "Enter constants for Cubic equation" << endl;
    cin >> w >> x >> y >> z;

    cout << "Enter value of x0" << endl;
    cin >> x0;


    NR_Method nr(w,x,y,z,x0);
    //NR_Method nr(1,0,1,-1,1);
}

#include <iostream>
using namespace std;
#define F(x) ((A*x*x*x) + (B*x*x) + (C*x) + D)

class FP_Method{
public:
    float A,B,C,D,x0,x1,temp,prev=0;
    int top=0,c1,c2;
    FP_Method(float w,float x,float y,float z,float p,float q){
        A = w;
        B = x;
        C = y;
        D = z;
        if(F(p)>0){
            x0 = p;     x1 = q;
        }
        else{
            x0 = q;     x1 = p;
        }
        cout << "x0" << "\t\t\t" << "x1"  << "\t\t\t" << "F(x)" << endl;
        solve();
    }
    void solve(){
        temp = x0 - (F(x0)*( (x1-x0)/(F(x1)-F(x0))));
        cout << x0 << "\t\t\t" << x1 << "\t\t\t" << temp << endl;
        
        if(F(temp)<0){
            x0 = temp;
        }
        else{
            x1 = temp;
        }
        
        c1 = prev*100000;
        c2 = temp*100000;
        
        if(c1 == c2){return;}
        prev = temp;
        solve();
    }
};

main()
{
    cout << "____False position Method____" << endl;
    float w,x,y,z,x0,x1;
    cout << "Enter constants for Cubic equation" << endl;
    cin >> w >> x >> y >> z;

    cout << "Enter value of x0 and x1" << endl;
    cin >> x0;
    cin >> x1;


    FP_Method nr(w,x,y,z,x0,x1);
    //FP_Method nr(2,0,-2,-5,1,2);
}

/*
____False position Method____
Enter constants for Cubic equation
2
0
-2
-5
Enter value of x0 and x1
1
2
x0			x1			F(x)
2			1			1.41667
1.41667			1			1.73022
1.41667			1.73022			1.58305
1.58305			1.73022			1.59905
1.59905			1.73022			1.60046
1.60046			1.73022			1.60059
1.60059			1.73022			1.6006
1.6006			1.73022			1.6006
*/
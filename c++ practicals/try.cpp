#include <iostream>
using namespace std;

class stu{
  private:
      int mark;
      float weight;
  public:
    int age;
    void set_marks(int a){
      mark = a;
    }
    void set_age(int a){
      age = a;
    }
    void set_weight(float a){
      weight = a;
    }
    void setter(int a,int b,float c);
    int get_mark(){
      return mark;
    }  
    float get_weight(){
      return weight;
    }  
};

void stu :: setter(int a,int b,float c){
  mark = a;
  age = b;
  weight =c;
}

int main()
{
    stu s1,s2,s3;
    s1.setter(20,19,11.11);
    s2.setter(19,19,22.22);
    s2.setter(18,18,18.18);
    s1.set_weight(19.19);
    
    //cout << s1.weight << endl;
    
    return 0;
}

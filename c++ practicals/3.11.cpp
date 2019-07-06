#include<iostream>
using namespace std;

float volume(float l)
{
  return l*l*l;
}

float volume(float r,float h)
{
  return (3.14*r*r*h);
}

float volume(float l,float b,float h)
{
  return l*b*h;
}

main()
{
  float x,y,z;
  cout << "Enter 3 parameters:"<<endl;
  cin >> x >> y >> z;

  cout << "Cube:" << volume(x) << endl;
  cout << "Cuboid:" << volume(x,y,z) << endl;
  cout << "Cylinder:" << volume(x,y) << endl;
}

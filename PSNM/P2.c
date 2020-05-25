//2.Implement False position Method

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define ESP 0.0001
#define F(x) x - 2*sin(x)
int main()
{
  float x0,x1,x2,f1,f2,f0;
  int count=0;
  do
  {
  printf("\nEnter the value of x0: ");
  scanf("%f",&x0);
  }while(F(x0) > 0);
  do
  {
  printf("\nEnter the value of x1: ");
  scanf("%f",&x1);
  }while(F(x1) < 0);
  printf("\n__________________________________________________________\n");
  printf("\nx0\tx1\tx2\tf(x2)");
  printf("\n__________________________________________________________\n");
  do
  {
  f0=F(x0);
  f1=F(x1);
  x2=x0-((f0*(x1-x0))/(f1-f0));
  f2=F(x2);
  printf("\n%f\t%f\t%f\t%f",x0,x1,x2,f2);
  if(f0*f2<0)
   {
    x1=x2;
   }
   else
   {
    x0 = x2;
   }
  }while(fabs(f2)>ESP);
printf("\n__________________________________________________________\n");
printf("\n\nApp.root = %f",x2);
getch();

return 0;
}


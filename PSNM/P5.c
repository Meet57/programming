//5.Implement Trapezoidal Method

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  float x[10],y[10],sum=0,h,temp;
  int i,n,j,k=0;
  float fact(int);
  printf("\nhow many record you will be enter: ");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
   printf("\n\nenter the value of x%d: ",i);
   scanf("%f",&x[i]);
   printf("\n\nenter the value of f(x%d): ",i);
   scanf("%f",&y[i]);
  }
  h=x[1]-x[0];
  n=n-1;
  for(i=0;i<n;i++)
  {
    if(k==0)
    {
     sum = sum + y[i];
     k=1;
    }
    else
     sum = sum + 2 * y[i];
   }
   sum = sum + y[i];
   sum = sum * (h/2);
   printf("\n\n  I = %f  ",sum);
getch();
}



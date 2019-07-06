//2

#include<stdio.h>
#include<conio.h>

int max(int a,int b,int c);

main()
{
  int i,j,k,maximum;
  printf("Enter three numbers:\n");
  scanf("%d %d %d",&i,&j,&k);

  maximum = max(i,j,k);

  printf("Maximum Number is : %d\n",maximum);

  getch();
}

int max(int a,int b,int c)
{
  if(a>b && a>c)
  {
    return a;
  }
  else if(b>a && b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}

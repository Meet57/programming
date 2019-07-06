#include<stdio.h>
#include<conio.h>

int fact(int n);

int main()
{
  int n,f;

  scanf("%d",&n);
  f = fact(n);

  printf("factorial is : %d\n",f);

  getch();
  return 0;
}

int fact(int n)
{
  int ft;
  ft = 1;
  while(n>=1)
  {
    ft = ft * n;
    n--;
  }
  return ft;
}

//7

#include<stdio.h>
#include<conio.h>

int factorial(int n);

main()
{
  int a,fact;
  printf("Enter any number to find factorial:\n");
  scanf("%d",&a);

  fact = factorial(a);

  printf("factorial of %d is: %d\n",a,fact);
  getch();
}

int factorial(int n)
{
  if(n>=1)
  {
    return n*(factorial(n-1));
  }
  else
  {
    return 1;
  }
}

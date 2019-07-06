//6

#include<stdio.h>
#include<conio.h>

void prime(int a);

main()
{
  int n;

  printf("Enter any number:\n");
  scanf("%d",&n);

  prime(n);

  getch();
}

void prime(int a)
{
  int i,k=0;
  for(i=1;i<=(a/2);i++)
  {
    if(a%i==0)
    {
      k++;
    }
  }
  if(k==1)
  {
    printf("Prime Number");
  }
  else
  {
    printf("Not Prime Number\n");
  }
}

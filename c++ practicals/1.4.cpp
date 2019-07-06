#include<stdio.h>

void swap(int *q,int *w);

main()
{
  int a, b;

  printf("Enter two numbers ( A and B ):\n");
  scanf("%d %d",&a,&b);

  swap(&a,&b);

  printf("--After swapping--\n");
  printf("A=%d\tB=%d",a,b);
}

void swap(int *q,int *w)
{
  int temp;
  temp = *q;
  *q = *w;
  *w = temp;
}

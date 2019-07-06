//5

#include<stdio.h>
#include<conio.h>

void swap(int *,int *);

main()
{
  int i,j;
  printf("Enter i and j:\n");
  scanf("%d %d",&i,&j);

  swap(&i,&j);

  printf("\ni=%d\nj=%d",i,j);

  getch();
}

void  swap(int *a,int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

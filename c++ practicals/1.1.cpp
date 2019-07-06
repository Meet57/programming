//1

#include<stdio.h>
#include<conio.h>

struct student
{
  char Name[20];
  char Subject[20];
  int Mark;
}a[4];

main()
{
  int i,j;

  for(i=0;i<=4;i++)
  {
    printf("Enter you Name, Subject And Marks:\n");
    scanf("%s %s %d",&a[i].Name,&a[i].Subject,&a[i].Mark);
    printf("\n");
  }

  printf("-----Result-----\n");

  for(i=0;i<=4;i++)
  {
    j = 1 + i;
    printf("student:%d\tName:%s\tSubject:%s\tMarks:%d\n\n",j,a[i].Name,a[i].Subject,a[i].Mark);
  }
  getch();
}

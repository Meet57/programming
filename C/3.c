//3

#include<stdio.h>
#include<conio.h>

int leap_year(int yr);

main()
{
  int year,check;

  printf("Enter any year:\n");
  scanf("%d",&year);

  leap_year(year);

  getch();
}

int leap_year(int yr)
{
  if(yr%4==0)
  {
    printf("Leap Year");
  }
  else
  {
    printf("Not a Leap Year");
  }
}

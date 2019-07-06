//9

#include<stdio.h>
#include<conio.h>

void avg_sum(int a[],int n);

main()
{
  int n,i;
  printf("How many numbers you want to enter:\n");
  scanf("%d",&n);

  int a[n];
  printf("Enter your numbers:\n");

  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  avg_sum(a,n);
  getch();
}

void avg_sum(int a[],int n)
{
  int sum=0,i;
  float avg=0;

  for(i=0;i<n;i++)
  {
    sum = sum + a[i];
    avg = avg + a[i];

    if(i==(n-1))
    {
      avg = avg/n;
    }
  }

  printf("Sum=:%d\nAverage:%f\n",sum,avg);
}

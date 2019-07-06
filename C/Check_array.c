#include<stdio.h>
#include<conio.h>

main()
{
  int check,array_lenght;
  printf("Enter array lenght:\n");
  scanf("%d",&array_lenght);

  int a[array_lenght];
  printf("Enter the array:\n");
  for(int i=0;i<array_lenght;i++)
  {
    scanf("%d",&a[i]);
  }

  printf("\n\nEnter the number you want to check in the array:\n");
  scanf("%d",&check);

  for(int i=0;i<array_lenght;i++)
  {
    if(a[i]==check)
    {
      printf("\n\nNumber is there in array !\n");
      break;
    }
    else if(i==(array_lenght-1))
    {
      printf("\n\nNumber is not there in array !\n");
      break;
    }
  }
}

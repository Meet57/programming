#include <stdio.h>
#include <conio.h>

main()
{
    int number,i,j,k,n;
    printf("Enter number of lines : ");
    scanf("%d",&n);

    number = 1;

    for(i=(n/2); i>=1; --i)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d\t",number);
            number++;
        }
        printf("\n");
    }

    i=(n/2);
    k = n - i;

    for(i=1;i<=k;i++)
    {
      for(j=0;j<=i;j++)
      {
        printf("%d\t",number);
        number++;
      }
      printf("\n");
    }

    getch();
}

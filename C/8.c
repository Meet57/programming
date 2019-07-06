//8

#include<stdio.h>
#include<conio.h>

int len(char a[]);

main()
{
  char s[100];
  int lenght;

  printf("Enter the string:\n");
  scanf("%s",s);

  lenght = len(s);
  printf("Lenght of string: %d\n",lenght);

  getch();
}

int len(char a[])
{
  int l=0;

  while (a[l]!='\0') {
    l++;
  }
  return l;
}

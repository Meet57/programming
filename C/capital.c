#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

void main()
{
  char s[100];
  char *p = s;
  printf("Enter your string:\n");
  gets(s);

  int j;

  for(int i=0;s[i];i++)
  {
    if(s[i]==' ')
    {
      j = i + 1;
      s[j] = toupper(s[j]);
    }
  }

  printf("\n\nString after edit:\n");
  puts(s);
}

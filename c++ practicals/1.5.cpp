#include<stdio.h>
#include<conio.h>

int main()
{
  FILE *ptr;
  char sentence[100],ch;

  ptr = fopen("INPUT.txt","w");

  printf("Enter your sentence:\n");
  gets(sentence);
  fprintf(ptr,"%s",sentence);
  fclose(ptr);

  printf("---Data in File---\n");

  ptr = fopen("INPUT.txt","r");

  while(!feof(ptr))
  {
    ch = fgetc(ptr);
    printf("%c",ch);
  }
  fclose(ptr);

  return 0;
}

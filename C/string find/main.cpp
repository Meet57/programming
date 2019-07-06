#include<stdio.h>
#include<string.h>

main()
{
    char ogs[100],subs[100];
    int check;

    printf("Enter main string : ");
    gets(ogs);

    printf("Enter sub string : ");
    gets(subs);

    int main_lenght = strlen(ogs);
    int sub_lenght = strlen(subs);

    for(int i=0;i<main_lenght;i++)
    {
        for(int j=0;j<sub_lenght;j++)
        {
            if(ogs[i]==subs[j])
            {

            }
        }
    }
}

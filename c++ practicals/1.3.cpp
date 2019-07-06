#include<stdio.h>
#include<conio.h>

struct person
{
  int age;
  float weight;
};

main()
{
  struct person a;
  struct person *p;

  p = &a;

  printf("Enter Age and Weight:\n");
  scanf("%d %f",&p->age,&p->weight);

  printf("\n---Person details---\nAge:%d\tweight:%f",p->age,p->weight);
}

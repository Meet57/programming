#include<stdio.h>
#include<conio.h>

struct employee
{
  char Name[20];
  long int Salary;
};

struct employee GetEmp();
void PrintEmp(struct employee);

int main()
{
  struct employee a;
  a = GetEmp();
  PrintEmp(a);
  getch();
  return 0;
}

struct employee GetEmp()
{
  struct employee temp;
  printf("Name:\n");
  scanf("%s",&temp.Name);
  printf("Salary:\n");
  scanf("%d",&temp.Salary);

  return(temp);
}

void PrintEmp(struct employee l)
{
  printf("---employee details---\nName:%s\tSalary:%d",l.Name,l.Salary);
}

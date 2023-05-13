// ?Define a structure employee with ID, name, address, salary, and post. Read the record of 20 employees and display the record of all employees whose salary is greater than 20,000.

#include <stdio.h>
#define MAX 50

struct employee
{
  int id;
  float salary;
  char name[MAX], address[MAX], post[MAX];
};

int main()
{
  struct employee emp[20];
  int i;

  // Loop to take input of employee details
  for (i = 0; i < 20; i++)
  {
    printf("Enter employee id: ");
    scanf("%d", &emp[i].id);
    printf("Enter employee name: ");
    scanf("%s", emp[i].name);
    printf("Enter employee address: ");
    scanf("%s", emp[i].address);
    printf("Enter employee salary: ");
    scanf("%f", &emp[i].salary);
    printf("Enter employee post: ");
    scanf("%s", emp[i].post);
  }

  // Loop to print the details of employees whose salary is greater than 20000
  printf("\tID\tNAME\tADDRESS\tSALARY\t\tPOST\n");
  for (i = 0; i < 20; i++)
  {
    if (emp[i].salary > 20000)
    {
      printf("\t%d\t%s\t%s\t%.2f\t%s\n", emp[i].id, emp[i].name, emp[i].address, emp[i].salary, emp[i].post);
    }
  }
  return 0;
}

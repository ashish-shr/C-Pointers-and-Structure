// ?Define structure employee that will contain the employee's name, address,and salary using the structure and read the information for 10 employees and display the record of the employee having a higher salary.

#include <stdio.h>
#define MAX 50

struct employee
{
  float salary;
  char name[MAX], address[MAX];
};

int main()
{
  struct employee emp[10];
  int i, largest_salary = 0, max = 0;

  // Read employee information from the user.
  for (i = 0; i < 10; i++)
  {
    printf("Enter employee name: ");
    scanf("%s", emp[i].name);
    printf("Enter employee address: ");
    scanf("%s", emp[i].address);
    printf("Enter employee salary: ");
    scanf("%f", &emp[i].salary);
  }

  // Print the information of the employee with the largest salary.
  printf("\tNAME\tADDRESS\tSALARY\n");
  for (i = 0; i < 10; i++)
  {
    if (emp[i].salary > largest_salary)
    {
      largest_salary = emp[i].salary;
      max = i;
    }
  }
  printf("\t%s\t%s\t%.2f\n", emp[max].name, emp[max].address, emp[max].salary);
  return 0;
}
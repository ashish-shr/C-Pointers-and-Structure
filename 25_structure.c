// ?Define the structure of employees having data members' names, ages addresses, and salaries. Take data for N employees in an array dynamically and find the average salary.

#include <stdio.h>
#include <stdlib.h>
#define MAX 25

// Define a structure for an employee
struct employee
{
  char name[MAX], address[MAX];
  int age;
  float salary;
};

int main()
{
  struct employee *emp; // Declare a pointer to a structure of type employee
  int i, n;
  float total_salary = 0, average_salary = 0;
  printf("No. of employees: ");
  scanf("%d", &n);

  // Allocate memory for n number of employees using calloc()
  emp = (struct employee *)calloc(n, sizeof(struct employee));

  // Take input of employee details
  for (i = 0; i < n; i++)
  {
    printf("Name of employee: ");
    scanf("%s", emp[i].name);
    printf("Age of employee: ");
    scanf("%d", &emp[i].age);
    printf("Address of employee: ");
    scanf("%s", emp[i].address);
    printf("Salary of employee: ");
    scanf("%f", &emp[i].salary);
  }

  // Calculate the total salary of all employees
  for (i = 0; i < n; i++)
  {
    total_salary = total_salary + emp[i].salary;
  }

  // Calculate the average salary of employees
  average_salary = total_salary / n;
  printf("Average salary of employees: %.2f", average_salary);

  // Free the allocated memory
  free(emp);
  return 0;
}
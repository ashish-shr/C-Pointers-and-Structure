// ?Write a program two illustrate the passing of structure pointer to function.

#include <stdio.h>
#define MAX 25

// define the structure for an employee
struct employee
{
  int id;
  char name[MAX];
  float salary;
};

// declare the display function with a pointer to an employee struct as parameter
void display(struct employee *e);

int main()
{
  // declare a variable of type employee
  struct employee emp;

  // prompt the user to enter the employee details
  printf("Enter employee id: ");
  scanf("%d", &emp.id);
  printf("Enter employee name: ");
  scanf("%s", emp.name);
  printf("Enter employee salary: ");
  scanf("%f", &emp.salary);

  // call the display function passing the address of the employee struct
  display(&emp);
  return 0;
}

// define the display function
void display(struct employee *e)
{
  // display the employee details in a table
  printf("\tID\tNAME\tSALARY\n");
  printf("\t%d\t%s\t%.2f\n", e->id, e->name, e->salary);
}

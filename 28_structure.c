// ?WAP to input the name, post, and salary of 10 employees from the main() function and pass it to a user-defined function. This function returns the structure variable which keeps the record of only those employees whose salary is greater than 10,000.

#include <stdio.h>
#define MAX 25

// Defining the structure for employee
struct employee
{
  char name[MAX], post[MAX];
  float salary;
};

// Function prototype for filtering employees
int is_greater(struct employee e[], int n, struct employee result[], int max);

int main()
{
  // Declaring the variables
  struct employee emp[MAX], filtered[MAX];
  int i, count;

  // Taking the input of name, post and salary of each employee
  for (i = 0; i < 10; i++)
  {
    printf("Employee #%d\n", i + 1);
    printf("Name: ");
    scanf("%s", emp[i].name);
    printf("Post: ");
    scanf("%s", emp[i].post);
    printf("Salary: ");
    scanf("%f", &emp[i].salary);
  }

  // Filtering the employees with salary greater than 10000
  count = is_greater(emp, 10, filtered, MAX);

  // Displaying the filtered employees
  printf("\nEmployees with salary greater than 10000:\n");
  printf("\tNAME\tPOST\tSALARY\n");
  for (i = 0; i < count; i++)
  {
    printf("\t%s\t%s\t%.2f\n", filtered[i].name, filtered[i].post, filtered[i].salary);
  }

  return 0;
}

// Function to filter employees based on salary
int is_greater(struct employee e[], int n, struct employee result[], int max)
{
  int i, count = 0;

  // Looping through each employee
  for (i = 0; i < n && count < max; i++)
  {
    // Checking if the salary of the employee is greater than 10000
    if (e[i].salary > 10000)
    {
      // Adding the employee to the filtered array if salary is greater than 10000
      result[count++] = e[i];
    }
  }

  // Returning the number of filtered employees
  return count;
}

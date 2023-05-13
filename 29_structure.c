// ?WAP to create a structure for students having data members' names, roll numbers, and percentages. Complete the program to display the name of the student having a percentage greater than or equal to 60.

#include <stdio.h>
#include <string.h>
#define MAX 25

// Define a struct to store student details
struct student
{
  int roll;
  char name[MAX];
  float percent;
};

int main()
{
  // Declare an array of student structures
  struct student s[MAX];
  int i, n;

  // Prompt the user for the number of students to input
  printf("No. of students: ");
  scanf("%d", &n);

  // Loop through each student and input their details
  for (i = 0; i < n; i++)
  {
    printf("Enter student name, roll and percentage:\n");
    scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].percent);
  }

  // Print a table header
  printf("\tNAME\tROLL\tPECENTAGE\n");

  // Loop through each student and print their details if their percentage is greater than or equal to 60
  for (i = 0; i < n; i++)
  {
    if (s[i].percent >= 60)
    {
      printf("\t%s\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].percent);
    }
  }
  return 0;
}

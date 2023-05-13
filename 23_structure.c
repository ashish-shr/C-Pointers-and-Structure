// ?Define a structure of students having data members' names, addresses, marks in C language, and marks in IT. Take data for N students in an array dynamically and find the total marks obtained.

#include <stdio.h>
#include <stdlib.h>
#define MAX 25

// defining a structure for student information
struct student
{
  char name[MAX], address[MAX];
  float marks_c, marks_it;
};

int main()
{
  struct student *std; // declaring a pointer to the structure
  int i, n;
  float total_marks;
  printf("No. of students: ");
  scanf("%d", &n);

  // dynamic memory allocation for the structure pointer
  std = (struct student *)calloc(n, sizeof(struct student));

  // taking input for student details and marks
  for (i = 0; i < n; i++)
  {
    printf("Name of student: ");
    scanf("%s", std[i].name);
    printf("Address of student: ");
    scanf("%s", std[i].address);
    printf("Marks in C: ");
    scanf("%f", &std[i].marks_c);
    printf("Marks in IIT: ");
    scanf("%f", &std[i].marks_it);
  }

  // displaying the student details along with their total marks
  printf("\tNAME\tADDRESS\tC\tIIT\tTOTAL MARKS\n");
  for (i = 0; i < n; i++)
  {
    total_marks = std[i].marks_c + std[i].marks_it;
    printf("\t%s\t%s\t%.2f\t%.2f\t%.2f\n", std[i].name, std[i].address, std[i].marks_c, std[i].marks_it, total_marks);
  }

  free(std); // freeing the dynamically allocated memory
  return 0;
}

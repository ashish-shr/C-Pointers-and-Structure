// ?WAP to read the roll number, name, sex, and total mark of 10 students and display the record of the students using structure.

#include <stdio.h>
#define MAX 25

// Struct to represent a student
struct student
{
  int roll;
  char name[MAX];
  char sex[MAX];
  float marks;
};

int main()
{
  // Create an array of 10 student structures
  struct student s[10];
  int i;

  // Input details of 10 students using a for loop
  for (i = 0; i < 10; i++)
  {
    printf("Enter the roll no.:\t");
    scanf("%d", &s[i].roll);
    printf("Enter the name:\t");
    scanf("%s", s[i].name);
    printf("Enter the sex:\t");
    scanf("%s", s[i].sex);
    printf("Enter the total marks:\t");
    scanf("%f", &s[i].marks);
  }

  // Display the details of all 10 students using a for loop
  printf("\tRoll no.\tName\tSex\tTotal Marks\n");
  for (i = 0; i < 10; i++)
  {
    printf("\t%d\t", s[i].roll);
    printf("\t%s\t", s[i].name);
    printf("%s\t", s[i].sex);
    printf("%.2f\t", s[i].marks);
    printf("\n");
  }
  return 0;
}
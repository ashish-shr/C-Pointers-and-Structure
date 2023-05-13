// ?WAP that reads N records of structure student with members ID, name, faculty,and marks display the records sorted in alphabetical order.

#include <stdio.h>
#include <string.h>
#define MAX 25

// define a structure named student with four members
struct student
{
  int id;
  char name[MAX], faculty[MAX];
  float marks;
};

int main()
{
  struct student s[MAX], tmp;
  int i, j, n;
  printf("No. of students: ");
  scanf("%d", &n);

  // loop through each student and get their details
  for (i = 0; i < n; i++)
  {
    printf("Enter student id, name, faculty and marks:\n");
    scanf("%d %s %s %f", &s[i].id, s[i].name, s[i].faculty, &s[i].marks);
  }

  // sort the array of students based on their name using bubble sort algorithm
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (strcmp(s[j].name, s[j + 1].name) > 0)
      {
        tmp = s[j];
        s[j] = s[j + 1];
        s[j + 1] = tmp;
      }
    }
  }

  // print the table of sorted students
  printf("\tID\tNAME\tFACULTY\tMARKS\n");
  for (i = 0; i < n; i++)
  {
    printf("\t%d\t%s\t%s\t%.2f\n", s[i].id, s[i].name, s[i].faculty, s[i].marks);
  }
  return 0;
}
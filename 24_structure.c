// ?WAP using the structure of a booklist having data members'titles, authors, and costs. Enter the record of 4 books and calculate the total cost.

#include <stdio.h>
#define MAX 25

// define a structure for a booklist
struct booklist
{
  int roll;
  char title[MAX], author[MAX];
  float cost;
};

int main()
{
  struct booklist b[4];
  int i;
  float total_cost = 0;

  // loop to input details for each book
  for (i = 0; i < 4; i++)
  {
    printf("Enter the title:\t");
    scanf("%s", b[i].title);
    printf("Enter the author:\t");
    scanf("%s", b[i].author);
    printf("Enter the cost:\t");
    scanf("%f", &b[i].cost);
  }

  // loop to calculate the total cost of all books
  for (i = 0; i < 4; i++)
  {
    total_cost = total_cost + b[i].cost;
  }

  // print the total cost of all books
  printf("Total cost of books: %.2f", total_cost);
  return 0;
}
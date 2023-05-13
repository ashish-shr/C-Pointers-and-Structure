// ?WAP to create an array to display a multiplication table of a number entered by the user up to 10. Afterward, use the realloc() function so that it can now display the multiplication table up to 15.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, i, *table;
  printf("Enter a number to generate a multiplication table: ");
  scanf("%d", &num);

  // Allocate memory for the initial multiplication table
  table = (int *)malloc(10 * sizeof(int));

  // Generate the multiplication table up to 10
  for (i = 0; i < 10; i++)
  {
    table[i] = num * (i + 1);
  }

  // Display the multiplication table up to 10
  printf("Multiplication table of %d up to 10:\n", num);
  for (i = 0; i < 10; i++)
  {
    printf("%d x %d = %d\n", num, i + 1, table[i]);
  }

  // Expand the array using realloc() to display the multiplication table up to 15
  table = (int *)realloc(table, 15 * sizeof(int));

  // Generate the multiplication table up to 15
  for (i = 10; i < 15; i++)
  {
    table[i] = num * (i + 1);
  }

  // Display the multiplication table up to 15
  printf("Multiplication table of %d up to 15:\n", num);
  for (i = 0; i < 15; i++)
  {
    printf("%d x %d = %d\n", num, i + 1, table[i]);
  }

  // Free the memory allocated for the array
  free(table);
  return 0;
}

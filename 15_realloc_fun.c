// ?WAP to demonstrate the use of realloc() function.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr, n;

  // Prompt user to enter size of the array
  printf("Size of array: ");
  scanf("%d", &n);

  // Allocate memory dynamically using malloc()
  ptr = (int *)malloc(n * sizeof(int));

  // Prompt user to enter elements of the array
  for (int i = 0; i < n; i++)
  {
    printf("Enter the value of %d element: \n", i);
    scanf("%d", &ptr[i]);
  }

  // display the elements of array
  for (int i = 0; i < n; i++)
  {
    printf("The value of %d element is: %d\n", i, ptr[i]);
  }
  printf("Size of new array: ");
  scanf("%d", &n);

  // Reallocating memory dynamically using realloc()
  ptr = realloc(ptr, n * sizeof(int));

  // Prompt user to enter elements of the array
  for (int i = 0; i < n; i++)
  {
    printf("Enter the value of %d element: \n", i);
    scanf("%d", &ptr[i]);
  }

  // display the elements of newly sized array
  for (int i = 0; i < n; i++)
  {
    printf("The value of %d element is: %d\n", i, ptr[i]);
  }

  // Free the dynamically allocated memory
  free(ptr);
  return 0;
}
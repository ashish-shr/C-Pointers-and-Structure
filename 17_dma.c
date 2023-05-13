// ?WAP to sort n numbers in descending order using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr, n, i, j, tmp;

  // Prompt user to enter size of the array
  printf("Size of array: ");
  scanf("%d", &n);

  // Allocate memory dynamically using calloc()
  ptr = (int *)calloc(n, sizeof(int));

  // Prompt user to enter elements of the array
  for (i = 0; i < n; i++)
  {
    printf("Enter the value of %d element: \n", i);
    scanf("%d", ptr + i);
  }

  // Sort the array in descending order using bubble sort
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (*(ptr + j) < *(ptr + j + 1))
      {
        tmp = *(ptr + j);
        *(ptr + j) = *(ptr + j + 1);
        *(ptr + j + 1) = tmp;
      }
    }
  }

  // Display the sorted array
  printf("Array after sorting: ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", *(ptr + i));
  }

  // Free the dynamically allocated memory
  free(ptr);
  return 0;
}
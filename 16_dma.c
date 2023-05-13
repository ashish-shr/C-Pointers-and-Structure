// ?WAP to find the smallest and largest element in a list of n-elements of the array using a pointer using the dynamic memory function.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr, n, max = 0, min = 0, i;

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

  // finding largest and smallest element in an array
  max = *ptr;
  min = *ptr;
  for (i = 0; i < n; i++)
  {
    if (*(ptr + i) > max)
    {
      max = *(ptr + i);
    }
    if (*(ptr + i) < min)
    {
      min = *(ptr + i);
    }
  }

  // Display the largest and smallest element
  printf("Largest element: %d\n", max);
  printf("Smallest element: %d\n", min);

  // Free the dynamically allocated memory
  free(ptr);
  return 0;
}
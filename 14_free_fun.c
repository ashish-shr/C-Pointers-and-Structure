// ?WAP to demonstrate the use of free() function.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr, n;

  // Prompt user to enter size of the array
  printf("Size of array: ");
  scanf("%d", &n);

  // Allocate memory dynamically using calloc()
  ptr = (int *)calloc(n, sizeof(int));

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

  // using free function
  free(ptr); // memory of ptr is released

  return 0;
}
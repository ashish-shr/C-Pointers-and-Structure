// ?WAP to accept 10 numbers in an array and sort them using a pointer.

#include <stdio.h>
#define MAX 25

int main()
{
  int arr[MAX], size, i, j, tmp;

  // Get the size of the array from the user.
  printf("Size of array: ");
  scanf("%d", &size);

  // Ask user to enter the elements of the array
  for (i = 0; i < size; i++)
  {
    printf("Element: ");
    scanf("%d", arr + i);
  }

  // Sort the array using bubble sort algorithm
  for (i = 0; i < size - 1; i++)
  {
    for (j = 0; j < size - i - 1; j++)
    {
      if (*(arr + j) > *(arr + j + 1))
      {
        tmp = *(arr + j);
        *(arr + j) = *(arr + j + 1);
        *(arr + j + 1) = tmp;
      }
    }
  }

  // Display the sorted array
  printf("Array after sorting: ");
  for (i = 0; i < size; i++)
  {
    printf("%d ", *(arr + i));
  }
  return 0;
}
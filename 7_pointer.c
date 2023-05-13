// ?WAP to find the second largest elements of an array using a pointer via user defined function.

#include <stdio.h>
#define MAX 25
int second_largest(int arr[], int size);

int main()
{
  int arr[MAX], size, i, result;

  // Get the size of the array from the user.
  printf("Size of array: ");
  scanf("%d", &size);

  // Get the elements of the array from the user.
  for (i = 0; i < size; i++)
  {
    printf("Element: ");
    scanf("%d", arr + i);
  }

  // Call the function to find the second largest element.
  result = second_largest(arr, size);
  printf("Second largest element: %d\n", result);
  return 0;
}

// Function to find the second largest element.
int second_largest(int arr[], int size)
{
  int largest = arr[0];
  int second_largest = arr[0];
  int *ptr = arr;

  // Loop through the array and update the largest and second largest variables.
  for (int i = 0; i < size; i++)
  {
    if (*ptr > largest)
    {
      second_largest = largest;
      largest = *ptr;
    }
    else if (*ptr > second_largest && *ptr != largest)
    {
      second_largest = *ptr;
    }
    ptr++;
  }
  return second_largest;
}

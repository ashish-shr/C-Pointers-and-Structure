// ?WAP to read N different numbers from users in an array and find their sum and average by using the concept of a pointer.

#include <stdio.h>
#define MAX 25

int main()
{
  int arr[MAX], size, i;
  float sum = 0, avg = 0;

  // Get the size of the array from the user.
  printf("Size of array: ");
  scanf("%d", &size);

  // Ask user to enter the elements of the array
  for (i = 0; i < size; i++)
  {
    printf("Element: ");
    scanf("%d", arr + i);
  }

  // finding the sum and average
  for (i = 0; i < size; i++)
  {
    sum += *(arr + i);
  }
  avg = sum / size;
  printf("Total sum: %.2f\n", sum);
  printf("Total average: %.2f\n", avg);
  return 0;
}
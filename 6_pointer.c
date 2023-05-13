// ?WAP to access the element of an array using a pointer.

#include <stdio.h>

int main()
{
  int arr[5] = {3, 2, 1};
  int *ptr = arr;
  printf("Accessing 1st element: %d\n", *ptr);
  printf("Accessing 2nd element: %d\n", *(ptr + 1));
  printf("Accessing 3rd element: %d\n", *(ptr + 2));
  return 0;
}
/*
?WAP to demonstrate pointer arithmetic.
There are 4 types of pointer arithmetic: ++, --, +, -
*/

#include <stdio.h>

int main()
{
  int arr[5] = {1, 3, 5, 7, 9};
  int *ptr = arr;
  printf("This is address of 0 index: %d\n", arr);             // 6422016
  printf("This is also address of 0 index: %d\n", &arr);       // 6422016
  printf("This is also address of 0 index: %d\n", ptr);        // 6422016
  printf("This is address of 1 index: %d\n", ptr + 1);         // 6422020
  printf("This is element of 0 index: %d\n", arr[0]);          // 1
  printf("This is also element of 0 index: %d\n", *ptr);       // 1
  printf("This is element of 1 index: %d\n", arr[1]);          // 3
  printf("This is also element of 1 index: %d\n", *(ptr + 1)); // 3
  ptr++;
  printf("Now, ptr will point address of 1 index: %d\n", ptr); // 6422020
  ptr--;
  printf("Now, ptr will point address of 0 index: %d\n", ptr); // 6422016
  ++ptr;
  printf("Again, ptr will point address of 1 index: %d\n", ptr);  // 6422020
  printf("Now,ptr will point address of 0 index: %d\n", ptr - 1); // 6422016
  return 0;
}
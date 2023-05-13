// ?WAP to swap two numbers (a and b) using a pointer.

#include <stdio.h>
int swapNum(int *, int *);

int main()
{
  int a, b;

  // input two numbers
  printf("First Number: ");
  scanf("%d", &a);
  printf("Second Number: ");
  scanf("%d", &b);

  // print the swapped numbers
  printf("After swapping:\n");
  printf("a: %d and b: %d", a, b, swapNum(&a, &b));
  return 0;
}

// function to swap two numbers using pointers
int swapNum(int *a, int *b)
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
  return *a, *b;
}
// ?WAP to add two numbers using a function pointer.

#include <stdio.h>
int addNum(int *, int *);

int main()
{
  int fNum, sNum;

  // Reading two numbers from the user
  printf("First Number: ");
  scanf("%d", &fNum);
  printf("Second Number: ");
  scanf("%d", &sNum);

  // Calling the addNum function and printing the result
  printf("Sum of %d and %d: %d", fNum, sNum, addNum(&fNum, &sNum));
  return 0;
}

int addNum(int *a, int *b)
{
  int sum = *a + *b;
  return sum;
}
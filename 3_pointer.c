// ?WAP to find the largest of three numbers using a pointer.

#include <stdio.h>

int main()
{
  int a, b, c;
  int *aPtr, *bPtr, *cPtr;
  aPtr = &a;
  bPtr = &b;
  cPtr = &c;
  printf("Enter three numbers:\n");
  scanf("%d %d %d", &a, &b, &c);

  // Comparing the values using pointers
  if (*aPtr > *bPtr && *aPtr > *cPtr)
  {
    printf("%d is largest", *aPtr);
  }
  else if (*bPtr > *aPtr && *bPtr > *cPtr)
  {
    printf("%d is largest", *bPtr);
  }
  else if (*cPtr > *aPtr && *cPtr > *bPtr)
  {
    printf("%d is largest", *cPtr);
  }
  return 0;
}
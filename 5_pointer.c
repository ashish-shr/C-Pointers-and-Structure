//?WAP to take three variables (a, b, and c) and rotate the values stored using a pointer.

#include <stdio.h>

int main()
{
  int a, b, c, tmp;
  int *A = &a, *B = &b, *C = &c;
  printf("Enter the values of a, b, and c:\n");
  scanf("%d %d %d", &a, &b, &c);

  // Rotate the values of a, b, and c
  tmp = *C;
  *C = *A;
  *A = *B;
  *B = tmp;

  // Print the rotated values of a, b, and c
  printf("After rotating the values:\n");
  printf("%d %d %d", a, b, c);
  return 0;
}
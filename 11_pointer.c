// ?WAP to read two 2 x 3 size matrices and add them and store in another 2D array matrix and display them using a pointer.

#include <stdio.h>

int main()
{
  int mat1[2][3], mat2[2][3], row, col, sum[2][3];

  // Ask user to enter the elements of the 1st matrix
  printf("Elements of 1st matrix:\n");
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 3; col++)
    {
      scanf("%d", *(mat1 + row) + col);
    }
  }

  // Ask user to enter the elements of the 2nd matrix
  printf("Elements of 2nd matrix:\n");
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 3; col++)
    {
      scanf("%d", *(mat2 + row) + col);
    }
  }

  // adding two matrices
  printf("After addition:\n");
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 3; col++)
    {
      *(*(sum + row) + col) = *(*(mat1 + row) + col) + *(*(mat2 + row) + col);
    }
  }

  // printing the resultant matrix
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 3; col++)
    {
      printf("%d ", *(*(sum + row) + col));
    }
    printf("\n");
  }
  return 0;
}
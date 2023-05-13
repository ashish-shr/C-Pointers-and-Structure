// ?WAP to read 2 x 3 size matrix and transpose it using a pointer.

#include <stdio.h>

int main()
{
  int mat[2][3], row, col;

  // Ask user to enter the elements of the matrix
  for (row = 0; row < 2; row++)
  {
    for (col = 0; col < 3; col++)
    {
      printf("Element: ");
      scanf("%d", *(mat + row) + col);
    }
  }

  // display the transposed matrix
  printf("After transposing:\n");
  for (row = 0; row < 3; row++)
  {
    for (col = 0; col < 2; col++)
    {
      printf("%d ", *(*(mat + col) + row));
    }
    printf("\n");
  }
  return 0;
}
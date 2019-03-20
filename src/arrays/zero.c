#include "zero.h"

#include <stdlib.h>

// If any element in an XxY matrix is 0, the eitire row and column are set to 0
void zero(int **matrix, int x, int y) {
  int *row = malloc(sizeof(int) * y);
  int *col = malloc(sizeof(int) * x);

  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      if (matrix[i][j] == 0) {
        row[j] = 1;
        col[i] = 1;
      }
    }
  }

  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      if (row[j] == 1 || col[i] == 1) {
        matrix[i][j] = 0;
      }
    }
  }

  free(row);
  free(col);
}


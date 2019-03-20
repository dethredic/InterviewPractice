#include "rotate.h"

// Rotates an NxN matrix by 90 degrees clockwise
void rotate(int **matrix, int n) {
  for (int i = 0; i <= n/2; i++) {
    for (int j = i; j < n - 1 - i; j++) {
      const int m = n - 1;
      int tmp = matrix[i][j];
      matrix[i][j] = matrix[m-j][i];
      matrix[m-j][i] = matrix[m-i][m-j];
      matrix[m-i][m-j] = matrix[j][m-i];
      matrix[j][m-i] = tmp;
    }
  }
}


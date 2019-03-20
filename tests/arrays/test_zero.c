#include "test_common.h"
#include "matrix_test_helper.h"

#include "zero.h"

#include <string.h>
#include <stdlib.h>



int main() {
  printf("Running %s\n", __FILE__);

  int n = 3;
  int m = 5;

  int **matrix = create_matrix(n, m);
  fill_matrix(matrix, n, m);
  // matrix[0][0] = 0;
  // matrix[1][1] = 0;
  matrix[m-1][0] = 0;
  matrix[0][n-1] = 0;

  zero(matrix, n, m);
  // print_matrix(matrix, n, m);

  free_matrix(matrix, n, m);

  return 0;
}

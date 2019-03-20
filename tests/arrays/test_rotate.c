#include "test_common.h"
#include "matrix_test_helper.h"

#include "rotate.h"

#include <string.h>
#include <stdlib.h>


int main() {
  printf("Running %s\n", __FILE__);

  for (int n = 1; n <= 5; n++) {
    int **matrix = create_matrix(n, n);
    fill_matrix(matrix, n, n);

    rotate(matrix, n);
    // prv_print_matrix(matrix, n, n);

    free_matrix(matrix, n, n);
  }

  return 0;
}

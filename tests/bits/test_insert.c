#include "test_common.h"

#include "insert.h"

#include <string.h>


int main() {
  printf("Running %s\n", __FILE__);

  int n = 1024;
  int m = 19;
  int i = 2;

  int result = insert(n, m, i);
  if (result != 1100) {
    printf("Fail: %d\n", result);
  }
  return 0;
}

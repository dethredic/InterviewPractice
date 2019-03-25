#include "test_common.h"

#include "next_largest.h"

typedef struct {
  int input;
  int expected_result;
} test;

static test tests[] = {
  {0, 0},
  {1, 2},
  {3, 5},
  {6, 10},
  {7, 11},
  {8, 16},
  {10, 12}
};

int main() {
  printf("Running %s\n", __FILE__);
  for (unsigned i = 0; i < ARRAY_LENGTH(tests); i++) {

    int result = next_largest(tests[i].input);
    if (result != tests[i].expected_result) {
      printf("Fail %d: %d != %d\n", tests[i].input, result, tests[i].expected_result);
    }
  }

  return 0;
}

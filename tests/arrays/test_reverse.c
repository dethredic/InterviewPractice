#include "test_common.h"

#include "reverse.h"

#include <string.h>


typedef struct {
  char *string;
  char *expected_result;
} test;

static test tests[] = {
  {"", ""},
  {"a", "a"},
  {"ab", "ba"},
  {"aba", "aba"},
  {"abab", "baba"},
  {"aabb", "bbaa"},
};

int main() {
  printf("Running %s\n", __FILE__);
  for (unsigned i = 0; i < ARRAY_LENGTH(tests); i++) {
    char buf[8];

    strcpy(buf, tests[i].string);
    reverse1(buf);
    if (strcmp(buf, tests[i].expected_result)) {
      printf("Fail11: %s != %s\n", tests[i].string, tests[i].expected_result);
    }

    reverse2(tests[i].string, buf);
    if (strcmp(buf, tests[i].expected_result)) {
      printf("Fail2: %s != %s\n", tests[i].string, tests[i].expected_result);
    }
  }
  return 0;
}

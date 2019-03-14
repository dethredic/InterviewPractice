#include "test_common.h"

#include "no_repeated_chars.h"

typedef struct {
  char *input;
  bool expected_result;
} test;

static test tests[] = {
  {"a", true},
  {"aa", false},
  {"aaa", false},
  {"ab", true},
  {"aba", false},
  {"abb", false},
  {"A a", true},
  {"", true},
  {"  ", false},
  {"abcdefghijklmnopABCDEFGHIJKLMNOP", true},
};

int main() {
  printf("Running %s\n", __FILE__);
  for (unsigned i = 0; i < ARRAY_LENGTH(tests); i++) {
    if (no_repeated_chars1(tests[i].input) != tests[i].expected_result) {
      printf("Fail1: %s != %d\n", tests[i].input, tests[i].expected_result);
    }
    if (no_repeated_chars2(tests[i].input) != tests[i].expected_result) {
      printf("Fail2: %s != %d\n", tests[i].input, tests[i].expected_result);
    }
  }

  return 0;
}

#include "test_common.h"

#include "compress.h"

#include <string.h>

typedef struct {
  char *string;
  char *expected_result;
} test;

static test tests[] = {
  {"", ""},
  {"a", "a"},
  {"aa", "a2"},
  {"aaa", "a3"},
  {"aabb", "a2b2"},
  {"abbcccbba", "abbcccbba"},
  {"abbcccccbba", "a1b2c5b2a1"},
  {"111222333444", "13233343"}
};

int main() {
  printf("Running %s\n", __FILE__);
  for (unsigned i = 0; i < ARRAY_LENGTH(tests); i++) {
    char buf[16];

    compress(tests[i].string, buf);
    if (strcmp(buf, tests[i].expected_result)) {
      printf("Fail: %s != %s\n", tests[i].string, buf);
    }
  }

  return 0;
}

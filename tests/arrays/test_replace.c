#include "test_common.h"

#include "replace.h"

#include <string.h>

typedef struct {
  char *string;
  char *expected_result;
} test;

static test tests[] = {
  {"", ""},
  {" ", "%20"},
  {"a ", "a%20"},
  {" a", "%20a"},
  {"a b", "a%20b"},
  {"a  b", "a%20%20b"},
  {"a b c", "a%20b%20c"},
};

int main() {
  printf("Running %s\n", __FILE__);
  for (unsigned i = 0; i < ARRAY_LENGTH(tests); i++) {
    char buf[16];

    strcpy(buf, tests[i].string);
    urlize1(buf);
    if (strcmp(buf, tests[i].expected_result)) {
      printf("Fail1: %s != %s\n", tests[i].string, tests[i].expected_result);
    }

    urlize2(tests[i].string, buf);
    if (strcmp(buf, tests[i].expected_result)) {
      printf("Fail2: %s != %s\n", tests[i].string, tests[i].expected_result);
    }
  }

  return 0;
}

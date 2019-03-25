#include "test_common.h"

#include "start_of_loop.h"

#include <string.h>


int main() {
  printf("Running %s\n", __FILE__);

  ListNode e = {
    .next = NULL,
    .data = 5,
  };
  ListNode d = {
    .next = &e,
    .data = 4,
  };
  ListNode c = {
    .next = &d,
    .data = 3,
  };
  ListNode b = {
    .next = &c,
    .data = 2,
  };
  ListNode a = {
    .next = &b,
    .data = 1,
  };

  ListNode *loop_node = &b;

  e.next = loop_node;

  ListNode *result = start_of_loop(&a);

  if (result == loop_node) {
    // printf("Success\n");
  } else {
    printf("Fail\n");
  }

  return 0;
}



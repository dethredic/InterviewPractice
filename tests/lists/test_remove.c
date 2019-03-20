#include "test_common.h"

#include "remove.h"

#include <string.h>

void prv_print_list(ListNode *head) {
  ListNode *itr = head;
  while (itr != NULL) {
    printf("%d ", itr->data);
    itr = itr->next;
  }
  printf("\n");
}

int main() {
  printf("Running %s\n", __FILE__);

  ListNode d = {
    .next = NULL,
    .data = 4,
  };
  ListNode c = {
    .next = &d,
    .data = 3,
  };
  ListNode b = {
    .next = &c,
    .data = 3,
  };
  ListNode a = {
    .next = &b,
    .data = 1,
  };

  remove_duplicates(&a);

  // prv_print_list(&a);


  return 0;
}

#include "test_common.h"

#include "kth_last_elem.h"

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
    .data = 2,
  };
  ListNode a = {
    .next = &b,
    .data = 1,
  };

  ListNode *e = get_kth_last_emem(&a, 2);

  if (e != NULL) {
    // printf("%d\n", e->data);
  } else {
    printf("NULL\n");
  }

  return 0;
}

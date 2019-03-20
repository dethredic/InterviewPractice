#include "kth_last_elem.h"

#include <stddef.h>

//! Get the kth to last elem from a list. Assumes the list has at least k elements
ListNode* get_kth_last_emem(ListNode *head, int k) {
  ListNode *a = head;
  ListNode *b = head;

  for (int i = 0; i < k; i++) {
    if (b->next == NULL) {
      return NULL;
    }
    b = b->next;
  }

  while (b->next != NULL) {
    a = a->next;
    b = b->next;
  }

  return a;
}

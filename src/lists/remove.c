#include "remove.h"

#include <stddef.h>

//! Remove duplicates from a linked list (no temp buffer)
void remove_duplicates(ListNode *head) {
  ListNode *itr = head;

  while (itr != NULL) {
    ListNode *a = itr;
    ListNode *b = itr->next;
    while (b != NULL) {
      if (itr->data == b->data) {
        a->next = b->next;
      } else {
        a = a->next;
      }
      b = b->next;
    }
    itr = itr->next;
  }
}

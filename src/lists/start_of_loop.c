#include "start_of_loop.h"

#include <stddef.h>
#include <stdio.h>


ListNode* start_of_loop(ListNode *head) {
  ListNode *a = head;
  ListNode *b = head;

  do {
    a = a->next;
    b = b->next->next;
  } while (a != b);

  a = head;

  while (a != b) {
    a = a->next;
    b = b->next;
  }

  return a;
}

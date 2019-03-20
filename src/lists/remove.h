#pragma once

typedef struct ListNode {
  struct ListNode *next;
  int data;
} ListNode;

//! Remove duplicates from a linked list (no tmp buffer)
void remove_duplicates(ListNode *head);

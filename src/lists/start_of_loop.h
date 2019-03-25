#pragma once

typedef struct ListNode {
  struct ListNode *next;
  int data;
} ListNode;

//! Return the node at the beginning of a loop in a linked list
ListNode* start_of_loop(ListNode *head);

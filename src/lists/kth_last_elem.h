#pragma once

typedef struct ListNode {
  struct ListNode *next;
  int data;
} ListNode;

//! Get the kth to last elem from a list. Assumes the list has at least k elements
ListNode* get_kth_last_emem(ListNode *head, int k);

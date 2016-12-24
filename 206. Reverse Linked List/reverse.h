#ifndef REVERSE_H
#define REVERSE_H

#include <iostream>

/**
* Definition for singly-linked list.
*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL)
        {
            return NULL;
        }
        ListNode *result = new ListNode(head->val);
        ListNode *nav;
        for (nav = head->next; nav != NULL; nav = nav->next)
        {
           insert_front(result, nav); 
        }
        return result;
    }

    void insert_front(ListNode *&result, ListNode *nav)
    {
        ListNode *node = new ListNode(nav->val);
        node->next = result;
        result = node;
    }
};

#endif
#ifndef LINK_H
#define LINK_H

#include <iostream>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *nav = node;
        while (1)
        {
            if (nav->next->next == NULL)
            {
                nav->val = nav->next->val;
                nav->next = NULL;
                break;
            }
            else
            {
                nav->val = nav->next->val;
            }
            nav = nav->next;
        }
    }
};

#endif
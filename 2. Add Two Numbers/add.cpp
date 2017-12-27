/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l1_header = l1;
        ListNode *l2_header = l2;
        ListNode *result = l1_header;
        int carry = 0;

        while (true) {
        	int sum = l1_header->val + l2_header->val + carry;
        	if (sum >= 10) {
        		carry = 1;
        		sum	-= 10;
        	} else {
        		carry = 0;
        	}
        	l1_header->val = sum;

        	if (!(l1_header->next) && !(l2_header->next)) {
        		if (carry == 1) {
        			ListNode *tail = new ListNode(1);
        			l1_header->next = tail;
        		}
        		break;
        	} else if (l1_header->next && !(l2_header->next)) {
        		l1_header = l1_header->next;
        		while (true) {
        			int sum = l1_header->val + carry;
        			if (sum == 10) {
        				carry = 1;
        				sum = 0;
        			} else {
        				carry = 0;
        			}
        			l1_header->val = sum;
        			if (!(l1_header->next)) {
        				break;
        			}
        			l1_header = l1_header->next;
        		}
        		if (carry == 1) {
        			ListNode *tail = new ListNode(1);
        			l1_header->next = tail;
        		}
        		break;
        	} else if (!(l1_header->next) && l2_header->next) {
        		l2_header = l2_header->next;
        		while (true) {
        			int sum = l2_header->val + carry;
        			if (sum == 10) {
        				carry = 1;
        				sum = 0;
        			} else {
        				carry = 0;
        			}
        			ListNode *tmp = new ListNode(sum);
        			l1_header->next = tmp;
                    l1_header = l1_header->next;
        			if (!(l2_header->next)) {
        				break;
        			}
        			l2_header = l2_header->next;
        		}
        		if (carry == 1) {
        			ListNode *tail = new ListNode(1);
        			l1_header->next = tail;
        		}
        		break;
        	} else {
        		l1_header = l1_header->next;
        		l2_header = l2_header->next;
        	}
        }
        return result;
    }
};
#include "reverse.h"

using namespace std;

void printall(ListNode *nav)
{
    while (nav != NULL)
    {
        cout << nav->val << endl;
        nav = nav->next;
    }
}

int main(int argc, char const *argv[])
{
    Solution s;
    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(2);
    ListNode *l3 = new ListNode(3);
    ListNode *l4 = new ListNode(4);
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = NULL;

    printall(l1);
    ListNode *result = s.reverseList(l1);

    cout << "--------------------------------" << endl;
    printall(result);

    delete l1, l2, l3, l4;
    return 0;
}
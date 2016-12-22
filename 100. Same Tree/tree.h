/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int p_null = (p == NULL);
        int q_null = (q == NULL);
        if (p_null && q_null)
        {
            return 1;
        }
        if (p_null || q_null)
        {
            return 0;
        }
        bool root = (p->val == q->val);
        return root && isSameTree(p->left, q->left) && isSameTree(p->right, q->right); 
    }
};
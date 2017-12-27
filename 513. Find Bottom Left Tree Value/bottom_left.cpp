/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	void helper(TreeNode *root, int depth, int &maxDepth, int &result) {
		if (!root) {
			return;
		} else {
			helper(root->left, depth+1, maxDepth, result);
			helper(root->right, depth+1, maxDepth, result);

			if (depth > maxDepth) {
				maxDepth = depth;
				result = root->val;
			}
		}
	}

    int findBottomLeftValue(TreeNode* root) {
        int result = root->val;
        int maxDepth = 0;

        helper(root, 0, maxDepth, result);

        return result;
    }
};
/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        return depth(root).second;
    }

    pair<int, TreeNode*> depth(TreeNode* root) {
        if (!root) return {0, NULL};
        pair<int, TreeNode*> left = depth(root->left), right = depth(root->right);
        int leftDepth = left.first, rightDepth = right.first;
        if (leftDepth == rightDepth) {
            return {leftDepth + 1, root};
        } else if (leftDepth > rightDepth) {
            return {leftDepth + 1, left.second};
        } else {
            return {rightDepth + 1, right.second};
        }
    }
};

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

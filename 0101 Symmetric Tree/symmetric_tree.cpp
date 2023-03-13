/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
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
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        return isSymmetricHelper(root->left, root->right);
    }

    bool isSymmetricHelper(TreeNode* leftNode, TreeNode* rightNode) {
        if (leftNode == NULL && rightNode == NULL) {
            return true;
        }
        if (leftNode == NULL || rightNode == NULL) {
            return false;
        }
        if (leftNode->val != rightNode->val) {
            return false;
        }
        return isSymmetricHelper(leftNode->left, rightNode->right) && isSymmetricHelper(leftNode->right, rightNode->left);
    }
};

/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

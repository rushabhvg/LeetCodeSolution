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
    long ans = 0, total = 0, subTreeSum;

    int maxProduct(TreeNode* root) {
        total = helperCalc(root);
        helperCalc(root);
        return ans % (int)(1e9 + 7);
    }

    int helperCalc(TreeNode* root) {
        if (!root) return 0;
        
        subTreeSum = root->val + helperCalc(root->left) + helperCalc(root->right);
        ans = max(ans, subTreeSum * (total - subTreeSum));
        
        return subTreeSum;
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

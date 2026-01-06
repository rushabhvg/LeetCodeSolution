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
    vector<int> sums;
    void dfs(TreeNode* root, size_t lvl) {
        if (root == nullptr) return;
        sums.resize(max(sums.size(), lvl));
        sums[lvl - 1] += root->val;
        dfs(root->left, lvl + 1);
        dfs(root->right, lvl + 1);
    }

    int maxLevelSum(TreeNode* root) {
        dfs(root, 1);
        return distance(begin(sums), max_element(begin(sums), end(sums))) + 1;
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

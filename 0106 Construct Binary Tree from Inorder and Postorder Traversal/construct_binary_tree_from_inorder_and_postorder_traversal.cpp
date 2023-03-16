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

    TreeNode* buildTreeHelper(vector<int>& inorder, int inorderStart, int inorderEnd, vector<int>& postorder, int postorderStart, int postorderEnd, unordered_map<int, int>& inorderMap) {
        if (inorderStart > inorderEnd || postorderStart > postorderEnd) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(postorder[postorderEnd]);
        int inorderIndex = inorderMap[root->val];
        int leftSubtreeSize = inorderIndex - inorderStart;
        root->left = buildTreeHelper(inorder, inorderStart, inorderIndex - 1, postorder, postorderStart, postorderStart + leftSubtreeSize - 1, inorderMap);
        root->right = buildTreeHelper(inorder, inorderIndex + 1, inorderEnd, postorder, postorderStart + leftSubtreeSize, postorderEnd - 1, inorderMap);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> inorderMap;
        for (int i = 0; i < inorder.size(); i++) {
            inorderMap[inorder[i]] = i;
        }
        return buildTreeHelper(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1, inorderMap);
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

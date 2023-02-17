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
    vector<int> arr;
public:
    void fill(TreeNode* root) {
        if(root==NULL) return;
        arr.push_back(root->val);
        if(root->left!=NULL) fill(root->left);
        if(root->right!=NULL) fill(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        fill(root);
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];
        for(int i=1; i<arr.size()-1; i++) {
            diff = min (diff, arr[i+1]-arr[i]);
        }
        return diff;
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

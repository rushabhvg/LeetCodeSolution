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
    int sumNumbers(TreeNode* root) {
        vector<int> arr;
        dfs(root, 0, arr);
        int sum = 0;
        for(int i=0; i<arr.size(); i++) {
            sum += arr[i];
        }
        return sum;
    }
    
    void dfs(TreeNode* root, int currVal, vector<int>& arr) {
        if(root == NULL) return;
        currVal *= 10;
        currVal += root->val;
        if(root->left == NULL && root->right == NULL) {
            arr.push_back(currVal);
            return;
        }
        dfs(root->left, currVal, arr);
        dfs(root->right, currVal, arr);
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

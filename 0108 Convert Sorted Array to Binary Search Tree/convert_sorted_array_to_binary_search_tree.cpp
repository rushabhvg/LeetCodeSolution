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
    TreeNode* bst(vector<int>& nums, int si, int li) {
        if(si>li) return NULL;
        int mid = si + (li-si)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = bst(nums, si, mid-1);
        node->right = bst(nums, mid+1, li);
        return node;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        if(n==0) {
            return NULL;
        }
        return bst(nums, 0, n-1);
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

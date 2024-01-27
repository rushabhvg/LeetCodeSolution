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

static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return vector<vector<int>> ();
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        bool ltr = true;
        while(q.size()) {
            int sz = q.size();
            vector<int> temp(sz);
            for(int i=0; i<sz; i++) {
                TreeNode* node = q.front();
                q.pop();
                int idx = ltr ? i : (sz-i-1);
                temp[idx] = node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ltr = !ltr;
            ans.push_back(temp);
        }
        return ans;
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

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
    int diff = 0;
    pair<int, int> solve(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return {root->val, root->val};
        if(root->left==NULL) {
            pair<int, int> p1 = solve(root->right);
            diff = max(diff, max(abs(p1.first - root->val), abs(p1.second - root->val) ) );
            return {
                min(p1.first, root->val), max(p1.second, root->val)
            };
        }
        if(root->right==NULL) {
            pair<int, int> p2 = solve(root->left);
            diff = max(diff, max(abs(p2.first - root->val), abs(p2.second - root->val) ) );
            return {
                min(p2.first, root->val), max(p2.second, root->val)
            };
        }
        pair<int, int> p1 = solve(root->left);
        pair<int, int> p2 = solve(root->right);
        int mn = min( min(p1.first, p1.second), min(p2.first, p2.second) );
        int mx = max( max(p1.first, p1.second), max(p2.first, p2.second) );
        diff = max(diff, max( abs(root->val - mn), abs(root->val - mx) ) );
        return {
            min(mn, root->val), max(mx, root->val)
        };
    }
    int maxAncestorDiff(TreeNode* root) {
        pair<int, int> t = solve(root);
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

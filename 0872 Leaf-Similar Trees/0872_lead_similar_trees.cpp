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
private:
    vector<int> arr1;
    vector<int> arr2;
    void leaf(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) {
            arr1.push_back(root->val);
            return;
        } 
        if(root->left!=NULL) {
            leaf(root->left);
        } 
        if(root->right!=NULL) {
            leaf(root->right);
        }
        return;
    }
    void leaf2(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) {
            arr2.push_back(root->val);
            return;
        }
        if(root->left!=NULL) {
            leaf2(root->left);
        } 
        if(root->right!=NULL) {
            leaf2(root->right);
        }
        return;
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leaf(root1);
        leaf2(root2);
        if(arr1.size()!=arr2.size()) return false;
        for(int i=0; i<arr1.size(); i++) {
            cout<<i<<":\t"<<arr1[i]<<"\t"<<arr2[i]<<"\n";
            if(arr1[i]!=arr2[i]) return false;
        }
        return true;
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

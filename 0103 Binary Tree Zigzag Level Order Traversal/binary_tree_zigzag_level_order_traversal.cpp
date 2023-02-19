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
    // vector<vector<TreeNode*>> arr;
    vector<vector<int>> arrVal;
    vector<TreeNode*> curr;
    vector<int> currVal;
    bool rtl=false;
    bool ltr=false;
    void goZigZag() {
        vector<TreeNode*> currNew;
        currVal.clear();
        vector<int> currValNew;
        if(rtl) {
            cout<<endl<<"rtl: "<<rtl<<endl;
            for(int i=curr.size()-1; i>=0; i--) {
                TreeNode* newNode = curr[i];
                cout<<endl<<"newNode: "<<newNode->val;
                if(newNode->left!=NULL) {
                    currNew.push_back(newNode->left);
                    currVal.push_back(newNode->left->val);
                }
                if(newNode->right!=NULL) {
                    currNew.push_back(newNode->right);
                    currVal.push_back(newNode->right->val);
                }
            }
            rtl=false; ltr=true;
        } else {
            cout<<endl<<"rtl: "<<rtl<<endl;
            for(int i=curr.size()-1; i>=0; i--) {
                TreeNode* newNode = curr[i];
                cout<<endl<<"newNode: "<<newNode->val;
                if(newNode->right!=NULL) {
                    currNew.push_back(newNode->right);
                    currVal.push_back(newNode->right->val);
                }
                if(newNode->left!=NULL) {
                    currNew.push_back(newNode->left);
                    currVal.push_back(newNode->left->val);
                }
            }
            rtl=true; ltr=false;
        }
        if(currVal.size()==0) {
            return;
        }
        arrVal.push_back(currVal);
        curr = currNew;
        currNew.clear();
        goZigZag();
    }
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return arrVal;
        curr.push_back(root);
        currVal.push_back(root->val);
        // arr.push_back(curr);
        arrVal.push_back(currVal);
        if(root->left==NULL && root->right==NULL) {
            return arrVal;
        }
        curr.clear();
        currVal.clear();
        if(root->right!=NULL) {
            curr.push_back(root->right);
            currVal.push_back(root->right->val);
        }
        if(root->left!=NULL) {
            curr.push_back(root->left);
            currVal.push_back(root->left->val);
        }
        // arr.push_back(curr);
        arrVal.push_back(currVal);
        // curr.clear();
        currVal.clear();
        rtl=true;
        goZigZag();
        return arrVal;
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

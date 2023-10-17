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

class Solution {
public:
    int findRoot(int n, vector<int>& leftChild, vector<int>& rightChild) {
        unordered_set<int> children;
        children.insert(leftChild.begin(), leftChild.end());
        children.insert(rightChild.begin(), rightChild.end());

        for(int i=0; i<n; i++) {
            if(children.find(i)==children.end()) return i;
        }
        return -1;
    }
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        int root = findRoot(n, leftChild, rightChild);
        if(root==-1) return false;
        unordered_set<int> seen;
        stack<int> stackk;
        seen.insert(root);
        stackk.push(root);

        while(!stackk.empty()) {
            int node = stackk.top();
            stackk.pop();

            int children[] = {leftChild[node], rightChild[node]};
            for(int child:children) {
                if(child!=-1) {
                    if(seen.find(child)!=seen.end()) {
                        return false;
                    }
                    stackk.push(child);
                    seen.insert(child);
                }
            }
        }

        return seen.size()==n;
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

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
    vector<vector<int>> res;
    void recr(int num, int tot, int k, vector<int>& ans) {
        if(num==tot+1) {
            if(ans.size()==k) res.push_back(ans);
            return;
        }
        ans.push_back(num);
        recr(num+1, tot, k, ans);
        ans.pop_back();
        recr(num+1, tot, k, ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> ans;
        recr(1, n, k, ans);
        return res;
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

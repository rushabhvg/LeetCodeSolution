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

class Solution {
private:
    bool chk(string& s, int low, int high) {
        while(low<high) if(s[low++] != s[high--] ) return false;
        return true;
    }
    void dfs(vector<vector<string>> &res, string& s, int st, vector<string> &curr) {
        if(st>=s.length()) res.push_back(curr);
        for(int end = st; end<s.length(); end++) {
            if(chk(s, st, end)) {
                curr.push_back(s.substr(st, end-st+1));
                dfs(res, s, end+1, curr);
                curr.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> curr;
        dfs(res, s, 0, curr);
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

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
    int mod = 1e9+7;
    int dfs(vector<int>& dp, int start, string& s, int& k) {
        if(dp[start] != 0) return dp[start];
        if(start == s.size()) return 1;
        if(s[start]=='0') return 0;

        int cnt = 0;
        for(int end = start; end<s.size(); end++) {
            string currNo = s.substr(start, end-start+1);
            if(stoll(currNo)>k) break;
            cnt = (cnt+dfs(dp, end+1, s, k)) % mod;
        }
        dp[start] = cnt;
        return cnt;
    }
    int numberOfArrays(string s, int k) {
        int m = s.size();
        vector<int> dp(m+1, 0);
        return dfs(dp, 0, s, k);
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

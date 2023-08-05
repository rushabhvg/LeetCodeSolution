
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
    unordered_map<string,bool>dp;
    bool solve(string s, unordered_set<string>& m){
        if(s.length()==0){
            return true;
        }
        if(dp.find(s)!=dp.end()) return dp[s];
        for(int i=0;i<s.length();i++){
            string r=s.substr(0,i+1);
            if(m.count(r)){
                if(solve(s.substr(i+1),m)) return dp[s]=true;
            }
        }
        return dp[s]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> m;
        for(auto x:wordDict) {
            m.insert(x);
        }
        return solve(s,m);
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

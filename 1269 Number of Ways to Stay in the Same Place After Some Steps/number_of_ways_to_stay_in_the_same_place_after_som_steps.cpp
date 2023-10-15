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
    vector<vector<int>> memo;
    int MOD = 1e9+7;
    int arrLen;
    int dp(int curr, int remain) {
        if(remain==0) {
            if(curr==0) {
                return 1;
            }
            return 0;
        }
        if(memo[curr][remain]!=-1) return memo[curr][remain];
        int ans = dp(curr, remain-1);
        if(curr>0) ans = (ans+(dp(curr-1, remain-1)))%MOD;
        if(curr<arrLen-1) ans = (ans+dp(curr+1, remain-1))%MOD;
        memo[curr][remain] = ans;
        return ans;
    }
    int numWays(int steps, int arrLen) {
        arrLen = min(steps, arrLen);
        this->arrLen = arrLen;
        memo = vector(arrLen, vector(steps+1, -1));
        return dp(0, steps);
        /*
            al  0   1   2   3   4   5
        s   0   0   0   0   0   0   0
            1   0   1   1   1   1   1
            2   0   1   2   2   2   2
            3   0   1   2   
            4   0   1
            5   0   1
        */
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

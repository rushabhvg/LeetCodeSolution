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

using ll = long long;

class Solution {
public:
    ll ks(int idx, vector<int>& nums, int x, int prev, vector<vector<ll>>& dp) {
        if(idx==nums.size()) return 0;
        ll pick = -1e12, notPick = -1e12;
        if(dp[idx][prev]!=-1) return dp[idx][prev];
        if(nums[idx]%2!=0) {
            if(prev) pick = nums[idx]+ ks(idx+1, nums, x, 1, dp);
            else pick = nums[idx]-x+ks(idx+1, nums, x, 1, dp);
        } else {
            if(!prev) pick = nums[idx] + ks(idx+1, nums, x, 0, dp);
            else pick = nums[idx] - x + ks(idx+1, nums, x, 0, dp);
        }
        notPick = 0 + ks(idx+1, nums, x, prev, dp);
        return dp[idx][prev] = max(notPick, pick);
    }
    ll maxScore(vector<int>& nums, int x) {
        vector<vector<ll>> dp(nums.size()+1, vector<ll>(2,-1));
        return ks(0, nums, x, (nums[0]%2==1), dp);
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

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
    int findMaximumLength(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pre(n+1);
        pre[0] = 0;
        for(int i=0; i<n; i++) pre[i+1] = pre[i] + nums[i];
        vector<pair<int, long long>> dp(n + 2);
        dp[0].first = 1;
        for(int i=1; i<=n; i++) {
            dp[i] = max(dp[i], dp[i-1]);
            int idx=lower_bound(pre.begin(),pre.end(), 2*pre[i]-dp[i].second)-pre.begin();
            dp[idx] = max(dp[idx], {dp[i].first+1, pre[i]});
        }
        return dp[n].first;
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

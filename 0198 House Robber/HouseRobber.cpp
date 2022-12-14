class Solution {
public:
    int rob(vector<int>& nums) {
        int dp[nums.size()+1];
        dp[0]=0;
        dp[1]=nums[0];
        int i=0;
        for(i=1; i<nums.size(); i++) {
            dp[i+1]= max(dp[i], (dp[i-1] + nums[i]) );
        }
        return dp[nums.size()];
    }
};

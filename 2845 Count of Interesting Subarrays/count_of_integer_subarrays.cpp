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
    long long countInterestingSubarrays(vector<int>& nums, int mod, int k) {
        long long n = nums.size();
        vector<long long> pre(n+1, 0);
        unordered_map<long long,long long> mp;
        mp[0] = 1;
        long long ans = 0;
        for(int i=0;i<n;i++) {
            if(nums[i]%mod==k) pre[i+1] = pre[i]+1;
            else pre[i+1] = pre[i];
            long long target = (pre[i+1]-k+mod)%mod;
            ans += mp[target];
            mp[pre[i+1]%mod]++;
        }
        return ans;
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

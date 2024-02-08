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
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = LONG_MIN;
        unordered_map<int, vector<int>> mp;
        vector<long long> prefSum(1, 0);
        for(int i=0; i<nums.size(); i++) {
            prefSum.push_back(prefSum[i]+(long long)nums[i]);
            if(mp.find(nums[i]+k) != mp.end()) {
                for(auto e:mp[nums[i] + k]) {
                    if(i<e) ans = max(ans, prefSum[e] - prefSum[i]);
                    else ans = max(ans, prefSum[i+1] - prefSum[e-1]);
                }
            }
            if(mp.find(nums[i]-k)!=mp.end()) {
                for(auto e : mp[nums[i]-k]) {
                    if(i<e) ans = max(ans, prefSum[e]-prefSum[i]);
                    else ans = max(ans, prefSum[i+1] - prefSum[e-1]);
                }
            }
            mp[nums[i]].push_back(i+1);
        }
        return ans == LONG_MIN ? 0 : ans;
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

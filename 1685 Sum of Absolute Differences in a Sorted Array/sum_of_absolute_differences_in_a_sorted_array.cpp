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
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> pre(nums.size());
        pre[0] = nums[0];
        for(int i=1; i<nums.size(); i++) {
            pre[i] = pre[i-1]+nums[i];
        }
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int leftSum = pre[i] - nums[i];
            int rightSum = pre[n-1] - pre[i];
            int lc = i;
            int rc = n-i-1;
            int lt = lc*nums[i]-leftSum;
            int rt = rightSum-rc*nums[i];
            ans.push_back(lt+rt);
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

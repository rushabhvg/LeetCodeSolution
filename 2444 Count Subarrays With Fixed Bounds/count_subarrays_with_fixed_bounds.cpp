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
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int minPos = -1, maxPos = -1, leftB = -1;
        for(int i=0; i<nums.size(); ++i) {
            if(nums[i]<minK || nums[i]>maxK) leftB = i;
            if(nums[i]==minK) minPos = i;
            if(nums[i]==maxK) maxPos = i;
            ans += max(0, min(maxPos, minPos)-leftB);
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

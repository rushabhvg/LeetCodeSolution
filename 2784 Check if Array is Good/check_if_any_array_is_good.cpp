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
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return false;
        sort(nums.begin(), nums.end());
        if(nums[n-1]<n-1 || nums.size()<nums[n-1]) return false;
        for(int i=0; i<n-2; i++) {
            if(nums[i+1]!=nums[i]+1) return false;
        }
        if(nums[n-1]!=nums[n-2]) return false;
        return true;
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

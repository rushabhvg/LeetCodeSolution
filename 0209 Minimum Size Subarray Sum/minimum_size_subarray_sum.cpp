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
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0, right=0, sumCurr=0;
        int res=INT_MAX;
        for(right=0; right<nums.size(); right++) {
            sumCurr+=nums[right];
            while(sumCurr>=target) {
                res = min(res, right-left+1);
                sumCurr -= nums[left];
                left++;
            }
        }
        return res == INT_MAX?0:res;
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

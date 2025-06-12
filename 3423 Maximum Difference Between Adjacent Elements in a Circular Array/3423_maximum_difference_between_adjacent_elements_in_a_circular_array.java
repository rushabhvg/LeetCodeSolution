/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
    public int maxAdjacentDistance(int[] nums) {
        int n = nums.length;
        int mxDiff = Math.abs(nums[0] - nums[n-1]);
        for(int i=0; i<n-1; i++) {
            int diff = Math.abs(nums[i] - nums[i+1]);
            mxDiff = (mxDiff<diff) ? diff : mxDiff;
        }
        return mxDiff;
    }
}

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

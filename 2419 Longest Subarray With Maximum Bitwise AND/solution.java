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
    public int longestSubarray(int[] nums) {
        int mxNum = nums[0];
        for(int num : nums) {
            mxNum = Math.max(num, mxNum);
        }
        int mxSize = 1;
        int curr = 0;
        for(int num : nums) {
            if(num == mxNum) {
                curr++;
            } else {
                mxSize = Math.max(mxSize, curr);
                curr = 0;
            }
        }
        return Math.max(mxSize, curr);
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

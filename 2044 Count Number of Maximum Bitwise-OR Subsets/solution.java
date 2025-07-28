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
    public int countMaxOrSubsets(int[] nums) {
        int mxOr = 0;
        for(int n: nums) {
            mxOr |= n;
        }
        return dfs(nums, 0, 0, mxOr);
    }
    private int dfs(int[] nums, int idx, int currOr, int mxOr) {
        if(idx==nums.length) {
            return currOr == mxOr ? 1 : 0;
        }
        int inc = dfs(nums, idx+1, currOr | nums[idx], mxOr);
        int exc = dfs(nums, idx+1, currOr, mxOr);
        return inc + exc;
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

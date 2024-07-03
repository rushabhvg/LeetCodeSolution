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
    public int minDifference(int[] nums) {
        int n = nums.length;
        if(n<=4) return 0;
        int ans = Integer.MAX_VALUE;
        Arrays.sort(nums);
        for(int i=0; i<4; i++) {
            ans = Math.min(ans, nums[n-4+i] - nums[i]);
        }
        return ans;
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

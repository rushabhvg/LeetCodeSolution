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
    public long maximumTotalCost(int[] nums) {
        int n = nums.length;
        long ar = nums[0];
        long sr = nums[0];
        for(int i=1; i<n; i++) {
            long ta = Math.max(ar, sr) + nums[i];
            sr = ar - nums[i];
            ar = ta;
        }
        return Math.max(ar, sr);
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

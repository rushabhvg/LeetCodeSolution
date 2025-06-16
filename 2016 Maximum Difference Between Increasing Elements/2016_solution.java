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
    public int maximumDifference(int[] nums) {
        int ans = -1;
        for(int i=0; i<nums.length-1; i++) {
            for(int j=i+1; j<nums.length; j++) {
                ans = (ans < (nums[j] - nums[i]) ) ? nums[j] - nums[i] : ans;
            }
        }
        return ans<=0 ? -1 : ans;
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

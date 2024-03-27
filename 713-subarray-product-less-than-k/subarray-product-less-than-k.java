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
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        int st = 0;
        int end = 0;
        int prod = 1;
        int ans = 0;
        while(end<nums.length) {
            prod *= nums[end++];
            while(st<end && prod>=k) {
                prod /= nums[st++];
            }
            if(prod<k) {
                ans += end-st;
            }
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

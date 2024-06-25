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
    public int findMaxConsecutiveOnes(int[] nums) {
        int mx = 0;
        int curr = 0;
        int n = nums.length;
        for(int i=0; i<n; i++) {
            if(nums[i]==1) {
                curr++;
                mx = Math.max(mx, curr);
            } else {
                mx = Math.max(mx, curr);
                curr = 0;
            }
        }
        return mx;
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

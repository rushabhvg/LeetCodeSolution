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
    public int minOperations(int[] nums) {
        int ans = 0;
        int tgt = 1;
        int n = nums.length, cnt = 0;
        for(int i=0; i<n; i++) {
            if(nums[i]!=tgt) {
                ans++;
                tgt = tgt==1 ? 0 : 1;
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

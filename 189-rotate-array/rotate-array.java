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
    private void rvrs (int[] nums, int st, int ed) {
        while(st<ed) {
            nums[st] ^= nums[ed];
            nums[ed] ^= nums[st];
            nums[st++] ^= nums[ed--];
        }
    }
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k %= n;
        rvrs(nums, 0, n-1);
        rvrs(nums, 0, k-1);
        rvrs(nums, k, n-1);
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

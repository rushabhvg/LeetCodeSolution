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
    private void swap(int[] nums, int i, int j) {
        nums[i] ^= nums[j];
        nums[j] ^= nums[i];
        nums[i] ^= nums[j];
        return ;
    }
    private void rvr(int[] nums, int st) {
        int a = st;
        int b = nums.length-1;
        while(a<b) {
            swap(nums, a, b);
            a++;
            b--;
        }
        return ;
    }
    public void nextPermutation(int[] nums) {
        int n = nums.length;
        int i;
        int j;
        for(i=n-2; i>=0; i--) {
            if(nums[i]<nums[i+1]) break;
        }
        if(i==-1) {
            rvr(nums, 0);
            return ;
        }
        for(j=n-1; j>=0; j--) {
            if(nums[j]>nums[i]) break;
        }
        swap(nums, i, j);
        rvr(nums, i+1);
        return ;
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

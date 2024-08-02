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
    public int minSwaps(int[] nums) {
        int ones = 0, x=0, onesInWin = 0, i=0, n = nums.length;
        for(int v:nums) {
            if(v==1) ones++;
        }
        int nums2[] = new int[n*2];
        for(i=0; i<n; i++) {
            nums2[i] = nums[i];
            nums2[i+n] = nums[i];
        }
        for(i=0; i<n*2; i++) {
            if(i>=ones && nums2[i-ones]==1) x--;
            if(nums2[i]==1) x++;
            onesInWin = Math.max(x, onesInWin);
        }
        return ones-onesInWin;
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

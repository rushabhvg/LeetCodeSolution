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
    public int[] rearrangeArray(int[] nums) {
        int n = nums.length;
        int[] pos = new int[n/2];
        int[] neg = new int[n/2];
        int p=0, ni=0;
        for(int i=0; i<n; i++) {
            if(nums[i]>=0) pos[p++] = nums[i];
            else neg[ni++] = nums[i];
        }
        p=ni=0;
        for(int i=0; i<n; i++) {
            nums[i++] = pos[p++];
            nums[i] = neg[ni++];
        }
        return nums;
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

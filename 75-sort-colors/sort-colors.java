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
    public void sortColors(int[] nums) {
        int n = nums.length;
        int pos1 = 0, pos2=n-1;
        for(int i=0; i<=pos2; i++) {
            if(nums[i]==0) {
                // swap(nums[i], nums[pos1++]);
                nums[i] = nums[pos1];
                nums[pos1++] = 0;
            } else if(nums[i]==2) {
                // swap(nums[i--], nums[pos2--]);
                nums[i--] = nums[pos2];
                nums[pos2--] = 2;
            }
        }
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

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
    public void moveZeroes(int[] nums) {
        int n = nums.length;
        int st = 0;
        for(int i=0; i<n; i++) {
            if(nums[i]!=0) {
                nums[st] = nums[i];
                st++;
            }
        }
        for(int i=st; i<n; i++) {
            nums[i] = 0;
        }
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

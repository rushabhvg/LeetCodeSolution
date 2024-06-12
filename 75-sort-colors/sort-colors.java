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
        int fst = 0;
        int lst = nums.length-1;
        for(int i=0; i<=lst; i++) {
            while(i>=fst && i<=lst && (nums[i]==0 || nums[i]==2)) {
                if(nums[i]==0) {
                    nums[i] = nums[fst];
                    nums[fst++] = 0;
                } else if (nums[i]==2) {
                    nums[i] = nums[lst];
                    nums[lst--] = 2;
                }
            }
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

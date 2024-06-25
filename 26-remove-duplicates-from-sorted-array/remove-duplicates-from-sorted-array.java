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
    public int removeDuplicates(int[] nums) {
        int lst = 0;
        int n = nums.length;
        for(int i=1; i<n; i++) {
            if(nums[i]!=nums[lst]) {
                lst++;
                nums[lst] = nums[i];
            }
        }
        return lst+1;
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

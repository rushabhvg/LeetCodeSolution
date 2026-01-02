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
    public int repeatedNTimes(int[] nums) {
        for (int i = 0; i < nums.length - 2; i++) {
            if ((nums[i] == nums[i + 1]) || (nums[i] == nums[i + 2])) {
                return nums[i];
            }
        }
        return nums[nums.length - 1];
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

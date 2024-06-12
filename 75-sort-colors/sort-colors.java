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
    private void swap(int[] nums, int a, int b) {
        int t = nums[a];
        nums[a] = nums[b];
        nums[b] = t;
        return ;
    }
    public void sortColors(int[] nums) {
        int fst = 0;
        int lst = nums.length-1;
        int md = 0;
        while(md<=lst) {
            if (nums[md] == 0) {
                swap(nums, fst, md);
                fst++;
                md++;
            } else if (nums[md] == 1) {
                md++;
            } else {
                swap(nums, md, lst);
                lst--;
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
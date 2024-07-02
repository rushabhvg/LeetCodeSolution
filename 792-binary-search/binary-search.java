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
    public int search(int[] nums, int target) {
        int st = 0;
        int end = nums.length-1;
        int mid;
        while(st<=end) {
            mid = st + (end-st)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target) {
                st = mid+1;
            } else {
                end = mid-1;
            }
        }
        return -1;
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

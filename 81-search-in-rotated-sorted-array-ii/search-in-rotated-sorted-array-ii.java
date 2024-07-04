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
    public boolean search(int[] nums, int target) {
        int n = nums.length;
        int st = 0;
        int end = n-1;
        int mid = 0;
        while(st<=end) {
            mid = st + (end-st)/2;
            if(nums[mid]==target) return true;
            if(nums[mid]>nums[st]) {
                if(target<nums[mid] && target>=nums[st]) end = mid;
                else st = mid+1;
            } else if(nums[mid]<nums[st]) {
                if(target>nums[mid] && target<nums[st]) st = mid+1;
                else end = mid;
            } else st++;
        }
        return false;
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

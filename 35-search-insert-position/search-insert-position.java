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
    public int searchInsert(int[] nums, int target) {
        int n = nums.length;
        int st = 0;
        int end = n-1;
        int mid = 0;
        if(target<nums[0]) return 0;
        while(st<=end) {
            mid = st + (end-st)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target) {
                st = mid+1;
            } else {
                end = mid-1;
            }
        }
        return nums[end]<target ? end+1 : end;
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

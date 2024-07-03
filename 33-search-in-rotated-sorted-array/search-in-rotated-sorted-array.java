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
        int n = nums.length;
        int st = 0;
        int end = n-1;
        int mid = 0;
        while(st<end) {
            mid = (st+end)/2;
            if(nums[mid]>nums[end]) st = mid+1;
            else end = mid;
        }
        int rot = st;
        int actualMid = 0;
        st = 0;
        end = n-1;
        while(st<=end) {
            mid = st + (end-st)/2;
            actualMid = (mid + rot)%n;
            if(nums[actualMid]==target) return actualMid;
            if(nums[actualMid]<target) st = mid+1;
            else end = mid-1;
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

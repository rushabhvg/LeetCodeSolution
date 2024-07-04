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
    public int findMin(int[] nums) {
        int n = nums.length;
        int st = 0;
        int end = n-1;
        int mid = 0;
        while(st<end) {
            mid = st + (end-st)/2;
            if(nums[mid]>nums[end]) {
                st = mid+1;
            } else {
                end = mid;
            }
            if(st==end) break;
        }
        return nums[st];
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

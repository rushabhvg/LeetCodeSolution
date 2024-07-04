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
    public int singleNonDuplicate(int[] nums) {
        int n = nums.length;
        if(n==1) return nums[0];
        int st = 0;
        int end = n-1;
        int mid = 0;
        while(st<end) {
            mid = st + (end-st)/2;
            if(mid%2==1) {
                mid--;
            }
            if( nums[mid]!=nums[mid+1] ) {
                end = mid;
            } else {
                st = mid+2;
            }
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

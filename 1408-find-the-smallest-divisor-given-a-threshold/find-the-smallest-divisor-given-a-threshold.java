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
    public int smallestDivisor(int[] nums, int threshold) {
        int n = nums.length;
        int st = 1;
        int end = (int)1e6;
        int mid = 0;
        while(st<end) {
            mid = (st + end)/2;
            int tmp = 0;
            for(int i=0; i<n; i++) {
                int div = ( (nums[i]+mid-1)/mid );
                tmp += div;
            }
            if(tmp<=threshold) {
                end = mid;
            } else {
                st = mid+1;
            }
        }
        return st;
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

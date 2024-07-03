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
    public int[] searchRange(int[] nums, int target) {
        int n = nums.length;
        int[] ans = new int[2];
        ans[0] = -1;
        ans[1] = -1;
        if(n==0) return ans;
        int st = 0;
        int end = n-1;
        int mid = 0;
        while(st<=end) {
            mid = st + (end-st)/2;
            if(nums[mid]==target) {
                for(int i = 0; i<n; i++) {
                    if(nums[i]==target && ans[0]==-1) {
                        ans[0] = i;
                    }
                    if(nums[i]==target) {
                        ans[1] = i;
                    }
                }
                return ans;
            }
            if(nums[mid]<target) {
                st = mid+1;
            } else {
                end = mid-1;
            }
        }
        return ans;
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

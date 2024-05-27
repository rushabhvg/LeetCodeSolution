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
    public int specialArray(int[] nums) {
        Arrays.sort(nums);
        int st = 0;
        int end = nums.length;
        while(st<=end) {
            int mid = st + (end-st)/2;
            int ans = cnt(nums, mid);
            if(ans==mid) return mid;
            else if(ans>mid) st = mid+1;
            else end = mid-1;
        }
        return -1;
    }
    int cnt(int[] nums, int tgt) {
        int ans = 0;
        for(int num:nums) {
            if(num>=tgt) ans++;
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

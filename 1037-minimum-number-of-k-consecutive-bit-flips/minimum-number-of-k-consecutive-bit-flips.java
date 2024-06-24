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
    public int minKBitFlips(int[] nums, int k) {
        int n = nums.length;
        int ans = 0;
        int[] arr = new int[n];
        int flipped = 0;
        for(int i=0; i<n; i++) {
            if(i>=k) {
                flipped ^= arr[i-k];
            }
            if(flipped==nums[i]) {
                if(i+k>arr.length) return -1;
                arr[i] = 1;
                flipped ^= 1;
                ans++;
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

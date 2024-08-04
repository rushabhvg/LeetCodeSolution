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
    public int rangeSum(int[] nums, int n, int left, int right) {
        int[] arr = new int[n*(n+1)/2];
        for(int i=0, k=0; i<n; i++) {
            int s = 0;
            for(int j=i; j<n; j++) {
                s += nums[j];
                arr[k++] = s;
            }
        }
        Arrays.sort(arr);
        int ans = 0;
        final int mod = (int)1e9+7;
        for(int i=left-1; i<right; i++) {
            ans = ( ans + arr[i] ) % mod;
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

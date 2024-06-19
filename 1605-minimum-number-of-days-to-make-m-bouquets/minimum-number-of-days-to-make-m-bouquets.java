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
    public int minDays(int[] bloomDay, int m, int k) {
        int n = bloomDay.length;
        if((long)m*k > n) {
            return -1;
        }
        int low = 1, high = (int) 1e9;
        while(low<high) {
            int mid = low + (high-low)/2;
            if(isPoss(bloomDay, m, k, mid)) {
                high = mid;
            } else {
                low = mid+1;
            }
        };
        return low;
    }
    private boolean isPoss(int[] bloomDay, int m, int k, int day) {
        int tot = 0;
        int n = bloomDay.length;
        for(int i=0; i<n; i++) {
            int cnt = 0;
            while(i<n && cnt<k && bloomDay[i]<=day) {
                cnt++;
                i++;
            }
            if(cnt==k) {
                tot++;
                i--;
            }
            if(tot>=m) {
                return true;
            }
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

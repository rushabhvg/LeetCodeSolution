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
    private int[] digit = new int[100];
    public long kMirror(int k, int n) {
        int left = 1, cnt = 0;
        long ans = 0;
        while(cnt < n) {
            int right = left * 10;
            for(int op = 0; op < 2; op++) {
                for(int i = left; i < right && cnt < n; i++) {
                    long combined = i;
                    int x = (op == 0 ? i / 10 : i);
                    while(x > 0) {
                        combined = combined * 10 + (x % 10);
                        x /= 10;
                    }
                    if(isPal(combined, k)) {
                        cnt++;
                        ans += combined;
                    }
                }
            }
            left = right;
        }
        return ans;
    }
    private boolean isPal(long x, int k) {
        int len = -1;
        while(x > 0) {
            len++;
            digit[len] = (int)(x%k);
            x /= k;
        }
        for(int i = 0, j = len; i < j; i++, j--) {
            if(digit[i] != digit[j]) return false;
        }
        return true;
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

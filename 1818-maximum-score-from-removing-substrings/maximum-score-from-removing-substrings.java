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
    public int maximumGain(String s, int x, int y) {
        int n = s.length();
        int minMul = Math.min(x, y);
        int cntA = 0, cntB = 0;
        int ans = 0;
        for(int i=0; i<n; i++) {
            if(s.charAt(i)>'b') {
                ans += ( Math.min(cntA, cntB) * minMul);
                cntA = 0;
                cntB = 0;
            } else if (s.charAt(i)=='a') {
                if(y>x && cntB>0) {
                    cntB--;
                    ans += y;
                } else {
                    cntA++;
                }
            } else {
                if(x>y && cntA>0) {
                    cntA--;
                    ans += x;
                } else {
                    cntB++;
                }
            }
        }
        ans += ( Math.min(cntA, cntB) * minMul);
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

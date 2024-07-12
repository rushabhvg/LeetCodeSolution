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
        int ans = 0;
        int cntA = 0, cntB = 0;
        int n = s.length();
        int mx = Math.min(x, y);
        for(int i=0; i<n; i++) {
            if((s.charAt(i)>'b') ) {
                int mn = Math.min(cntA, cntB);
                ans += (mn*mx);
                cntA = 0;
                cntB = 0;
            } else if(s.charAt(i)=='a') {
                if(x<y && cntB>0) {
                    cntB--;
                    ans += y;
                } else cntA++;
            } else if(s.charAt(i)=='b') {
                if(x>y && cntA>0) {
                    cntA--;
                    ans += x;
                } else cntB++;
            }
        }
        ans += Math.min(cntA, cntB) * mx;
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

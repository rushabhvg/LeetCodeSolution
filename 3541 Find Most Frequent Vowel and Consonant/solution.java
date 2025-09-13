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
    public int maxFreqSum(String s) {
        int[] cnt = new int[26];
        for(char c: s.toCharArray()) {
            cnt[c-'a']++;
        }
        int mxV = 0, mxC = 0;
        for(int i = 0; i < 26; i++) {
            if( i == 0 || i == 4 || i == 8 || i == 14 || i == 20 ) {
                mxV = Math.max(mxV, cnt[i]);
            } else {
                mxC = Math.max(mxC, cnt[i]);
            }
        }
        return mxC + mxV;
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

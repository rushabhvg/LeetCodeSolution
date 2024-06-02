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
    public void reverseString(char[] s) {
        int n = s.length;
        for(int i=0; i<n/2; i++) {
            s[i] ^= s[n-i-1];
            s[n-1-i] ^= s[i];
            s[i] ^= s[n-i-1];
        }
        return ;
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

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
    public String[] divideString(String s, int k, char fill) {
        int n = s.length();
        n = n % k == 0 ? n/k : (n/k) + 1;
        String[] ans = new String[n];
        int j = 0;
        for(int i = 0; i < s.length();) {
            StringBuilder str = new StringBuilder();
            if( i+k <= s.length()) {
                str.append(s.substring(i, i+k));
            } else {
                str.append(s.substring(i, s.length()));
            }
            if(str.length() < k) {
                for(int m = str.length(); m < k; m++) {
                    str.append(fill);
                }
            }
            ans[j++] = str.toString();
            i = i + k;
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

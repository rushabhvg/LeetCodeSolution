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
    public int minimumChairs(String s) {
        int cnt = 0;
        int mx = -1;
        for(int i=0; i<s.length(); i++) {
            char c = s.charAt(i);
            if(c=='E') cnt++;
            else {
                mx = Math.max(mx, cnt);
                cnt--;
            }
        }
        mx = Math.max(mx, cnt);
        return mx;
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

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
    public int maxDepth(String s) {
        int cnt = 0;
        int mx = 0;
        for(char c: s.toCharArray()) {
            if(c=='(') {
                cnt++;
                if(mx<cnt) mx = cnt;
            } else if(c==')') cnt--;
        }

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

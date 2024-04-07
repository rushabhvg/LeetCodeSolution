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
    public boolean checkValidString(String s) {
        int cntL = 0;
        int cntR = 0;
        for(char c : s.toCharArray()) {
            cntL += c == '(' ? 1 : -1;
            cntR += c == ')' ? -1 : 1;
            if(cntR<0) break;
            cntL = Math.max(cntL, 0);
        }
        return cntL==0;
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

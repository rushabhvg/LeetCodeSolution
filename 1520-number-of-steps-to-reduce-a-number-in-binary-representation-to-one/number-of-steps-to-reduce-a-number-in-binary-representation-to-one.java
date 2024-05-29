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
    public int numSteps(String s) {
        int cnt = 0;
        int crry = 0;
        for(int i=s.length()-1; i>=1; i--) {
            int nm=s.charAt(i) - '0';
            if(nm==crry) {
                cnt++;
            } else {
                cnt+=2;
                crry=1;
            }
        }
        if(crry==1) cnt++;
        return cnt;
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
 
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
    public int bagOfTokensScore(int[] tokens, int power) {
        Arrays.sort(tokens);
        int scr = 0;
        int pts = 0;
        int i = 0;
        int j = tokens.length-1;
        while(i<=j) {
            if(power >= tokens[i]) {
                power -= tokens[i++];
                scr = Math.max(scr, ++pts);
            } else if(pts>0) {
                pts--;
                power += tokens[j--];
            } else {
                break;
            }
        }
        return scr;
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

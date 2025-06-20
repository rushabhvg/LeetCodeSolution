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
    public int maxDistance(String s, int k) {
        return Math.max (
            Math.max(simulate(s, k, "NE"), simulate(s, k, "NW")),
            Math.max(simulate(s, k, "SE"), simulate(s, k, "SW"))
        );
    }
    private int simulate(String s, int k, String prefer) {
        int pos = 0;
        int opp = 0;
        int max = 0;
        for(int i = 0; i < s.length(); i++) {
            char dir = s.charAt(i);
            if(prefer.indexOf(dir) != -1) {
                pos++;
            } else {
                pos--;
                opp++;
            }
            int possible = pos + 2 * Math.min(k, opp);
            max = Math.max(max, possible);
        }
        return max;
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

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
    public boolean lemonadeChange(int[] bills) {
        int c5 = 0;
        int c10 = 0;
        int c20 = 0;
        for(int i=0; i<bills.length; i++) {
            int chg = bills[i];
            if(chg==5) c5++;
            else if (chg==10) {
                c10++;
                if(c5>0) c5--;
                else return false;
            } else {
                c20++;
                if(c5>0 && c10>0) {
                    c5--;
                    c10--;
                } else if(c5>2) {
                    c5 -= 3;
                } else return false;
            }
        }
        return true;
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

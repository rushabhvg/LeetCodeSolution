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
    public boolean judgeSquareSum(int c) {
        /*
        1 = 1
        2 = 4
        3 = 9
        */
        for(int div = 2; div*div<=c; div++) {
            if(c%div==0) {
                int expCnt = 0;
                while(c%div==0) {
                    expCnt++;
                    c /= div;
                }
                if(div%4==3 && expCnt%2!=0) return false;
            }
        }
        return c%4!=3;
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

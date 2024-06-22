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
    public int reverse(int x) {
        int rev = 0;
        int ld = 0;
        while(x!=0) {
            int num = x%10;
            rev = ld*10+num;
            if( (rev-num)/10 != ld ) return 0;
            x /= 10;
            ld = rev;
        }
        return rev;
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

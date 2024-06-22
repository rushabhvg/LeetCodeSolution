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
        long num = 0;
        int sg = (x<0) ? 1 : 0;
        if(sg==1) x *= -1;
        // System.out.println(x);
        while(x>0) {
            int rem = x%10;
            num *= 10;
            num += rem;
            x /= 10;
        }
        if(sg==1) num *= -1;
        // System.out.println(num);
        if(
            (num>=-1*(Math.pow(2,31)) )
            && (num<=Math.pow(2, 31)-1)
        ) {
            return (int)num;
        }
        return 0;
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

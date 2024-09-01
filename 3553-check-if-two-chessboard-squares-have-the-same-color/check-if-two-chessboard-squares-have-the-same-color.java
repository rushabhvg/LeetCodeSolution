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
    public boolean checkTwoChessboards(String coordinate1, String coordinate2) {
        int c1 = coordinate1.charAt(0) - 'a';
        int c2 = coordinate2.charAt(0) - 'a';
        int i1 = new Integer( coordinate1.charAt(1) );
        int i2 = new Integer( coordinate2.charAt(1) );
        if (
            ( 
                (c1%2 == c2%2) &&
                (i1%2 == i2%2)
            ) ||
            (
                (c1%2 != c2%2) &&
                (i1%2 != i2%2)
            )
        ){
            return true;
        }
        return false;
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

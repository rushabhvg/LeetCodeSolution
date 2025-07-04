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
    public char kthCharacter(long k, int[] operations) {
        int res = 0, n = operations.length;
        k -= 1;
        for(int i =0; i < n && i < 60; i++) {
            if((k >> i) % 2 > 0) {
                res += operations[i];
            }
        }
        return (char)('a' + res % 26);
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

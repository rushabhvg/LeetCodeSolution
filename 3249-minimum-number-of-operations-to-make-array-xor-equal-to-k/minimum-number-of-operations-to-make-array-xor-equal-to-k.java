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
    public int minOperations(int[] nums, int k) {
        int xor = 0;
        for(int num:nums) {
            xor = xor ^ num;
        }
        xor = xor ^ k;
        int res = 0;
        while(xor>0) {
            if((xor&1)!=0) {
                res++;
            }
            xor = xor>>1;
        }
        return res;
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

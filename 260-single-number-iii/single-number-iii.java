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
    public int[] singleNumber(int[] nums) {
        int xor = 0;
        for(int num:nums) {
            xor ^= num;
        }
        int msk = 1;
        while( (xor&msk) == 0 ) {
            msk<<=1;
        }

        int n1 = 0;
        int n2 = 0;
        for(int num:nums) {
            if((num&msk) == 0) {
                n1 ^= num;
            } else {
                n2 ^= num;
            }
        }

        return new int[]{n1, n2};
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

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
    public int maximumLength(int[] nums) {
        int curr = nums[0]%2, odd = 0, even = 0, both = 0;
        for(int num: nums) {
            if(num%2 == 0) {
                even++;
            } else {
                odd++;
            }
            if(num%2 == curr) {
                both++;
                curr = 1 - curr;
            }
        }
        return Math.max(both, Math.max(even, odd));
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

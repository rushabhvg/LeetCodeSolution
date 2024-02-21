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
    public int majorityElement(int[] nums) {
        int i = nums[0];
        int cnt = 0;
        for(int n: nums) {
            if(i==n) {
                cnt++;
            } else if(cnt>0) {
                cnt--;
            } else {
                cnt = 1;
                i = n;
            }
        }
        return i;
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
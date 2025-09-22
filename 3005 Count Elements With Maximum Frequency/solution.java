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
    public int maxFrequencyElements(int[] nums) {
        int[] cnt = new int[101];
        int mx = -1;
        int ans = 0;
        for(int i = 0; i < nums.length; i++) {
            int num = nums[i];
            cnt[num]++;
            if(cnt[num] > mx) {
                mx = cnt[num];
            }
        }
        for(int i = 1; i < 101; i++) {
            if(cnt[i] == mx) {
                ans += mx;
            }
        }

        return ans;
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

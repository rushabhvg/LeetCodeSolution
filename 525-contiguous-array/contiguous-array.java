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
    public int findMaxLength(int[] nums) {
        int N = nums.length;
        int[] mp = new int[2*N+2];
        int curr = N;
        int res = 0;
        for(int i=0; i<N; i++) {
            // curr += (nums[i]<<1) - 1;
            // curr = curr + (nums[i]==1 ? 1 : -1);
            curr += (nums[i]==1 ? 1 : -1);
            if(curr == N) {
                res = i+1;
            } else if(mp[curr]==0) {
                mp[curr] = i+1;
            } else {
                res = Math.max(res, i-mp[curr]+1);
            }
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

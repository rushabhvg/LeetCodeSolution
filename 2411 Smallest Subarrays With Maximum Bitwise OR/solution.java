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
    public int[] smallestSubarrays(int[] nums) {
        int n = nums.length;
        int[] res = new int[n];
        int[] latest = new int[32];
        Arrays.fill(latest, -1);
        for(int i = n - 1; i >= 0; i--) {
            int farthest = i;
            for(int b = 0; b < 32; b++) {
                if( ( (nums[i] >> b) & 1) != 0) {
                    latest[b] = i;
                }
                if(latest[b] != -1) {
                    farthest = Math.max(farthest, latest[b]);
                }
            }
            res[i] = farthest - i + 1; 
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

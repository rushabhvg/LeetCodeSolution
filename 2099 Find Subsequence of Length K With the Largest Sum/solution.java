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
    public int[] maxSubsequence(int[] nums, int k) {
        int n = nums.length;
        int[][] idxVal = new int[n][2];
        for(int i = 0; i < n; i++) {
            idxVal[i] = new int[]{i, nums[i]};
        }
        Arrays.sort(idxVal, Comparator.comparingInt(a -> -a[1]));
        int[][] maxK = Arrays.copyOf(idxVal, k);
        Arrays.sort(maxK, Comparator.comparingInt(a -> a[0]));
        int[] seq = new int[k];
        for(int i = 0; i < k; i++) {
            seq[i] = maxK[i][1];
        }
        return seq;
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

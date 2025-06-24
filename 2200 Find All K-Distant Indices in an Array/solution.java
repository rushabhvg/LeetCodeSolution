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
    public List<Integer> findKDistantIndices(int[] nums, int key, int k) {
        List<Integer> ans = new ArrayList<>();
        int n = nums.length;
        int lastAdded = -1;
        for(int i = 0; i < n; i++) {
            if(nums[i] == key) {
                for(int j = Math.max( lastAdded, Math.max(0, i - k) -1 ) + 1; j < Math.min(n, (i + k + 1) ) && j > lastAdded; j++) {
                    ans.add(j);
                    lastAdded = j;
                }
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

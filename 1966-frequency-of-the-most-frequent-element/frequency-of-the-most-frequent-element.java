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
    public int maxFrequency(int[] nums, int k) {
        Arrays.sort(nums);
        HashSet <Integer> mp = new HashSet<>();
        int n = nums.length;
        int mxFq = 1;
        for(int i=n-1; i>0; i--) {
            int curr = 1;
            int frq = 0;
            int j = i-1;
            if(mp.contains(nums[i])) {
                continue;
            }
            mp.add(nums[i]);
            while(frq<=k && j>-1) {
                if(nums[i]-nums[j] + frq <=k) {
                    frq += (nums[i]-nums[j]);
                    curr++;
                    mxFq = Math.max(curr, mxFq);
                    j--;
                } else {
                    break;
                }
            }
        }
        return mxFq;
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

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
    public int longestSubarray(int[] nums, int limit) {
        int n = nums.length;
        LinkedList<Integer> incr = new LinkedList<>();
        LinkedList<Integer> dcr = new LinkedList<>();
        int mx = 0;
        int lft = 0;
        for(int i=0; i<n; i++) {
            int tmp = nums[i];
            while(incr.size()>0 && tmp<incr.getLast()) {
                incr.removeLast();
            }
            incr.add(tmp);
            while(dcr.size()>0 && tmp>dcr.getLast()) {
                dcr.removeLast();
            }
            dcr.add(tmp);
            while(dcr.getFirst()-incr.getFirst()>limit) {
                if(nums[lft]==dcr.getFirst()) dcr.removeFirst();
                if(nums[lft]==incr.getFirst()) incr.removeFirst();
                lft++;
            }
            int sz = i - lft + 1;
            mx = Math.max(mx, sz);
        }
        return mx;
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

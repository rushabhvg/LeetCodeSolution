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
    public int subarraySum(int[] nums, int k) {
        HashMap<Integer, ArrayList<Integer>> mp = new HashMap<>();
        ArrayList<Integer> arr = new ArrayList<>();
        int n = nums.length;
        int sum = 0;
        int cnt = 0;
        for(int i=0; i<n; i++) {
            sum += nums[i];
            if(sum==k) {
                cnt++;
            }
            int rem = sum-k;
            if(mp.containsKey(rem)) {
                ArrayList<Integer> arrr = mp.get(rem);
                for(int j=0; j<arrr.size(); j++) {
                    // cnt += mp.get(rem).get(j);
                    // cnt += i-mp.get(rem).get(j);
                    cnt++;
                }
            }
            if(mp.containsKey(sum)) {
                ArrayList<Integer> arrr = mp.get(sum);
                arrr.add(i);
                mp.put(sum, arrr);
            } else {
                ArrayList<Integer> arrr = new ArrayList<>();
                arrr.add(i);
                mp.put(sum, arrr);
            }
        }
        return cnt;
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

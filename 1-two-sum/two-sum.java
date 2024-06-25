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
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        int[] arr=new int[2];
        int sum = 0;
        int n = nums.length;
        for(int i=0; i<n; i++) {
            sum = target-nums[i];
            if(mp.getOrDefault(sum, -1)==-1) {
                mp.put(nums[i], i);
            } else {
                arr[0] = mp.get(sum);
                arr[1] = i;
                break;
            }
        }
        return arr;
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

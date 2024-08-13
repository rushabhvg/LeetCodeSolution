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
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> lst = new ArrayList<>();
        Arrays.sort(candidates);
        helper(lst, new ArrayList<>(), candidates, target, 0);
        return lst;
    }
    private void helper(List<List<Integer>> lst, List<Integer> tmp, int[] nums, int remain, int st) {
        if (remain<0) return;
        else if(remain==0) {
            lst.add(new ArrayList<>(tmp));
        } else {
            for(int i=st; i<nums.length; i++) {
                tmp.add(nums[i]);
                helper(lst, tmp, nums, remain-nums[i], i);
                tmp.remove(tmp.size()-1);
            }
        }
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

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
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> lst = new LinkedList<List<Integer>>();
        Arrays.sort(candidates);
        helper(lst, new ArrayList<Integer>(), candidates, target, 0);
        return lst;
    }
    public void helper(List<List<Integer>> lst, List<Integer> tmp, int[] cand, int rem, int st) {
        if(rem<0) return ;
        else if (rem==0) lst.add(new ArrayList<>(tmp));
        else {
            for(int i=st; i<cand.length; i++) {
                if(i>st && cand[i]==cand[i-1]) continue;
                tmp.add(cand[i]);
                helper(lst, tmp, cand, rem-cand[i], i+1);
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

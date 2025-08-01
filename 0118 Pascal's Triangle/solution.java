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
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        ans.add(new ArrayList<>());
        ans.get(0).add(1);
        for(int r = 1; r < numRows; r++) {
            List<Integer> curr = new ArrayList<>();
            List<Integer> prev = ans.get(r-1);
            curr.add(1);
            for(int j=1; j < r; j++) {
                curr.add(prev.get(j-1) + prev.get(j));
            }
            curr.add(1);
            ans.add(curr);
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

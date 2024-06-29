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
    List<List<Integer>> ans;
    List<List<Integer>> child;
    public void dfs(int x, int curr) {
        for(int ch:child.get(curr)) {
            if(ans.get(ch).size()==0 || ans.get(ch).get(ans.get(ch).size()-1)!=x ) {
                ans.get(ch).add(x);
                dfs(x, ch);
            }
        }
    }
    public List<List<Integer>> getAncestors(int n, int[][] edges) {
        ans = new ArrayList();
        child = new ArrayList();
        for(int i=0; i<n; i++) {
            ans.add(new ArrayList() );
            child.add(new ArrayList() );
        }
        for(int[] edge:edges) {
            child.get(edge[0]).add(edge[1]);
        }
        for(int i=0; i<n; i++) {
            dfs(i, i);
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

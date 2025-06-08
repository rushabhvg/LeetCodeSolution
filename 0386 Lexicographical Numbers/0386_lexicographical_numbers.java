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
    public List<Integer> lexicalOrder(int n) {
        List<Integer> res = new ArrayList<>();
        for(int i=1; i<10; i++) {
            dfs(i, n, res);
        }
        return res;
    }
    public void dfs(int curr, int n, List<Integer> res) {
        if(curr>n) return;
        else {
            res.add(curr);
            for(int i=0; i<10; i++) {
                if(10*curr+i>n) {
                    return;
                }
                dfs(10*curr+i, n, res);
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

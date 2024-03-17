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
    public int[][] insert(int[][] intervals, int[] newInterval) {
        List<int[]> ans = new ArrayList<>();
        int st = newInterval[0];
        int end = newInterval[1];
        boolean insrt = false;
        for(int[] intvls : intervals) {
            int cst = intvls[0];
            int cend = intvls[1];
            if(cend<st || insrt) {
                ans.add(new int[]{cst, cend});
                continue;
            }
            st = Math.min(st, cst);
            if(end<cst) {
                ans.add(new int[]{st, end});
                ans.add(new int[]{cst, cend});
                insrt = true;
                continue;
            }
            if(end<=cend) {
                ans.add(new int[]{st, cend});
                insrt = true;
            }
        }
        if(!insrt) {
            ans.add(new int[]{st, end});
        }
        return ans.toArray(new int[ans.size()][]);
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

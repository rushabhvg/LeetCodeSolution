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
    Map<Integer, Integer> fq = new HashMap<>();
    int st = 0;

    public int removeStones(int[][] stones) {
        for(int i=0; i<stones.length; i++) {
            union(stones[i][0], ~stones[i][1]);
        }
        return stones.length - st;
    }

    public int find(int x) {
        if(fq.putIfAbsent(x, x) == null) {
            st++;
        }
        if(x != fq.get(x)) {
            fq.put(x, find(fq.get(x)));
        }
        return fq.get(x);
    }

    public void union(int x, int y) {
        x = find(x);
        y = find(y);
        if(x != y) {
            fq.put(x, y);
            st--;
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

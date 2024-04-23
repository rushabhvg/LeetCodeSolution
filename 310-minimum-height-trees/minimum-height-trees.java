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
    public List<Integer> findMinHeightTrees(int n, int[][] edges) {
        if(n==1) return Collections.singletonList(0);
        int idx[] = new int[n];
        Map<Integer, List<Integer>> mp  = new HashMap();
        for(int[] edge : edges) {
            idx[edge[0]]++;
            idx[edge[1]]++;
            mp.putIfAbsent(edge[0], new ArrayList());
            mp.putIfAbsent(edge[1], new ArrayList());
            mp.get(edge[0]).add(edge[1]);
            mp.get(edge[1]).add(edge[0]);
        }
        Queue<Integer> q = new LinkedList();
        for(int i=0; i<idx.length; i++) {
            if(idx[i]==1) {
                q.add(i);
            }
        }
        int pro = 0;
        while(n-pro>2) {
            int sz = q.size();
            pro += sz;
            for(int i=0; i<sz; i++) {
                int poll = q.poll();
                for(int adj : mp.get(poll)) {
                    if(--idx[adj]==1) {
                        q.add(adj);
                    }
                }
            }
        }
        List<Integer> list = new ArrayList();
        list.addAll(q);
        return list;
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

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

    private static class UF {
        int parent[], rank[];
        public UF(int n) {
            parent = new int[n];
            rank = new int[n];
            for(int i=0; i<n; i++) {
                parent[i] = i;
            }
        }
        public void union(int p, int q) {
            int rtP = find(p);
            int rtQ = find(q);
            if(rtP == rtQ) return;
            if(rank[rtP] < rank[rtQ]) {
                parent[rtP] = rtQ;
            } else {
                parent[rtQ] = rtP;
                rank[rtP]++;
            }
        }
        public int find(int p) {
            while(parent[p]!=p) {
                p = parent[parent[p]];
            }
            return p;
        }
        public boolean connected(int p, int q) {
            return find(p) == find(q);
        }
        public void reset(int p) {
            parent[p] = p;
            rank[p] = 0;
        }
    }

    public List<Integer> findAllPeople(int n, int[][] meetings, int firstPerson) {
        Map<Integer, List<Integer>> timeIdx = new TreeMap<>();
        int m = meetings.length;
        for(int i=0; i<m; i++) {
            timeIdx.putIfAbsent(meetings[i][2], new ArrayList<>());
            timeIdx.get(meetings[i][2]).add(i);
        }
        UF uf = new UF(n);
        uf.union(0, firstPerson);
        for(int time:timeIdx.keySet()) {
            Set<Integer> pool = new HashSet<>();
            for(int idx:timeIdx.get(time)) {
                int currM[] = meetings[idx];
                uf.union(currM[0], currM[1]);
                pool.add(currM[0]);
                pool.add(currM[1]);
            }
            for(int i:pool) {
                if(!uf.connected(0, i)) uf.reset(i);
            }
        }
        List<Integer> ans = new ArrayList<>();
        for(int i=0; i<n; i++) {
            if(uf.connected(i, 0)) {
                ans.add(i);
            }
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
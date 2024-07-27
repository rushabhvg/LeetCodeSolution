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
    public long[] solve(int a, List<int[]>[] adj) {
        PriorityQueue<Pair<Long, Integer>> q = new PriorityQueue<>(Comparator.comparingLong(Pair::getKey));
        q.add(new Pair<>(0L, a));
        long[] dist = new long[26];
        Arrays.fill(dist, -1L);
        while(!q.isEmpty()) {
            Pair<Long, Integer> p = q.poll();
            for(int[] i:adj[p.getValue()]) {
                if(dist[i[0]] ==-1 || p.getKey()+i[1]<dist[i[0]]) {
                    dist[i[0]] = p.getKey() + i[1];
                    q.add(new Pair<>(dist[i[0]], i[0]));
                }
            }
        }
        return dist;
    }
    public long minimumCost(String source, String target, char[] original, char[] changed, int[] cost) {
        List<int[]>[] adj = new List[30];
        for(int i=0; i<30; i++) {
            adj[i] = new ArrayList<>();
        }
        int n = original.length;
        for(int i=0; i<n; i++) {
            adj[original[i]-'a'].add(new int[] { changed[i]-'a', cost[i]});
        }
        Map<Integer, long[]> m = new HashMap<>();
        for(int i=0; i<26; i++) {
            long[] k = solve(i, adj);
            m.put(i, k);
        }
        n = source.length();
        long ans = 0;
        for(int i=0; i<n; i++) {
            if(source.charAt(i) != target.charAt(i)) {
                long k = m.get(source.charAt(i)-'a')[target.charAt(i)-'a'];
                if(k==-1) return -1;
                ans += k;
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

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
    public String smallestEquivalentString(String s1, String s2, String baseStr) {
        Map<Character, List<Character>> adj = new HashMap<>();
        int n = s1.length();
        for(int i=0; i<n; i++) {
            char u = s1.charAt(i);
            char v = s2.charAt(i);
            adj.computeIfAbsent(u, k->new ArrayList<>()).add(v);
            adj.computeIfAbsent(v, k->new ArrayList<>()).add(u);
        }
        StringBuilder res = new StringBuilder();
        for(char ch:baseStr.toCharArray()) {
            boolean[] vis = new boolean[26];
            char mnCh = dfs(adj, ch, vis);
            res.append(mnCh);
        }
        return res.toString();
    }
    private char dfs(Map<Character, List<Character>> adj, char ch, boolean[] vis) {
        vis[ch-'a'] = true;
        char mnCh = ch;
        for(char neighbour : adj.getOrDefault(ch, new ArrayList<>())) {
            if(!vis[neighbour-'a']) {
                char cand = dfs(adj, neighbour, vis);
                if(cand < mnCh) {
                    mnCh = cand;
                }
            }
        }
        return mnCh;
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

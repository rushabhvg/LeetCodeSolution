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
    int[][] graph;
    int[] cnt;
    int[] res;
    int N;

    public int[] sumOfDistancesInTree(int n, int[][] edges) {
        this.N = n;
        this.res = new int[N];
        this.graph = new int[N][];
        this.cnt = new int[N];

        for(int[] e:edges) {
            ++cnt[e[0]];
            ++cnt[e[1]];
        }
        for(int i=0; i<N; i++) {
            graph[i] = new int[cnt[i]];
        }
        for(int[] e:edges){
            graph[e[0]][--cnt[e[0]]] = e[1];
            graph[e[1]][--cnt[e[1]]] = e[0];
        }
        dfs1(0, -1);
        dfs2(0, -1);
        return res;
    }
    public void dfs1(int curr, int par) {
        cnt[curr] = 1;
        for(int child:graph[curr]) {
            if(child!=par) {
                dfs1(child, curr);
                cnt[curr] += cnt[child];
                res[curr] += res[child] + cnt[child];
            }
        }
    }
    public void dfs2(int curr, int par) {
        for(int child:graph[curr]) {
            if(child!=par) {
                res[child] = res[curr] + N-2*cnt[child];
                dfs2(child, curr);
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

/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
public:
    void dfs(int u, vector<vector<int>>& graph, vector<bool>& visited) {
        visited[u] = true;
        for(int v : graph[u]) {
            if(!visited[v]) {
                dfs(v, graph, visited);
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n - 1) {
            return -1;
        }
        vector<vector<int>> graph(n);
        for(auto& c : connections) {
            graph[c[0]].push_back(c[1]);
            graph[c[1]].push_back(c[0]);
        }
        vector<bool> visited(n, false);
        int numComponents = 0;
        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                numComponents++;
                dfs(i, graph, visited);
            }
        }
        return numComponents - 1;
    }
};

/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

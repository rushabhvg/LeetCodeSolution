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
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> graph(n);
        for(auto& conn : connections) {
            int u = conn[0], v = conn[1];
            graph[u].push_back(v);
            graph[v].push_back(-u);
        }
        int count = 0;
        queue<int> q{{0}};
        vector<bool> visited(n);
        visited[0] = true;
        
        while(!q.empty()) {
            int u = q.front(); q.pop();
            for(auto v : graph[u]) {
                if(visited[abs(v)]) continue;
                if(v > 0) count++;
                visited[abs(v)] = true;
                q.push(abs(v));
            }
        }
        return count;
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

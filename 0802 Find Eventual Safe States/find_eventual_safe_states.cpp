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
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> indegree(n);
        vector<vector<int>> adj(n);
        for(int i=0; i<graph.size(); i++) {
            for(int j=0; j<graph[i].size(); j++) {
                int node = graph[i][j];
                adj[node].push_back(i);
                indegree[i]++;
            }
        }
        queue<int> q;
        for(int i=0; i<n; i++) {
            if(indegree[i]==0) {
                q.push(i);
            }
        }
        vector<bool> safe(n);
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            safe[node] = true;
            for(auto& neighbor : adj[node]) {
                indegree[neighbor]--;
                if(indegree[neighbor]==0) {
                    q.push(neighbor);
                }
            }
        }
        vector<int> safeNode;
        for(int i=0; i<n; i++) {
            if(safe[i]) safeNode.push_back(i);
        }
        return safeNode;
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

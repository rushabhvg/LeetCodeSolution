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
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colors(n, 0);
        queue<int> q;
        for(int i=0; i<n; i++) {
            if(colors[i] != 0) continue;
            colors[i] = 1;
            q.push(i);
            while(!q.empty()) {
                int node = q.front();
                q.pop();
                for(auto nb : graph[node]) {
                    if(colors[nb] == colors[node]) return false;
                    if(colors[nb] == 0) {
                        colors[nb] = -1 * colors[node];
                        q.push(nb);
                    }
                }
            }
        }
        return true;
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

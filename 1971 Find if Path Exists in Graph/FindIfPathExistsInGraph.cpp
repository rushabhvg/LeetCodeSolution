
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
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adjList(n);
        queue<int> q;
        vector<bool> seen(n, false);
        int u, v, i, currVer, secondVer;
        for(i=0; i<edges.size(); i++) {
            u=edges[i][0];
            v=edges[i][1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        q.push(source);
        seen[source]=true;
        while(!q.empty()) {
            currVer=q.front();
            for(i=0; i<adjList[currVer].size(); i++) {
                secondVer = adjList[currVer][i];
                if (!seen[secondVer]) {
                    q.push(secondVer);
                    seen[secondVer]=true;
                }
            }
            q.pop();
        }
        if (!seen[destination]) {
            return false;
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

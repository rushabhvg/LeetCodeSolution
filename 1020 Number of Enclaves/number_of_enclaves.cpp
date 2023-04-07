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
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visit(m, vector<bool>(n));
        int count = 0;
        for (int i = 0; i < m; i++) {
            cout<<endl<<i;
            for (int j = 0; j < n; j++) {
                // cout<<" "<<j<<" "<<count<<" ";
                // if(grid[i][j]==1) 
                //     cout<<endl<<"Encountered 1";
                if (grid[i][j] == 1 && !visit[i][j]) {
                    // cout<<" alone";
                    int c = bfs(i, j, m, n, grid, visit);
                    count += c;
                    // cout<<" cnt="<<count<<endl;
                }
            }
        }
        return count;
    }

    int bfs(int x, int y, int m, int n, vector<vector<int>>& grid, vector<vector<bool>>& visit) {
        queue<pair<int, int>> q;
        int cnt = 0;
        q.push({x, y});
        visit[x][y] = true;
        bool isClosed = true;
        vector<int> dirx{0, 1, 0, -1};
        vector<int> diry{-1, 0, 1, 0};
        while (!q.empty()) {
            cnt++;
            x = q.front().first;
            y = q.front().second;
            q.pop();
            // cout<<endl<<x<<","<<y<<" ";
            for (int i = 0; i < 4; i++) {
                int r = x + dirx[i];
                int c = y + diry[i];
                // cout<<endl<<r<<","<<c<<" ";
                if (r < 0 || r >= m || c < 0 || c >= n) {
                    // cout<<" false";
                    isClosed = false;
                } else if (grid[r][c] == 1 && !visit[r][c]) {
                    // cout<<endl<<r<<","<<c<<" is pushed!";
                    q.push({r, c});
                    visit[r][c] = true;
                }
            }
        }
        // cout<<endl;
        return isClosed ? cnt : 0;
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

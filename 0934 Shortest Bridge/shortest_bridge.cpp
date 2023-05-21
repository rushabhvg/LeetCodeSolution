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
    vector<vector<int>> bfsQueue;
    void dfs(vector<vector<int>>& grid, int x, int y, int n) {
        grid[x][y] = 2;
        bfsQueue.push_back({x, y});
        int x1=x-1, x2=x+1, y1=y-1, y2=y+1;
        vector<vector<int>> arr1;
        arr1.push_back({x1, y});
        arr1.push_back({x2, y});
        arr1.push_back({x, y1});
        arr1.push_back({x, y2});
        for(auto &p : arr1) {
            int cx = p[0], cy = p[1];
            if(0<=cx && cx<n && 0<=cy && cy<n && grid[cx][cy]==1) {
                dfs(grid, cx, cy, n);
            }
        }
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();
        int firstX = -1, firstY=-1;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j]==1) {
                    firstX = i;
                    firstY = j;
                    break;
                }
            }
        }
        dfs(grid, firstX, firstY, n);
        int dst = 0;
        while(!bfsQueue.empty()) {
            vector<vector<int>> newBfs;
            for(auto &p:bfsQueue) {
                int x = p[0], y = p[1];
                int x1=x-1, x2=x+1, y1=y-1, y2=y+1;
                vector<vector<int>> arr2;
                arr2.push_back({x1, y});
                arr2.push_back({x2, y});
                arr2.push_back({x, y1});
                arr2.push_back({x, y2});
                for(auto &p1 : arr2) {
                    int cx = p1[0], cy = p1[1];
                    if(0<=cx && cx<n && 0<=cy && cy<n) {
                        if(grid[cx][cy] == 1) {
                            return dst;
                        } else if (grid[cx][cy] == 0) {
                            newBfs.push_back(p1);
                            grid[cx][cy] = -1;
                        }
                    }
                }
            }
            bfsQueue = newBfs;
            dst++;
        }
        return dst;

        /*
        [0,1,0]
        [0,0,0]
        [0,0,1]
        */
        /*
        [1,1,1,1,1]
        [1,0,0,0,1]
        [1,0,1,0,1]
        [1,0,0,0,1]
        [1,1,1,1,1]
        */
        /*
        100001
        000001
        */
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

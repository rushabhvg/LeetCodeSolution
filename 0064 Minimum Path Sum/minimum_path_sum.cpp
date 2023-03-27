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
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[m-1].size();
        for(int i = 0; i<grid.size(); i++) {
            cout<<endl<<i;
            m = i;
            for(int j=0; j<grid[i].size(); j++) {
                // cout<<" "<<j << " " << grid[i][j];
                n=j;

                if(i == 0 && j == 0) continue;

                if(i==0 && j!=0) {
                    grid[i][j] += grid[i][j-1]; continue;
                }

                if(j==0 && i!=0) {
                    grid[i][j] += grid[i-1][j]; continue;
                }

                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);

                // cout<<" "<<grid[i][j];
            }
        }

        for(int i=0; i<=m; i++) {
            cout<<endl;
            for(int j=0; j<=n; j++) {
                cout<<" "<<grid[i][j];
            }
        }
        return grid[m][n];
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

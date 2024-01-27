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

static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
    int mod = 1e9+7;
    int solve(int row, int col, int maxMoves, int x, int y, int moves, vector<vector<vector<int>>>& dp) {
        if(x<0 || y<0 || x>=row || y>=col ) return 1;
        if(moves == maxMoves) return 0;
        if(dp[moves][x][y] != -1) return dp[moves][x][y];
        int temp = 0;
        temp = (temp + solve(row, col, maxMoves, x, y-1, moves+1, dp) % mod ) % mod;
        temp = (temp + solve(row, col, maxMoves, x, y+1, moves+1, dp) % mod ) % mod;
        temp = (temp + solve(row, col, maxMoves, x+1, y, moves+1, dp) % mod ) % mod;
        temp = (temp + solve(row, col, maxMoves, x-1, y, moves+1, dp) % mod ) % mod;
        dp[moves][x][y] = temp;
        return dp[moves][x][y];
    }
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(maxMove+1, vector<vector<int>> (m+1, vector<int> (n+1, -1) ) );
        dp[maxMove][m][n] = solve(m, n, maxMove, startRow, startColumn, 0, dp);
        return dp[maxMove][m][n];
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

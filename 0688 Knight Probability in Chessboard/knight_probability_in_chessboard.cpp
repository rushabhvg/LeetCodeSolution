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
    double knightProbability(int n, int k, int row, int column) {
        vector<pair<int, int>> knightMoves;
        knightMoves.push_back(make_pair(-1, -2));
        knightMoves.push_back(make_pair(1, -2));
        knightMoves.push_back(make_pair(-2, -1));
        knightMoves.push_back(make_pair(2, -1));
        knightMoves.push_back(make_pair(-1, 2));
        knightMoves.push_back(make_pair(1, 2));
        knightMoves.push_back(make_pair(-2, 1));
        knightMoves.push_back(make_pair(2, 1));
        vector dp(k+1, vector(n, vector<double>(n, 0.0)));
        dp[0][row][column]=1;
        for(int moves=1; moves<=k; moves++) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    for(const auto& d : knightMoves) {
                        int r1 = i - d.first;
                        int c1 = j - d.second;
                        if(r1>=0 && c1>=0 && r1<n && c1<n) {
                            dp[moves][i][j] += dp[moves-1][r1][c1]/8;
                        }
                    }
                }
            }
        }
        double totalProb=0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                totalProb += dp[k][i][j];
            }
        }
        return totalProb;
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

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
    double soupServings(int n) {
        int m = ceil(n/25.0);
        unordered_map<int, unordered_map<int, double>> dp;
        function <double(int, int)> calculateDp = [&](int i, int j) -> double {
            if(i<=0 && j<=0) return 0.5;
            if(i<=0) return 1;
            if(j<=0) return 0;
            if(dp[i].count(j)) return dp[i][j];
            return dp[i][j] = (calculateDp(i-4, j) + calculateDp(i-3, j-1) + calculateDp(i-2, j-2) + calculateDp(i-1, j-3)) / 4;
        };
        for(int k=1; k<=m; k++) {
            if(calculateDp(k, k) > 1 - 1e-5) {
                return 1;
            }
        }
        return calculateDp(m, m);
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

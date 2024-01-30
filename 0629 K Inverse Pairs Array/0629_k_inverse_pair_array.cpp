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
private:
    int MOD = 1e9+7;
    int dp[2][1001] = {1};
public:
    int kInversePairs(int n, int k) {
        for(int i=1; i<=n; i++) {
            for(int j=0; j<=k; j++) {
                dp[i%2][j] = (dp[(i-1)%2][j] + (j>0 ? dp[i%2][j-1] : 0) ) % MOD;
                if(j>=i) dp[i%2][j] = ( MOD + dp[i % 2][j] - dp[ (i-1) % 2][j-i] ) % MOD;
            }
        }
        return dp[n%2][k];
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

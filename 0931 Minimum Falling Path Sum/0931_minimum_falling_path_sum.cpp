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
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if(n==1) return matrix[0][0];
        
        // for(int i=0; i<n; i++) {
        //     i == 0 ? cout<<i<<":\t" : cout<<"\n"<<i<<":\t";
        //     for(int j=0; j<n; j++) {
        //         cout<<" "<<matrix[i][j];
        //     }
        // }
        
        for(int i=1; i<n; i++) {
            // cout<<"\n"<<i<<":\t";
            for(int j=0; j<n; j++) {
                int ans = INT_MAX;
                if(j>0) {
                    ans = min( ans, matrix[i][j] + matrix[i-1][j-1] ); 
                }
                ans = min(ans, matrix[i][j] + matrix[i-1][j]);
                if(j<n-1) {
                    ans = min( ans, matrix[i][j] + matrix[i-1][j+1] ); 
                }
                matrix[i][j] = ans;
                // cout<<" "<<matrix[i][j];
            }
        }

        
        // for(int i=0; i<n; i++) {
        //     cout<<"\n"<<i<<":\t";
        //     for(int j=0; j<n; j++) {
        //         cout<<" "<<matrix[i][j];
        //     }
        // }

        int numAns = matrix[n-1][0];
        for(int j=1; j<n; j++) {
            numAns = min(numAns, matrix[n-1][j]);
        }
        return numAns;
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

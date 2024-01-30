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
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int res = 0, m = matrix.size(), n = matrix[0].size();
        for(int i=0; i<m; i++) {
            for(int j=1; j<n; j++) {
                matrix[i][j] += matrix[i][j-1];
            }
        }
        unordered_map<int, int> cnt;
        for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) {
                cnt = {{0, 1}};
                int curr = 0;
                for(int k=0; k<m; k++) {
                    curr += matrix[k][j] - (i>0 ? matrix[k][i-1] : 0);
                    res += cnt.find(curr-target) != cnt.end() ? cnt[curr-target] : 0;
                    cnt[curr]++;
                }
            }
        }
        return res;
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

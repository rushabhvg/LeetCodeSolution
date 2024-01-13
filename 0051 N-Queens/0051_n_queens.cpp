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
    void solveNQueens(vector<vector<string>> &ans, vector<string> &nq, int row, int &n) {
        if(row==n) {
            ans.push_back(nq);
            return;
        }
        for(int c=0; c!=n; c++) {
            if(isValid(nq, row, c, n)) {
                nq[row][c] = 'Q';
                solveNQueens(ans, nq, row+1, n);
                nq[row][c] = '.';
            }
        }
    }
    
    bool isValid(vector<string> &nq, int row, int col, int &n) {
        for(int i=0; i!= row; i++) {
            if(nq[i][col] == 'Q') return false;
        }
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--) {
            if(nq[i][j] == 'Q') return false;
        }
        for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++) {
            if(nq[i][j]=='Q') return false;
        }
        return true;
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> nq(n, string(n, '.'));
        solveNQueens(ans, nq, 0, n);
        return ans;
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

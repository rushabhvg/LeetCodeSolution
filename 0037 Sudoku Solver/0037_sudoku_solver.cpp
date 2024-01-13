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
    vector<pair<int, int>> emptyCells;
    int rows[9]={}, cols[9]={}, boxes[9]={};
    void solveSudoku(vector<vector<char>>& board) {
        for(int r=0; r<9; r++) {
            for(int c=0; c<9; c++) {
                if(board[r][c]=='.') {
                    emptyCells.emplace_back(r, c);
                } else {
                    int val = board[r][c]-'0';
                    int boxPos = (r / 3) * 3 + (c/3);
                    rows[r] |= 1 << val;
                    cols[c] |= 1 << val;
                    boxes[boxPos] |= 1 << val;
                }
            }
        }
        backtracking(board, 0);
    }
    bool backtracking(vector<vector<char>>& board, int i) {
        if(i==emptyCells.size()) return true;
        int r = emptyCells[i].first, c=emptyCells[i].second, boxPos=(r / 3) * 3 + (c / 3);
        for(int val=1; val<=9; val++) {
            if(getBit(rows[r], val) || getBit(cols[c], val) || getBit(boxes[boxPos], val)) continue;
            board[r][c] = ('0'+val);
            int oldRow = rows[r], oldCol = cols[c], oldBox = boxes[boxPos];
            rows[r] |= 1 << val;
            cols[c] |= 1 << val;
            boxes[boxPos] |= 1 << val;
            if(backtracking(board, i+1)) return true;
            rows[r] = oldRow;
            cols[c] = oldCol;
            boxes[boxPos] = oldBox;
        }
        return false;
    }
    int getBit(int x,int k) {
        return (x>>k) & 1;
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

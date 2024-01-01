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
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size(), c0 = 1, c = matrix[0].size();
        for(int i=0; i<matrix.size(); i++) {
            if(matrix[i][0]==0) c0 = 0;
            for(int j=0; j<matrix[i].size(); j++) {
                if(matrix[i][j]==0) matrix[i][0] = matrix[0][j] = 0;
            }
        }

        for(int i=r-1; i>=0; i--) {
            for(int j=c-1; j>=1; j--) {
                if(matrix[i][0] == 0 || matrix[0][j]==0) {
                    matrix[i][j] = 0;
                }
            }
            if(c0==0) matrix[i][0]=0;
        }
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

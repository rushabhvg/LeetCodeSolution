/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long cntN = 0, ans = 0, mn = 1000000;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                ans += abs(matrix[i][j]);
                if (matrix[i][j] < 0) {
                    cntN++;
                }
                mn = mn < abs(matrix[i][j]) ? mn : abs(matrix[i][j]);
            }
        }
        if (cntN % 2 == 0) {
            return ans;
        } else {
            return ans - (2 * mn);
        }
    }
};

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

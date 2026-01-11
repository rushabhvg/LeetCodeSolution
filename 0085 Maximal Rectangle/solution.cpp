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
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;

        const int m = matrix.size();
        const int n = matrix[0].size();

        int left[n], right[n], height[n];

        fill_n(left, n, 0);
        fill_n(right, n, n);
        fill_n(height, n, 0);

        int maxArea = 0;

        for (int i = 0; i < m; i++) {
            int currLeft = 0, currRight = n;

            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '1') height[j]++;
                else height[j] = 0;
            }

            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '1') left[j] = max(left[j], currLeft);
                else {
                    currLeft = j + 1;
                    left[j] = 0;
                }
            }

            for (int j = n - 1; j >= 0; j--) {
                if (matrix[i][j] == '1') right[j] = min(right[j], currRight);
                else {
                    currRight = j;
                    right[j] = n; 
                }
            }

            for (int j = 0; j < n; j++) {
                maxArea = max(maxArea, ((right[j] - left[j]) * height[j]));
            }
        }
        return maxArea;
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

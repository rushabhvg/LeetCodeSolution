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
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr;

        for (int i = 0; i < numRows; ++i) {
            arr.push_back(vector<int>(i + 1, 1));
        }
        
        for(int i=2; i<numRows; i++) {
            for(int j=1; j<arr[i].size()-1; j++) {
                arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
            }
        }
        return arr;   
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

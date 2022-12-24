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
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum=accounts[0][0];
        for(int i=0; i<accounts.size(); i++) {
            int sumCurr=0;
            for(int j=0; j<accounts[0].size(); j++) {
                sumCurr+=accounts[i][j];
            }
            if(sumCurr>maxSum) maxSum=sumCurr;
        }
        return maxSum;
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

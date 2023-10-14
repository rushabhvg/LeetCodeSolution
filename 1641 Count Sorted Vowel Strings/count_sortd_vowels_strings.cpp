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
    int countVowelStrings(int n) {
        vector<vector<int>> arr(n, vector<int>(5, 1));
        if(n==1) return 5;
        for(int i=0; i<5; i++) {
            arr[0][i] = i+1;
        }

        for(int i=1; i<n; i++) {
            for(int j=1; j<5; j++) {
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }
        /*
            a   e   i   o   u
        1   1   2   3   4   5   5
        2   1   3   6   10  15  15
        3   1   4   10  20  35
        4   1   5   15  35  70
        5   1   6   21  56  126
        */
        return arr[n-1][4];
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

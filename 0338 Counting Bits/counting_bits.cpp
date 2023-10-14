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
    vector<int> countBits(int n) {
        vector<int> ans(n+1, 0);
        if(n==0) return ans;
        ans[1] = 1;
        for (int i=2; i<=n; i++) {
            if(i%2==0) ans[i] = ans[i/2];
            else ans[i] = ans[i/2]+1;
        }
        return ans;
        /*
            0   0       0
            1   1       1
            2   10      1
            3   11      2
            4   100     1
            5   101     2
            6   110     2
            7   111     3
            8   1000    1
            9   1001    2
            10  1010    2
            11  1011    3
            12  1100    2
            13  1101    3
            14  1110    3
            15  1111    4
        */
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

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
    vector<int> dpArr;
    int integerBreak(int n) {
        /*
        7 = 1+6     = 6
            2+5     = 10
            3+4     = 12
            2+2+3   = 12    // max case
        8 = 1 + 7           = 7
            2 + 6           = 12
            3 + 5           = 15
            4 + 4           = 16
            2 + 2 + 2 + 2   = 16
            3 + 3 + 2       = 18    // max case
        9 = 1 + 8           = 8
            2 + 7           = 14
            3 + 6           = 18
            4 + 5           = 20
            3 + 3 + 3       = 27    // max case
            2 + 2 + 2 + 3   = 24
        10= 1 + 9           = 9
            2 + 8           = 16
            3 + 7           = 21
            4 + 6           = 24
            5 + 5           = 25
            5 + 3 + 2       = 30
            4 + 4 + 2       = 32
            4 + 3 + 3       = 36
            3 + 3 + 3 + 1   = 27
            3 + 2 + 2 + 2+1 = 24
            2 + 2 + 3 + 3   = 36    // max case
        */
        if(n<=3) return n-1;
        dpArr = vector(n+1, 0);
        return dp(n);
    }
    int dp(int no) {
        if(no <= 3) return no;
        if(dpArr[no]!=0) return dpArr[no];
        int ans = no;
        for(int i=2; i<no; i++) ans = max(ans, i*dp(no-i));
        dpArr[no] = ans;
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

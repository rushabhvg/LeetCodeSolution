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
    int is_square(int n) {
        int sqrtn = (int)(sqrt(n));
        return (sqrtn*sqrtn==n);
    }
public:
    int numSquares(int n) {
        /*
        1   -   1
        2   -   1+1
        3   -   1+1+1
        4   -   4
        5   -   4+1
        6   -   4+1+1
        7   -   4+1+1+1
        8   -   4+4
        9   -   9
        10  -   9+1
        11  -   9+1+1
        12` -   9+1+1+1
        13  -   9+4
        14  -   9+4+1
        15  -   9+4+1+1
        */
        if(n<=0) return 0;
        static vector<int> cntPS({0});
        while(cntPS.size()<=n) {
            int m = cntPS.size();
            int cntS = INT_MAX;
            for(int i=1; i*i<=m; i++) {
                cntS = min(cntS, cntPS[m-i*i]+1);
            }
            cntPS.push_back(cntS);
        }
        return cntPS[n];
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

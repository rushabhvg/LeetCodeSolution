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
    bool isPowerOfFour(int n) {
        /*
        0   -   0000
        1   -   0001
        4   -   0100
        16  -   10000
        64  - 1000000
        256 - 1000000000
        1024 - 10000000000
        */
        if(n<0) return 0;
        bitset<31> x(n);
        if(x.count()!=1) return 0;
        for(int i=0; i<31; i+=2) {
            if(x[i]) return 1;
        }
        return 0;
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

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
    double binaryExp(double x, long long n) {
        if(n==0) return 1;
        if(n<0) return 1.0/binaryExp(x, -1*n);
        if(n%2==1) return x * binaryExp(x*x, (n-1)/2);
        else return binaryExp(x*x, n/2);
    }
    double myPow(double x, int n) {
        return binaryExp(x, (long long) n);
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

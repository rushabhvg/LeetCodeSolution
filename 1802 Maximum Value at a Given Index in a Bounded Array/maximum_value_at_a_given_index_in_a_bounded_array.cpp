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
    long getSum(int index, int val, int n) {
        long cnt = 0;
        
        if(val>index) cnt += (long)(val+val-index)*(index+1)/2;
        else cnt += (long)(val+1)*val/2+index-val+1;
        
        if(val>=n-index) cnt += (long)(val+val-n+1+index)*(n-index)/2;
        else cnt += (long)(val+1)*val/2+n-index-val;
        
        return cnt-val;
    }
    int maxValue(int n, int index, int maxSum) {
        int left =1, right = maxSum;
        while(left<right) {
            int mid = (left+right+1)/2;
            if(getSum(index, mid, n)<=maxSum) {
                left = mid;
            } else right = mid-1;
        }
        return left;
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

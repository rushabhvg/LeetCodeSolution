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
    long long maxRunTime(int n, vector<int>& batteries) {
        long long minTime = 1;
        long long maxTime = accumulate(begin(batteries), batteries.end(), 0LL)/n;
        while(minTime<maxTime) {
            long long midTime = (minTime+maxTime+1)/2;
            long long time = 0;
            for(int t:batteries) time += min((long long)t, midTime);
            if(midTime*n<=time) minTime = midTime;
            else maxTime=midTime-1;
        }
        return minTime;
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

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
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = 1, high = 1e18;
        while (low < high) {
            long long mid = (low + high) / 2;
            long long cnt = 0;
            for (int t : time) {
                cnt += mid / t;
                if (cnt >= totalTrips) break;
            }
            if (cnt >= totalTrips) high = mid;
            else low = mid + 1;
        }
        return low;
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

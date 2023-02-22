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
    int maxSum=INT_MAX;
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int ans=0;
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while(low<=high) {
            int mid = low + (high-low)/2;
            int cnt = 1;
            int sum = 0;
            for (int w : weights) {
                sum += w;
                if (sum > mid) {
                    cnt++;
                    sum = w;
                }
            }
            if (cnt <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
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

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
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1, mp = 0;
        while(r<prices.size()) {
            int cp = prices[r] - prices[l];
            if(prices[l]<prices[r]) {
                mp = max(cp, mp);
            } else {
                l = r;
            }
            r++;
        }
        return mp;
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

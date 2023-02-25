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
        int minPrice = prices[0];
        int maxP = 0;
        for(int i=1; i<prices.size(); i++) {
            if(minPrice>prices[i]) {
                minPrice = prices[i];
            } else if(minPrice<prices[i]) {
                int cp = prices[i] - minPrice;
                maxP = (cp>maxP) ? cp : maxP;
            }
        }
        return maxP;
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

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int prevMod = 0;
        int prevDiv = 0;
        int ans = numBottles;
        int mod = numBottles % numExchange;
        int div = numBottles / numExchange;
        ans += div;
        while(div!=0) {
            prevMod = mod;
            prevDiv = div+prevMod;
            mod = prevDiv % numExchange;
            div = prevDiv / numExchange;
            ans += div;
        }
        return ans;
    }
}

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

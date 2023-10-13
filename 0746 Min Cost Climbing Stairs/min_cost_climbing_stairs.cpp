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
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==2) return min(cost[0], cost[1]);
        vector<int> cstArr(cost.size(), INT_MAX);
        cstArr[0] = cost[0], cstArr[1] = cost[1];
        for(int i=2; i<cost.size(); i++)
            cstArr[i] = min(
                cstArr[i-2] + cost[i],
                cstArr[i-1] + cost[i]
            );
        return min(
            cstArr[cost.size()-1],
            cstArr[cost.size()-2]
        );
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

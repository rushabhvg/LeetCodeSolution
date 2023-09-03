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
    int minimumOperations(string num) {
        /*
        0
        25
        50
        75
        100
        */
        int ans = num.size();
        int n = num.size();
        for(int i=n-1; i>=0; i--) {
            for(int j=i-1; j>=0; j--) {
                if (
                    ( (num[i]-'0') + (num[j]-'0')*10 ) % 25 == 0
                ) {
                    ans = min(ans, n-j-2);
                }
            }
            if(num[i]== '0') ans = min(ans, n-1);
        }
        return ans;
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

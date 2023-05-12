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
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> arr(n, 0);
        arr[n-1] = questions[n-1][0];

        for(int i=n-2; i>=0; i--) {
            arr[i] = questions[i][0];
            int skip = questions[i][1];
            if(i+skip+1<n) {
                arr[i] += arr[i+skip+1];
            }
            arr[i] = max(arr[i], arr[i+1]);
        }
        return arr[0];
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

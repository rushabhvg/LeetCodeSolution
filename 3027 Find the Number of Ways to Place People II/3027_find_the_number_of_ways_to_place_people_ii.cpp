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

static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int res = 0, n = points.size();
        sort(points.begin(), points.end(), [](const auto &p1, const auto &p2) {
            return p1[0] == p2[0] ? p1[1] > p2[1] : p1[0] < p2[0];
        });
        for(int i=0; i<n; i++) {
            for(int j=i+1, y=INT_MIN; j<n; j++) {
                if(points[i][1]>=points[j][1] && y<points[j][1]) {
                    res++;
                    y = points[j][1];
                }
            }
        }
        return res;
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

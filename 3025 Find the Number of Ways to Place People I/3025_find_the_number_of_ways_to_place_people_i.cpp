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
        int maxi = 0;
        for(int i=0; i<points.size(); i++) {
            for(int j=0; j<points.size(); j++) {
                if( i==j || points[i][0]>points[j][0] || points[i][1] < points[j][1] ) continue;
                int k = 0;
                for( ; k<points.size(); k++) {
                    if(k==i || k==j) continue;

                    if(points[k][1]<=points[i][1] && points[k][1]>=points[j][1] && points[k][0]<=points[j][0] && points[k][0]>=points[i][0] ) {
                        break;
                    }
                }

                if(k==points.size()) maxi++;
            }
        }
        return maxi;
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

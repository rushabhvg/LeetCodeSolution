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
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        int n = heights.size(), area = 0;
        stack<int> idx;
        for(int i=0; i<n; i++) {
            while(idx.size() && heights[idx.top()] > heights[i]) {
                int h = heights[idx.top()];
                idx.pop();
                int stIdx = idx.empty() ? -1 : idx.top();
                area = max(area, h*(i-stIdx-1) );
            }
            idx.push(i);
        }
        return area;
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

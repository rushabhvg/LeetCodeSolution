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
    int trap(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        vector<int> leftMin(n, 0), rightMin(n, 0);
        for(int i=0; i<n; i++) {
            leftMin[i] = i==0 ? height[i] : max(height[i], leftMin[i-1]);
        }
        for(int i=n-1; i>=0; i--) {
            rightMin[i] = i==n-1 ? height[i] : max(height[i], rightMin[i+1]);
        }
        for(int i=0; i<n;i++) {
            ans += min(leftMin[i], rightMin[i]) - height[i];
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

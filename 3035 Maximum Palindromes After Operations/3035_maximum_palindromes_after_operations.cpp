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
    int maxPalindromesAfterOperations(vector<string>& words) {
        int cnt[26] = {}, pairs=0, res=0;
        vector<int> sizes;
        for(const auto& w: words) {
            for(char ch:w) {
                pairs += (++cnt[ch-'a'])%2 == 0;
            }
            sizes.push_back(w.size());
        }
        sort(begin(sizes), end(sizes));
        for(int sz: sizes) {
            pairs -= sz/2;
            res += pairs>=0;
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

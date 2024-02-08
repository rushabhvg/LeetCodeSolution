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
    string minWindow(string s, string t) {
        vector<int> map(128, 0);
        for(auto c:t) map[c]++;
        int cnt = t.size(), begin = 0, end = 0, d = INT_MAX, head = 0;
        while(end<s.size()) {
            if(map[s[end++]]-- > 0) cnt--;
            while(cnt == 0) {
                if(end-begin < d) d = end-(head=begin);
                if(map[s[begin++]]++ == 0) cnt++;
            }
        }
        return d==INT_MAX ? "" : s.substr(head, d);
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

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
    int minOperations(vector<int>& nums) {
        int t = 0;
        unordered_map<int, int> mp;
        for(auto &a : nums) {
            mp[a]++;
        }
        for(auto &m : mp) {
            int a = m.second;
            if(a==1) return -1;
            t += floor( a/3 ) + floor( ( a%3 ) / 2 ) ;
            if(a%3==1) {
                t += 1;
            }
        }
        return t;
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

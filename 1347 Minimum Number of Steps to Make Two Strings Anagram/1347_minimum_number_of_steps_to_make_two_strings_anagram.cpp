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
    int minSteps(string s, string t) {
        vector<int> arr1(26, 0), arr2(26, 0);
        int cnt1=0, cnt2=0;
        for(auto &c:s) {
            arr1[c-'a']++;
        }
        for(auto &c:t) {
            arr2[c-'a']++;
        }
        for(int i=0; i<26; i++) {
            if(arr1[i]==arr2[i]) continue;
            cnt1 += abs(arr1[i]-arr2[i]);
        }
        return cnt1/2;
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

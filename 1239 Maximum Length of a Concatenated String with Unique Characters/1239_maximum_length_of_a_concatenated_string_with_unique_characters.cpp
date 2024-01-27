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
    int maxLength(vector<string>& arr, string str = "", int idx = 0) {
        unordered_set<char> setArr(str.begin(), str.end());
        if(setArr.size() != str.size()) return 0;
        int ret = str.size();
        for(int i = idx; i<arr.size(); i++) {
            ret = max(ret, maxLength(arr, str+arr[i], i+1));
        }
        return ret;
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

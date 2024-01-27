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
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int i=0;
        vector<int> ans;
        while(i<arr.size()) {
            int cnt = 1;
            for(int j=i+1; j<arr.size(); j++) {
                if(arr[i]==arr[j]) cnt++;
            }
            ans.push_back(cnt);
            i += cnt;
        }
        sort(ans.begin(), ans.end());
        for(int i=0; i<ans.size()-1; i++) {
            if(ans[i]==ans[i+1]) return false;
        }
        return true;
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

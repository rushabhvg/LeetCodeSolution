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
private:
    bool isPal(string s, int l, int r) {
        while(l<r) {
            if(s[l++] != s[r--]) return false;
        }
        return true;
    }
public:
    int countSubstrings(string s) {
        int ans = 0;
        int n = s.size();
        for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) 
                if(isPal(s, i, j)) ans++;
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

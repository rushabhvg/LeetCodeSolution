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
    string countAndSay(int n) {
        if(n==0) return "";
        string res = "1";
        while(--n) {
            string curr = "";
            for(int i=0; i<res.size(); i++) {
                int cnt = 1;
                while( (i+1<res.size() ) && ( res[i]==res[i+1] ) ) {
                    cnt++;
                    i++;
                }
                curr += to_string(cnt) + res[i];
            }
            res = curr;
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

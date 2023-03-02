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

class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;
        int cnt = 1;
        char prev = chars[0];
        for (int i = 1; i <= chars.size(); i++) {
            if (i == chars.size() || chars[i] != prev) {
                chars[ans++] = prev;
                if (cnt > 1) {
                    string cntStr = to_string(cnt);
                    for (char c : cntStr) {
                        chars[ans++] = c;
                    }
                }
                cnt = 1;
                if (i < chars.size()) {
                    prev = chars[i];
                }
            } else {
                cnt++;
            }
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

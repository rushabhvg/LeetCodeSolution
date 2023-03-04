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
    int strStr(string haystack, string needle) {
        int idx = -1;
        int n = haystack.size();
        int m = needle.size();
        if(m>n) return -1;
        bool found = false;
        for(int i=0; i<=n-m; i++) {
            if(haystack.substr(i, m) == needle) {
                idx = i;
                break;
            }
        }
        return idx;
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

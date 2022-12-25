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
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int dst = INT_MAX;
        int dst0ToN;
        int dstNTo0;
        for(int i=0; i<n; i++) {
            if(words[i]!=target) continue;
            dst0ToN = abs(i-startIndex);
            dstNTo0 = abs(n-dst0ToN);
            dst = min (dst, min(dst0ToN, dstNTo0));
        }
        return dst==INT_MAX ? -1 : dst;
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

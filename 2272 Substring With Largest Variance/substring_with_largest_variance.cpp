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
    int largestVariance(string s) {
        int ans =0;
        vector<int> freq(26);
        for(auto& a:s) {
            freq[a-'a']++;
        }
        for(char c1='a'; c1<='z'; c1++) {
            for(char c2='a'; c2<='z'; c2++) {
                if(c1==c2 || !freq[c1-'a'] || !freq[c2-'a']) continue;
                for(int rev1=1; rev1<=2; rev1++) {
                    int cnt1=0, cnt2=0;
                    for(auto& c:s) {
                        cnt1+= c==c1;
                        cnt2+= c==c2;
                        if(cnt1<cnt2) {
                            cnt1=cnt2=0;
                        }
                        if(cnt1>0 and cnt2>0) {
                            ans = max(ans, cnt1-cnt2);
                        }
                    }
                    reverse(s.begin(), s.end());
                }
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

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
    int maxVowels(string s, int k) {
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};
        int ans = 0;
        int cnt = 0;
        for(int i=0; i<k; i++) {
            cnt += vowels.count(s[i]);
        }
        ans = cnt;
        for(int i=k; i<s.size(); i++) {
            cnt += vowels.count(s[i]) - vowels.count(s[i-k]);
            ans = max(ans, cnt);
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

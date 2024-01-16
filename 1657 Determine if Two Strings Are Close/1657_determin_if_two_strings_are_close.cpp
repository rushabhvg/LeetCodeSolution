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
    bool closeStrings(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        if(n1!=n2) return false;
        int freq1[26], freq2[26];
        vector<int> v1, v2;
        memset(freq1, 0, sizeof(freq1));
        memset(freq2, 0, sizeof(freq2));
        for(auto &c : word1) freq1[c-'a']++;
        for(auto &c : word2) freq2[c-'a']++;
        for(int i=0; i<26; i++) {
            if( freq1[i]!=freq2[i] ) {
                if(freq1[i]==0 || freq2[i]==0) return false;
                v1.push_back(freq1[i]);
                v2.push_back(freq2[i]);
            }
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for(int i=0; i<v1.size(); i++) if(v1[i]!=v2[i]) return false;
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

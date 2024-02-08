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
    int minimumTimeToInitialState(const string& word, int k) {
        for(int i=k; i<word.size(); i+=k) {
            bool chk = 1;
            for(int j=i, temp=0; j<word.size(); j++, temp++) {
                if(word[j]!=word[temp]) {
                    chk = 0;
                    break;
                }
            }
            if(chk) return i/k;
        }
        return (word.size()+k-1)/k;
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

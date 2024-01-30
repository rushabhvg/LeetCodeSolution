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
    int countKeyChanges(string s) {
        int cnt = 0;
        for(int i=1; i<s.size(); i++) {
            
            cout<<"\n"<<i<<":\t"<<s[i-1]<<" "<<s[i]<<"\n";
            
            int val = int(s[i]);
            int cmpVal = int(s[i-1]);
            cout<<"\t"<<val<<" "<<cmpVal<<"\n";
            
            if(val<97) {
                val -= 65;
            } else {
                val -= 97;
            }
            if(cmpVal>=97) {
                cmpVal -=97;
            } else {
                cmpVal -= 65;
            }
            cout<<"\t"<<val<<" "<<cmpVal<<"\n";
            
            if(val!=cmpVal) {
                cnt++;
            }
            cout<<"\t"<<cnt;
        }
        return cnt;
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

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
    bool isValid(string s) {
        if (s.size()%2==1) return false;
        stack<char> stk;
        for(auto &c:s) {
            if(c=='(' || c=='{' || c=='[') {
                stk.push(c);
            } else {
                if(stk.empty()) return false;
                char cr = stk.top();
                if( ( cr=='(' && c==')' ) || ( cr=='{' && c=='}' ) || ( cr=='[' && c ==']' ) ) {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
        return stk.empty() ? true : false;;
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

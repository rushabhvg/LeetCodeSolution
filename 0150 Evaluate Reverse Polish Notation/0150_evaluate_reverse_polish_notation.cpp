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
    int evalRPN(vector<string>& tokens) {
        unordered_map<string, function<int (int, int)> > map = {
            { "+", [] (int a, int b) {return a+b;} },
            { "-", [] (int a, int b) {return a-b;} },
            { "*", [] (int a, int b) {return a*b;} },
            { "/", [] (int a, int b) {return a/b;} },
        };
        stack<int> stk;
        for(string& s: tokens) {
            if(!map.count(s)) {
                stk.push(stoi(s));
            } else {
                int op1 = stk.top();
                stk.pop();
                int op2 = stk.top();
                stk.pop();
                stk.push(map[s](op2, op1));
            }
        }
        return stk.top();
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

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

class MyQueue {
private:
    stack<int> in_stk, out_stk;
public:
    MyQueue() {
        // DNC
    }
    
    void push(int x) {
        in_stk.push(x);
    }
    
    int pop() {
        const int val = peek();
        out_stk.pop();
        return val;
    }
    
    int peek() {
        if(out_stk.empty()) {
            while(!in_stk.empty()) {
                out_stk.push( in_stk.top() );
                in_stk.pop();
            }
        }
        return out_stk.top();
    }
    
    bool empty() {
        return in_stk.empty() && out_stk.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

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

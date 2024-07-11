/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
    public String reverseParentheses(String str) {
        Stack<Character> stk = new Stack<>();
        for(char c : str.toCharArray()) {
            if(c==')') {
                Queue<Character> q = new LinkedList<>();
                while(!stk.isEmpty() && stk.peek()!='(') {
                    q.add(stk.pop());
                }
                if(!stk.isEmpty()) stk.pop();
                while(!q.isEmpty()) stk.push(q.remove());
            } else {
                stk.push(c);
            }
        }
        StringBuilder sb = new StringBuilder();
        while(!stk.isEmpty()) sb.append(stk.pop());
        return sb.reverse().toString();
    }
}

/*
By Rushabh Gala
rushabhvg
GitHub:
https://github.com/rushabhvg
StackOverflow:
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

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
    public String makeGood(String s) {
        Stack<Character> stk = new Stack<>();
        for(char c:s.toCharArray()) {
            if(!stk.isEmpty() && Math.abs(c-stk.peek())==32) {
                stk.pop();
            } else {
                stk.push(c);
            }
        }

        StringBuilder resStr = new StringBuilder();
        while(!stk.isEmpty()) {
            resStr.insert(0, stk.pop());
        }

        return resStr.toString();
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

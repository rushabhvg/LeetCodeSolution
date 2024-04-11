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
    public String removeKdigits(String num, int k) {
        Stack<Character> stk = new Stack<>();
        for(char d:num.toCharArray()) {
            while(!stk.isEmpty() && k>0 && stk.peek()>d) {
                stk.pop();
                k--;
            }
            stk.push(d);
        }

        while(k>0 && !stk.isEmpty()) {
            stk.pop();
            k--;
        }

        StringBuilder sb = new StringBuilder();
        while(!stk.isEmpty()) {
            sb.append(stk.pop());
        }
        sb.reverse();
        while(sb.length()>0 && sb.charAt(0)=='0') {
            sb.deleteCharAt(0);
        }
        return sb.length()>0 ? sb.toString() : "0";
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

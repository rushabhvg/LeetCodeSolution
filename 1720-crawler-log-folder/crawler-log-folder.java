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
    public int minOperations(String[] logs) {
        Stack<String> stk = new Stack<>();
        stk.push("M");
        for(int i=0; i<logs.length; i++) {
            String str = logs[i];
            // System.out.print("\n" + str + " : ");
            if(str.equals("./") ) {
                // System.out.print("SKIP");
                continue;
            }
            if(!str.equals("../") ) {
                // System.out.print("PUSH");
                stk.push(str);
                continue;
            }
            String s1 = stk.peek();
            if(s1!="M") {
                // System.out.print("POP");
                stk.pop();
                continue;
            }
            // System.out.print("SKIP2");
        }
        if(stk.peek()=="M") return 0;
        int ans = 0;
        while(stk.peek()!="M") {
            stk.pop();
            ans++;
        }
        return ans;
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

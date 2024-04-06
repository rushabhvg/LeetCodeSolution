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
    public String minRemoveToMakeValid(String s) {
        int n = s.length();
        boolean[] visited = new boolean[n];
        Stack<Integer> stk = new Stack<>();
        for(int i=0; i<n; i++) {
            if(Character.isLowerCase(s.charAt(i))) continue;
            if(s.charAt(i)=='(') stk.push(i);
            else {
                if(!stk.isEmpty()) stk.pop();
                else visited[i] = true;
            }
        }
        while(!stk.isEmpty()) {
            visited[stk.pop()] = true;
        }
        StringBuilder ans = new StringBuilder();
        for(int i=0; i<n; i++) {
            if(!visited[i]) ans.append(s.charAt(i));
        }

        return ans.toString();
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

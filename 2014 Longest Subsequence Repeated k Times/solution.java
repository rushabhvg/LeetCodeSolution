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
    boolean isK (String s, String t, int k) {
        int c=0, i=0;
        for(char ch:t.toCharArray()) {
            if(ch==s.charAt(i)) {
                if(++i == s.length()) {
                    i =0;
                    if(++c == k) return true;
                }
            }
        }
        return false;
    }
    public String longestSubsequenceRepeatedK(String s, int k) {
        String r = "";
        Queue<String> q = new LinkedList<>();
        for(q.add(""); !q.isEmpty(); ) {
            String c = q.poll();
            for(char ch='a'; ch<='z'; ch++) {
                String n = c + ch;
                if(isK(n, s, k)) {
                    r = n;
                    q.add(n);
                }
            }
        }
        return r;
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

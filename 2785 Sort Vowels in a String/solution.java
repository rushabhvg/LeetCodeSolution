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
    public String sortVowels(String s) {
        List<Character> vows = new ArrayList<>();
        for(char c : s.toCharArray()) {
            if("AEIOUaeiou".indexOf(c) != -1) {
                vows.add(c);
            }
        }
        Collections.sort(vows);
        StringBuilder ans = new StringBuilder();
        int vIdx = 0;
        for(char c : s.toCharArray()) {
            if("AEIOUaeiou".indexOf(c) != -1) {
                ans.append(vows.get(vIdx++));
            } else {
                ans.append(c);
            }
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

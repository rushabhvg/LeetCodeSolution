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
    public List<String> commonChars(String[] words) {
        List<String> lst = new ArrayList<>();
        int[] dict = new int[26];
        for(int j=0; j<words[0].length(); j++) {
            dict[words[0].charAt(j)-'a']++;
        }
        for(int i=1; i<words.length; i++) {
            int[] curr = new int[26];
            for(int j=0; j<words[i].length(); j++) {
                curr[words[i].charAt(j)-'a']++;
            }
            for(int j=0; j<26; j++) {
                if(curr[j]<dict[j]) dict[j] = curr[j];
            }
        }
        for(int i=0; i<26; i++) {
            for(int j=0; j<dict[i]; j++) {
                lst.add(Character.toString((char)('a'+i)));
            }
        }
        return lst;
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

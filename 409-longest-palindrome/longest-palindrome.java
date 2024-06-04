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
    public int longestPalindrome(String s) {
        int oddCnt = 0;
        HashMap<Character, Integer> freqMp = new HashMap<>();
        for(char ch:s.toCharArray()) {
            freqMp.put(ch, freqMp.getOrDefault(ch, 0)+1);
            if(freqMp.get(ch)%2==0) oddCnt--;
            else oddCnt++;
        }
        if(oddCnt>1) {
            return s.length()-oddCnt+1;
        }
        return s.length();
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

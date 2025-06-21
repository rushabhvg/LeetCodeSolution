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
    public int minimumDeletions(String word, int k) {
        int[] fq = new int[26];
        for(char c: word.toCharArray()) {
            fq[c-'a']++;
        }
        int res = Integer.MAX_VALUE;
        for(int i = 0; i < 26; i++) {
            if(fq[i] == 0) continue;
            int curr = fq[i];
            int del = 0;
            
            for(int j = 0; j < 26; j++) {
                if(fq[j] == 0) continue;
                
                if(fq[j] < curr) del += fq[j];
                if(fq[j] > curr + k) del += fq[j] - (curr + k);
            }

            res = Math.min (res, del);
        }
        return res;
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

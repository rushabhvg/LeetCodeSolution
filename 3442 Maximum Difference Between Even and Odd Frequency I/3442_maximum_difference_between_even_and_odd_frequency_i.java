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
    public int maxDifference(String s) {
        int diff = 0;
        int[] fq = new int[26];
        for(int i = 0; i<s.length(); i++) {
            char c = s.charAt(i);
            fq[c-'a']++;
        }
        int ehf = 0, ohf = 0, elf = 101, olf = 101;
        for(int i=0; i<26; i++) {
            if(fq[i]==0) continue;
            if (fq[i] % 2 == 1) {
                if (fq[i] > ohf) ohf = fq[i];
                if (fq[i] < olf) olf = fq[i];
            }
            if (fq[i] % 2 == 0) {
                if (fq[i] > ehf) ehf = fq[i];
                if (fq[i] < elf) elf = fq[i];
            }
        }
        return ohf - elf;
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

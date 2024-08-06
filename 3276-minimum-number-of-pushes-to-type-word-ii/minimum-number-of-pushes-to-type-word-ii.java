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
    public int minimumPushes(String word) {
        int[] fq = new int[26];
        for(int i=0; i<word.length(); i++) {
            char ch = word.charAt(i);
            fq[ch-'a']++;
        }
        Integer[] sortedFq = new Integer[26];
        for(int i=0; i<26; i++) {
            sortedFq[i] = fq[i];
        }
        Arrays.sort(sortedFq, Collections.reverseOrder());
        int ans = 0;
        for(int i=0; i<26; i++) {
            if(sortedFq[i]==0) break;
            ans += (i/8+1) * sortedFq[i];
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

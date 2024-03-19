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
    public int leastInterval(char[] tasks, int n) {
        if(n==0) {
            return tasks.length;
        }
        
        int[] freq = new int[26];

        for(char task:tasks) {
            freq[task-'A']++;
        }
        
        int mx = 0;
        int cnt = 0;
        
        for(int fq : freq) {
            if(fq>mx) {
                mx = fq;
                cnt = 1;
            } else if(fq==mx) {
                cnt++;
            }
        }
        
        return Math.max(tasks.length, (mx-1)*(n+1)+cnt);
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

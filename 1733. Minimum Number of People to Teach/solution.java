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
    public int minimumTeachings(int n, int[][] languages, int[][] friendships) {
        int m = languages.length;
        Set<Integer> userToTeach = new HashSet<>();

        for(int[] friendship : friendships) {
            int u1 = friendship[0] - 1;
            int u2 = friendship[1] - 1;
            boolean needLang = true;

            for(int l1 : languages[u1]) {
                for(int l2 : languages[u2]) {
                    if(l1 == l2) {
                        needLang = false;
                        break;
                    }
                }
                if(!needLang) {
                    break;
                }
            }
            if(needLang) {
                userToTeach.add(u1);
                userToTeach.add(u2);
            }
        }

        int minUsrs = m + 1;
        for(int lang = 1; lang <= n; lang++) {
            int cnt = 0;
            for(int user : userToTeach) {
                boolean knows = false;
                for(int l : languages[user]) {
                    if(l == lang) {
                        knows = true;
                        break;
                    }
                }
                if(!knows) {
                    cnt++;
                }
            }
            minUsrs = Math.min(minUsrs, cnt);
        }
        return minUsrs;
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

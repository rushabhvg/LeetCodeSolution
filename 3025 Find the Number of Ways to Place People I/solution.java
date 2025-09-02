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
    public int numberOfPairs(int[][] points) {
        int ans = 0;
        int n = points.length;
        for(int i = 0; i < n; i++) {
            int[] ptA = points[i];
            for(int j = 0; j < n; j++) {
                if(i == j) {
                    continue;
                }
                int[] ptB = points[j];
                if( !(ptA[0] <= ptB[0] && ptA[1] >= ptB[1]) ) {
                    continue;
                }
                if(n == 2) {
                    ans++;
                    continue;
                }
                boolean illegal = false;
                for(int k = 0; k < n; k++) {
                    if(k == i || k ==j) {
                        continue;
                    }
                    int[] ptTmp = points[k];
                    boolean isX = ( (ptTmp[0] >= ptA[0]) && (ptTmp[0] <= ptB[0]) );
                    boolean isY = ( (ptTmp[1] <= ptA[1]) && (ptTmp[1] >= ptB[1]) );
                    if(isX && isY) {
                        illegal = true;
                        break;
                    }
                }
                if(!illegal) {
                    ans++;
                }
            }
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

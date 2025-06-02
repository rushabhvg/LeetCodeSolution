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
    public int candy(int[] ratings) {
        if(ratings == null || ratings.length==0) return 0;
        int n = ratings.length;
        int tot = 1, prev = 1, cntDwn = 0;
        for(int i=1; i<n; i++) {
            if(ratings[i] >= ratings[i-1]) {
                if(cntDwn > 0) {
                    tot += ( cntDwn * ( cntDwn + 1 ) ) / 2;
                    if( cntDwn >= prev ) {
                        tot += cntDwn - prev + 1;
                    }
                    cntDwn = 0;
                    prev = 1;
                }
                prev = ratings[i] == ratings[i-1] ? 1 : prev+1;
                tot += prev;
            } else {
                cntDwn++;
            }
        }
        if(cntDwn > 0) {
            tot += (cntDwn * (cntDwn + 1) ) / 2;
            if( cntDwn >= prev ) {
                tot += cntDwn - prev + 1;
            }
        }
        return tot;
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

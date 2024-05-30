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
    public int countTriplets(int[] arr) {
        int n = arr.length;
        int cnt = 0;
        int[] prf = new int[n+1];
        prf[0] = arr[0];
        for(int i=0; i<n; i++) {
            prf[i+1] = prf[i] ^ arr[i];
        }

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                for(int k=j; k<n; k++) {
                    if( (prf[j]^prf[i]) == (prf[k+1]^prf[j]) ) {
                        cnt++;
                    }
                }
            }
        }

        return cnt;
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

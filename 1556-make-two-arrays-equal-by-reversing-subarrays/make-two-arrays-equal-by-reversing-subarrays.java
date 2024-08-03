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
    public boolean canBeEqual(int[] target, int[] arr) {
        int n = arr.length;
        int[] frq = new int[1001];
        for(int i=0; i<n; i++) {
            frq[target[i]]--;
            frq[arr[i]]++;
        }
        for(int i=0; i<1001; i++) {
            if(frq[i]!=0) return false;
        }
        return true;
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

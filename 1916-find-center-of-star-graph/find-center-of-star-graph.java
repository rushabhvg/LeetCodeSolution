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
    public int findCenter(int[][] edges) {
        int n = edges.length;
        int tgt = n;
        int[] arr = new int[n+2];
        for(int i=0; i<edges.length; i++) {
            int x = edges[i][0];
            int y = edges[i][1];
            arr[x]++;
            arr[y]++;
        }
        for(int i=1; i<arr.length; i++) {
            if(arr[i]==tgt) return i;
        }
        return -1;
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

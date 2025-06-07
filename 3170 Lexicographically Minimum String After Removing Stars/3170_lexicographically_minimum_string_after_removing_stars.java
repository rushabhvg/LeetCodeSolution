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
    public String clearStars(String s) {
        int n = s.length();
        PriorityQueue<int[]> mnHeap = new PriorityQueue<>((a, b) -> {
            if(a[0] != b[0]) return a[0]-b[0];
            return a[1]-b[1];
        });
        boolean[] del = new boolean[n];
        for(int i=0; i<n; i++) {
            char c = s.charAt(i);
            if(c=='*') {
                int[] top = mnHeap.poll();
                del[-top[1]] = true;
            } else {
                mnHeap.offer(new int[]{c, -i});
            }
        }
        StringBuilder res = new StringBuilder();
        for(int i=0; i<n; i++) {
            if(del[i] || s.charAt(i)=='*') continue;
            res.append(s.charAt(i));
        }
        return res.toString();
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

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
    public int nthUglyNumber(int n) {
        int a=0, b=0, c=0;
        List<Integer> arr = new ArrayList<Integer>();
        arr.add(1);
        while(arr.size()<n) {
            int nxt_val = Math.min(arr.get(a)*2, Math.min(arr.get(b)*3, arr.get(c)*5));
            arr.add(nxt_val);
            if(arr.get(a)*2==nxt_val) a++;
            if(arr.get(b)*3==nxt_val) b++;
            if(arr.get(c)*5==nxt_val) c++;
        }
        return arr.get(arr.size()-1);
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

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
        char[] arr = s.toCharArray();
        PriorityQueue<Integer> pq = new PriorityQueue<>( (i,j)-> {
            if(arr[i]==arr[j]) return j-i;
            return arr[i]-arr[j];
        } );

        for(int i=0; i<arr.length; i++) {
            if(arr[i]=='*') {
                int tp = pq.remove();
                arr[tp] = '-';
            } else {
                pq.add(i);
            }
        }

        String res = "";
        for(char ch:arr) {
            if(ch!='*' && ch!='-') {
                res += ch;
            }
        }

        return res;
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

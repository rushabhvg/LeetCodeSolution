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
    public int subarrayBitwiseORs(int[] arr) {
        Set<Integer> resultOrs = new HashSet<>();
        Set<Integer> currOrs = new HashSet<>();
        for(int x : arr) {
            Set<Integer> nextOrs = new HashSet<>();
            nextOrs.add(x);
            for(int y : currOrs) {
                nextOrs.add(x | y);
            }
            resultOrs.addAll(nextOrs);
            currOrs = nextOrs;
        }
        return resultOrs.size();
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

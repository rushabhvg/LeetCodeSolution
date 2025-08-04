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
    public int totalFruit(int[] fruits) {
        int n = fruits.length;
        int st = 0, end = 0;
        int currMx = -1;
        Map<Integer, Integer> mp = new HashMap<>();
        while(end < n) {
            mp.put(fruits[end], mp.getOrDefault(fruits[end], 0) + 1);
            while(mp.size()>=3) {
                mp.put(fruits[st], mp.get(fruits[st]) - 1 );
                if(mp.get(fruits[st]) == 0) {
                    mp.remove(fruits[st]);
                }
                st++;
            }
            int curr = end - st + 1;
            currMx = Math.max(currMx, curr);
            end++;
        }
        return currMx;
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

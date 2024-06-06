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
    public boolean isNStraightHand(int[] hand, int groupSize) {
        int n = hand.length;
        if(n%groupSize!=0) {
            return false;
        }
        Map<Integer, Integer> mp = new TreeMap<>();
        for(int i=0; i<n; i++) {
            mp.put(hand[i], mp.getOrDefault(hand[i], 0)+1);
        }

        for(int card : mp.keySet()) {
            int cnt = mp.get(card);
            if(cnt>0) {
                for(int i=0; i<groupSize; i++) {
                    if(mp.getOrDefault(card+i, 0)<cnt) {
                        return false;
                    }
                    mp.put(card+i, mp.get(card+i)-cnt);
                }
            }
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

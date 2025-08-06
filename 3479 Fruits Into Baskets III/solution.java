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
    public int numOfUnplacedFruits(int[] fruits, int[] baskets) {
        List<Integer> sect_mx = new ArrayList<>();
        int n = baskets.length;
        int a = (int) Math.sqrt(n);
        int cnt = 0, mx = 0;
        for(int i = 0; i < n; i++) {
            if(cnt == a) {
                sect_mx.add(mx);
                mx = baskets[i];
                cnt = 1;
            } else {
                cnt++;
                mx = Math.max(mx, baskets[i]);
            }
        }
        sect_mx.add(mx);
        int rem = 0;
        for(int i = 0; i < n; i++) {
            int k = 0, set = 1;
            for(int j = 0; j < n; j+= a) {
                if(sect_mx.get(k) < fruits[i]) {
                    k++;
                    continue;
                }

                for(int r = j; r < Math.min(j + a, n); r++) {
                    if(baskets[r] >= fruits[i]) {
                        set = 0;
                        baskets[r] = 0;
                        break;
                    }
                }

                if(set == 0) {
                    sect_mx.set(k, 0);
                    for(int r = j; r < Math.min(j + a, n); r++) {
                        sect_mx.set(k, Math.max(baskets[r], sect_mx.get(k)));
                    }
                    break;
                }
            }
            rem += set;
        }
        return rem;
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

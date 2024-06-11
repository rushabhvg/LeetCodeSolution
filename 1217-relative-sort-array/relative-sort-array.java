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
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        for(int i=0; i<arr1.length; i++) {
            mp.put(arr1[i], mp.getOrDefault(arr1[i], 0)+1);
        }
        int[] ans = new int[arr1.length];
        int cnt = 0;
        for(int j:arr2) {
            int fq = mp.get(j);
            while(fq-->0) {
                ans[cnt++] = j;
                mp.put(j, fq);
            }
            mp.remove(j);
        }
        int[] lft = new int[arr1.length-cnt];
        int idx = 0;
        for(int j:arr1) {
            if(mp.containsKey(j) ) {
                int fq = mp.get(j);
                while(fq-- >0) {
                    lft[idx++] = j;
                    mp.put(j, fq);
                }
                mp.remove(j);
            }
        }
        Arrays.sort(lft);
        for(int j:lft) {
            ans[cnt++] = j;
        }
        return ans;
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

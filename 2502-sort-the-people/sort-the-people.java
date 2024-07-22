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
    public String[] sortPeople(String[] names, int[] heights) {
        Map<Integer, String> mp = new HashMap<>();
        for(int i=0; i<heights.length; i++) {
            mp.put( heights[i], names[i] );
        }
        Arrays.sort(heights);
        String[] ans = new String[names.length];
        int idx = 0;
        for(int i=heights.length-1; i>=0; i--) {
            ans[idx++] = mp.get(heights[i]);
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

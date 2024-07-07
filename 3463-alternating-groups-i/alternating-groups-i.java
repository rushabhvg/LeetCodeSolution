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
    public int numberOfAlternatingGroups(int[] colors) {
        int ans = 0;
        int n = colors.length;
        for(int i=1; i<n-1; i++) {
            if(colors[i-1]!=colors[i] && colors[i]!=colors[i+1]) ans++;
        }
        if(colors[0]!=colors[n-1] && colors[0]!=colors[1]) ans++;
        if(colors[0]!=colors[n-1] && colors[n-1]!=colors[n-2]) ans++;
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

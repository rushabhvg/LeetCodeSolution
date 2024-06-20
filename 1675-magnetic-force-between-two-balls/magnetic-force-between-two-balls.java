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
    public int maxDistance(int[] position, int m) {
        Arrays.sort(position);
        int n = position.length;
        if(m==2) {
            return position[n-1] - position[0];
        }
        // BS
        int low = 1, high = (position[n-1] - position[0])/(m-1);
        int ans = -1;
        while(low<=high) {
            int mid = (low + high)/2;
            int last = position[0], balls=1;
            for(int i=1; i<n; i++) {
                if(position[i]-last>=mid) {
                    last = position[i];
                    balls++;
                }
            }
            if(balls>=m) {
                ans = mid;
                low = mid+1;
            } else {
                high = mid-1;
            }
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

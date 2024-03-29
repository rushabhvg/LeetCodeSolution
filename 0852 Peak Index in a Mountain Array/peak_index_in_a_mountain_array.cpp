/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int b=0, e=arr.size()-1;
        int mid;
        while(b<e) {
            mid = (b + e)/2;
            if(arr[mid]<arr[mid+1]) {
                b = mid + 1;
            } else {
                e = mid;
            }
        }
        return b;
    }
};

/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

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
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> cnt (2002, 0);
        for(int i=0; i<arr.size(); i++) {
            cnt[arr[i]]++;
        }
        for(int i=1; i<2002; i++) {
            if(k>0) {
                if(cnt[i]==0) {
                    k--;
                }
            } else if(k==0) {
                k=i;
                break;
            }
        }
        return k-1;
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

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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        if(m==0) {
            nums1=nums2;
            return;
        }
        int k = m;
        int i = 0;
        int j = 0;
        for( ; i<m && j<n; ) {
            if(nums1[i]<=nums2[j]) {
                i++;
            } else {
                k=m;
                while(k>i) {
                    nums1[k] = nums1[k-1];
                    k--;
                }
                m++;
                nums1[i] = nums2[j];
                j++;
            }
        }
        for( ; j<n; j++) {
            nums1[m] = nums2[j];
            m++;
        }
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

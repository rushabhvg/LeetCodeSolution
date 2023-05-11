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
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> mat(nums1.size()+1, vector<int>(nums2.size()+1, 0));
        for(int i=1; i<=nums1.size(); i++) {
            for(int j=1; j<=nums2.size(); j++) {
                cout<<endl<<nums1[i-1]<<" "<<nums2[j-1];
                if(nums1[i-1]==nums2[j-1]) {
                    mat[i][j] = mat[i-1][j-1] + 1;
                } else {
                    mat[i][j] = max(mat[i-1][j], mat[i][j-1]);
                }
            }
        }
        return mat[nums1.size()][nums2.size()];
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

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

static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0, j=0;
        int n1=version1.size();
        int n2=version2.size();

        int nums1 = 0;
        int nums2 = 0;

        while(i<n1 || j<n2) {
            while(i<n1 && version1[i]!='.') {
                nums1 = nums1*10 + (version1[i]-'0');
                i++;
            }
            while(j<n2 && version2[j]!='.') {
                nums2 = nums2*10 + (version2[j]-'0');
                j++;
            }
            if(nums1>nums2) return 1;
            else if(nums1<nums2) return -1;
            nums1 = 0;
            nums2 = 0;
            i++;
            j++;
        }
        return 0;
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

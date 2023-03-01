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
    void merge(vector<int> &nums, int left, int mid, int right, vector<int> &temp) {
        int s1 = left;
        int s2 = mid+1;
        int n1 = mid - left + 1;
        int n2 = right - mid;
        for(int i=0; i<n1; i++) temp[s1+i] = nums[s1+i];
        for(int i=0; i<n2; i++) temp[s2+i] = nums[s2+i];
        int i=0, j=0, k=left;
        while(i<n1 && j<n2) {
            if(temp[s1+i]<=temp[s2+j]) {
                nums[k] = temp[s1+i];
                i+=1;
            } else {
                nums[k] = temp[s2+j];
                j+=1;
            }
            k+=1;
        }
        while(i<n1) {
            nums[k] = temp[s1+i];
            i+=1;
            k+=1;
        }
        while(j<n2) {
            nums[k] = temp[s2+j];
            j+=1;
            k+=1;
        }
    }

    void mergeSort(vector<int> &nums, int left, int right, vector<int> &temp) {
        if (left >= right) {
            return;
        }
        int mid = (left + right) / 2;
        mergeSort(nums, left, mid, temp);
        mergeSort(nums, mid + 1, right, temp);
        merge(nums, left, mid, right, temp);
    }

    vector<int> sortArray(vector<int>& nums) {
        vector<int> temp (nums.size());
        mergeSort(nums, 0, nums.size()-1, temp);
        return nums;
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

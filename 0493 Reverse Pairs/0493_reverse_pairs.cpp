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
private:
    void merge(vector<int> &arr, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid+1;

        while(left<=mid && right<=high) {
            if(arr[left]<=arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left<=mid) {
            temp.push_back(arr[left]);
            left++;
        }
        
        while(right<=high) {
            temp.push_back(arr[right]);
            right++;
        }

        for(int i=low; i<=high; i++) {
            arr[i] = temp[i-low];
        }
    }

    int cntPairs(vector<int> &arr, int low, int mid, int high) {
        int cnt = 0;
        int right=mid+1;
        for(int i=low; i<=mid; i++) {
            while(right<=high && arr[i]>2*(long long)arr[right]) right++;
            cnt += ( right - (mid+1) );
        }
        return cnt;
    }

    int mergeSort(vector<int> &arr, int low, int high) {
        int cnt = 0;
        if(low>=high) return cnt;
        int mid = low + (high-low)/2;
        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid+1, high);
        cnt += cntPairs(arr, low, mid, high);
        merge(arr, low, mid, high);
        return cnt;
    }
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
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

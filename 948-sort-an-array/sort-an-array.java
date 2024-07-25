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
    public int[] sortArray(int[] nums) {
        mergeSort(nums, 0, nums.length-1);
        return nums;
    }
    private void mergeSort(int[] arr, int l, int h) {
        if(l>=h) {
            return ;
        }
        int mid = l + (h-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, h);
        merge(arr, l, mid, h);
    }
    private void merge(int[] arr, int l, int m, int h) {
        int n1 = m-l+1;
        int n2 = h-m;
        int[] left = new int[n1];
        int[] right = new int[n2];
        System.arraycopy(arr, l, left, 0, n1);
        System.arraycopy(arr, m+1, right, 0, n2);

        int p1 = 0, p2 = 0, idx = l;
        while(p1<n1 && p2<n2) {
            if(left[p1]<=right[p2]) {
                arr[idx++] = left[p1++];
            } else {
                arr[idx++] = right[p2++];
            }
        }
        while(p1<n1) {
            arr[idx++] = left[p1++];
        }
        while(p2<n2) {
            arr[idx++] = right[p2++];
        }
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

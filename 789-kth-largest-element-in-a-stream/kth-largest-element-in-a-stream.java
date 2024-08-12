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

class KthLargest {
    int kth;
    PriorityQueue<Integer> mn;
    public KthLargest(int k, int[] nums) {
        kth = k;
        mn = new PriorityQueue<>();
        for(int i=0; i<nums.length; i++) {
            add(nums[i]);
        }
    }
    
    public int add(int val) {
        int n = mn.size();
        if(n<kth || mn.peek()<val) {
            mn.add(val);
            if(mn.size()>kth) {
                mn.remove();
            }
        }
        return mn.peek();
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */

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

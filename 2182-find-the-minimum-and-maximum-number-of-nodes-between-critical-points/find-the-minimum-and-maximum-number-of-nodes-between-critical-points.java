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

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int[] nodesBetweenCriticalPoints(ListNode head) {
        int[] ans = new int[2];
        ans[0] = -1;
        ans[1] = -1;
        ArrayList<Integer> arr = new ArrayList<>();
        int i = 1;
        while(head.next!=null && head.next.next!=null) {
            i++;
            int n1 = head.val;
            int n2 = head.next.val;
            int n3 = head.next.next.val;
            head = head.next;
            if(n2>n1 && n2>n3) {
                arr.add(i);
                continue;
            }
            if(n2<n1 && n2<n3) {
                arr.add(i);
                continue;
            }
        }
        if(arr.size()<=1) return ans;
        ans[0] = Integer.MAX_VALUE;
        for(int j=0; j<arr.size()-1; j++) {
            // System.out.print(" " + arr.get(j) );
            int diff = arr.get(j+1)-arr.get(j);
            ans[0] = Math.min(ans[0], diff);
        }
        int diff = arr.get(arr.size()-1)-arr.get(0);
        ans[1] = Math.max(ans[1], diff);
        // System.out.print(" " + arr.get(arr.size()-1) + "\n");
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

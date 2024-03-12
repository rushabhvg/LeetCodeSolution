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
    public ListNode removeZeroSumSublists(ListNode head) {
        ListNode dummy = new ListNode(0);
        dummy.next = head;

        int prefSum = 0;
        Map<Integer, ListNode> prefSumNode = new HashMap<>();
        
        for(ListNode curr = dummy; curr != null; curr = curr.next) {
            prefSum += curr.val;
            
            if(prefSumNode.containsKey(prefSum)) {
                ListNode prev = prefSumNode.get(prefSum);
                ListNode toRem = prev.next;
                
                int p = prefSum + (toRem != null ? toRem.val : 0);
                
                while(p != prefSum) {
                    prefSumNode.remove(p);
                    toRem = toRem.next;
                    p += (toRem !=null ? toRem.val : 0);
                }
                
                prev.next = curr.next;
            } else {
                prefSumNode.put(prefSum, curr);
            }
        }
        return dummy.next;
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

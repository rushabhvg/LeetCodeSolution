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
    public ListNode rvrs(ListNode head) {
        ListNode prev = null;
        ListNode curr = head;
        while(curr!=null) {
            ListNode nxt = curr.next;
            curr.next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    public boolean isPalindrome(ListNode head) {
        ListNode slow = head;
        ListNode fast = head.next;
        while(fast!=null && fast.next!=null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode rev = rvrs(slow.next);
        slow.next = null;
        while(rev != null) {
            if(head.val != rev.val) {
                return false;
            }
            head = head.next;
            rev = rev.next;
        }
        return true;
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

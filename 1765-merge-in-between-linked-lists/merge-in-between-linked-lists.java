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
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode temp = list1;
        int idx = 0;
        while(idx<a-1) {
            temp = temp.next;
            idx++;
        }
        ListNode front = temp;
        while(idx<b+1) {
            temp = temp.next;
            idx++;
        }
        ListNode rear = temp;
        ListNode list2Tail = list2;
        ListNode list2Head = list2;
        while(list2Tail.next!=null) {
            list2Tail = list2Tail.next;
        }
        front.next = list2Head;
        list2Tail.next = rear;
        return list1;
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

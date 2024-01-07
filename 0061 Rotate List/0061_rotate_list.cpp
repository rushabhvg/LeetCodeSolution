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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0) return head;
        if(!head || !head->next) return head;
        int len = 1;
        ListNode *newHead, *curr, *prev, *c2;
        curr = head;
        while(curr->next!=nullptr) curr=curr->next, len++;
        k = k%len;
        if(k==0) return head;
        int cnt = len - k;
        cnt--;
        curr = head;
        while(cnt--) {
            curr = curr->next;
        }
        prev = head;
        head = curr->next;
        c2 = curr;
        while(curr->next!=nullptr) {
            curr = curr->next;
        }
        c2->next = NULL;
        curr->next = prev;
        return head;
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

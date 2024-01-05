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
private:
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if( ( l1->next==NULL && l1->val==0 ) || l1==NULL) return l2;
        if( ( l2->next==NULL && l2->val==0 ) || l2==NULL) return l1;
        int carry = 0;
        ListNode *head = nullptr;
        ListNode *curr;
        while(l1 && l2) {
            int sum = l1->val + l2->val + carry;
            l1 = l1->next;
            l2 = l2->next;
            carry = sum/10;
            if(carry) sum = sum%10;
            ListNode *newNode = new ListNode(sum);
            if(head==NULL) {
                head = newNode;
                curr = head;
            } else {
                curr->next = newNode;
                curr = curr->next;
            }
        }
        while(l1) {
            int sum = l1->val + carry;
            l1 = l1->next;
            carry = sum/10;
            if(carry) sum = sum%10;
            ListNode *newNode = new ListNode(sum);
            if(head==NULL) {
                head = newNode;
                curr = head;
            } else {
                curr->next = newNode;
                curr = curr->next;
            }
        }
        while(l2) {
            int sum = l2->val + carry;
            l2 = l2->next;
            carry = sum/10;
            if(carry) sum = sum%10;
            ListNode *newNode = new ListNode(sum);
            if(head==NULL) {
                head = newNode;
                curr = head;
            } else {
                curr->next = newNode;
                curr = curr->next;
            }
        }
        if(carry) {
            curr->next = new ListNode(carry);
        }
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

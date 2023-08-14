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
    ListNode* doubleIt(ListNode* head) {
        ListNode* revH = head;
        ListNode* current = head;
        ListNode *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        revH = prev;
        
        current = revH;
        prev = NULL;
        next = NULL;
        int carry = 0;
        while (current != NULL) {
            int v = current->val;
            v *= 2;
            v += carry;
            // cout<<endl<<current->val<<" "<<v/10<<" "<<v%10;
            carry = v/10;
            current->val = v%10;
            next = current->next;
            // cout<<" "<<next->val;
            current->next = prev;
            // cout<<" "<<current->next->val;
            prev = current;
            // cout<<" "<<prev->val;
            current = next;
            // cout<<" "<<current->val;
        }
        if(carry!=0) {
            ListNode* newLL = new ListNode(carry, prev);
            prev = newLL;
        }
        
        return prev;
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

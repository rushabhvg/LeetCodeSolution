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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2;
        while(l1!=nullptr) {
            s1.push(l1->val);
            l1 = l1->next;
        }
        while(l2!=nullptr) {
            s2.push(l2->val);
            l2 = l2->next;
        }
        int ts = 0, c=0;
        ListNode* ans = new ListNode();
        while(!s1.empty() || !s2.empty()) {
            if(!s1.empty()) {
                ts += s1.top();
                s1.pop();
            }
            if(!s2.empty()) {
                ts += s2.top();
                s2.pop();
            }
            ans->val = ts%10;
            c=ts/10;
            ListNode* nn = new ListNode(c);
            nn->next = ans;
            ans = nn;
            ts = c;
        }
        return c==0? ans->next:ans;
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

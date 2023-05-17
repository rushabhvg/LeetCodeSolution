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
    int pairSum(ListNode* head) {
    // SOl 2: Using slow and fast ptr, brain goes brrrrr:
        ListNode *slow = head, *fast = head;
        while(fast!=nullptr && fast->next!=nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode *nextNode = head, *prev = NULL;
        while(slow!=nullptr) {
            nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        int maxS = 0;
        ListNode* start = head;
        while(prev) {
            maxS = max(maxS, start->val + prev->val);
            start = start->next;
            prev = prev->next;
        }
        return maxS;

    // SOL 1: Using vector, lazy ;)
        // vector<int> arr;
        // while(head!=nullptr) {
        //     arr.push_back(head->val);
        //     head = head->next;
        // }
        // int n = arr.size();
        // int max = arr[0]+arr[n-1];
        // for(int i=0; i<n/2; i++) {
        //     if(max<arr[i]+arr[n-1-i]) {
        //         max = arr[i] + arr[n-1-i];
        //     }
        // }
        // return max;
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

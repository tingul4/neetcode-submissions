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
        int carry = 0;
        ListNode* ans = new ListNode(0);
        ListNode* ansHead = ans;
        while (l1 || l2 || carry) {
            int result = carry;
            if (l1) {
                result += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                result += l2->val;
                l2 = l2->next;
            }
            carry = result / 10;
            ListNode* cur = new ListNode(result % 10);
            ans->next = cur;
            ans = ans->next;            
        }
    
        return ansHead->next;
    }
};

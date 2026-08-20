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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* forward = head;
        ListNode* ans = head;
        while (forward) {
            forward = forward->next;
            cnt++;
        }
        int steps = cnt - n;
        ListNode* prev = nullptr;
        for (int i = 0; i < steps; i++) {
            prev = head;
            head = head->next;
        }
        // delete
        if (prev) {
            prev->next = head->next;
        } else {
            return head->next;
        }
        return ans;
    }
};

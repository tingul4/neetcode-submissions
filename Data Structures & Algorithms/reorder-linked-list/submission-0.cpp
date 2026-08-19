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
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        // revert slow
        ListNode* prev = nullptr;
        ListNode* cur = slow->next;
        slow->next = nullptr;
        while (cur) {
            ListNode* tmp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = tmp;
        }
        while (prev) {
            ListNode* headNext = head->next;
            ListNode* prevNext = prev->next;
            head->next = prev;
            prev->next = headNext;
            head = headNext;
            prev = prevNext;
        }
    }
};

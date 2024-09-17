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
    ListNode* removeElements(ListNode* head, int val) {
       while (head != nullptr && head->val == val) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
    
    // Remove all other nodes with the value `val`
    ListNode* current = head;
    ListNode* prev = nullptr;
    
    while (current != nullptr) {
        if (current->val == val) {
            prev->next = current->next;  // Skip the current node
            delete current;               // Free memory
            current = prev->next;         // Move to the next node
        } else {
            prev = current;
            current = current->next;
        }
    }
    
    return head;
    }
};
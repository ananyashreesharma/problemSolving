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
        // Handle edge case: removing the head node if its value is equal to 'val'
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;  // Store the current head node
            head = head->next;      // Move the head to the next node
            delete temp;            // Delete the old head node
        }

        // If the list becomes empty after removing all matching head nodes
        if (head == nullptr) {
            return head;
        }

        ListNode* temp = head;
        ListNode* prev = nullptr;

        // Traverse the list starting from the current head
        while (temp != nullptr) {
            if (temp->val == val) {
                prev->next = temp->next;  // Skip the current node
                delete temp;              // Delete the node with value == val
                temp = prev->next;        // Move to the next node
            } else {
                prev = temp;              // Move prev to current node
                temp = temp->next;        // Move temp to the next node
            }
        }

        return head;  // Return the new head of the list
    }
};
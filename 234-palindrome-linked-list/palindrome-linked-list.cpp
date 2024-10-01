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
    ListNode* rev(ListNode* h ){
        ListNode *temp=h;
        ListNode *prev=nullptr;
        while(temp!=nullptr){
            ListNode* temp1=temp->next;
            temp->next=prev;
            prev=temp;
            temp=temp1;

        }
        return prev;
    }
    ListNode* m(ListNode* mid){
        ListNode *slow=mid;
        ListNode *fast=mid;
        while(fast!=nullptr and fast->next!=nullptr){
                slow=slow->next;
                fast=fast->next->next;
        }
        
        return rev(slow);
    }

    bool isPalindrome(ListNode* head) {
        ListNode *first=head;
        ListNode *second=m(head);
        while( second!=nullptr){
            if(first->val!=second->val)
                return false;

        second=second->next;
        first=first->next;
               


        }
        return true;
    }
};
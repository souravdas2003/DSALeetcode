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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL)
            return NULL;
        ListNode*fast=head;
        ListNode*slow=head;
        ListNode*prevslow=NULL;
        
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            prevslow=slow;
            slow = slow -> next;
            
        }
    
            prevslow -> next = prevslow->next->next;
        
            
        return head;
    }
};
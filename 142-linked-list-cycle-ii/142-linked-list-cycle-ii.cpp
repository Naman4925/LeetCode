/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* curr=NULL;
        ListNode* temp=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                curr=slow;
                break;
            }    
        }
        if(curr==NULL)
            return NULL;
        while(curr!=temp){
            temp=temp->next;
            curr=curr->next;
        }
        return curr;
    }
};
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
        int count=0;
        ListNode* temp=head;
        ListNode* curr=head;
        while(temp){
            temp=temp->next;
            count++;
        }
        int diff=1;
        while(curr->next && diff<count-n){
            curr=curr->next;
            diff++;
        }
        if(count-n==0){
            head=head->next;
        }
        else{
            curr->next=curr->next->next;
        }
        return head;
    }
};
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
/*class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return head;
        int count=0;
        ListNode* curr=head;
        while(curr){
            curr=curr->next;
            count++;
        }
        int k=count-n;
        ListNode* temp=head;
        //ListNode* prev=NULL;
        for(int i=0;i<k-1;i++){
            temp=temp->next;
            //prev=prev->next;
        }
        temp->next=temp->next->next;
        //delete (temp);
        return head;
    }
};*/
class Solution {
public:

    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = 0;
        ListNode* cur = head;
        ListNode* t = head;
        while(t){
            t=t->next;
            sz++;
        }
        int i=1;
        while(cur->next && i < sz-n)
        {
            cur = cur->next;
            i++;
        }
        if(sz-n == 0)
            head = head->next;
        else
            cur->next = cur->next->next;
            
        return head;
    }
};
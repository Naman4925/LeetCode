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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* curr=NULL;
        ListNode* link=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
       // cout<<count;
        if(count==0)
            return 0;
        temp=head;
        k=k%count;
        while(k>0){
            link=temp;
            while(temp->next){
                curr=temp;
                temp=temp->next;
            }
            temp->next=link;
            curr->next=NULL;
            k--;
        }
        return temp;
    }
};
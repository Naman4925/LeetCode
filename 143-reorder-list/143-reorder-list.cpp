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
        ListNode *curr=head;
        vector<ListNode *> v;
        while(curr){
            v.push_back(curr);
            curr=curr->next;
        }
        int start=0;
        int end=v.size()-1;
        while(start<end){
            v[start]->next=v[end];
            v[end]->next=v[start+1];
            start++;
            end--;
        }
        v[start]->next=NULL;
    }
};
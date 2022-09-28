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
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode* temp=head;
        ListNode* curr=head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        while(curr){
            if(st.top()==curr->val){
                st.pop();
                curr=curr->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
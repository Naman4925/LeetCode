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
        ListNode* slowptr= head, *fastptr=head, *ptr2 = nullptr, *ptr1 = head;
        while(fastptr && fastptr->next)
        {
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
            if(slowptr == fastptr)
            {
                ptr2 =  slowptr;
                break;
            }
        }
        if(ptr2== nullptr)
            return nullptr;
        while(ptr1!=ptr2)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            
        }
        return ptr1;
    }
};
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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head==NULL or head->next==NULL)
        {
            return head=NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        while(fast!=NULL and fast->next!=NULL  )
        {
            prev=slow;
            slow=slow->next;
            
            fast=fast->next->next;
            
        }
       if(slow->next!=NULL)
       {
        slow->val=slow->next->val;
        slow->next=slow->next->next;
       }
        else
        {
            prev->next=prev->next->next;
        }
        return head;
    }
};
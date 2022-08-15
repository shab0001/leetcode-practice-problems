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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        ListNode* slow=head;
         ListNode* fast=head;
        ListNode* prev=head;
        while(k--)
        {
             prev=fast;
            fast=fast->next;
           
        }
        while(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
       swap(slow->val,prev->val);
     return head;
    }
};
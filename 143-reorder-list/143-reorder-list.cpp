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
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        ListNode* next_head=reverse(head->next);
        ListNode* c=head;
        c->next->next=c;
        c->next=NULL;
        return next_head;
    }
    void reorderList(ListNode* head) 
    {
        ListNode* slow=head;
         ListNode* fast=head;
         ListNode* prev=head;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
         ListNode*x=head;
        ListNode*x1=head->next;
       ListNode* y= reverse(slow);
         ListNode* y1=y->next;
        while(x1!=NULL and y1!=NULL)
        {
            x->next=y;
            y->next=x1;
            x=x1;
            y=y1;
            x1=x1->next;
            y1=y1->next;

        }
   
         
       
    }
};
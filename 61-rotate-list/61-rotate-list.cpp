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
     ListNode* rotate(ListNode* &head)
     {
         
         ListNode* r=head;
         ListNode* prev=NULL;
         while(r->next!=NULL)
         {
             prev=r;
             r=r->next;
         }
         r->next=head;
         head=r;
         prev->next=NULL;
         return head;
     }
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        ListNode* Head=head;
         int len=0;
         while(Head!=NULL)
         {
             len++;
             Head=Head->next;
         }
         if(k%len==0)
         {
             return head;
         }
        else
        {
            k=k%len;
        }
       while(k--)
       {
           rotate(head);
       }
        return head;
        
       
    }
};
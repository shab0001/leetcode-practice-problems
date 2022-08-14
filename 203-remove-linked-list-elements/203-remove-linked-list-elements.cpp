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
    ListNode* removeElements(ListNode* head, int val) 
    {
        while(head!=NULL and head->val==val)
        {
            head=head->next;
        }
        ListNode *cur=head;
        ListNode *prev;
        if(head==NULL)
        {
            return head;
        }
        while(cur->next!=NULL)
        {
            if(cur->val==val)
            {
                cur->val=cur->next->val;
                cur->next=cur->next->next;
            }
            else
            {
            prev=cur;
            cur=cur->next;
            }
            
        }
        if(cur->val==val)
        {
            delete cur;
            prev->next=NULL;
        }
        return head;
    }
};
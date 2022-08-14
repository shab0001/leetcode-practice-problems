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
    ListNode* reverseList(ListNode* head) 
    {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        ListNode *next_head=reverseList(head->next);
        ListNode *c=head;
        c->next->next=c;
        c->next=NULL;
        return next_head;
    }
};
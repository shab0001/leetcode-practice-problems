/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(NULL) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* oddhead=NULL,*evenhead=NULL,*c=NULL,*n=NULL,*p=NULL;
        int jump=0;
        oddhead=head;
        evenhead = head->next;
        c=head;
        while(c and c->next)
        {
        n=c->next;
            c->next=n->next;
            jump++;
            p=c;
            c=n;
        }
        if(jump%2==0)
        {
            c->next=evenhead;
        }
        else
        {
            p->next=evenhead;
        }
        return oddhead;
    }
};
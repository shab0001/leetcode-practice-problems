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
        ListNode* oddhead=NULL,*evenhead=NULL,*first=NULL,*second=NULL,*third=NULL;
        int jump=0;
        oddhead=head;
        evenhead = head->next;
        first=head;
        while(first and first->next)
        {
        second=first->next;
            first->next=second->next;
            jump++;
            third=first;
            first=second;
        }
        if(jump%2==0)
        {
            first->next=evenhead;
        }
        else
        {
            third->next=evenhead;
        }
        return oddhead;
    }
};
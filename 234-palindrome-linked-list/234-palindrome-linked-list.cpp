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
    ListNode *reverselinklist(ListNode *&head)
    {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        ListNode *next_head=reverselinklist(head->next);
        ListNode *c=head;
        c->next->next=c;
        c->next=NULL;
        return next_head;
    }
    bool isPalindrome(ListNode* head)
    {
        if(head==NULL or head->next==NULL)
        {
            return true;
        }
        ListNode* slow=head;
        ListNode* f=head;
        while(f->next!=NULL and f->next->next!=NULL)
        {
            slow=slow->next;
            f=f->next->next;
        }
        
        slow->next=reverselinklist(slow->next);
        slow=slow->next;
        while(slow!=NULL)
        {
            if(head->val!=slow->val)
            {
                return false;
            }
            head=head->next;
             slow=slow->next;
        }
        return true;
    }
};
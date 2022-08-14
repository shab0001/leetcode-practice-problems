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
    void insertathead(ListNode *&head,int value)
    {
        ListNode *n=new ListNode(value);
        n->next=head;
        head=n;
    }
    bool isPalindrome(ListNode* head) 
    {
        ListNode *temp=head;
        ListNode *head1=NULL;
        while(temp!=NULL)
        {
            insertathead(head1,temp->val);
            temp=temp->next;
        }
        while(head!=NULL and head1!=NULL)
        {
            if(head->val!=head1->val)
            {
                return false;
            }
            head=head->next;
            head1=head1->next;
        }
        return true;
        
        
    }
};
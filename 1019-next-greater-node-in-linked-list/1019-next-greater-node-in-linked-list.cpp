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
    vector<int> nextLargerNodes(ListNode* head) 
    {
        ListNode* poin1=head;
        ListNode* poin2=head;
        vector<int> result;
        int flag;
        while(poin1!=NULL)
        {
            flag=0;
            int maximum=poin1->val;
             poin2=poin1->next;
            while(poin2!=NULL and flag!=1)
            {
                if(poin2->val>maximum)
                {
                    maximum=poin2->val;
                    flag=1;
                }
                poin2=poin2->next;
            }
            if(maximum==poin1->val){
                maximum=0;
                
            }
            result.push_back(maximum);
             poin1=poin1->next;
            
        }
        return result;
    }
};
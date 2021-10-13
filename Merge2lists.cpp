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
//1->1-
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1==NULL && l2==NULL) return NULL;
        if(l1==NULL && l2!=NULL) return l2;
        if(l2==NULL && l1!=NULL) return l1;

        ListNode *ans;
        ListNode *head;
        int flag=0;
        
        while(l1!=NULL && l2!=NULL)
        {
           if(l2->val<=l1->val)
            {
                //ans=l2;
                // l2=l2->next;
                if(flag==0)
                {
                    ans= new ListNode(l2->val);
                    head=ans;
                    flag=1;
                }
               else{
                   ans->next= new ListNode(l2->val);
                   ans=ans->next;
               }
               l2=l2->next;
            }
            else
            {
               // ans=l1;
                // l1=l1->next;
                    if(flag==0)
                {
                        ans= new ListNode(l1->val);
                    head=ans;
                    flag=1;
                }
                else
                {
                    
                    ans->next= new ListNode(l1->val);
                    ans=ans->next;
                }
                l1=l1->next;
            }
            ans=ans->next;
        }
        // ans->next=NULL;
        if(l1==NULL) ans->next=l2;
        else if(l2==NULL) ans->next=l1;
        return(head);
    }
};

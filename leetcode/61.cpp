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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(!head || !head->next ||k==0)
        {
            return head;
        }
        ListNode *h=head;
        int  len=1;
        while(h->next!=NULL)
        {
             h=h->next;
             len++;
        }
        k=k%len;
        if(k==0)
        {
            return head;
        }
        h->next=head;
        int rem=len-k;
        ListNode *h1=head;
        for(int i=1;i<rem;i++)
        {
             h1=h1->next;
        }
        ListNode *nh=h1->next;
        h1->next=NULL;
        return nh;
    }
};
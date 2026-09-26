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
class Solution{
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head==nullptr || head->next==nullptr)
        {
            return nullptr;
        }
        ListNode* s=head;
        ListNode* f=head;
        ListNode* pv=nullptr;
        while(f!=nullptr && f->next!=nullptr)
        {
            pv=s;
            s=s->next;
            f=f->next->next;
        }
        pv->next=s->next;
        delete s;
        return head;
    }
};
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
    ListNode* insertGreatestCommonDivisors(ListNode* head) 
    {
        if(!head || !head->next)
        {
            return head;
        }
        ListNode* cur=head;
        while(cur!=nullptr && cur->next!=nullptr)
        {
            int gv=std::gcd(cur->val , cur->next->val);
            ListNode* d=new ListNode(gv,cur->next);
            cur->next=d;
            cur=d->next;
        }
        return head;
    }
};
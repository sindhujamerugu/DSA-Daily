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
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* cur=head;
        ListNode* out=nullptr;
        ListNode* t=nullptr;
        int sum=0;
        while(cur)
        {
            if(cur->val==0 && sum>0)
            {
              ListNode *newNode=new ListNode(sum);
              if(out==nullptr)
              {
                 out=newNode;
                 t=newNode;
              }
              else
              {
                t->next=newNode;
                t=newNode;
              }
              sum=0;
            }
            else
            {
                sum+=cur->val;
            }
            cur=cur->next;
        }
        return out;
    }
};
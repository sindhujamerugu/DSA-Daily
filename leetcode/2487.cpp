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
    int mx=INT_MIN;
    ListNode* solve(ListNode* head)
    {
      if(head==NULL)
      {
        return NULL;
      }
      head->next=solve(head->next);
      if(head->val>=mx)
      {
        mx=head->val;
        return head;
      }
      return head->next;
    }
    ListNode* removeNodes(ListNode* head) 
    {
        return solve(head);
    }
};git
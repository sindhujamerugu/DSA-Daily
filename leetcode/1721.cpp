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
    ListNode* swapNodes(ListNode* head, int k) 
    {
      
        vector<int>arr;
        ListNode* cur=head;
        while(cur!=nullptr)
        {
           arr.push_back(cur->val);
           cur=cur->next;
        }
        int i=k-1;
        int j=arr.size()-k;
        swap(arr[i],arr[j]);
        cur=head;
        for(int i=0;i<arr.size();i++)
        {
            cur->val=arr[i];
            cur=cur->next;
        }
        return head;
    }
};
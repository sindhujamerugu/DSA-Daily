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
        vector<int>out;
        while(head)
        {
            out.push_back(head->val);
            head=head->next;
        }
        int n1=out.size();
        vector<int>out1(n1,0);
        stack<pair<int,int>>st;
        for(int i=0;i<n1;i++)
        {
            while(!st.empty() && st.top().first<out[i])
            {
               out1[st.top().second]=out[i];
               st.pop();
            }
            st.push({out[i],i});
        }
        return out1;
        
    }
};
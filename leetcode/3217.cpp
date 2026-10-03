class Solution 
{
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) 
    {
        unordered_set<int>s(nums.begin(),nums.end());
        while(head && s.count(head->val))
        {
            head=head->next;
        }
        ListNode* pre=head;
        while(pre && pre->next)
        {
            if(s.count(pre->next->val))
            {
                pre->next = pre->next->next;
            }
            else
            {
                pre = pre->next;
            }
        }
        return head;
    }
};
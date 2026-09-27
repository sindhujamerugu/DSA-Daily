class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int n=nums.size();
       unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        while(!mp.empty())
        {
            for(auto it=mp.begin();it!=mp.end();)
            {
                ans.push_back(it->first);
                it->second--;
                if(it->second==0)
                {
                    it=mp.erase(it);
                    ++it;
                }
            }
        }     
        return ans;
    }
};©leetcode
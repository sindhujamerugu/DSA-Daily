class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        int g=st.size();
       
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            unordered_set<int>s;
         for(int j=i;j<n;j++)
         {
            s.insert(nums[j]);
            if(s.size()==st.size())
            {
                cnt++;
            }
         }
        }
        return cnt;
        
    }
};
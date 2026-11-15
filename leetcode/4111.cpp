class Solution {
public:
    int countConsistent(vector<int>& nums) 
    {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int mn=nums[i];
            int sum=nums[i];
            for(int j=i;j<n;j++)
            {
                sum&=nums[j];
                mn=min(mn,nums[j]);
                if(sum==mn)
                {
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};
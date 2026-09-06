class Solution {
public:
    int countGoodRotations(vector<int>& nums) 
    {
        const int mod=1e9+7;
        int n=nums.size();
        long long ans=0,sum=0,sum1=0;
        int h=n/2;
            for(int i=0;i<h;i++)
            {
                sum+=nums[i];
            }
            for(int i=h;i<n;i++)
            {
                sum1+=nums[i];
            }
            if(sum>sum1)
            {
                ans++;
            }
        for(long long i=0;i<n-1;i++)
        {
            sum=sum-nums[i]+nums[(h+i)%n];
            sum1=sum1-nums[(h+i)%n]+nums[i];
            if(sum>sum1)
            {
               ans++;
            }
        }
        return ans;  
    }
};
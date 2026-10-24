class Solution 
{
public:
    int peakValleyDifference(vector<int>& nums) 
    {
        int n=nums.size();
        long long sum=0,sum1=0;
        for(int i=0;i<n;i++)
        {
                if( ( 0<i && i<n-1 && nums[i]>nums[i-1]) && (nums[i]>nums[i+1]))
                {
                    sum+=nums[i];
                }
        }
        for(int i=0;i<n;i++)
        {
                if( ( 0<i && i<n-1 && nums[i]<nums[i-1]) && (nums[i]<nums[i+1]))
                {
                    sum1+=nums[i];
                }
        }
        return sum-sum1;
    }
};
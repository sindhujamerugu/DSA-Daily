class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) 
    {
        long long n=nums.size();
        long long sum=0;
        sort(nums.begin(), nums.end(), [](int a, int b) 
        {
             return abs(a)<abs(b);
        });
        for(int i=0;i<n;i++)
        {
            sum+=1LL*nums[i]*nums[i];
        }
        for(int i=0;i<n/2;i++)
        { 
              sum-=2LL*nums[i]*nums[i];
        }
        return sum;
    }
};
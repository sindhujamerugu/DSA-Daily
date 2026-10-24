class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) 
    {
        int n=nums.size();
        int s=-1;
        long long out =0;
        for(int i=0;i<n;i++)
        {
          if(nums[i]<minK || nums[i]>maxK)
          {
              s=i;
          }
          out+=i-s;
        }
        return out;
    }
};
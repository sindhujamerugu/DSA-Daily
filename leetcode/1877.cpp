class Solution {
public:
    int minPairSum(vector<int>& nums) 
    {
        long long n=nums.size();
       sort(nums.begin(),nums.end());
       long long l=0,r=n-1;
       long long sum=0,maxi=INT_MIN;
       while(l<r)
       {
          sum=nums[l]+nums[r];
          maxi=max(sum,maxi);
          l++;
          r--;
       }
       return maxi;
    }
};
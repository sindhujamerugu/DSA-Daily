class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) 
    {
        int n=nums.size();
        int out=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            while(j<n && nums[j]<nums[j-1])
            {
                j++;
            }
            out=max(out,j-i);
            j=i+1;
            while(j<n && nums[j]>nums[j-1])
            {
                j++;
            }
            out=max(out,j-i);
        }   
        return out;
    }
};
class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) 
    {
        int  n=nums.size();
        int mn=0;
        int mx=0;
        for(int i=indexDifference;i<n;i++)
        {
            int j=i-indexDifference;
            if(nums[j]<nums[mn])
            {
                mn=j;
            }
            if(nums[j]>nums[mx])
            {
                mx=j;
            }
            if(abs(nums[i]-nums[mn])>=valueDifference)
            {
                return {mn,i};
            }
            if(abs(nums[i]-nums[mx])>=valueDifference)
            {
                return {mx,i};
            }
        }
    return {-1,-1};
        }
};
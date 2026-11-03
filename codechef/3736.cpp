class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int n=nums.size();
        int mx=*max_element(nums.begin(),nums.end());
        int sum=0;
        for(int x:nums)
        {
            sum+=abs(x-mx);
        }
        return sum;
    }
};
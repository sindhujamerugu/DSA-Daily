class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int n=nums.size();
        int mx=INT_MAX;
        for(int u:nums)
        {
            mx=min(mx,u);
        }int out=0;
        for(int u:nums)
        {
          out+=u-mx;
        }
        return out;
    }
};
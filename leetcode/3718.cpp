class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int ans=0;
        for(int i=k;;i+=k)
        {
            if(find(nums.begin(),nums.end(),i)==nums.end())
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};
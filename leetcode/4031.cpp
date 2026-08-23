class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>out;
        long long cur=lower;
        for(int x:nums)
            {
                if(x>upper)
                {
                    break;
                }
                if(x<cur)
                {
                    continue;
                }
                if(x>cur)
                {
                    out.push_back({(int)cur,x-1});
                }
                cur=(long long)x+1;
            }
        if(cur<=upper)
        {
            out.push_back({(int)cur,upper});
        }
        return out;
        
    }
};
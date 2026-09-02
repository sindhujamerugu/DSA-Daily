class Solution {
public:
    int minimumDeletions(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1)
        {
            return 1;
        }
            int res=0;
            int i=0;
            int mx=max_element(nums.begin(),nums.end())-nums.begin();
            int mn=min_element(nums.begin(),nums.end())-nums.begin();
            int l=min(mx,mn);
            int r=max(mx,mn);
            return min({r+1,n-l,(l+1)+n-r});
    }
};
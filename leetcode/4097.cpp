class Solution {
public:
    int minMergedInteger(vector<int>& nums) 
    {
        int n=nums.size();
        string s,s1;
        long long mini=INT_MAX;
        for(int i=0;i<n;i+=2)
        {
             s=to_string(nums[i]);
             s1=to_string(nums[i+1]);
             string a=s+s1;
             long long st=stoll(a);
            mini=min(mini,st);
        }
        return mini; 
    }
};
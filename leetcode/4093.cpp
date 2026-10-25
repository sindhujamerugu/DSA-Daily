class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        long long sum=0;
        string s="";
        vector<int>v;
        for(int x:nums)
        {
           sum+=x;
           string s=to_string(x);
           sort(s.rbegin(),s.rend());
           long long n1=stoll(s);
            v.push_back(n1-x);
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++)
        {
            sum+=v[i];
        }
        return sum;
    }
};
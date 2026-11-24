class Solution {
public:
    int maxLength(vector<int>& nums) 
    {
     int n=nums.size();
     long long out=0;
    for(long long i=0;i<n;i++) 
    {
        long long pro=1;
        int g=nums[i],l=nums[i];
        for(long long j=i;j<n;j++)
        {
            pro*=1LL*nums[j];
            if(pro>25200)
            {
                break;
            }
            g=__gcd(g,nums[j]);
            l=(l*nums[j])/__gcd(l,nums[j]);
            if(pro==1LL*(g*l))
            {
              out=max(out,j-i+1);
            }
        }
    }
    return out; 
    }
};
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) 
    {
        int n=nums1.size();
        vector<long long>freq(100001,0);
        int md=0;
        long long k=(long long)k1+k2;
        for(int i=0;i<n;i++)
        {
            int x=abs(nums1[i]-nums2[i]);
            freq[x]++;
            md=max(md,x);
        }
        for(int i=md;i>0 && k>0 ;i--)
        {
           int mini=min(k,freq[i]);
           freq[i]-=mini;
           freq[i-1]+=mini;
           k-=mini; 
        }
        long long ans=0;
        for(int i=0;i<100001;i++)
        {
            ans+=freq[i]*i*i;
        }
        return ans;
    }
};
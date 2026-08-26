class Solution {
public:
    int countPairs(vector<int>& deliciousness) 
    {
        int n=deliciousness.size();
        unordered_map<int,int>freq;
        long long ans=0;
        long long mod=1e9+7;
        for(int x:deliciousness)
        {
            for(int i=0;i<=21;i++)
            {
                int t=(1<<i);
                int c=t-x;
                if(freq.count(c))
                {
                    ans+=freq[c];
                }
            }
            freq[x]++;
        }
        return ans%mod;
    }
};
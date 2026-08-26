class Solution {
public:
    int kthFactor(int n, int k) 
    {
        vector<int>arr;
        long long cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                cnt++;
            }
            if(cnt==k)
            {
                return i;
            }
            
        }
        return -1;
    }
};git 
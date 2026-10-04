class Solution {
public:
    int minRotations(string s) 
    {
        int n=s.size();
       int s0=abs(s[0]-'0');
        int sum=min(s0,10-s0);
        for(int i=1;i<n;i++)
        {
            int ans=abs((s[i]-'0')-(s[i-1]-'0'));
            sum+=min(ans,10-ans);
        }
        return sum;
    }
};
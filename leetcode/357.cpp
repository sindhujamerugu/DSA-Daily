class Solution {
public:
    int countNumbersWithUniqueDigits(int n) 
    {
        if(n==0)
        {
            return 1;
        }
        int out=10;
        int w=9;
        for(int i=2;i<=n;i++)
        {
            w*=(11-i);
            out+=w;
        }
        return out;
        
    }
};
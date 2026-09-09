class Solution {
public:
    long long countCommas(long long n) 
    {
        long long count=0;
        long long i=1000;
        while(i<=n)
            {
                count+=(n-i+1);
                if(i>n/1000)
                {
                    break;
                }
                i*=1000;
            }
        return count;   
    }
};
class Solution {
public:
    long long countValidSubstrings(string s) 
    {
        long long n=s.size();
        long long c=-1;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
          if(i>=2 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c')
          {
              c=i-2;
          }
          sum+=i-c;
       }
        return sum;
    }
};
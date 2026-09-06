class Solution {
public:
    int countRotations(string s, int k) 
    {
        int n=s.size();
        int ans=0;
        for(int j=0;j<n;j++)
        {
            int f=0;
            string r=s.substr(j)+s.substr(0,j);
           for(int i=0;i<n-1;i++)
          {
            if(r[i]==r[i+1])
            {
               f++;
            }
          }
         if(f==k)
         {
            ans++;
         }
        }
        return ans;
    }
};
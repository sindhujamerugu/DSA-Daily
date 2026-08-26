class Solution {
public:
    int minimumSwap(string s1, string s2) 
    {
        int n=s1.size();
        int m=s2.size();
        int f=0,s=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='x' && s2[i]=='y')
            {
                f++;
            }
            else if(s1[i]=='y' && s2[i]=='x')
            {
                s++;
            }
        }
        if(f%2!=s%2)
        {
           return -1; 
        }
        else
        {
            return f/2+s/2+(f%2)*2;
        }
    }
};
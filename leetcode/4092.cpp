class Solution {
public:
    int calculateScore(int a, int b) 
    {

        string s="",s1="";
        while(a>0)
        {
            int d=a%2;
            s+=d+'0';
            a=a/2;
        }
        while(b>0)
        {
            int d=b%2;
            s1+=d+'0';
            b=b/2;
        }
        int cnt=0,cnt1=0;
        for(char c:s)
            {
                if(c=='1')
                {
                    cnt++;
                }
            }
        for(char c:s1)
            {
                if(c=='1')
                {
                    cnt1++;
                }
            }
        if(cnt>=cnt1)
        return cnt*cnt1;
        else
        {
            return cnt1/cnt;
        }
        
    }
};
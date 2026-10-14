class Solution {
public:
    string maxSumOfSquares(int num, int sum) 
    {
       int s=sum;
       string ans="";
       while(s>0)
       {
         int res=min(9,s);
         ans+=res+'0';
         s-=res;
       } 
       if(s==0)
       {
        if(num>ans.size())
        {
         int c=num-ans.size();
         ans.append(c,'0');
        }
       }
       if(sum>9*num)
       {
         return "";
       }
       return ans;
    }
};
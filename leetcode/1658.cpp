class Solution {
public:
    int minOperations(vector<int>& nums, int x) 
    {
            int n=nums.size();
            int j=0,s=0,sum=0,maxi=-1;
           for(int i=0;i<n;i++)
           {
               s+=nums[i];
           }
           int tar=s-x;
           for(int k=0;k<n;k++)
           {
                sum+=nums[k];
                while(j<=k && sum>tar)
                {
                    sum-=nums[j];
                    j++;
                }
                if(sum==tar)
                {
                    maxi=max(maxi,k-j+1);
                }
           }
           if(maxi==-1)
           {
            return -1;
           }
           else
           {
             return n-maxi;
           }
    }
};
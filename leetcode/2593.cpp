class Solution {
public:
    long long findScore(vector<int>& nums) 
    {
        long long n=nums.size();
        vector<bool>f(n,false);
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            arr[i]=i;
        }
        sort(arr.begin(),arr.end(),[&](int a,int b)
        {
           if(nums[a]==nums[b])  
           {
              return a<b;
           }   
           return nums[a]<nums[b];
        });
        long long cnt=0;
        for(int mn:arr)
        {
                   f[mn]=true;
                   cnt+=nums[mn];
                   if(mn>0)
                   {
                     f[mn-1]=true;
                   }
                   if(mn+1<n)
                   {
                     f[mn+1]=true;
                   }
        }
        return cnt;
    }
};
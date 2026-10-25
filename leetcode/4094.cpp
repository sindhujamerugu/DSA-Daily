class Solution {
public:
    int countStaircase(vector<int>& nums) 
    {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            vector<int>t;
            unordered_map<int,int>freq;
            for(int j=i;j<n;j++)
            {
                freq[nums[j]]++;
                if(freq[nums[j]]==1)
                {
                  t.push_back(nums[j]);
                }
            
               int f=0;
              for(int i=0;i<t.size();i++)
              {
               if(freq[t[i]]!=i+1)
               {
                 f=1;
                break;
               }
              }
              if(f==0)
              {
                cnt++;
              }
            }
            
        }
              return cnt;
    }
};
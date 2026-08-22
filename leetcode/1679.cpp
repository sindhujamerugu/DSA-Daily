class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        long long cnt=0;
        while(i<j)
        {
           int sum=nums[i]+nums[j];
            if(sum==k)
            {
                cnt++;
                i++;
                j--;
            }
            else if(sum<k)
            {
                i++;
            }
            else
            {
              j--;
            }
        }
        return cnt;
    }
};
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>arr=nums;
        sort(arr.begin(),arr.end());
        int l=0,r=n-1;
            while(l<n && nums[l]==arr[l])
            {
                l++;
            }
            while(r>=0 && nums[r]==arr[r])
            {
                r--;
            }
            if(l>r)
            {
                return 0;
            }
        return r-l+1;
    }
};
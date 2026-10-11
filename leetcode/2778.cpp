class Solution {
public:
    int sumOfSquares(vector<int>& nums) 
    {
        int n=nums.size();
        int sum=0;
        vector<int>arr;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                arr.push_back(nums[i-1]*nums[i-1]);
            }
        }
        for(int y:arr)
        {
            sum+=y;
        }
        return sum;
    }
};
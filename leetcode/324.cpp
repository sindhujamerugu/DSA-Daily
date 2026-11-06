class Solution {
public:
    void wiggleSort(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>a,b;
        sort(nums.begin(),nums.end());
        for(int i=0;i<(n+1)/2;i++)
        {
            a.push_back(nums[i]);
        }
        for(int i=(n+1)/2;i<n;i++)
        {
            b.push_back(nums[i]);
        }
        vector<int>t;
        int i=a.size()-1,j=b.size()-1;
        while(i>=0 && j>=0)
        {
            t.push_back(a[i--]);
            t.push_back(b[j--]);
        }
        if(i>=0)
        {
            t.push_back(a[i]);
        }
        nums=t;
    }
};
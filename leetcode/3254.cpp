class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>result;
        int c=1;
        for (int i=0;i<n;i++){
            if (i>0&&nums[i]==nums[i-1]+1){
                c++;
            } else{
                c=1;
            }
            if (i>=k-1) {
                if (c>=k) {
                    result.push_back(nums[i]);
                } else {
                    result.push_back(-1);
                }
            }
        }
        return result;
    }
};
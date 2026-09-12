class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,pair<int,vector<int>>> a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]].first++;
            a[nums[i]].second.push_back(i);
        }
        int c=0;
        vector<bool> vis(100,true);
        for(int i=0;i<nums.size();i++){
            if(a[nums[i]].first==3){
                if(a[nums[i]].second[1]-a[nums[i]].second[0] == a[nums[i]].second[2]-a[nums[i]].second[1] && vis[nums[i]]){
                    vis[nums[i]]=false;
                    c++;
                }
            }
        }
        return c;
    }
};